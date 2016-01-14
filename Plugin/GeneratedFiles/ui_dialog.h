/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QCheckBox *checkBox1;
    QCheckBox *checkBox2;
    QCheckBox *checkBox3;
    QCheckBox *checkBox4;
    QLabel *linkLabel;
    QLabel *image;
    QLabel *versionLabel;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(292, 308);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog->sizePolicy().hasHeightForWidth());
        Dialog->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Noto Sans"));
        font.setPointSize(10);
        Dialog->setFont(font);
        Dialog->setWindowTitle(QStringLiteral("Class Informer"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/classinf/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
#ifndef QT_NO_TOOLTIP
        Dialog->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        Dialog->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        Dialog->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        Dialog->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        Dialog->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        Dialog->setWindowFilePath(QStringLiteral(""));
        Dialog->setModal(true);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(120, 275, 156, 24));
#ifndef QT_NO_TOOLTIP
        buttonBox->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        buttonBox->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        buttonBox->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        buttonBox->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        buttonBox->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);
        buttonBox->setCenterButtons(false);
        checkBox1 = new QCheckBox(Dialog);
        checkBox1->setObjectName(QStringLiteral("checkBox1"));
        checkBox1->setGeometry(QRect(15, 95, 121, 17));
        checkBox1->setFont(font);
#ifndef QT_NO_TOOLTIP
        checkBox1->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        checkBox1->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        checkBox1->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        checkBox1->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        checkBox1->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        checkBox1->setText(QStringLiteral("Place structures"));
        checkBox2 = new QCheckBox(Dialog);
        checkBox2->setObjectName(QStringLiteral("checkBox2"));
        checkBox2->setGeometry(QRect(15, 125, 256, 17));
        checkBox2->setFont(font);
#ifndef QT_NO_TOOLTIP
        checkBox2->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        checkBox2->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        checkBox2->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        checkBox2->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        checkBox2->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        checkBox2->setText(QStringLiteral("Process static initializers && terminators"));
        checkBox3 = new QCheckBox(Dialog);
        checkBox3->setObjectName(QStringLiteral("checkBox3"));
        checkBox3->setGeometry(QRect(15, 155, 201, 17));
        checkBox3->setFont(font);
#ifndef QT_NO_TOOLTIP
        checkBox3->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        checkBox3->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        checkBox3->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        checkBox3->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        checkBox3->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        checkBox3->setText(QStringLiteral("Overwrite anterior comments"));
        checkBox4 = new QCheckBox(Dialog);
        checkBox4->setObjectName(QStringLiteral("checkBox4"));
        checkBox4->setGeometry(QRect(15, 185, 151, 17));
        checkBox4->setFont(font);
#ifndef QT_NO_TOOLTIP
        checkBox4->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        checkBox4->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        checkBox4->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        checkBox4->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        checkBox4->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        checkBox4->setText(QStringLiteral("Audio on completion"));
        linkLabel = new QLabel(Dialog);
        linkLabel->setObjectName(QStringLiteral("linkLabel"));
        linkLabel->setGeometry(QRect(15, 220, 136, 16));
        linkLabel->setFont(font);
#ifndef QT_NO_TOOLTIP
        linkLabel->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        linkLabel->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        linkLabel->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        linkLabel->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        linkLabel->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        linkLabel->setFrameShadow(QFrame::Sunken);
        linkLabel->setText(QStringLiteral("<a href=\"http://www.macromonkey.com/bb/index.php/topic,13.0.html\" style=\"color:#AA00FF;\">Class Informer Fourm</a>"));
        linkLabel->setTextFormat(Qt::AutoText);
        linkLabel->setOpenExternalLinks(true);
        image = new QLabel(Dialog);
        image->setObjectName(QStringLiteral("image"));
        image->setGeometry(QRect(0, 0, 292, 74));
#ifndef QT_NO_TOOLTIP
        image->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
        image->setTextFormat(Qt::PlainText);
        image->setPixmap(QPixmap(QString::fromUtf8(":/classinf/banner.png")));
        image->setTextInteractionFlags(Qt::NoTextInteraction);
        versionLabel = new QLabel(Dialog);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));
        versionLabel->setGeometry(QRect(225, 44, 61, 26));
        QFont font1;
        font1.setFamily(QStringLiteral("Noto Sans"));
        font1.setPointSize(9);
        versionLabel->setFont(font1);
#ifndef QT_NO_TOOLTIP
        versionLabel->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        versionLabel->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        versionLabel->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        versionLabel->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        versionLabel->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        versionLabel->setText(QLatin1String("Version: 2.2\n"
"By Sirmabus"));
        versionLabel->setTextFormat(Qt::PlainText);
        versionLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        image->setText(QString());
        Q_UNUSED(Dialog);
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
