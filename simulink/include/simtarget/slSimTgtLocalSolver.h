/* Copyright 2021 The MathWorks, Inc. */

#ifdef SUPPORTS_PRAGMA_ONCE
#pragma once
#endif

#ifndef SL_SIMTARGET_INSTRUMENTATION_SLSIMTGTLOCALSOLVER_H
#define SL_SIMTARGET_INSTRUMENTATION_SLSIMTGTLOCALSOLVER_H

#include "sl_simtarget_instrumentation_spec.h"
#include "simstruc.h"

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void ssAdvanceLocalContinuousTimeService(
    SimStruct* rootS,
    SimStruct* childS);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void ssEstimateLocalEquationState(SimStruct* rootS,
                                                                               SimStruct* childS,
                                                                               double time);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void ssLocalMdlInfoInitialization(SimStruct* parentS,
                                                                               SimStruct* childS);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void ssCreateLocalContinuousTimeService(
    SimStruct* parentS,
    SimStruct* childS,
    int_T inputCompMode,
    int_T outputCompMode);

#endif
