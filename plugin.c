#include "config.h"
#include "packet-dgram-lowpan.h"
#include "packet-dgram-udp.h"
#include "packet-dtn-ipnd.h"
#include <gmodule.h>

G_MODULE_EXPORT const gchar version[] = PACKAGE_VERSION;

G_MODULE_EXPORT void
plugin_register(void)
{
	proto_register_dgram_lowpan();
	proto_register_dgram_udp();
	proto_register_dtn_ipnd();
}

G_MODULE_EXPORT void
plugin_reg_handoff(void)
{
	{extern void proto_reg_handoff_dgram_lowpan (void); proto_reg_handoff_dgram_lowpan();}
	{extern void proto_reg_handoff_dgram_udp (void); proto_reg_handoff_dgram_udp();}
	{extern void proto_reg_handoff_dtn_ipnd (void); proto_reg_handoff_dtn_ipnd();}
}
