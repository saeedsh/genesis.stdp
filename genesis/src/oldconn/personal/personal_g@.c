#include <stdio.h>
#include "per_ext.h"
#include "personal_g@.h"

void STARTUP_personal() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];
  { extern void ExpWeight(); AddFunc("expweight", ExpWeight, "void");   HashFunc("ExpWeight", ExpWeight, "void"); }
  { extern void RadialDelay(); AddFunc("radialdelay", RadialDelay, "void");   HashFunc("RadialDelay", RadialDelay, "void"); }
  { extern void AffWeight(); AddFunc("affweight", AffWeight, "void");   HashFunc("AffWeight", AffWeight, "void"); }
  { extern void AffDelay(); AddFunc("affdelay", AffDelay, "void");   HashFunc("AffDelay", AffDelay, "void"); }
  { extern float ExpSum(); AddFunc("expsum", ExpSum, "float");   HashFunc("ExpSum", ExpSum, "float"); }
  { extern void SpatialDistField(); AddFunc("setspatialfield", SpatialDistField, "void");   HashFunc("SpatialDistField", SpatialDistField, "void"); }
  { extern void do_NormalizeSynapses(); AddFunc("normalize_synapses", do_NormalizeSynapses, "void");   HashFunc("do_NormalizeSynapses", do_NormalizeSynapses, "void"); }
  { extern void ScaleWeight(); AddFunc("scaleweight", ScaleWeight, "void");   HashFunc("ScaleWeight", ScaleWeight, "void"); }

/* Script variables */

} /* STARTUP_personal */
