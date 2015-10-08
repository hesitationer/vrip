/*

Brian Curless

Computer Graphics Laboratory
Stanford University

---------------------------------------------------------------------

Copyright (1997) The Board of Trustees of the Leland Stanford Junior
University. Except for commercial resale, lease, license or other
commercial transactions, permission is hereby given to use, copy,
modify this software for academic purposes only.  No part of this
software or any derivatives thereof may be used in the production of
computer models for resale or for use in a commercial
product. STANFORD MAKES NO REPRESENTATIONS OR WARRANTIES OF ANY KIND
CONCERNING THIS SOFTWARE.  No support is implied or provided.

*/


#include <tcl.h>


int Vrip_ParamCmd(ClientData, Tcl_Interp *interp, int argc, const char *argv[]);
int PcreateCmd(ClientData, Tcl_Interp *, int argc, const char *argv[]);

int Vrip_CopyrightCmd(ClientData, Tcl_Interp *interp, int argc, const char *argv[]);
int Vrip_ResampleRangeTimeCmd(ClientData, Tcl_Interp *interp, 
			      int argc, const char *argv[]);
int Vrip_TessTimeCmd(ClientData, Tcl_Interp *interp, int argc, const char *argv[]);
int Vrip_MergeTimeCmd(ClientData, Tcl_Interp *interp, int argc, const char *argv[]);
int Vrip_CalibrateRotationCmd(ClientData, Tcl_Interp *interp, 
			      int argc, const char *argv[]);
int Vrip_TestVAScannerCmd(ClientData, Tcl_Interp *interp, 
			  int argc, const char *argv[]);
