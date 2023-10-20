/********************************************************************************
** Form generated from reading UI file 'EditTableDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTABLEDIALOG_H
#define UI_EDITTABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "sqltextedit.h"

QT_BEGIN_NAMESPACE

class Ui_EditTableDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupTable;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *editTableName;
    QToolButton *buttonMore;
    QWidget *widgetExtension;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboSchema;
    QLabel *label_1;
    QCheckBox *checkWithoutRowid;
    QGroupBox *groupFields;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *addFieldButton;
    QToolButton *removeFieldButton;
    QToolButton *buttonMoveUp;
    QToolButton *buttonMoveDown;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    QTreeWidget *treeWidget;
    SqlTextEdit *sqlTextEdit;
    QLabel *labelEditWarning;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditTableDialog)
    {
        if (EditTableDialog->objectName().isEmpty())
            EditTableDialog->setObjectName(QString::fromUtf8("EditTableDialog"));
        EditTableDialog->resize(650, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/table"), QSize(), QIcon::Normal, QIcon::Off);
        EditTableDialog->setWindowIcon(icon);
        EditTableDialog->setSizeGripEnabled(true);
        verticalLayout_2 = new QVBoxLayout(EditTableDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupTable = new QGroupBox(EditTableDialog);
        groupTable->setObjectName(QString::fromUtf8("groupTable"));
        verticalLayout_3 = new QVBoxLayout(groupTable);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        editTableName = new QLineEdit(groupTable);
        editTableName->setObjectName(QString::fromUtf8("editTableName"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        editTableName->setFont(font);

        verticalLayout_3->addWidget(editTableName);

        buttonMore = new QToolButton(groupTable);
        buttonMore->setObjectName(QString::fromUtf8("buttonMore"));
        buttonMore->setCheckable(true);
        buttonMore->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        buttonMore->setArrowType(Qt::DownArrow);

        verticalLayout_3->addWidget(buttonMore);

        widgetExtension = new QWidget(groupTable);
        widgetExtension->setObjectName(QString::fromUtf8("widgetExtension"));
        formLayout = new QFormLayout(widgetExtension);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(widgetExtension);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        comboSchema = new QComboBox(widgetExtension);
        comboSchema->setObjectName(QString::fromUtf8("comboSchema"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboSchema);

        label_1 = new QLabel(widgetExtension);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_1);

        checkWithoutRowid = new QCheckBox(widgetExtension);
        checkWithoutRowid->setObjectName(QString::fromUtf8("checkWithoutRowid"));

        formLayout->setWidget(1, QFormLayout::FieldRole, checkWithoutRowid);


        verticalLayout_3->addWidget(widgetExtension);


        verticalLayout_2->addWidget(groupTable);

        groupFields = new QGroupBox(EditTableDialog);
        groupFields->setObjectName(QString::fromUtf8("groupFields"));
        verticalLayout = new QVBoxLayout(groupFields);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addFieldButton = new QToolButton(groupFields);
        addFieldButton->setObjectName(QString::fromUtf8("addFieldButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/field_add"), QSize(), QIcon::Normal, QIcon::Off);
        addFieldButton->setIcon(icon1);
        addFieldButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        addFieldButton->setAutoRaise(true);

        horizontalLayout->addWidget(addFieldButton);

        removeFieldButton = new QToolButton(groupFields);
        removeFieldButton->setObjectName(QString::fromUtf8("removeFieldButton"));
        removeFieldButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/field_delete"), QSize(), QIcon::Normal, QIcon::Off);
        removeFieldButton->setIcon(icon2);
        removeFieldButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        removeFieldButton->setAutoRaise(true);

        horizontalLayout->addWidget(removeFieldButton);

        buttonMoveUp = new QToolButton(groupFields);
        buttonMoveUp->setObjectName(QString::fromUtf8("buttonMoveUp"));
        buttonMoveUp->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/up"), QSize(), QIcon::Normal, QIcon::Off);
        buttonMoveUp->setIcon(icon3);
        buttonMoveUp->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        buttonMoveUp->setAutoRaise(true);

        horizontalLayout->addWidget(buttonMoveUp);

        buttonMoveDown = new QToolButton(groupFields);
        buttonMoveDown->setObjectName(QString::fromUtf8("buttonMoveDown"));
        buttonMoveDown->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/down"), QSize(), QIcon::Normal, QIcon::Off);
        buttonMoveDown->setIcon(icon4);
        buttonMoveDown->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        buttonMoveDown->setAutoRaise(true);

        horizontalLayout->addWidget(buttonMoveDown);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        widget = new QWidget(groupFields);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        treeWidget = new QTreeWidget(splitter);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy);
        treeWidget->setMinimumSize(QSize(0, 140));
        treeWidget->setRootIsDecorated(false);
        splitter->addWidget(treeWidget);
        sqlTextEdit = new SqlTextEdit(splitter);
        sqlTextEdit->setObjectName(QString::fromUtf8("sqlTextEdit"));
        sqlTextEdit->setReadOnly(true);
        splitter->addWidget(sqlTextEdit);

        verticalLayout_4->addWidget(splitter);


        verticalLayout->addWidget(widget);


        verticalLayout_2->addWidget(groupFields);

        labelEditWarning = new QLabel(EditTableDialog);
        labelEditWarning->setObjectName(QString::fromUtf8("labelEditWarning"));
        labelEditWarning->setWordWrap(true);

        verticalLayout_2->addWidget(labelEditWarning);

        buttonBox = new QDialogButtonBox(EditTableDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(comboSchema);
        label_1->setBuddy(checkWithoutRowid);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(editTableName, buttonMore);
        QWidget::setTabOrder(buttonMore, comboSchema);
        QWidget::setTabOrder(comboSchema, checkWithoutRowid);
        QWidget::setTabOrder(checkWithoutRowid, addFieldButton);
        QWidget::setTabOrder(addFieldButton, removeFieldButton);
        QWidget::setTabOrder(removeFieldButton, buttonMoveUp);
        QWidget::setTabOrder(buttonMoveUp, buttonMoveDown);
        QWidget::setTabOrder(buttonMoveDown, treeWidget);
        QWidget::setTabOrder(treeWidget, sqlTextEdit);

        retranslateUi(EditTableDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditTableDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditTableDialog, SLOT(reject()));
        QObject::connect(treeWidget, SIGNAL(itemSelectionChanged()), EditTableDialog, SLOT(fieldSelectionChanged()));
        QObject::connect(addFieldButton, SIGNAL(clicked()), EditTableDialog, SLOT(addField()));
        QObject::connect(removeFieldButton, SIGNAL(clicked()), EditTableDialog, SLOT(removeField()));
        QObject::connect(editTableName, SIGNAL(textChanged(QString)), EditTableDialog, SLOT(checkInput()));
        QObject::connect(buttonMoveUp, SIGNAL(clicked()), EditTableDialog, SLOT(moveUp()));
        QObject::connect(buttonMoveDown, SIGNAL(clicked()), EditTableDialog, SLOT(moveDown()));
        QObject::connect(buttonMore, SIGNAL(toggled(bool)), widgetExtension, SLOT(setVisible(bool)));
        QObject::connect(checkWithoutRowid, SIGNAL(toggled(bool)), EditTableDialog, SLOT(setWithoutRowid(bool)));
        QObject::connect(treeWidget, SIGNAL(currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)), EditTableDialog, SLOT(fieldSelectionChanged()));
        QObject::connect(comboSchema, SIGNAL(currentIndexChanged(QString)), EditTableDialog, SLOT(changeSchema(QString)));

        QMetaObject::connectSlotsByName(EditTableDialog);
    } // setupUi

    void retranslateUi(QDialog *EditTableDialog)
    {
        EditTableDialog->setWindowTitle(QCoreApplication::translate("EditTableDialog", "Edit table definition", nullptr));
        groupTable->setTitle(QCoreApplication::translate("EditTableDialog", "Table", nullptr));
        buttonMore->setText(QCoreApplication::translate("EditTableDialog", "Advanced", nullptr));
        label->setText(QCoreApplication::translate("EditTableDialog", "Database schema", nullptr));
        label_1->setText(QCoreApplication::translate("EditTableDialog", "Without Rowid", nullptr));
#if QT_CONFIG(tooltip)
        checkWithoutRowid->setToolTip(QCoreApplication::translate("EditTableDialog", "Make this a 'WITHOUT rowid' table. Setting this flag requires a field of type INTEGER with the primary key flag set and the auto increment flag unset.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupFields->setTitle(QCoreApplication::translate("EditTableDialog", "Fields", nullptr));
        addFieldButton->setText(QCoreApplication::translate("EditTableDialog", "Add field", nullptr));
        removeFieldButton->setText(QCoreApplication::translate("EditTableDialog", "Remove field", nullptr));
        buttonMoveUp->setText(QCoreApplication::translate("EditTableDialog", "Move field up", nullptr));
        buttonMoveDown->setText(QCoreApplication::translate("EditTableDialog", "Move field down", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(8, QCoreApplication::translate("EditTableDialog", "Foreign Key", nullptr));
        ___qtreewidgetitem->setText(7, QCoreApplication::translate("EditTableDialog", "Check", nullptr));
        ___qtreewidgetitem->setText(6, QCoreApplication::translate("EditTableDialog", "Default", nullptr));
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("EditTableDialog", "U", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("EditTableDialog", "AI", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("EditTableDialog", "PK", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("EditTableDialog", "NN", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("EditTableDialog", "Type", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("EditTableDialog", "Name", nullptr));
#if QT_CONFIG(tooltip)
        ___qtreewidgetitem->setToolTip(7, QCoreApplication::translate("EditTableDialog", "Check constraint", nullptr));
        ___qtreewidgetitem->setToolTip(6, QCoreApplication::translate("EditTableDialog", "Default value", nullptr));
        ___qtreewidgetitem->setToolTip(5, QCoreApplication::translate("EditTableDialog", "Unique", nullptr));
        ___qtreewidgetitem->setToolTip(4, QCoreApplication::translate("EditTableDialog", "Autoincrement", nullptr));
        ___qtreewidgetitem->setToolTip(3, QCoreApplication::translate("EditTableDialog", "Primary key", nullptr));
        ___qtreewidgetitem->setToolTip(2, QCoreApplication::translate("EditTableDialog", "Not null", nullptr));
#endif // QT_CONFIG(tooltip)
        labelEditWarning->setText(QCoreApplication::translate("EditTableDialog", "<html><head/><body><p><span style=\" font-weight:600; color:#ff0000;\">Warning: </span>There is something with this table definition that our parser doesn't fully understand. Modifying and saving this table might result in problems.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditTableDialog: public Ui_EditTableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTABLEDIALOG_H
