#ifndef __liburpc_export_hpp__

#ifdef __WIN32
#ifndef SWIG

#ifdef URPC_DO_EXPORT
#define URPC_EXPORT __declspec(dllexport)
#else
#define URPC_EXPORT __declspec(dllimport)
#endif

#else // SWIG
#define URPC_EXPORT
#endif

#else // NOT WIN32
#define URPC_EXPORT
#endif

#endif // __liburpc_export_hpp__
