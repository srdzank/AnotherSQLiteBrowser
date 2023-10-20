/********************************************************************************
** Form generated from reading UI file 'EditDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITDIALOG_H
#define UI_EDITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *labelMode;
    QComboBox *comboMode;
    QSpacerItem *horizontalSpacer;
    QToolButton *buttonIndent;
    QPushButton *buttonImport;
    QPushButton *buttonExport;
    QPushButton *buttonNull;
    QStackedWidget *editorStack;
    QWidget *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *editorText;
    QWidget *editorBinary;
    QWidget *editorJSON;
    QScrollArea *editorImageScrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *editorImage;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *labelType;
    QLabel *labelSize;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonApply;

    void setupUi(QDialog *EditDialog)
    {
        if (EditDialog->objectName().isEmpty())
            EditDialog->setObjectName(QString::fromUtf8("EditDialog"));
        EditDialog->resize(618, 382);
        verticalLayout_5 = new QVBoxLayout(EditDialog);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelMode = new QLabel(EditDialog);
        labelMode->setObjectName(QString::fromUtf8("labelMode"));
        labelMode->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(labelMode);

        comboMode = new QComboBox(EditDialog);
        comboMode->addItem(QString());
        comboMode->addItem(QString());
        comboMode->addItem(QString());
        comboMode->addItem(QString());
        comboMode->setObjectName(QString::fromUtf8("comboMode"));
        comboMode->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(comboMode);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonIndent = new QToolButton(EditDialog);
        buttonIndent->setObjectName(QString::fromUtf8("buttonIndent"));
        buttonIndent->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/text_indent"), QSize(), QIcon::Normal, QIcon::Off);
        buttonIndent->setIcon(icon);
        buttonIndent->setCheckable(true);

        horizontalLayout->addWidget(buttonIndent);

        buttonImport = new QPushButton(EditDialog);
        buttonImport->setObjectName(QString::fromUtf8("buttonImport"));
        buttonImport->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(buttonImport);

        buttonExport = new QPushButton(EditDialog);
        buttonExport->setObjectName(QString::fromUtf8("buttonExport"));
        buttonExport->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(buttonExport);

        buttonNull = new QPushButton(EditDialog);
        buttonNull->setObjectName(QString::fromUtf8("buttonNull"));
        buttonNull->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(buttonNull);


        verticalLayout_5->addLayout(horizontalLayout);

        editorStack = new QStackedWidget(EditDialog);
        editorStack->setObjectName(QString::fromUtf8("editorStack"));
        verticalLayout_4 = new QWidget();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout(verticalLayout_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        editorText = new QTextEdit(verticalLayout_4);
        editorText->setObjectName(QString::fromUtf8("editorText"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        editorText->setFont(font);
        editorText->setAcceptRichText(false);

        verticalLayout_3->addWidget(editorText);

        editorStack->addWidget(verticalLayout_4);
        editorBinary = new QWidget();
        editorBinary->setObjectName(QString::fromUtf8("editorBinary"));
        editorStack->addWidget(editorBinary);
        editorJSON = new QWidget();
        editorJSON->setObjectName(QString::fromUtf8("editorJSON"));
        editorStack->addWidget(editorJSON);
        editorImageScrollArea = new QScrollArea();
        editorImageScrollArea->setObjectName(QString::fromUtf8("editorImageScrollArea"));
        editorImageScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 98, 35));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        editorImage = new QLabel(scrollAreaWidgetContents);
        editorImage->setObjectName(QString::fromUtf8("editorImage"));

        verticalLayout_2->addWidget(editorImage);

        editorImageScrollArea->setWidget(scrollAreaWidgetContents);
        editorStack->addWidget(editorImageScrollArea);

        verticalLayout_5->addWidget(editorStack);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelType = new QLabel(EditDialog);
        labelType->setObjectName(QString::fromUtf8("labelType"));

        verticalLayout->addWidget(labelType);

        labelSize = new QLabel(EditDialog);
        labelSize->setObjectName(QString::fromUtf8("labelSize"));

        verticalLayout->addWidget(labelSize);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        buttonApply = new QPushButton(EditDialog);
        buttonApply->setObjectName(QString::fromUtf8("buttonApply"));

        horizontalLayout_2->addWidget(buttonApply);


        verticalLayout_5->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(buttonExport, buttonNull);

        retranslateUi(EditDialog);
        QObject::connect(buttonImport, SIGNAL(clicked()), EditDialog, SLOT(importData()));
        QObject::connect(buttonExport, SIGNAL(clicked()), EditDialog, SLOT(exportData()));
        QObject::connect(editorStack, SIGNAL(currentChanged(int)), comboMode, SLOT(setCurrentIndex(int)));
        QObject::connect(buttonApply, SIGNAL(clicked()), EditDialog, SLOT(accept()));
        QObject::connect(comboMode, SIGNAL(currentIndexChanged(int)), EditDialog, SLOT(editModeChanged(int)));
        QObject::connect(buttonNull, SIGNAL(clicked()), EditDialog, SLOT(setNull()));
        QObject::connect(editorText, SIGNAL(textChanged()), EditDialog, SLOT(editTextChanged()));
        QObject::connect(buttonIndent, SIGNAL(toggled(bool)), EditDialog, SLOT(setMustIndentAndCompact(bool)));

        editorStack->setCurrentIndex(0);
        buttonApply->setDefault(true);


        QMetaObject::connectSlotsByName(EditDialog);
    } // setupUi

    void retranslateUi(QDialog *EditDialog)
    {
        EditDialog->setWindowTitle(QCoreApplication::translate("EditDialog", "Edit database cell", nullptr));
        labelMode->setText(QCoreApplication::translate("EditDialog", "Mode:", nullptr));
        comboMode->setItemText(0, QCoreApplication::translate("EditDialog", "Text", nullptr));
        comboMode->setItemText(1, QCoreApplication::translate("EditDialog", "Binary", nullptr));
        comboMode->setItemText(2, QCoreApplication::translate("EditDialog", "JSON", nullptr));
        comboMode->setItemText(3, QCoreApplication::translate("EditDialog", "Image", nullptr));

#if QT_CONFIG(tooltip)
        buttonIndent->setToolTip(QCoreApplication::translate("EditDialog", "Auto-format: pretty print on loading, compact on saving.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        buttonIndent->setStatusTip(QCoreApplication::translate("EditDialog", "Auto-format: pretty print on loading, compact on saving.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        buttonIndent->setWhatsThis(QCoreApplication::translate("EditDialog", "When enabled, the auto-format feature formats the data on loading, breaking the text in lines and indenting it for maximum readability. On data saving, the auto-format feature compacts the data removing end of lines, and unnecessary whitespace.", nullptr));
#endif // QT_CONFIG(whatsthis)
        buttonIndent->setText(QCoreApplication::translate("EditDialog", "Autoformat", nullptr));
#if QT_CONFIG(tooltip)
        buttonImport->setToolTip(QCoreApplication::translate("EditDialog", "Import from file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        buttonImport->setWhatsThis(QCoreApplication::translate("EditDialog", "Opens a file dialog used to import any kind of data to this database cell.", nullptr));
#endif // QT_CONFIG(whatsthis)
        buttonImport->setText(QCoreApplication::translate("EditDialog", "&Import", nullptr));
#if QT_CONFIG(tooltip)
        buttonExport->setToolTip(QCoreApplication::translate("EditDialog", "Export to file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        buttonExport->setWhatsThis(QCoreApplication::translate("EditDialog", "Opens a file dialog used to export the contents of this database cell to a file.", nullptr));
#endif // QT_CONFIG(whatsthis)
        buttonExport->setText(QCoreApplication::translate("EditDialog", "&Export", nullptr));
#if QT_CONFIG(tooltip)
        buttonNull->setToolTip(QCoreApplication::translate("EditDialog", "Set this cell to NULL", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        buttonNull->setWhatsThis(QCoreApplication::translate("EditDialog", "Erases the contents of the cell", nullptr));
#endif // QT_CONFIG(whatsthis)
        buttonNull->setText(QCoreApplication::translate("EditDialog", "Set as &NULL", nullptr));
#if QT_CONFIG(whatsthis)
        editorText->setWhatsThis(QCoreApplication::translate("EditDialog", "This area displays information about the data present in this database cell", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        editorJSON->setWhatsThis(QCoreApplication::translate("EditDialog", "This editor mode lets you edit JSON data with syntax highlighting, automatic formatting and validation before saving.\n"
"\n"
"Errors are indicated with a red squiggle underline.", nullptr));
#endif // QT_CONFIG(whatsthis)
        editorImage->setText(QString());
        labelType->setText(QCoreApplication::translate("EditDialog", "Type of data currently in cell", nullptr));
        labelSize->setText(QCoreApplication::translate("EditDialog", "Size of data currently in table", nullptr));
#if QT_CONFIG(tooltip)
        buttonApply->setToolTip(QCoreApplication::translate("EditDialog", "Apply data to cell [Ctrl+Return]", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonApply->setText(QCoreApplication::translate("EditDialog", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditDialog: public Ui_EditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITDIALOG_H
