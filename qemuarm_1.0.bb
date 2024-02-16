DESCRIPTION = "Simple helloworld application"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SRC_URI = "file://userprg.c \
           file://text.txt "

S = "${WORKDIR}"

#DEPENDS = "mystatic"

#SRCREV = "${AUTOREV}"

#FILSPATH =${@base_set_filespath(["${FILE_DIRNAME}/${BP}","${FILE_DIRNAME}/${BPN}","${FILE_DIRNAME}/files,${FILE_DIRNAME/Phy"],d)}"

do_compile() {

    ${CC} userprg.c  ${LDFLAGS} -o userprg
}

