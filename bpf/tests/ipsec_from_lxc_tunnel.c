// SPDX-License-Identifier: (GPL-2.0-only OR BSD-2-Clause)
/* Copyright Authors of Cilium */

#define TUNNEL_MODE
#define HAVE_ENCAP
#define ENABLE_ROUTING

#define EXPECTED_DEST_MAC mac_two

#include "ipsec_from_lxc_generic.h"
