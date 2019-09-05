#ifndef QDEVKIT_EXPORT_H
#include <QtCore/QtGlobal>
#if defined(QDEVKIT_DO_EXPORT)
#  define QDEVKIT_EXPORT Q_DECL_EXPORT
#else
#  define QDEVKIT_EXPORT Q_DECL_IMPORT
#endif
#endif

