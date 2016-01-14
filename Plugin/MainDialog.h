
#pragma once

#include <Windows.h>
#include <QtWidgets/QDialog>

#define QT_NO_TOOLTIP
#define QT_NO_STATUSTIP
#define QT_NO_WHATSTHIS
#define QT_NO_ACCESSIBILITY
// Had to nix the normal functionality of this macro because of odd crashes
// In this case where I'm using plain ASCII, the default macro creates unnecessary conversion code anyhow
#undef QStringLiteral
#define QStringLiteral(_str) _str
#include "ui_dialog.h"

class MainDialog : public QDialog, public Ui::Dialog
{
    Q_OBJECT
public:
    MainDialog(BOOL &optionPlaceStructs, BOOL &optionProcessStatic, BOOL &optionOverwriteComments, BOOL &optionAudioOnDone);
	virtual ~MainDialog(){ Q_CLEANUP_RESOURCE(QtResource); }
};

// Do main dialog, return TRUE if canceled
BOOL doMainDialog(BOOL &optionPlaceStructs, BOOL &optionProcessStatic, BOOL &optionOverwriteComments, BOOL &optionAudioOnDone);
