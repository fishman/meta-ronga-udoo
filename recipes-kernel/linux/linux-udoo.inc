# Adapted from linux-imx.inc, copyright (C) 2012, 2013 O.S. Systems Software LTDA
# Released under the MIT license (see COPYING.MIT for the terms)

DESCRIPTION = "Linux kernel UNICO 2013 for UDOO"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"
DEPENDS += "lzop-native bc-native"
PROVIDES = "virtual/kernel linux-mainline"

inherit kernel

require recipes-kernel/linux/linux-imx.inc
require recipes-kernel/linux/linux-dtb.inc

# Put a local version until we have a true SRCREV to point to
LOCALVERSION ?= "+yocto"
SCMVERSION ?= "y"

# SRC_URI for wandboard kernel
SRC_URI = "git://github.com/patrykk/linux-udoo.git;branch=3.18 \
           file://defconfig \
"
