#SUMMARY = "A small boot image for SBCS learners"
LICENSE = "MIT"
#inherit core-image #Core files for basic console boot

#IMAGE_ROOTFS_SIZE ?= "8192"
#Add our needed applications
IMAGE_INSTALL += "usbutils"           


#require recipes-core/image/core-imageinimal.bb
#IMAGE_INSTALL:append = "usbutils"
#IMAGE_FEATURES = "ssh-server-dropbear debug-tweaks splash"                
require recipes-core/images/core-image-minimal.bb
#IMAGE_INSTALL += "mystatic-dev mystatic-staticdev"
#IMAGE_INSTALL += "autohello"

#IMAGE_INSTALL += "myappend"
#IMAGE_INSTALL += "hello"

#IMAGE_INSTALL += "git-calci"
#IMAGE_INSTALL += "hello_image"
#IMAGE_INSTALL = "packagegroup-core-boot"
#IMAGE_INSTALL += "usbutils"   
IMAGE_FEATURES = "ssh-server-dropbear debug-tweaks"


