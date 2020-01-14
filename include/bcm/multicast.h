/*
 * 
 * This software is governed by the Broadcom Switch APIs license.
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenNSA/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */

#ifndef __BCM_MULTICAST_H__
#define __BCM_MULTICAST_H__

#include <bcm/types.h>
#include <shared/multicast.h>

#define BCM_MULTICAST_INVALID   0          

/* Mulicast flags. */
#define BCM_MULTICAST_WITH_ID               0x00000001 
#define BCM_MULTICAST_TYPE_L2               0x00010000 
#define BCM_MULTICAST_TYPE_L3               0x00020000 
#define BCM_MULTICAST_TYPE_VPLS             0x00040000 
#define BCM_MULTICAST_TYPE_SUBPORT          0x00080000 
#define BCM_MULTICAST_TYPE_MIM              0x00100000 
#define BCM_MULTICAST_TYPE_WLAN             0x00200000 
#define BCM_MULTICAST_TYPE_VLAN             0x00400000 
#define BCM_MULTICAST_TYPE_TRILL            0x00800000 
#define BCM_MULTICAST_TYPE_NIV              0x01000000 
#define BCM_MULTICAST_TYPE_EGRESS_OBJECT    0x02000000 
#define BCM_MULTICAST_TYPE_L2GRE            0x04000000 
#define BCM_MULTICAST_TYPE_VXLAN            0x08000000 
#define BCM_MULTICAST_TYPE_EXTENDER         0x10000000 
#define BCM_MULTICAST_TYPE_MAC              0x20000000 
#define BCM_MULTICAST_TYPE_PORTS_GROUP      0x40000000 
#define BCM_MULTICAST_TYPE_FLOW             0x80000000 
#define BCM_MULTICAST_TYPE_MASK             0xffff0000 
#define BCM_MULTICAST_DISABLE_SRC_KNOCKOUT  0x00000002 
#define BCM_MULTICAST_INGRESS_GROUP         0x00000004 
#define BCM_MULTICAST_EGRESS_GROUP          0x00000008 
#define BCM_MULTICAST_INGRESS_MMC_BUFFERS   0x00000010 

/* Multicast Type (for bcm_multicast_type). */
typedef enum bcm_multicast_type_e {
    bcmMulticastTypeL2 = 1,             /* Multicast type L2 */
    bcmMulticastTypeL3 = 2,             /* Multicast type L3 */
    bcmMulticastTypeVpls = 3,           /* Multicast type VPLS */
    bcmMulticastTypeSubPort = 4,        /* Multicast type Sub Port */
    bcmMulticastTypeMim = 5,            /* Multicast type MIM */
    bcmMulticastTypeWlan = 6,           /* Multicast type Wlan */
    bcmMulticastTypeVlan = 7,           /* Multicast type Vlan */
    bcmMulticastTypeTrill = 8,          /* Multicast type TRILL */
    bcmMulticastTypeNiv = 9,            /* Multicast type NIV */
    bcmMulticastTypeEgressObject = 10,  /* Multicast type Egress Object */
    bcmMulticastTypeL2Gre = 11,         /* Multicast type L2 GRE */
    bcmMulticastTypeVxlan = 12,         /* Multicast type Vxlan */
    bcmMulticastTypePortsGroup = 13,    /* Multicast type Ports Group */
    bcmMulticastTypeExtender = 14,      /* Multicast type Extender */
    bcmMulticastTypeMac = 15,           /* Multicast type MAC */
    bcmMulticastTypeFlow = 16,          /* Multicast type Flow */
    bcmMulticastTypeCount = 17          /* Multicast type Count */
} bcm_multicast_type_t;

#define BCM_MULTICASTTYPE_STRINGS \
{ \
    "L2", \
    "L3", \
    "Vpls", \
    "SubPort", \
    "Mim", \
    "Wlan", \
    "Vlan", \
    "Trill", \
    "Niv", \
    "EgressObject", \
    "L2Gre", \
    "Vxlan", \
    "PortsGroup", \
    "Extender", \
    "Mac", \
    "Flow", \
    "Count"  \
}

#define BCM_MULTICAST_IS_SET(group)  _SHR_MULTICAST_IS_SET(group) 

#define BCM_MULTICAST_IS_L2(group)      _SHR_MULTICAST_IS_L2(group) 
#define BCM_MULTICAST_IS_L3(group)      _SHR_MULTICAST_IS_L3(group) 
#define BCM_MULTICAST_IS_VPLS(group)    _SHR_MULTICAST_IS_VPLS(group) 
#define BCM_MULTICAST_IS_SUBPORT(group)  _SHR_MULTICAST_IS_SUBPORT(group) 
#define BCM_MULTICAST_IS_MIM(group)     _SHR_MULTICAST_IS_MIM(group) 
#define BCM_MULTICAST_IS_WLAN(group)    _SHR_MULTICAST_IS_WLAN(group) 
#define BCM_MULTICAST_IS_VLAN(group)    _SHR_MULTICAST_IS_VLAN(group) 
#define BCM_MULTICAST_IS_TRILL(group)   _SHR_MULTICAST_IS_TRILL(group) 
#define BCM_MULTICAST_IS_NIV(group)     _SHR_MULTICAST_IS_NIV(group) 
#define BCM_MULTICAST_IS_EGRESS_OBJECT(group)  _SHR_MULTICAST_IS_EGRESS_OBJECT(group) 
#define BCM_MULTICAST_IS_L2GRE(group)   _SHR_MULTICAST_IS_L2GRE(group) 
#define BCM_MULTICAST_IS_VXLAN(group)   _SHR_MULTICAST_IS_VXLAN(group) 
#define BCM_MULTICAST_IS_FLOW(group)    _SHR_MULTICAST_IS_FLOW(group) 
#define BCM_MULTICAST_IS_PORTS_GROUP(group)  _SHR_MULTICAST_IS_PORTS_GROUP(group) 
#define BCM_MULTICAST_IS_EXTENDER(group)  _SHR_MULTICAST_IS_EXTENDER(group) 

#define BCM_MULTICAST_L2_SET(group, mc_index)  _SHR_MULTICAST_L2_SET(group, mc_index) 
#define BCM_MULTICAST_L3_SET(group, mc_index)  _SHR_MULTICAST_L3_SET(group, mc_index) 
#define BCM_MULTICAST_VPLS_SET(group, mc_index)  _SHR_MULTICAST_VPLS_SET(group, mc_index) 
#define BCM_MULTICAST_SUBPORT_SET(group, mc_index)  _SHR_MULTICAST_SUBPORT_SET(group, mc_index) 
#define BCM_MULTICAST_MIM_SET(group, mc_index)  _SHR_MULTICAST_MIM_SET(group, mc_index) 
#define BCM_MULTICAST_WLAN_SET(group, mc_index)  _SHR_MULTICAST_WLAN_SET(group, mc_index) 
#define BCM_MULTICAST_VLAN_SET(group, mc_index)  _SHR_MULTICAST_VLAN_SET(group, mc_index) 
#define BCM_MULTICAST_TRILL_SET(group, mc_index)  _SHR_MULTICAST_TRILL_SET(group, mc_index) 
#define BCM_MULTICAST_NIV_SET(group, mc_index)  _SHR_MULTICAST_NIV_SET(group, mc_index) 
#define BCM_MULTICAST_EGRESS_OBJECT_SET(group, mc_index)  _SHR_MULTICAST_EGRESS_OBJECT_SET(group, mc_index) 
#define BCM_MULTICAST_L2GRE_SET(group, mc_index)  _SHR_MULTICAST_L2GRE_SET(group, mc_index) 
#define BCM_MULTICAST_VXLAN_SET(group, mc_index)  _SHR_MULTICAST_VXLAN_SET(group, mc_index) 
#define BCM_MULTICAST_FLOW_SET(group, mc_index)  _SHR_MULTICAST_FLOW_SET(group, mc_index) 
#define BCM_MULTICAST_PORTS_GROUP_SET(group, mc_index)  _SHR_MULTICAST_PORTS_GROUP_SET(group, mc_index) 
#define BCM_MULTICAST_EXTENDER_SET(group, mc_index)  _SHR_MULTICAST_EXTENDER_SET(group, mc_index) 

#define BCM_MULTICAST_L2_GET(group)     _SHR_MULTICAST_L2_GET(group) 
#define BCM_MULTICAST_L3_GET(group)     _SHR_MULTICAST_L3_GET(group) 
#define BCM_MULTICAST_VPLS_GET(group)   _SHR_MULTICAST_VPLS_GET(group) 
#define BCM_MULTICAST_SUBPORT_GET(group)  _SHR_MULTICAST_SUBPORT_GET(group) 
#define BCM_MULTICAST_MIM_GET(group)    _SHR_MULTICAST_MIM_GET(group) 
#define BCM_MULTICAST_WLAN_GET(group)   _SHR_MULTICAST_WLAN_GET(group) 
#define BCM_MULTICAST_VLAN_GET(group)   _SHR_MULTICAST_VLAN_GET(group) 
#define BCM_MULTICAST_TRILL_GET(group)  _SHR_MULTICAST_TRILL_GET(group) 
#define BCM_MULTICAST_NIV_GET(group)    _SHR_MULTICAST_NIV_GET(group) 
#define BCM_MULTICAST_EGRESS_OBJECT_GET(group)  _SHR_MULTICAST_EGRESS_OBJECT_GET(group) 
#define BCM_MULTICAST_L2GRE_GET(group)  _SHR_MULTICAST_L2GRE_GET(group) 
#define BCM_MULTICAST_VXLAN_GET(group)  _SHR_MULTICAST_VXLAN_GET(group) 
#define BCM_MULTICAST_FLOW_GET(group)   _SHR_MULTICAST_FLOW_GET(group) 
#define BCM_MULTICAST_PORTS_GROUP_GET(group)  _SHR_MULTICAST_PORTS_GROUP_GET(group) 
#define BCM_MULTICAST_EXTENDER_GET(group)  _SHR_MULTICAST_EXTENDER_GET(group) 

#define BCM_MULTICAST_L2(mc_index)  _SHR_MULTICAST_L2(mc_index) 
#define BCM_MULTICAST_L3(mc_index)  _SHR_MULTICAST_L3(mc_index) 
#define BCM_MULTICAST_VPLS(mc_index)  _SHR_MULTICAST_VPLS(mc_index) 
#define BCM_MULTICAST_SUBPORT(mc_index)  _SHR_MULTICAST_SUBPORT(mc_index) 
#define BCM_MULTICAST_MIM(mc_index)  _SHR_MULTICAST_MIM(mc_index) 
#define BCM_MULTICAST_WLAN(mc_index)  _SHR_MULTICAST_WLAN(mc_index) 
#define BCM_MULTICAST_VLAN(mc_index)  _SHR_MULTICAST_VLAN(mc_index) 
#define BCM_MULTICAST_TRILL(mc_index)  _SHR_MULTICAST_TRILL(mc_index) 
#define BCM_MULTICAST_NIV(mc_index)  _SHR_MULTICAST_NIV(mc_index) 
#define BCM_MULTICAST_EGRESS_OBJECT(mc_index)  _SHR_MULTICAST_EGRESS_OBJECT(mc_index) 
#define BCM_MULTICAST_L2GRE(mc_index)  _SHR_MULTICAST_L2GRE(mc_index) 
#define BCM_MULTICAST_VXLAN(mc_index)  _SHR_MULTICAST_VXLAN(mc_index) 
#define BCM_MULTICAST_FLOW(mc_index)  _SHR_MULTICAST_FLOW(mc_index) 
#define BCM_MULTICAST_PORTS_GROUP(mc_index)  _SHR_MULTICAST_PORTS_GROUP(mc_index) 
#define BCM_MULTICAST_EXTENDER(mc_index)  _SHR_MULTICAST_EXTENDER(mc_index) 

#define BCM_MULTICAST_TYPE(group)  _SHR_MULTICAST_TYPE(group) 

#ifndef BCM_HIDE_DISPATCHABLE

/* Initialize the multicast module. */
extern int bcm_multicast_init(
    int unit);

/* Shut down (uninitialize) the multicast module. */
extern int bcm_multicast_detach(
    int unit);

/* Create a multicast group for packet replication. */
extern int bcm_multicast_create(
    int unit, 
    uint32 flags, 
    bcm_multicast_t *group);

/* Destroy a multicast group. */
extern int bcm_multicast_destroy(
    int unit, 
    bcm_multicast_t group);

/* Get the multicast encapsulation ID for L3 replication. */
extern int bcm_multicast_l3_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_if_t intf, 
    bcm_if_t *encap_id);

/* Get the multicast encapsulation ID for L2 replication. */
extern int bcm_multicast_l2_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_vlan_t vlan, 
    bcm_if_t *encap_id);

/* Get the multicast encapsulation ID. */
extern int bcm_multicast_vpls_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_gport_t mpls_port_id, 
    bcm_if_t *encap_id);

/* Get the multicast encapsulation ID for TRILL replication. */
extern int bcm_multicast_trill_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_if_t intf, 
    bcm_if_t *encap_id);

/* Get the multicast encapsulation ID for SUBPORT replication. */
extern int bcm_multicast_subport_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_gport_t subport, 
    bcm_if_t *encap_id);

/* Get the multicast encapsulation ID for MAC-in-MAC replication. */
extern int bcm_multicast_mim_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_gport_t mim_port_id, 
    bcm_if_t *encap_id);

/* 
 * Get the multicast encapsulation ID for layer 2 logical port
 * replication.
 */
extern int bcm_multicast_vlan_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_gport_t vlan_port_id, 
    bcm_if_t *encap_id);

/* Get the multicast encapsulation ID for NIV replication. */
extern int bcm_multicast_niv_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_gport_t niv_port_id, 
    bcm_if_t *encap_id);

/* Get the multicast encapsulation ID for VXLAN replication. */
extern int bcm_multicast_vxlan_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_gport_t vxlan_port_id, 
    bcm_if_t *encap_id);

/* Get the multicast encapsulation ID for Port Extension replication. */
extern int bcm_multicast_extender_encap_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_gport_t extender_port_id, 
    bcm_if_t *encap_id);

/* 
 * Add an encapsulated interface to a multicast group's replication list
 * on a
 * specific port.
 */
extern int bcm_multicast_egress_add(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_if_t encap_id);

/* Delete a port from a multicast group's replication list. */
extern int bcm_multicast_egress_delete(
    int unit, 
    bcm_multicast_t group, 
    bcm_gport_t port, 
    bcm_if_t encap_id);

/* Delete all replications for the specified multicast index. */
extern int bcm_multicast_egress_delete_all(
    int unit, 
    bcm_multicast_t group);

/* 
 * Assign a set of encapsulated interfaces on specific ports as a
 * multicast
 * group's replication list.
 */
extern int bcm_multicast_egress_set(
    int unit, 
    bcm_multicast_t group, 
    int port_count, 
    bcm_gport_t *port_array, 
    bcm_if_t *encap_id_array);

/* 
 * Get the set of encapsulated interfaces on specific ports which
 * comprises
 * a multicast group's replication list.
 */
extern int bcm_multicast_egress_get(
    int unit, 
    bcm_multicast_t group, 
    int port_max, 
    bcm_gport_t *port_array, 
    bcm_if_t *encap_id_array, 
    int *port_count);

/* Retrieve the flags associated with a multicast group. */
extern int bcm_multicast_group_get(
    int unit, 
    bcm_multicast_t group, 
    uint32 *flags);

/* Request if the given multicast group is available on the device. */
extern int bcm_multicast_group_is_free(
    int unit, 
    bcm_multicast_t group);

/* 
 * Retrieve the minimum and maximum unallocated multicast groups for a
 * given multicast type.
 */
extern int bcm_multicast_group_free_range_get(
    int unit, 
    uint32 type_flag, 
    bcm_multicast_t *group_min, 
    bcm_multicast_t *group_max);

#endif /* BCM_HIDE_DISPATCHABLE */

/* Callback function for bcm_multicast_group_traverse. */
typedef int (*bcm_multicast_group_traverse_cb_t)(
    int unit, 
    bcm_multicast_t group, 
    uint32 flags, 
    void *user_data);

#ifndef BCM_HIDE_DISPATCHABLE

/* 
 * Iterate over the defined multicast groups of the type specified in
 * 'flags'.  If all types are desired, use MULTICAST_TYPE_MASK.
 */
extern int bcm_multicast_group_traverse(
    int unit, 
    bcm_multicast_group_traverse_cb_t trav_fn, 
    uint32 flags, 
    void *user_data);

#endif /* BCM_HIDE_DISPATCHABLE */

/* Multicast group controls. */
typedef enum bcm_multicast_control_e {
    bcmMulticastControlMtu = 0,     /* Maximum transmission unit. */
    bcmMulticastVpTrunkResolve = 1, /* Enable virtual port trunk group
                                       resolution. */
    bcmMulticastRemapGroup = 2,     /* Remap multicast groups. */
    bcmMulticastControlCount = 3    /* Must be last */
} bcm_multicast_control_t;

#ifndef BCM_HIDE_DISPATCHABLE

/* Set/get miscellaneous per multicast group controls. */
extern int bcm_multicast_control_set(
    int unit, 
    bcm_multicast_t group, 
    bcm_multicast_control_t type, 
    int arg);

/* Set/get miscellaneous per multicast group controls. */
extern int bcm_multicast_control_get(
    int unit, 
    bcm_multicast_t group, 
    bcm_multicast_control_t type, 
    int *arg);

#endif /* BCM_HIDE_DISPATCHABLE */

/* describes a multicast replication */
typedef struct bcm_multicast_replication_s {
    uint32 flags;       /* information on the replication */
    bcm_gport_t port;   /* destination */
    bcm_if_t encap1;    /* first encapsulation. */
    bcm_if_t encap2;    /* second encapsulation. */
} bcm_multicast_replication_t;

#define BCM_MUTICAST_REPLICATION_ENCAP2_VALID 1          /* determines if encap2
                                                          is used . */
#define BCM_MUTICAST_REPLICATION_ENCAP1_L3_INTF 2          /* when encap2 is used,
                                                          determines if encap1
                                                          is a routing interface
                                                          or not. */

/* 
 * Can be use for  setting flags parameter  to 
 * (bcm_multicast_get,bcm_multicast_set,bcm_multicast_add,bcm_multicast_delete)
 */
#define BCM_MULTICAST_INGRESS   0x00000001 

/* L3 Multiple multicast group related flags. */
#define BCM_MULTICAST_MULTI_WITH_ID     (1 << 0)   /* Create multiple multicast
                                                      groups with id. */
#define BCM_MULTICAST_MULTI_TYPE_L3     (1 << 1)   /* Create multiple group of
                                                      L3 type. */
#define BCM_MULTICAST_MULTI_TYPE_VPLS   (1 << 2)   /* Create multiple group of
                                                      VPLS type. */

/* Information to create multiple multicast groups. */
typedef struct bcm_multicast_multi_info_s {
    uint32 flags;           /* See BCM_MULTICAST_MULTI_XXX flag definitions. */
    int number_of_elements; /* number of multicast groups to allocate. */
} bcm_multicast_multi_info_t;

#define BCM_MULTICAST_REMOVE_ALL    0x00000010 

#define BCM_MULTICAST_BIER_64_GROUP     0x00000010 
#define BCM_MULTICAST_BIER_128_GROUP    0x00000020 
#define BCM_MULTICAST_BIER_256_GROUP    0x00000040 

#define BCM_MULICAST_STAT_EXTERNAL  0x00000001 /* Used to indicate of updating
                                                  multicast external statistics
                                                  parameters. */

/* Multicast statistics control types. */
typedef enum bcm_multicast_stat_control_type_e {
    bcmMulticastStatControlCountAllCopiesAsOne = 0 
} bcm_multicast_stat_control_type_t;

/* Multicast Encap extension flags */
#define BCM_MULTICAST_ENCAP_EXTENSION_REPLACE 0x00000001 /* Replace an existing
                                                          entry in encapsulation
                                                          extension table */
#define BCM_MULTICAST_ENCAP_EXTENSION_WITH_ID 0x00000002 /* Indicate creation with
                                                          a given ID. */

/* Callback function for bcm_multicast_encap_extension_traverse. */
typedef int (*bcm_multicast_encap_extension_traverse_cb)(
    int unit, 
    bcm_if_t multicast_replication_index, 
    uint32 flags, 
    void *user_data);

/* Multicast Encapsulation type. */
typedef enum bcm_multicast_encap_type_e {
    bcmMulticastEncapTypeInvalid = 0,   /* Invalid type. */
    bcmMulticastEncapTypeL3 = 1,        /* Multicast Encapsulation type for
                                           non-tunnel L3 service. */
    bcmMulticastEncapTypeL3Tunnel = 2,  /* Multicast Encapsulation type for L3
                                           tunnel. */
    bcmMulticastEncapTypeL2Tunnel = 3,  /* Multicast Encapsulation type for L2
                                           tunnel such as VXLAN, VPLS. */
    bcmMulticastEncapTypeCount = 4      /* Multicast type Count */
} bcm_multicast_encap_type_t;

/* Describes multicast encapsulation info. */
typedef struct bcm_multicast_encap_s {
    bcm_multicast_encap_type_t encap_type; /* Multicast Encapsulation type. */
    bcm_if_t ul_egress_if;              /* Underlay egress object ID. It is
                                           valid for L3Tunnel/L2Tunnel encap
                                           type. */
    bcm_if_t l3_intf;                   /* Overlay L3 interface ID for
                                           L3Tunnel/L2Tunnel encap type or L3
                                           interface ID for L3 encap type. */
    bcm_gport_t port_id;                /* Gport ID for L2Tunnel encap type. */
} bcm_multicast_encap_t;

#endif /* __BCM_MULTICAST_H__ */
