/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm/types.h>
#include <bcm_int/ltsw/mbcm/l3.h>
#include <bcm_int/ltsw/xgs/l3.h>
#include "sub_dispatch.h"

#include <shr/shr_debug.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_L3

/******************************************************************************
 * Private functions
 */

/*!
 * \brief L3 driver function variable for bcm56990_a0 device.
 */
static mbcm_ltsw_l3_drv_t bcm56990_a0_ltsw_l3_drv = {
    .l3_init = xgs_ltsw_l3_init,
    .l3_deinit = xgs_ltsw_l3_deinit,
    .l3_mtu_set = xgs_ltsw_l3_mtu_set,
    .l3_mtu_get = xgs_ltsw_l3_mtu_get,
    .l3_mtu_delete = xgs_ltsw_l3_mtu_delete,
    .l3_mtu_recover = NULL,
    .l3_info_get = xgs_ltsw_l3_info_get,
    .l3_enable_set = xgs_ltsw_l3_enable_set,
    .l3_control_set = xgs_ltsw_l3_control_set,
    .l3_control_get = xgs_ltsw_l3_control_get,
    .l3_port_control_set = xgs_ltsw_l3_port_control_set,
    .l3_port_control_get = xgs_ltsw_l3_port_control_get,
    .l3_ipv6_reserved_multicast_addr_multi_set = xgs_ltsw_l3_ipv6_reserved_multicast_addr_multi_set,
    .l3_ipv6_reserved_multicast_addr_multi_get = xgs_ltsw_l3_ipv6_reserved_multicast_addr_multi_get,
    .l3_ip4_options_profile_create = xgs_ltsw_l3_ip4_options_profile_create,
    .l3_ip4_options_profile_destroy = xgs_ltsw_l3_ip4_options_profile_destroy,
    .l3_ip4_options_action_set = xgs_ltsw_l3_ip4_options_action_set,
    .l3_ip4_options_action_get = xgs_ltsw_l3_ip4_options_action_get,
    .l3_ip6_prefix_map_add = xgs_ltsw_l3_ip6_prefix_map_add,
    .l3_ip6_prefix_map_get = xgs_ltsw_l3_ip6_prefix_map_get,
    .l3_ip6_prefix_map_del = xgs_ltsw_l3_ip6_prefix_map_delete,
    .l3_ip6_prefix_map_del_all = xgs_ltsw_l3_ip6_prefix_map_delete_all,
    .l3_ip4_options_profile_id2idx = xgs_ltsw_l3_ip4_options_profile_id2idx,
    .l3_ip4_options_profile_idx2id = xgs_ltsw_l3_ip4_options_profile_idx2id,
    .l3_switch_control_tbl_get = BCM56990_A0_SUB_DRV,
};

/******************************************************************************
 * Public functions
 */

int
bcm56990_a0_ltsw_l3_drv_attach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_EXIT
        (mbcm_ltsw_l3_drv_set(unit, &bcm56990_a0_ltsw_l3_drv));

    SHR_IF_ERR_VERBOSE_EXIT
        (bcm56990_a0_sub_drv_attach(unit, &bcm56990_a0_ltsw_l3_drv,
                                    BCM56990_A0_SUB_DRV_BCM56990_Ax,
                                    BCM56990_A0_SUB_MOD_L3));

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Attach functions for other members.
 */
#define BCM56990_A0_DRV_ATTACH_ENTRY(_dn,_vn,_pf,_pd,_r0) \
int _vn##_ltsw_l3_drv_attach(int unit) \
{ \
    SHR_FUNC_ENTER(unit); \
    SHR_IF_ERR_VERBOSE_EXIT \
        (mbcm_ltsw_l3_drv_set(unit, &bcm56990_a0_ltsw_l3_drv)); \
    SHR_IF_ERR_VERBOSE_EXIT \
        (bcm56990_a0_sub_drv_attach(unit, &bcm56990_a0_ltsw_l3_drv, \
                                    BCM56990_A0_SUB_DRV_BCM5699x, \
                                    BCM56990_A0_SUB_MOD_L3)); \
exit: \
    SHR_FUNC_EXIT(); \
}
#include "sub_devlist.h"