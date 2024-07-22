/* API for S-Functions and Stateflow to support unbounded variable-size signals in Simulink */
/* Copyright 2019-2020 The MathWorks, Inc. */

#ifdef SUPPORTS_PRAGMA_ONCE
#pragma once
#endif

#ifndef _sl_dynamicmatrix_sfcn_api_h_
#define _sl_dynamicmatrix_sfcn_api_h_

#include "sl_simtarget_instrumentation_spec.h"

#define SS_INT32_INF_DIM (INT_MAX-1)

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C DTypeId
ssRegisterDynamicMatrixDataType(SimStruct* S, DTypeId containedDataTypeId, int_T containedDataNumDims, int_T* containedDataDims, bool containedDataIsComplex);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C bool ssIsDynamicMatrixDataType(SimStruct* S,
                                                                            DTypeId dataTypeId);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C DTypeId ssGetDynamicMatrixContainedDataType(SimStruct* S, DTypeId dataTypeId);
SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C size_t ssGetDynamicMatrixContainedDataNumDimensions(SimStruct* S, DTypeId dataTypeId);
SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C ssComplexity ssGetDynamicMatrixContainedDataComplexity(SimStruct* S, DTypeId dataTypeId);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void ssGetDynamicMatrixContainedDataDimensions(
    SimStruct* S,
    DTypeId dataTypeId,
    const void* data,
    size_t* dims);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void
ssGetInputPortDynamicMatrixContainedDataDimensions(SimStruct* S, int portIdx, size_t* dims);
SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void
ssGetOutputPortDynamicMatrixContainedDataDimensions(SimStruct* S, int portIdx, size_t* dims);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void ssSetDynamicMatrixContainedDataDimensions(
    SimStruct* S,
    DTypeId dataTypeId,
    void* data,
    size_t numDims,
    const size_t* dims);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void ssSetOutputPortDynamicMatrixContainedDataDimensions(
    SimStruct* S,
    int portIdx,
    size_t numDims,
    const size_t* dims);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C size_t
ssGetInputPortDynamicMatrixContainedDataWidth(SimStruct* S, int portIdx);
SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C size_t
ssGetOutputPortDynamicMatrixContainedDataWidth(SimStruct* S, int portIdx);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C size_t
ssSetDynamicMatrixContainedDataWidth(SimStruct* S, DTypeId dataTypeId, void* data);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C const void* ssGetInputPortDynamicMatrixData(
    SimStruct* S,
    int portIdx);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void* ssGetOutputPortDynamicMatrixData(
    SimStruct* S,
    int portIdx);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C const void* ssGetDynamicMatrixContainedData(
    SimStruct* S,
    void* data);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C const void* ssGetInputPortDynamicMatrixContainedData(
    SimStruct* S,
    int portIdx);
SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void* ssGetOutputPortDynamicMatrixContainedData(
    SimStruct* S,
    int portIdx);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void ssSetCurrentBusElementDynamicMatrixContainedDimensions(
    SimStruct* S,
    DTypeId busDataTypeId,
    size_t elementIdx,
    void* data,
    size_t numDims,
    size_t* dims);

SL_SIMTARGET_INSTRUMENTATION_EXPORT_EXTERN_C void* ssGetBusElementDynamicMatrixContainedData(
    SimStruct* S,
    DTypeId busDataTypeId,
    size_t elementIdx,
    void* data);

#endif /* _sl_dynamicmatrix_sfcn_api_h_ */
