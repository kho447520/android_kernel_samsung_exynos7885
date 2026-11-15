/* linux/drivers/video/exynos/decon_8890/decon_reg_8890.c
 *
 * Copyright 2013-2015 Samsung Electronics
 *      Jiun Yu <jiun.yu@samsung.com>
 *
 * Jiun Yu <jiun.yu@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include "decon.h"
/* current setting for 3HF4 & 3HA6 does not support VESA_SCR_V4 */
//#define VESA_SCR_V4
/******************* CAL raw functions implementation *************************/

u32 decon_reg_get_cam_status(void __iomem *cam_status)
{
	if (cam_status)
		return readl(cam_status);
	else
		return 0xF;
}
