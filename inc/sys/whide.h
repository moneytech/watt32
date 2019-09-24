/*!\file inc/sys/whide.h
 *
 * Hide "private" symbols by prefixing with "_w32_".
 *
 * Note: No symbols part of the BSD-socket API should be
 *       prefixed with "_w32_".
 */

#ifndef __SYS_WHIDE_H
#define __SYS_WHIDE_H

#ifndef __SYS_W32API_H
#include <sys/w32api.h>
#endif

#ifndef __SYS_CDEFS_H
#include <sys/cdefs.h>
#endif

#if !defined(WATT32_NO_NAMESPACE)

#define init_misc                   W32_NAMESPACE (init_misc)
#define Random                      W32_NAMESPACE (Random)
#define RandomWait                  W32_NAMESPACE (RandomWait)
#define set_timeout                 W32_NAMESPACE (set_timeout)
#define chk_timeout                 W32_NAMESPACE (chk_timeout)
#define cmp_timers                  W32_NAMESPACE (cmp_timers)
#define hires_timer                 W32_NAMESPACE (hires_timer)
#define set_timediff                W32_NAMESPACE (set_timediff)
#define get_timediff                W32_NAMESPACE (get_timediff)
#define timeval_diff                W32_NAMESPACE (timeval_diff)
#define timeval_diff2               W32_NAMESPACE (timeval_diff2)
#define tcp_OPEN_TO                 W32_NAMESPACE (tcp_OPEN_TO)
#define tcp_CLOSE_TO                W32_NAMESPACE (tcp_CLOSE_TO)
#define tcp_RTO_ADD                 W32_NAMESPACE (tcp_RTO_ADD)
#define tcp_RTO_BASE                W32_NAMESPACE (tcp_RTO_BASE)
#define tcp_RTO_SCALE               W32_NAMESPACE (tcp_RTO_SCALE)
#define tcp_RST_TIME                W32_NAMESPACE (tcp_RST_TIME)
#define tcp_RETRAN_TIME             W32_NAMESPACE (tcp_RETRAN_TIME)
#define tcp_MAX_VJSA                W32_NAMESPACE (tcp_MAX_VJSA)
#define tcp_MAX_VJSD                W32_NAMESPACE (tcp_MAX_VJSD)
#define tcp_recv_win                W32_NAMESPACE (tcp_recv_win)
#define tcp_config                  W32_NAMESPACE (tcp_config)
#define tcp_config_name             W32_NAMESPACE (tcp_config_name)
#define tcp_inject_config           W32_NAMESPACE (tcp_inject_config)
#define tcp_established             W32_NAMESPACE (tcp_established)
#define tcp_listen                  W32_NAMESPACE (tcp_listen)
#define tcp_open                    W32_NAMESPACE (tcp_open)
#define tcp_set_debug_state         W32_NAMESPACE (tcp_set_debug_state)
#define tcp_simple_state            W32_NAMESPACE (tcp_simple_state)
#define tcp_tick                    W32_NAMESPACE (tcp_tick)
#define udp_listen                  W32_NAMESPACE (udp_listen)
#define udp_open                    W32_NAMESPACE (udp_open)
#define my_ip_addr                  W32_NAMESPACE (my_ip_addr)
#define sin_mask                    W32_NAMESPACE (sin_mask)
#define sock_delay                  W32_NAMESPACE (sock_delay)
#define sock_inactive               W32_NAMESPACE (sock_inactive)
#define sock_data_timeout           W32_NAMESPACE (sock_data_timeout)
#define multihomes                  W32_NAMESPACE (multihomes)
#define block_tcp                   W32_NAMESPACE (block_tcp)
#define block_udp                   W32_NAMESPACE (block_udp)
#define block_ip                    W32_NAMESPACE (block_ip)
#define block_icmp                  W32_NAMESPACE (block_icmp)
#define last_cookie                 W32_NAMESPACE (last_cookie)
#define cookies                     W32_NAMESPACE (cookies)
#define survive_eth                 W32_NAMESPACE (survive_eth)
#define survive_bootp               W32_NAMESPACE (survive_bootp)
#define survive_dhcp                W32_NAMESPACE (survive_dhcp)
#define survive_rarp                W32_NAMESPACE (survive_rarp)
#define loopback_handler            W32_NAMESPACE (loopback_handler)
#define usr_init                    W32_NAMESPACE (usr_init)
#define usr_post_init               W32_NAMESPACE (usr_post_init)
#define in_checksum                 W32_NAMESPACE (in_checksum)
#define aton                        W32_NAMESPACE (aton)
#define aton_dotless                W32_NAMESPACE (aton_dotless)
#define isaddr                      W32_NAMESPACE (isaddr)
#define isaddr_dotless              W32_NAMESPACE (isaddr_dotless)
#define priv_addr                   W32_NAMESPACE (priv_addr)
#define tcp_cbreak                  W32_NAMESPACE (tcp_cbreak)
#define _outch                      W32_NAMESPACE (_outch)
#define outs                        W32_NAMESPACE (outs)
#define outsnl                      W32_NAMESPACE (outsnl)
#define outsn                       W32_NAMESPACE (outsn)
#define outhexes                    W32_NAMESPACE (outhexes)
#define outhex                      W32_NAMESPACE (outhex)
#define rip                         W32_NAMESPACE (rip)
#define parse_config_table          W32_NAMESPACE (parse_config_table)
#define _ping                       W32_NAMESPACE (_ping)
#define _chk_ping                   W32_NAMESPACE (_chk_ping)
#define add_ping                    W32_NAMESPACE (add_ping)
#define _tftp_write                 W32_NAMESPACE (_tftp_write)
#define _tftp_close                 W32_NAMESPACE (_tftp_close)
#define addwattcpd                  W32_NAMESPACE (addwattcpd)
#define delwattcpd                  W32_NAMESPACE (delwattcpd)
#define stopwattcpd                 W32_NAMESPACE (stopwattcpd)
#define dbug_init                   W32_NAMESPACE (dbug_init)
#define init_userSuppliedTimerTick  W32_NAMESPACE (init_userSuppliedTimerTick)
#define userTimerTick               W32_NAMESPACE (userTimerTick)
#define ip_timer_init               W32_NAMESPACE (ip_timer_init)
#define ip_timer_expired            W32_NAMESPACE (ip_timer_expired)
#define join_mcast_group            W32_NAMESPACE (join_mcast_group)
#define leave_mcast_group           W32_NAMESPACE (leave_mcast_group)
#define multi_to_eth                W32_NAMESPACE (multi_to_eth)
#define tcp_md5_secret              W32_NAMESPACE (tcp_md5_secret)
#define make_md5_signature          W32_NAMESPACE (make_md5_signature)
#define check_md5_signature         W32_NAMESPACE (check_md5_signature)
#define def_domain                  W32_NAMESPACE (def_domain)
#define def_nameservers             W32_NAMESPACE (def_nameservers)
#define dns_timeout                 W32_NAMESPACE (dns_timeout)
#define dns_recurse                 W32_NAMESPACE (dns_recurse)
#define dom_errno                   W32_NAMESPACE (dom_errno)
#define last_nameserver             W32_NAMESPACE (last_nameserver)
#define _mtu                        W32_NAMESPACE (_mtu)
#define _mss                        W32_NAMESPACE (_mss)
#define tcp_keep_idle               W32_NAMESPACE (tcp_keep_idle)
#define tcp_keep_intvl              W32_NAMESPACE (tcp_keep_intvl)
#define tcp_max_idle                W32_NAMESPACE (tcp_max_idle)
#define ctrace_on                   W32_NAMESPACE (ctrace_on)
#define debug_on                    W32_NAMESPACE (debug_on)
#define has_rdtsc                   W32_NAMESPACE (has_rdtsc)
#define clocks_per_usec             W32_NAMESPACE (clocks_per_usec)
#define psocket                     W32_NAMESPACE (psocket)
#define _chk_socket                 W32_NAMESPACE (_chk_socket)
#define sock_sturdy                 W32_NAMESPACE (sock_sturdy)
#define sock_stats                  W32_NAMESPACE (sock_stats)
#define _inet_ntoa                  W32_NAMESPACE (_inet_ntoa)
#define _inet_addr                  W32_NAMESPACE (_inet_addr)
#define defaultdomain               W32_NAMESPACE (defaultdomain)
#define dns_do_idna                 W32_NAMESPACE (dns_do_idna)
#define dns_do_ipv6                 W32_NAMESPACE (dns_do_ipv6)
#define dns_windns                  W32_NAMESPACE (dns_windns)
#define dom_ttl                     W32_NAMESPACE (dom_ttl)
#define dom_cname                   W32_NAMESPACE (dom_cname)
#define dom_a4list                  W32_NAMESPACE (dom_a4list)
#define dom_a6list                  W32_NAMESPACE (dom_a6list)
#define dom_strerror                W32_NAMESPACE (dom_strerror)
#define dom_remove_dot              W32_NAMESPACE (dom_remove_dot)
#define lookup_host                 W32_NAMESPACE (lookup_host)
#define DHCP_did_gratuitous_arp     W32_NAMESPACE (DHCP_did_gratuitous_arp)
#define DHCP_set_config_func        W32_NAMESPACE (DHCP_set_config_func)
#define DHCP_release                W32_NAMESPACE (DHCP_release)
#define DHCP_read_config            W32_NAMESPACE (DHCP_read_config)
#define DHCP_get_server             W32_NAMESPACE (DHCP_get_server)
#define _printf                     W32_NAMESPACE (_printf)
#define gui_printf                  W32_NAMESPACE (gui_printf)
#define win_strerror                W32_NAMESPACE (win_strerror)
#define assert_fail_test            W32_NAMESPACE (assert_fail_test)
#define abort_test                  W32_NAMESPACE (abort_test)
#define leak_test                   W32_NAMESPACE (leak_test)
#define except_test                 W32_NAMESPACE (except_test)
#define _multicast_on               W32_NAMESPACE (_multicast_on)
#define _multicast_intvl            W32_NAMESPACE (_multicast_intvl)
#define _ip_delay0                  W32_NAMESPACE (_ip_delay0)
#define _ip_delay1                  W32_NAMESPACE (_ip_delay1)
#define _ip_delay2                  W32_NAMESPACE (_ip_delay2)
#define _eth_init                   W32_NAMESPACE (_eth_init)
#define _eth_release                W32_NAMESPACE (_eth_release)
#define _eth_formatpacket           W32_NAMESPACE (_eth_formatpacket)
#define _eth_free                   W32_NAMESPACE (_eth_free)
#define _eth_arrived                W32_NAMESPACE (_eth_arrived)
#define _eth_send                   W32_NAMESPACE (_eth_send)
#define _eth_set_addr               W32_NAMESPACE (_eth_set_addr)
#define _eth_get_hwtype             W32_NAMESPACE (_eth_get_hwtype)
#define _resolve_hook               W32_NAMESPACE (_resolve_hook)
#define _resolve_exit               W32_NAMESPACE (_resolve_exit)
#define _resolve_timeout            W32_NAMESPACE (_resolve_timeout)
#define udp_SetTTL                  W32_NAMESPACE (udp_SetTTL)
#define num_mcast_active            W32_NAMESPACE (num_mcast_active)
#define print_mac_stats             W32_NAMESPACE (print_mac_stats)
#define print_pkt_stats             W32_NAMESPACE (print_pkt_stats)
#define print_vjc_stats             W32_NAMESPACE (print_vjc_stats)
#define print_arp_stats             W32_NAMESPACE (print_arp_stats)
#define print_pppoe_stats           W32_NAMESPACE (print_pppoe_stats)
#define print_ip4_stats             W32_NAMESPACE (print_ip4_stats)
#define print_ip6_stats             W32_NAMESPACE (print_ip6_stats)
#define print_icmp_stats            W32_NAMESPACE (print_icmp_stats)
#define print_igmp_stats            W32_NAMESPACE (print_igmp_stats)
#define print_udp_stats             W32_NAMESPACE (print_udp_stats)
#define print_tcp_stats             W32_NAMESPACE (print_tcp_stats)
#define print_all_stats             W32_NAMESPACE (print_all_stats)
#define reset_stats                 W32_NAMESPACE (reset_stats)
#define pkt_eth_init                W32_NAMESPACE (pkt_eth_init)
#define pkt_release                 W32_NAMESPACE (pkt_release)
#define pkt_reset_handle            W32_NAMESPACE (pkt_reset_handle)
#define pkt_send                    W32_NAMESPACE (pkt_send)
#define pkt_buf_wipe                W32_NAMESPACE (pkt_buf_wipe)
#define pkt_free_pkt                W32_NAMESPACE (pkt_free_pkt)
#define pkt_waiting                 W32_NAMESPACE (pkt_waiting)
#define pkt_set_addr                W32_NAMESPACE (pkt_set_addr)
#define pkt_get_addr                W32_NAMESPACE (pkt_get_addr)
#define pkt_get_mtu                 W32_NAMESPACE (pkt_get_mtu)
#define pkt_get_drvr_ver            W32_NAMESPACE (pkt_get_drvr_ver)
#define pkt_get_api_ver             W32_NAMESPACE (pkt_get_api_ver)
#define pkt_get_vector              W32_NAMESPACE (pkt_get_vector)
#define pkt_set_rcv_mode            W32_NAMESPACE (pkt_set_rcv_mode)
#define pkt_get_rcv_mode            W32_NAMESPACE (pkt_get_rcv_mode)
#define pkt_check_address           W32_NAMESPACE (pkt_check_address)
#define pkt_get_stats               W32_NAMESPACE (pkt_get_stats)
#define pkt_strerror                W32_NAMESPACE (pkt_strerror)
#define pkt_dropped                 W32_NAMESPACE (pkt_dropped)
#define pkt_get_drvr_name           W32_NAMESPACE (pkt_get_drvr_name)
#define pkt_get_drvr_desc           W32_NAMESPACE (pkt_get_drvr_desc)
#define pkt_get_drvr_class          W32_NAMESPACE (pkt_get_drvr_class)
#define pkt_get_device_name         W32_NAMESPACE (pkt_get_device_name)
#define pkt_get_drvr_descr          W32_NAMESPACE (pkt_get_drvr_descr)
#define pkt_is_init                 W32_NAMESPACE (pkt_is_init)
#define resolve                     W32_NAMESPACE (resolve)
#define resolve_ip                  W32_NAMESPACE (resolve_ip)
#define resolve_ip6                 W32_NAMESPACE (resolve_ip6)
#define sock_abort                  W32_NAMESPACE (sock_abort)
#define sock_close                  W32_NAMESPACE (sock_close)
#define sock_dataready              W32_NAMESPACE (sock_dataready)
#define sock_debugdump              W32_NAMESPACE (sock_debugdump)
#define sock_enqueue                W32_NAMESPACE (sock_enqueue)
#define sock_established            W32_NAMESPACE (sock_established)
#define sock_exit                   W32_NAMESPACE (sock_exit)
#define sock_fastread               W32_NAMESPACE (sock_fastread)
#define sock_fastwrite              W32_NAMESPACE (sock_fastwrite)
#define sock_flush                  W32_NAMESPACE (sock_flush)
#define sock_flushnext              W32_NAMESPACE (sock_flushnext)
#define sock_getc                   W32_NAMESPACE (sock_getc)
#define sock_gets                   W32_NAMESPACE (sock_gets)
#define sock_init_err               W32_NAMESPACE (sock_init_err)
#define sock_keepalive              W32_NAMESPACE (sock_keepalive)
#define sock_mode                   W32_NAMESPACE (sock_mode)
#define sock_noflush                W32_NAMESPACE (sock_noflush)
#define sock_preread                W32_NAMESPACE (sock_preread)
#define sock_printf                 W32_NAMESPACE (sock_printf)
#define sock_putc                   W32_NAMESPACE (sock_putc)
#define sock_puts                   W32_NAMESPACE (sock_puts)
#define sock_rbleft                 W32_NAMESPACE (sock_rbleft)
#define sock_rbsize                 W32_NAMESPACE (sock_rbsize)
#define sock_rbused                 W32_NAMESPACE (sock_rbused)
#define sock_read                   W32_NAMESPACE (sock_read)
#define sock_recv                   W32_NAMESPACE (sock_recv)
#define sock_recv_from              W32_NAMESPACE (sock_recv_from)
#define sock_recv_init              W32_NAMESPACE (sock_recv_init)
#define sock_recv_used              W32_NAMESPACE (sock_recv_used)
#define sock_scanf                  W32_NAMESPACE (sock_scanf)
#define sock_setbuf                 W32_NAMESPACE (sock_setbuf)
#define sock_sig_exit               W32_NAMESPACE (sock_sig_exit)
#define sock_sselect                W32_NAMESPACE (sock_sselect)
#define sock_tbleft                 W32_NAMESPACE (sock_tbleft)
#define sock_tbsize                 W32_NAMESPACE (sock_tbsize)
#define sock_tbused                 W32_NAMESPACE (sock_tbused)
#define sock_timeout                W32_NAMESPACE (sock_timeout)
#define sock_write                  W32_NAMESPACE (sock_write)
#define sock_yield                  W32_NAMESPACE (sock_yield)
#define sockerr                     W32_NAMESPACE (sockerr)
#define sockerr_clear               W32_NAMESPACE (sockerr_clear)
#define sockstate                   W32_NAMESPACE (sockstate)
#define _getsockname                W32_NAMESPACE (_getsockname)
#define _getpeername                W32_NAMESPACE (_getpeername)

#if defined(__MSDOS__)
  #define init_timer_isr            W32_NAMESPACE (init_timer_isr)
  #define exit_timer_isr            W32_NAMESPACE (exit_timer_isr)
#endif

#if !defined(__DJGPP__) && !defined(__CYGWIN__) && \
    !(defined(__WATCOMC__) && (__WATCOMC__ >= 1240))
  #define ffs  W32_NAMESPACE (ffs)
#endif

#if defined(__HIGHC__) || (defined(__DMC__) && defined(__MSDOS__))
  #define delay  W32_NAMESPACE (delay)
#endif

#if !W32_MINGW_VER(3,10) /* Added in MinGW 3.1 */ && \
    !defined(__CYGWIN__) && !defined(__DJGPP__)
  #define gettimeofday  W32_NAMESPACE (gettimeofday)
#endif

/* Hide private sumbols while building Watt-32.
 */
#if defined(WATT32_BUILD)
  #define in_checksum_fast W32_NAMESPACE (in_checksum_fast)
  #define do_checksum      W32_NAMESPACE (do_checksum)
#endif

#endif  /* WATT32_NO_NAMESPACE */

#endif
