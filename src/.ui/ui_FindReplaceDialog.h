/********************************************************************************
** Form generated from reading UI file 'FindReplaceDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDREPLACEDIALOG_H
#define UI_FINDREPLACEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindReplaceDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *replaceBlock;
    QHBoxLayout *filePickerLayout;
    QFormLayout *formLayout;
    QLabel *findTextLabel;
    QLineEdit *findText;
    QLabel *replaceWithLabel;
    QLineEdit *replaceWithText;
    QCheckBox *caseCheckBox;
    QCheckBox *wholeWordsCheckBox;
    QCheckBox *wrapCheckBox;
    QCheckBox *backwardsCheckBox;
    QCheckBox *regexpCheckBox;
    QVBoxLayout *verticalLayout;
    QPushButton *findNextButton;
    QPushButton *replaceButton;
    QPushButton *findAllButton;
    QPushButton *replaceAllButton;
    QSpacerItem *verticalSpacer;
    QLabel *messageLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FindReplaceDialog)
    {
        if (FindReplaceDialog->objectName().isEmpty())
            FindReplaceDialog->setObjectName(QString::fromUtf8("FindReplaceDialog"));
        FindReplaceDialog->resize(451, 288);
        verticalLayout_3 = new QVBoxLayout(FindReplaceDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        replaceBlock = new QWidget(FindReplaceDialog);
        replaceBlock->setObjectName(QString::fromUtf8("replaceBlock"));
        replaceBlock->setEnabled(true);
        filePickerLayout = new QHBoxLayout(replaceBlock);
        filePickerLayout->setObjectName(QString::fromUtf8("filePickerLayout"));
        filePickerLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        findTextLabel = new QLabel(replaceBlock);
        findTextLabel->setObjectName(QString::fromUtf8("findTextLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, findTextLabel);

        findText = new QLineEdit(replaceBlock);
        findText->setObjectName(QString::fromUtf8("findText"));

        formLayout->setWidget(0, QFormLayout::FieldRole, findText);

        replaceWithLabel = new QLabel(replaceBlock);
        replaceWithLabel->setObjectName(QString::fromUtf8("replaceWithLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, replaceWithLabel);

        replaceWithText = new QLineEdit(replaceBlock);
        replaceWithText->setObjectName(QString::fromUtf8("replaceWithText"));

        formLayout->setWidget(2, QFormLayout::FieldRole, replaceWithText);

        caseCheckBox = new QCheckBox(replaceBlock);
        caseCheckBox->setObjectName(QString::fromUtf8("caseCheckBox"));
        caseCheckBox->setChecked(false);

        formLayout->setWidget(4, QFormLayout::FieldRole, caseCheckBox);

        wholeWordsCheckBox = new QCheckBox(replaceBlock);
        wholeWordsCheckBox->setObjectName(QString::fromUtf8("wholeWordsCheckBox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, wholeWordsCheckBox);

        wrapCheckBox = new QCheckBox(replaceBlock);
        wrapCheckBox->setObjectName(QString::fromUtf8("wrapCheckBox"));

        formLayout->setWidget(6, QFormLayout::FieldRole, wrapCheckBox);

        backwardsCheckBox = new QCheckBox(replaceBlock);
        backwardsCheckBox->setObjectName(QString::fromUtf8("backwardsCheckBox"));

        formLayout->setWidget(7, QFormLayout::FieldRole, backwardsCheckBox);

        regexpCheckBox = new QCheckBox(replaceBlock);
        regexpCheckBox->setObjectName(QString::fromUtf8("regexpCheckBox"));

        formLayout->setWidget(8, QFormLayout::FieldRole, regexpCheckBox);


        filePickerLayout->addLayout(formLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(-1, 0, -1, -1);
        findNextButton = new QPushButton(replaceBlock);
        findNextButton->setObjectName(QString::fromUtf8("findNextButton"));

        verticalLayout->addWidget(findNextButton);

        replaceButton = new QPushButton(replaceBlock);
        replaceButton->setObjectName(QString::fromUtf8("replaceButton"));

        verticalLayout->addWidget(replaceButton);

        findAllButton = new QPushButton(replaceBlock);
        findAllButton->setObjectName(QString::fromUtf8("findAllButton"));

        verticalLayout->addWidget(findAllButton);

        replaceAllButton = new QPushButton(replaceBlock);
        replaceAllButton->setObjectName(QString::fromUtf8("replaceAllButton"));

        verticalLayout->addWidget(replaceAllButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        filePickerLayout->addLayout(verticalLayout);


        verticalLayout_3->addWidget(replaceBlock);

        messageLabel = new QLabel(FindReplaceDialog);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        messageLabel->setFont(font);
        messageLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(messageLabel);

        buttonBox = new QDialogButtonBox(FindReplaceDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout_3->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        findTextLabel->setBuddy(findText);
        replaceWithLabel->setBuddy(replaceWithText);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(findText, replaceWithText);
        QWidget::setTabOrder(replaceWithText, caseCheckBox);
        QWidget::setTabOrder(caseCheckBox, wholeWordsCheckBox);
        QWidget::setTabOrder(wholeWordsCheckBox, wrapCheckBox);
        QWidget::setTabOrder(wrapCheckBox, backwardsCheckBox);
        QWidget::setTabOrder(backwardsCheckBox, regexpCheckBox);
        QWidget::setTabOrder(regexpCheckBox, findNextButton);
        QWidget::setTabOrder(findNextButton, replaceButton);
        QWidget::setTabOrder(replaceButton, findAllButton);
        QWidget::setTabOrder(findAllButton, replaceAllButton);

        retranslateUi(FindReplaceDialog);
        QObject::connect(findNextButton, SIGNAL(clicked()), FindReplaceDialog, SLOT(findNext()));
        QObject::connect(replaceButton, SIGNAL(clicked()), FindReplaceDialog, SLOT(replace()));
        QObject::connect(findAllButton, SIGNAL(clicked()), FindReplaceDialog, SLOT(findAll()));
        QObject::connect(replaceAllButton, SIGNAL(clicked()), FindReplaceDialog, SLOT(replaceAll()));
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), FindReplaceDialog, SLOT(buttonBox_clicked(QAbstractButton*)));

        QMetaObject::connectSlotsByName(FindReplaceDialog);
    } // setupUi

    void retranslateUi(QDialog *FindReplaceDialog)
    {
        FindReplaceDialog->setWindowTitle(QCoreApplication::translate("FindReplaceDialog", "Find and Replace", nullptr));
        findTextLabel->setText(QCoreApplication::translate("FindReplaceDialog", "Fi&nd text:", nullptr));
        replaceWithLabel->setText(QCoreApplication::translate("FindReplaceDialog", "Re&place with:", nullptr));
        caseCheckBox->setText(QCoreApplication::translate("FindReplaceDialog", "Match &exact case", nullptr));
        wholeWordsCheckBox->setText(QCoreApplication::translate("FindReplaceDialog", "Match &only whole words", nullptr));
#if QT_CONFIG(whatsthis)
        wrapCheckBox->setWhatsThis(QCoreApplication::translate("FindReplaceDialog", "When enabled, the search continues from the other end when it reaches one end of the page", nullptr));
#endif // QT_CONFIG(whatsthis)
        wrapCheckBox->setText(QCoreApplication::translate("FindReplaceDialog", "&Wrap around", nullptr));
#if QT_CONFIG(whatsthis)
        backwardsCheckBox->setWhatsThis(QCoreApplication::translate("FindReplaceDialog", "When set, the search goes backwards from cursor position, otherwise it goes forward", nullptr));
#endif // QT_CONFIG(whatsthis)
        backwardsCheckBox->setText(QCoreApplication::translate("FindReplaceDialog", "Search &backwards", nullptr));
#if QT_CONFIG(whatsthis)
        regexpCheckBox->setWhatsThis(QCoreApplication::translate("FindReplaceDialog", "<html><head/><body><p>When checked, the pattern to find is interpreted as a UNIX regular expression. See <a href=\"https://en.wikibooks.org/wiki/Regular_Expressions\"><span style=\" text-decoration: underline; color:#0000ff;\">Regular Expression in Wikibooks</span></a>.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        regexpCheckBox->setText(QCoreApplication::translate("FindReplaceDialog", "Use regular e&xpressions", nullptr));
#if QT_CONFIG(whatsthis)
        findNextButton->setWhatsThis(QCoreApplication::translate("FindReplaceDialog", "Find the next occurrence from the cursor position and in the direction set by \"Search backwards\"", nullptr));
#endif // QT_CONFIG(whatsthis)
        findNextButton->setText(QCoreApplication::translate("FindReplaceDialog", "&Find Next", nullptr));
        replaceButton->setText(QCoreApplication::translate("FindReplaceDialog", "&Replace", nullptr));
#if QT_CONFIG(whatsthis)
        findAllButton->setWhatsThis(QCoreApplication::translate("FindReplaceDialog", "Highlight all the occurrences of the text in the page", nullptr));
#endif // QT_CONFIG(whatsthis)
        findAllButton->setText(QCoreApplication::translate("FindReplaceDialog", "F&ind All", nullptr));
#if QT_CONFIG(whatsthis)
        replaceAllButton->setWhatsThis(QCoreApplication::translate("FindReplaceDialog", "Replace all the occurrences of the text in the page", nullptr));
#endif // QT_CONFIG(whatsthis)
        replaceAllButton->setText(QCoreApplication::translate("FindReplaceDialog", "Replace &All", nullptr));
        messageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FindReplaceDialog: public Ui_FindReplaceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDREPLACEDIALOG_H
