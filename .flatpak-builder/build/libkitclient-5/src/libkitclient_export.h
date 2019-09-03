#ifndef LIBKITCLIENT_EXPORT_H

#ifdef __WIN32

#ifdef KITCLIENT_DO_EXPORT
#define KITCLIENT_EXPORT __declspec(dllexport)
#else
#define KITCLIENT_EXPORT __declspec(dllimport)
#endif

#else // NOT WIN32
#define KITCLIENT_EXPORT
#endif

#endif // LIBKITCLIENT_EXPORT_H

