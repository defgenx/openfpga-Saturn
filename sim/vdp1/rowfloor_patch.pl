#!/usr/bin/perl
# Applies the VDP1P row-floor timing changes to the golden copy (stdin -> stdout). ROWFLOOR=0 passes it through.
undef $/; $_ = <STDIN>;
if ($ENV{ROWFLOOR} eq "1") {
	# EDGE_INIT lasts four cycles (VDP1P computes one edge difference per cycle)
	s/(\tCMDState_t CMD_ST;)/$1\n\tbit [1:0] EI_W;\n\talways \@(posedge CLK) if (CMD_ST != CMDS_EDGE_INIT) EI_W <= 0; else if (EN) EI_W <= EI_W + 2'd1;/ or die "no CMD_ST";
	s/CMD_ST <= CMDS_POLYGON_CALCE;/if (EI_W == 2'd3) CMD_ST <= CMDS_POLYGON_CALCE;/ or die "no CALCE";
}
print;
