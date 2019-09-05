#ifndef QDEVKITUI_EXPORT_H
#include <QtCore/QtGlobal>
#if defined(QDEVKITUI_DO_EXPORT)
#  define QDEVKITUI_EXPORT Q_DECL_EXPORT
#else
#  define QDEVKITUI_EXPORT Q_DECL_IMPORT
#endif
#endif

