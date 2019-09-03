#ifndef FCMAKE_EXPORT_H
#include <QtCore/QtGlobal>
#if defined(FCMAKE_DO_EXPORT)
#  define FCMAKE_EXPORT Q_DECL_EXPORT
#else
#  define FCMAKE_EXPORT Q_DECL_IMPORT
#endif
#endif

