/* Copyright 2021 The MathWorks, Inc. */
#ifndef DYNAMIC_TEST_SEQUENCE_API_H
#define DYNAMIC_TEST_SEQUENCE_API_H

#include <string>

#ifdef BUILDING_DYNAMICTESTSEQUENCE_CORE
#include "package.h"

/* This header is being included by files inside this module */

# define DYNAMICTESTSEQUENCE_CORE_EXPORT_CLASS    DLL_EXPORT_SYM
# define DYNAMICTESTSEQUENCE_CORE_EXPORT_EXTERN_C extern "C" DLL_EXPORT_SYM
# define DYNAMICTESTSEQUENCE_CORE_EXPORT          DLL_EXPORT_SYM

#elif defined(DLL_IMPORT_SYM)

#ifdef __cplusplus
# define DYNAMICTESTSEQUENCE_CORE_EXPORT_CLASS    DLL_IMPORT_SYM
# define DYNAMICTESTSEQUENCE_CORE_EXPORT_EXTERN_C extern "C" DLL_IMPORT_SYM
#else
# define DYNAMICTESTSEQUENCE_CORE_EXPORT_EXTERN_C extern DLL_IMPORT_SYM
#endif

# define DYNAMICTESTSEQUENCE_CORE_EXPORT          DLL_IMPORT_SYM

#else

#ifdef __cplusplus
#define DYNAMICTESTSEQUENCE_CORE_EXPORT_EXTERN_C extern "C"
#else
#define DYNAMICTESTSEQUENCE_CORE_EXPORT_EXTERN_C extern
#endif

# define DYNAMICTESTSEQUENCE_CORE_EXPORT

/* This file is being include by other TMW internal modules */

#endif

/* c API */
DYNAMICTESTSEQUENCE_CORE_EXPORT bool dynamictestseq_dequeue_command(const std::string command);

DYNAMICTESTSEQUENCE_CORE_EXPORT std::string dynamictestseq_get_curr_sequence_name();

DYNAMICTESTSEQUENCE_CORE_EXPORT bool dynamictestseq_library_loaded(const std::string sequenceName);

DYNAMICTESTSEQUENCE_CORE_EXPORT void* dynamictestseq_get_fcn_ptr(const std::string sequenceName, const std::string fcnName);

DYNAMICTESTSEQUENCE_CORE_EXPORT void dynamictestseq_reset_sequence();

DYNAMICTESTSEQUENCE_CORE_EXPORT void dynamictestseq_is_stopped();

#endif // DYNAMIC_TEST_SEQUENCE_API_H

// EOF

