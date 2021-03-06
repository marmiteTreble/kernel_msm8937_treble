/*
 * u_uac2.h
 *
 * Utility definitions for UAC2 function
 *
 * Copyright (c) 2014 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * Author: Andrzej Pietrasiewicz <andrzej.p@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef U_UAC2_H
#define U_UAC2_H

#include <linux/usb/composite.h>

#define UAC2_DEF_PCHMASK 0x1
#define UAC2_DEF_PSRATE 48000
#define UAC2_DEF_PSSIZE 2
#define UAC2_DEF_PSBITRES 16
#define UAC2_DEF_CCHMASK 0x3
#define UAC2_DEF_CSRATE 44100
#define UAC2_DEF_CSSIZE 2
#define UAC2_DEF_CSBITRES 16

struct f_uac2_opts {
	struct usb_function_instance	func_inst;
	int				p_chmask;
	int				p_srate;
	int				p_ssize;
	int				p_sres;
	int				c_chmask;
	int				c_srate;
	int				c_ssize;
	int				c_sres;
	bool				bound;

	struct mutex			lock;
	int				refcnt;
};

#endif
