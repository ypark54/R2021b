#include "pm_std.h"
#include "lang_std.h"
#include "external_std.h"
/*
Stubbed definitions for helper functions in scattered lookup
to be able to successfully compile and load deployed libraries
See g2495228 for details
*/

void scatteredprocess_2d(real_T*       inputPtsAndVal,
                            const real_T* x1s,
                            const real_T* x2s,
                            const real_T* fs,
                            const size_t  n) { }
void scatteredlookup_2d(real_T*         fi,
                           const real_T*   inputPtsAndVal,
                           const real_T*   x1query,
                           const real_T*   x2query,
                           const size_t    numPts,
                           const size_t    numels,
                           const boolean_T ex_intrpMthd,
                           const boolean_T ex_extrpMthd){}
void scatteredderivatives_2d(real_T*         gi,
                                const real_T*   inputPtsAndVal,
                                const real_T*   x1query,
                                const real_T*   x2query,
                                const size_t    ex_numInputPts,
                                const size_t    numels,
                                const boolean_T ex_interpMthd,
                                const boolean_T ex_extrpMethod){}
void scatteredprocess_3d(real_T*       inputPtsAndVal,
                            const real_T* x1s,
                            const real_T* x2s,
                            const real_T* x3s,
                            const real_T* fs,
                            const size_t  n){}
void scatteredlookup_3d(real_T*         fi,
                           const real_T*   inputPtsAndVal,
                           const real_T*   x1query,
                           const real_T*   x2query,
                           const real_T*   x3query,
                           const size_t    numPts,
                           const size_t    numels,
                           const boolean_T ex_intrpMthd,
                           const boolean_T ex_extrpMthd){}
void scatteredderivatives_3d(real_T*         gi,
                                const real_T*   inputPtsAndVal,
                                const real_T*   x1query,
                                const real_T*   x2query,
                                const real_T*   x3query,
                                const size_t    ex_numInputPts,
                                const size_t    numels,
                                const boolean_T ex_intrpMthd,
                                const boolean_T ex_extrpMthd){}

