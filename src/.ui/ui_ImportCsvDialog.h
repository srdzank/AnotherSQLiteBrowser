/********************************************************************************
** Form generated from reading UI file 'ImportCsvDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTCSVDIALOG_H
#define UI_IMPORTCSVDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImportCsvDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *labelName;
    QLineEdit *editName;
    QLabel *labelHeader;
    QCheckBox *checkboxHeader;
    QLabel *labelSeparator;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboSeparator;
    QLineEdit *editCustomSeparator;
    QSpacerItem *horizontalSpacer;
    QLabel *labelQuote;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboQuote;
    QLineEdit *editCustomQuote;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelEncoding;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboEncoding;
    QLineEdit *editCustomEncoding;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelTrim;
    QCheckBox *checkBoxTrimFields;
    QVBoxLayout *verticalLayout_2;
    QLabel *separateTables;
    QCheckBox *checkBoxSeparateTables;
    QSplitter *splitter;
    QWidget *filePickerBlock;
    QHBoxLayout *filePickerLayout;
    QListWidget *filePicker;
    QVBoxLayout *verticalLayout;
    QPushButton *toggleSelected;
    QPushButton *matchSimilar;
    QSpacerItem *verticalSpacer;
    QTableWidget *tablePreview;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ImportCsvDialog)
    {
        if (ImportCsvDialog->objectName().isEmpty())
            ImportCsvDialog->setObjectName(QString::fromUtf8("ImportCsvDialog"));
        ImportCsvDialog->resize(738, 490);
        verticalLayout_3 = new QVBoxLayout(ImportCsvDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        labelName = new QLabel(ImportCsvDialog);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelName);

        editName = new QLineEdit(ImportCsvDialog);
        editName->setObjectName(QString::fromUtf8("editName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editName);

        labelHeader = new QLabel(ImportCsvDialog);
        labelHeader->setObjectName(QString::fromUtf8("labelHeader"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelHeader);

        checkboxHeader = new QCheckBox(ImportCsvDialog);
        checkboxHeader->setObjectName(QString::fromUtf8("checkboxHeader"));

        formLayout->setWidget(1, QFormLayout::FieldRole, checkboxHeader);

        labelSeparator = new QLabel(ImportCsvDialog);
        labelSeparator->setObjectName(QString::fromUtf8("labelSeparator"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelSeparator);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboSeparator = new QComboBox(ImportCsvDialog);
        comboSeparator->addItem(QString());
        comboSeparator->addItem(QString());
        comboSeparator->addItem(QString());
        comboSeparator->addItem(QString());
        comboSeparator->addItem(QString());
        comboSeparator->setObjectName(QString::fromUtf8("comboSeparator"));

        horizontalLayout->addWidget(comboSeparator);

        editCustomSeparator = new QLineEdit(ImportCsvDialog);
        editCustomSeparator->setObjectName(QString::fromUtf8("editCustomSeparator"));
        editCustomSeparator->setMaxLength(1);

        horizontalLayout->addWidget(editCustomSeparator);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        labelQuote = new QLabel(ImportCsvDialog);
        labelQuote->setObjectName(QString::fromUtf8("labelQuote"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelQuote);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboQuote = new QComboBox(ImportCsvDialog);
        comboQuote->addItem(QString());
        comboQuote->addItem(QString());
        comboQuote->addItem(QString());
        comboQuote->addItem(QString());
        comboQuote->setObjectName(QString::fromUtf8("comboQuote"));

        horizontalLayout_2->addWidget(comboQuote);

        editCustomQuote = new QLineEdit(ImportCsvDialog);
        editCustomQuote->setObjectName(QString::fromUtf8("editCustomQuote"));
        editCustomQuote->setMaxLength(1);

        horizontalLayout_2->addWidget(editCustomQuote);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_2);

        labelEncoding = new QLabel(ImportCsvDialog);
        labelEncoding->setObjectName(QString::fromUtf8("labelEncoding"));

        formLayout->setWidget(5, QFormLayout::LabelRole, labelEncoding);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboEncoding = new QComboBox(ImportCsvDialog);
        comboEncoding->addItem(QString());
        comboEncoding->addItem(QString());
        comboEncoding->addItem(QString());
        comboEncoding->addItem(QString());
        comboEncoding->setObjectName(QString::fromUtf8("comboEncoding"));

        horizontalLayout_3->addWidget(comboEncoding);

        editCustomEncoding = new QLineEdit(ImportCsvDialog);
        editCustomEncoding->setObjectName(QString::fromUtf8("editCustomEncoding"));

        horizontalLayout_3->addWidget(editCustomEncoding);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout_3);

        labelTrim = new QLabel(ImportCsvDialog);
        labelTrim->setObjectName(QString::fromUtf8("labelTrim"));

        formLayout->setWidget(6, QFormLayout::LabelRole, labelTrim);

        checkBoxTrimFields = new QCheckBox(ImportCsvDialog);
        checkBoxTrimFields->setObjectName(QString::fromUtf8("checkBoxTrimFields"));
        checkBoxTrimFields->setChecked(true);

        formLayout->setWidget(6, QFormLayout::FieldRole, checkBoxTrimFields);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        formLayout->setLayout(7, QFormLayout::LabelRole, verticalLayout_2);

        separateTables = new QLabel(ImportCsvDialog);
        separateTables->setObjectName(QString::fromUtf8("separateTables"));

        formLayout->setWidget(8, QFormLayout::LabelRole, separateTables);

        checkBoxSeparateTables = new QCheckBox(ImportCsvDialog);
        checkBoxSeparateTables->setObjectName(QString::fromUtf8("checkBoxSeparateTables"));

        formLayout->setWidget(8, QFormLayout::FieldRole, checkBoxSeparateTables);


        verticalLayout_3->addLayout(formLayout);

        splitter = new QSplitter(ImportCsvDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setChildrenCollapsible(false);
        filePickerBlock = new QWidget(splitter);
        filePickerBlock->setObjectName(QString::fromUtf8("filePickerBlock"));
        filePickerBlock->setEnabled(true);
        filePickerLayout = new QHBoxLayout(filePickerBlock);
        filePickerLayout->setObjectName(QString::fromUtf8("filePickerLayout"));
        filePickerLayout->setContentsMargins(0, 0, 0, 0);
        filePicker = new QListWidget(filePickerBlock);
        filePicker->setObjectName(QString::fromUtf8("filePicker"));

        filePickerLayout->addWidget(filePicker);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(-1, 0, -1, -1);
        toggleSelected = new QPushButton(filePickerBlock);
        toggleSelected->setObjectName(QString::fromUtf8("toggleSelected"));
        toggleSelected->setCheckable(true);
        toggleSelected->setChecked(true);

        verticalLayout->addWidget(toggleSelected);

        matchSimilar = new QPushButton(filePickerBlock);
        matchSimilar->setObjectName(QString::fromUtf8("matchSimilar"));
        matchSimilar->setEnabled(false);

        verticalLayout->addWidget(matchSimilar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        filePickerLayout->addLayout(verticalLayout);

        splitter->addWidget(filePickerBlock);
        tablePreview = new QTableWidget(splitter);
        tablePreview->setObjectName(QString::fromUtf8("tablePreview"));
        splitter->addWidget(tablePreview);

        verticalLayout_3->addWidget(splitter);

        buttonBox = new QDialogButtonBox(ImportCsvDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        labelName->setBuddy(editName);
        labelHeader->setBuddy(checkboxHeader);
        labelSeparator->setBuddy(comboSeparator);
        labelQuote->setBuddy(comboQuote);
        labelEncoding->setBuddy(comboEncoding);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(editName, checkboxHeader);
        QWidget::setTabOrder(checkboxHeader, comboSeparator);
        QWidget::setTabOrder(comboSeparator, editCustomSeparator);
        QWidget::setTabOrder(editCustomSeparator, comboQuote);
        QWidget::setTabOrder(comboQuote, editCustomQuote);
        QWidget::setTabOrder(editCustomQuote, comboEncoding);
        QWidget::setTabOrder(comboEncoding, editCustomEncoding);
        QWidget::setTabOrder(editCustomEncoding, checkBoxTrimFields);
        QWidget::setTabOrder(checkBoxTrimFields, checkBoxSeparateTables);
        QWidget::setTabOrder(checkBoxSeparateTables, filePicker);
        QWidget::setTabOrder(filePicker, toggleSelected);
        QWidget::setTabOrder(toggleSelected, matchSimilar);
        QWidget::setTabOrder(matchSimilar, tablePreview);

        retranslateUi(ImportCsvDialog);
        QObject::connect(comboSeparator, SIGNAL(currentIndexChanged(int)), ImportCsvDialog, SLOT(updatePreview()));
        QObject::connect(editName, SIGNAL(textChanged(QString)), ImportCsvDialog, SLOT(checkInput()));
        QObject::connect(editCustomSeparator, SIGNAL(textChanged(QString)), ImportCsvDialog, SLOT(updatePreview()));
        QObject::connect(editCustomQuote, SIGNAL(textChanged(QString)), ImportCsvDialog, SLOT(updatePreview()));
        QObject::connect(editCustomEncoding, SIGNAL(textChanged(QString)), ImportCsvDialog, SLOT(updatePreview()));
        QObject::connect(checkBoxTrimFields, SIGNAL(toggled(bool)), ImportCsvDialog, SLOT(updatePreview()));
        QObject::connect(comboEncoding, SIGNAL(currentIndexChanged(int)), ImportCsvDialog, SLOT(updatePreview()));
        QObject::connect(checkboxHeader, SIGNAL(toggled(bool)), ImportCsvDialog, SLOT(updatePreview()));
        QObject::connect(toggleSelected, SIGNAL(toggled(bool)), ImportCsvDialog, SLOT(updateSelection(bool)));
        QObject::connect(comboQuote, SIGNAL(currentIndexChanged(int)), ImportCsvDialog, SLOT(updatePreview()));
        QObject::connect(buttonBox, SIGNAL(accepted()), ImportCsvDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ImportCsvDialog, SLOT(reject()));
        QObject::connect(checkBoxSeparateTables, SIGNAL(toggled(bool)), ImportCsvDialog, SLOT(checkInput()));
        QObject::connect(matchSimilar, SIGNAL(pressed()), ImportCsvDialog, SLOT(matchSimilar()));

        QMetaObject::connectSlotsByName(ImportCsvDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportCsvDialog)
    {
        ImportCsvDialog->setWindowTitle(QCoreApplication::translate("ImportCsvDialog", "Import CSV file", nullptr));
        labelName->setText(QCoreApplication::translate("ImportCsvDialog", "&Table name", nullptr));
        labelHeader->setText(QCoreApplication::translate("ImportCsvDialog", "&Column names in first line", nullptr));
        checkboxHeader->setText(QString());
        labelSeparator->setText(QCoreApplication::translate("ImportCsvDialog", "Field &separator", nullptr));
        comboSeparator->setItemText(0, QCoreApplication::translate("ImportCsvDialog", ",", nullptr));
        comboSeparator->setItemText(1, QCoreApplication::translate("ImportCsvDialog", ";", nullptr));
        comboSeparator->setItemText(2, QCoreApplication::translate("ImportCsvDialog", "Tab", nullptr));
        comboSeparator->setItemText(3, QCoreApplication::translate("ImportCsvDialog", "|", nullptr));
        comboSeparator->setItemText(4, QCoreApplication::translate("ImportCsvDialog", "Other", nullptr));

        labelQuote->setText(QCoreApplication::translate("ImportCsvDialog", "&Quote character", nullptr));
        comboQuote->setItemText(0, QCoreApplication::translate("ImportCsvDialog", "\"", nullptr));
        comboQuote->setItemText(1, QCoreApplication::translate("ImportCsvDialog", "'", nullptr));
        comboQuote->setItemText(2, QString());
        comboQuote->setItemText(3, QCoreApplication::translate("ImportCsvDialog", "Other", nullptr));

        labelEncoding->setText(QCoreApplication::translate("ImportCsvDialog", "&Encoding", nullptr));
        comboEncoding->setItemText(0, QCoreApplication::translate("ImportCsvDialog", "UTF-8", nullptr));
        comboEncoding->setItemText(1, QCoreApplication::translate("ImportCsvDialog", "UTF-16", nullptr));
        comboEncoding->setItemText(2, QCoreApplication::translate("ImportCsvDialog", "ISO-8859-1", nullptr));
        comboEncoding->setItemText(3, QCoreApplication::translate("ImportCsvDialog", "Other", nullptr));

        labelTrim->setText(QCoreApplication::translate("ImportCsvDialog", "Trim fields?", nullptr));
        checkBoxTrimFields->setText(QString());
        separateTables->setText(QCoreApplication::translate("ImportCsvDialog", "Separate tables", nullptr));
        checkBoxSeparateTables->setText(QString());
        toggleSelected->setText(QCoreApplication::translate("ImportCsvDialog", "Deselect All", nullptr));
        matchSimilar->setText(QCoreApplication::translate("ImportCsvDialog", "Match Similar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImportCsvDialog: public Ui_ImportCsvDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTCSVDIALOG_H
