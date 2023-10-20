/********************************************************************************
** Form generated from reading UI file 'CipherDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIPHERDIALOG_H
#define UI_CIPHERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CipherDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *labelDialogDescription;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *labelPassword;
    QLineEdit *editPassword;
    QLabel *labelPassword2;
    QLineEdit *editPassword2;
    QLabel *label_3;
    QSpinBox *spinPageSize;
    QVBoxLayout *verticalLayout;
    QComboBox *comboKeyFormat;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CipherDialog)
    {
        if (CipherDialog->objectName().isEmpty())
            CipherDialog->setObjectName(QString::fromUtf8("CipherDialog"));
        CipherDialog->resize(712, 183);
        verticalLayout_2 = new QVBoxLayout(CipherDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelDialogDescription = new QLabel(CipherDialog);
        labelDialogDescription->setObjectName(QString::fromUtf8("labelDialogDescription"));

        verticalLayout_2->addWidget(labelDialogDescription);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labelPassword = new QLabel(CipherDialog);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelPassword);

        editPassword = new QLineEdit(CipherDialog);
        editPassword->setObjectName(QString::fromUtf8("editPassword"));
        editPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(0, QFormLayout::FieldRole, editPassword);

        labelPassword2 = new QLabel(CipherDialog);
        labelPassword2->setObjectName(QString::fromUtf8("labelPassword2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelPassword2);

        editPassword2 = new QLineEdit(CipherDialog);
        editPassword2->setObjectName(QString::fromUtf8("editPassword2"));
        editPassword2->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, editPassword2);

        label_3 = new QLabel(CipherDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        spinPageSize = new QSpinBox(CipherDialog);
        spinPageSize->setObjectName(QString::fromUtf8("spinPageSize"));
        spinPageSize->setMinimum(512);
        spinPageSize->setMaximum(65536);
        spinPageSize->setValue(1024);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinPageSize);


        horizontalLayout->addLayout(formLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comboKeyFormat = new QComboBox(CipherDialog);
        comboKeyFormat->addItem(QString());
        comboKeyFormat->addItem(QString());
        comboKeyFormat->setObjectName(QString::fromUtf8("comboKeyFormat"));

        verticalLayout->addWidget(comboKeyFormat);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(CipherDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        labelPassword->setBuddy(editPassword);
        labelPassword2->setBuddy(editPassword2);
        label_3->setBuddy(spinPageSize);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(editPassword, comboKeyFormat);
        QWidget::setTabOrder(comboKeyFormat, editPassword2);
        QWidget::setTabOrder(editPassword2, spinPageSize);

        retranslateUi(CipherDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CipherDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CipherDialog, SLOT(reject()));
        QObject::connect(editPassword, SIGNAL(textChanged(QString)), CipherDialog, SLOT(checkInputFields()));
        QObject::connect(editPassword2, SIGNAL(textChanged(QString)), CipherDialog, SLOT(checkInputFields()));
        QObject::connect(comboKeyFormat, SIGNAL(currentIndexChanged(int)), CipherDialog, SLOT(checkInputFields()));

        QMetaObject::connectSlotsByName(CipherDialog);
    } // setupUi

    void retranslateUi(QDialog *CipherDialog)
    {
        CipherDialog->setWindowTitle(QCoreApplication::translate("CipherDialog", "SQLCipher encryption", nullptr));
        labelPassword->setText(QCoreApplication::translate("CipherDialog", "&Password", nullptr));
        labelPassword2->setText(QCoreApplication::translate("CipherDialog", "&Reenter password", nullptr));
        label_3->setText(QCoreApplication::translate("CipherDialog", "Page si&ze", nullptr));
        comboKeyFormat->setItemText(0, QCoreApplication::translate("CipherDialog", "Passphrase", nullptr));
        comboKeyFormat->setItemText(1, QCoreApplication::translate("CipherDialog", "Raw key", nullptr));

    } // retranslateUi

};

namespace Ui {
    class CipherDialog: public Ui_CipherDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIPHERDIALOG_H
