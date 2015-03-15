# Adapted from linux-imx_${PV}.bb, copyright (C) 2013 O.S. Systems Software LTDA
# Released under the MIT license (see COPYING.MIT for the terms)

include linux-udoo.inc

# Kernel_Unico is a branch from 3.0.35 so we apply the 3.0.35 patches
SRCREV = "d568c4184d292790b6d2bd818606830bfc71af63"
LOCALVERSION = "-3.18-udoo"

# Patches need for Yocto and not applied by Freescale when doing 4.1.0 branch
SRC_URI += "file://spdif-output.patch"

COMPATIBLE_MACHINE = "(mx6)"
