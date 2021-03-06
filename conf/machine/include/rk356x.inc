# Copyright (c) 2020, Rockchip Electronics Co., Ltd
# Released under the MIT license (see COPYING.MIT for the terms)

SOC_FAMILY ?= "rk3568"
require conf/machine/include/rockchip-arm64-common.inc

MALI_GPU := "bifrost-g52"
MALI_VERSION := "r25p0"

PREFERRED_VERSION_linux-rockchip := "4.19%"
LINUXLIBCVERSION := "4.19-custom%"
