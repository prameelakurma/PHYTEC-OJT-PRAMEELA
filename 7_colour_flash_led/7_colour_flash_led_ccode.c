#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Replace with the actual GPIO pin for the ball switch and LED
#define BALL_SWITCH_PIN "/sys/class/gpio/PC12/value"
#define LED_PIN "/sys/class/gpio/PD19/value" // Replace with the actual GPIO pD
void error(const char *msg) {
perror(msg);
exit(1);
}

int readDigitalValue(const char *pin) {
FILE *fp = fopen(pin, "r");
if (fp == NULL) {

error("Error opening digital pin");
}

char value;
fscanf(fp, " %c", &value); // Leading space to skip any leading whitespace
fclose(fp);

// '1' indicates the presence of a signal (switch on or LED ON), '0' indica)
return (value == '1');
}

void setDigitalValue(const char *pin, int value) {
FILE *fp = fopen(pin, "w");
if (fp == NULL) {
error("Error opening digital pin");
}
fprintf(fp, "%d", value);
fclose(fp);
}

int main() {
// Assuming GPIO pins are not exported, you might need to export them first
FILE *exportFileBallSwitch = fopen("/sys/class/gpio/export", "w");
if (exportFileBallSwitch == NULL) {
error("Error exporting ball switch GPIO pin");
}
fprintf(exportFileBallSwitch, "76");
fclose(exportFileBallSwitch);

FILE *exportFileLED = fopen("/sys/class/gpio/export", "w");
if (exportFileLED == NULL) {
error("Error exporting LED GPIO pin");
}

// Replace YOUR_LED_GPIO_PIN_HERE with the actual GPIO pin for the LED
fprintf(exportFileLED, "PD19");

fclose(exportFileLED);

// Set the GPIO pin direction to in (for reading the ball switch)
FILE *directionFileBallSwitch = fopen("/sys/class/gpio/PC12/direction", "w");

if (directionFileBallSwitch == NULL) {
error("Error setting direction for ball switch GPIO pin");
}

fprintf(directionFileBallSwitch, "in");
fclose(directionFileBallSwitch);

// Set the GPIO pin direction to out (for controlling the LED)
FILE *directionFileLED = fopen("/sys/class/gpio/PD19/direction", "w");
if (directionFileLED == NULL) {
error("Error setting direction for LED GPIO pin");
}

fprintf(directionFileLED, "out");
fclose(directionFileLED);

while (1) {
int ballSwitchState = readDigitalValue(BALL_SWITCH_PIN);
if (ballSwitchState) {
printf("Switch Off - LED OFF\n");
setDigitalValue(LED_PIN, 0); // Turn off the LED
} else {
printf("Switch On - LED ON\n");
setDigitalValue(LED_PIN, 1); // Turn on the LED
}
// Adjust the sleep duration based on your sensor's update rate
sleep(1); // Sleep for 1 second between readings
}

// Unexport GPIO pins before exiting
FILE *unexportFileBallSwitch = fopen("/sys/class/gpio/unexport", "w");
if (unexportFileBallSwitch == NULL) {
error("Error unexporting ball switch GPIO pin");
}

fprintf(unexportFileBallSwitch, "76");
fclose(unexportFileBallSwitch);
FILE *unexportFileLED = fopen("/sys/class/gpio/unexport", "w");
if (unexportFileLED == NULL) {
error("Error unexporting LED GPIO pin");
}
// Replace YOUR_LED_GPIO_PIN_HERE with the actual GPIO pin for the LED
fprintf(unexportFileLED, "PD19");
fclose(unexportFileLED);
return 0;
}
