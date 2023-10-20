/********************************************************************************
** Form generated from reading UI file 'PreferencesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOG_H
#define UI_PREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "sqltextedit.h"

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QFormLayout *formLayout_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_6;
    QComboBox *comboDefaultLocation;
    QHBoxLayout *horizontalLayout;
    QLineEdit *locationEdit;
    QToolButton *setLocationButton;
    QLabel *label_9;
    QComboBox *languageComboBox;
    QLabel *labelToolbarStyle;
    QComboBox *toolbarStyleComboBox;
    QLabel *labelUseRemotes;
    QCheckBox *checkUseRemotes;
    QLabel *labelUpdates;
    QCheckBox *checkUpdates;
    QWidget *tab;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *encodingComboBox;
    QLabel *label_5;
    QCheckBox *foreignKeysCheckBox;
    QLabel *label_8;
    QCheckBox *checkHideSchemaLinebreaks;
    QLabel *label_2;
    QSpinBox *spinPrefetchSize;
    QPushButton *buttonDatabaseAdvanced;
    SqlTextEdit *editDatabaseDefaultSqlText;
    QLabel *labelDatabaseDefaultSqlText;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *defaultFieldTypeComboBox;
    QLabel *defaultFieldTypeLabel;
    QWidget *tab_5;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_4;
    QLabel *label_11;
    QFontComboBox *comboDataBrowserFont;
    QLabel *label_17;
    QSpinBox *spinDataBrowserFontSize;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QLabel *label_symbol_limit;
    QSpinBox *spinSymbolLimit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_12;
    QLabel *lb_binary;
    QLabel *lb_null;
    QLabel *lb_regular;
    QFrame *fr_reg_fg;
    QLabel *lb_text;
    QFrame *fr_null_fg;
    QLabel *lb_background;
    QFrame *fr_bin_fg;
    QFrame *fr_null_bg;
    QFrame *fr_bin_bg;
    QFrame *fr_reg_bg;
    QLineEdit *txtNull;
    QLineEdit *txtRegular;
    QLineEdit *txtBlob;
    QGroupBox *groupBox_4;
    QFormLayout *gridLayout_4;
    QLineEdit *editFilterEscape;
    QLabel *label_18;
    QLabel *label_19;
    QSpinBox *spinFilterDelay;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *treeSyntaxHighlighting;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QSpinBox *spinEditorFontSize;
    QLabel *label_7;
    QSpinBox *spinLogFontSize;
    QLabel *label_13;
    QSpinBox *spinTabSize;
    QLabel *label_14;
    QFontComboBox *comboEditorFont;
    QLabel *label_15;
    QCheckBox *checkErrorIndicators;
    QLabel *label_10;
    QCheckBox *checkHorizontalTiling;
    QLabel *label_20;
    QCheckBox *checkAutoCompletion;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listExtensions;
    QVBoxLayout *verticalLayout_2;
    QToolButton *buttonAddExtension;
    QToolButton *buttonRemoveExtension;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkRegexDisabled;
    QWidget *tabRemote;
    QFormLayout *formLayout_5;
    QLabel *label_21;
    QTableWidget *tableCaCerts;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *tableClientCerts;
    QVBoxLayout *verticalLayout_7;
    QToolButton *buttonClientCertAdd;
    QToolButton *buttonClientCertRemove;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_23;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *editRemoteCloneDirectory;
    QToolButton *buttonRemoteBrowseCloneDirectory;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QString::fromUtf8("PreferencesDialog"));
        PreferencesDialog->resize(597, 614);
        PreferencesDialog->setModal(true);
        verticalLayout = new QVBoxLayout(PreferencesDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(PreferencesDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        formLayout_3 = new QFormLayout(tab_4);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        comboDefaultLocation = new QComboBox(tab_4);
        comboDefaultLocation->addItem(QString());
        comboDefaultLocation->addItem(QString());
        comboDefaultLocation->addItem(QString());
        comboDefaultLocation->setObjectName(QString::fromUtf8("comboDefaultLocation"));

        verticalLayout_6->addWidget(comboDefaultLocation);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        locationEdit = new QLineEdit(tab_4);
        locationEdit->setObjectName(QString::fromUtf8("locationEdit"));
        locationEdit->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(locationEdit->sizePolicy().hasHeightForWidth());
        locationEdit->setSizePolicy(sizePolicy);
        locationEdit->setMinimumSize(QSize(316, 0));

        horizontalLayout->addWidget(locationEdit);

        setLocationButton = new QToolButton(tab_4);
        setLocationButton->setObjectName(QString::fromUtf8("setLocationButton"));

        horizontalLayout->addWidget(setLocationButton);


        verticalLayout_6->addLayout(horizontalLayout);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, verticalLayout_6);

        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_9);

        languageComboBox = new QComboBox(tab_4);
        languageComboBox->setObjectName(QString::fromUtf8("languageComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(languageComboBox->sizePolicy().hasHeightForWidth());
        languageComboBox->setSizePolicy(sizePolicy1);
        languageComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        languageComboBox->setMinimumContentsLength(35);
        languageComboBox->setIconSize(QSize(20, 15));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, languageComboBox);

        labelToolbarStyle = new QLabel(tab_4);
        labelToolbarStyle->setObjectName(QString::fromUtf8("labelToolbarStyle"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, labelToolbarStyle);

        toolbarStyleComboBox = new QComboBox(tab_4);
        toolbarStyleComboBox->addItem(QString());
        toolbarStyleComboBox->addItem(QString());
        toolbarStyleComboBox->addItem(QString());
        toolbarStyleComboBox->addItem(QString());
        toolbarStyleComboBox->addItem(QString());
        toolbarStyleComboBox->setObjectName(QString::fromUtf8("toolbarStyleComboBox"));
        sizePolicy1.setHeightForWidth(toolbarStyleComboBox->sizePolicy().hasHeightForWidth());
        toolbarStyleComboBox->setSizePolicy(sizePolicy1);
        toolbarStyleComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        toolbarStyleComboBox->setMinimumContentsLength(35);
        toolbarStyleComboBox->setIconSize(QSize(20, 15));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, toolbarStyleComboBox);

        labelUseRemotes = new QLabel(tab_4);
        labelUseRemotes->setObjectName(QString::fromUtf8("labelUseRemotes"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, labelUseRemotes);

        checkUseRemotes = new QCheckBox(tab_4);
        checkUseRemotes->setObjectName(QString::fromUtf8("checkUseRemotes"));
        checkUseRemotes->setChecked(true);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, checkUseRemotes);

        labelUpdates = new QLabel(tab_4);
        labelUpdates->setObjectName(QString::fromUtf8("labelUpdates"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, labelUpdates);

        checkUpdates = new QCheckBox(tab_4);
        checkUpdates->setObjectName(QString::fromUtf8("checkUpdates"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, checkUpdates);

        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        formLayout = new QFormLayout(tab);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        encodingComboBox = new QComboBox(tab);
        encodingComboBox->addItem(QString::fromUtf8("UTF-8"));
        encodingComboBox->addItem(QString::fromUtf8("UTF-16"));
        encodingComboBox->setObjectName(QString::fromUtf8("encodingComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, encodingComboBox);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        foreignKeysCheckBox = new QCheckBox(tab);
        foreignKeysCheckBox->setObjectName(QString::fromUtf8("foreignKeysCheckBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, foreignKeysCheckBox);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_8);

        checkHideSchemaLinebreaks = new QCheckBox(tab);
        checkHideSchemaLinebreaks->setObjectName(QString::fromUtf8("checkHideSchemaLinebreaks"));

        formLayout->setWidget(2, QFormLayout::FieldRole, checkHideSchemaLinebreaks);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        spinPrefetchSize = new QSpinBox(tab);
        spinPrefetchSize->setObjectName(QString::fromUtf8("spinPrefetchSize"));
        spinPrefetchSize->setMinimum(255);
        spinPrefetchSize->setMaximum(1000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, spinPrefetchSize);

        buttonDatabaseAdvanced = new QPushButton(tab);
        buttonDatabaseAdvanced->setObjectName(QString::fromUtf8("buttonDatabaseAdvanced"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/down"), QSize(), QIcon::Normal, QIcon::Off);
        buttonDatabaseAdvanced->setIcon(icon);
        buttonDatabaseAdvanced->setCheckable(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, buttonDatabaseAdvanced);

        editDatabaseDefaultSqlText = new SqlTextEdit(tab);
        editDatabaseDefaultSqlText->setObjectName(QString::fromUtf8("editDatabaseDefaultSqlText"));
        editDatabaseDefaultSqlText->setMinimumSize(QSize(20, 0));
        editDatabaseDefaultSqlText->setMaximumSize(QSize(16777215, 200));

        formLayout->setWidget(7, QFormLayout::FieldRole, editDatabaseDefaultSqlText);

        labelDatabaseDefaultSqlText = new QLabel(tab);
        labelDatabaseDefaultSqlText->setObjectName(QString::fromUtf8("labelDatabaseDefaultSqlText"));

        formLayout->setWidget(7, QFormLayout::LabelRole, labelDatabaseDefaultSqlText);

        horizontalSpacer_2 = new QSpacerItem(180, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(8, QFormLayout::FieldRole, horizontalSpacer_2);

        defaultFieldTypeComboBox = new QComboBox(tab);
        defaultFieldTypeComboBox->setObjectName(QString::fromUtf8("defaultFieldTypeComboBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, defaultFieldTypeComboBox);

        defaultFieldTypeLabel = new QLabel(tab);
        defaultFieldTypeLabel->setObjectName(QString::fromUtf8("defaultFieldTypeLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, defaultFieldTypeLabel);

        tabWidget->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_2 = new QGridLayout(tab_5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox_3 = new QGroupBox(tab_5);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        formLayout_4 = new QFormLayout(groupBox_3);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_11);

        comboDataBrowserFont = new QFontComboBox(groupBox_3);
        comboDataBrowserFont->setObjectName(QString::fromUtf8("comboDataBrowserFont"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, comboDataBrowserFont);

        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_17);

        spinDataBrowserFontSize = new QSpinBox(groupBox_3);
        spinDataBrowserFontSize->setObjectName(QString::fromUtf8("spinDataBrowserFontSize"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, spinDataBrowserFontSize);


        verticalLayout_5->addWidget(groupBox_3);

        groupBox_5 = new QGroupBox(tab_5);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_symbol_limit = new QLabel(groupBox_5);
        label_symbol_limit->setObjectName(QString::fromUtf8("label_symbol_limit"));

        gridLayout_5->addWidget(label_symbol_limit, 0, 0, 1, 1);

        spinSymbolLimit = new QSpinBox(groupBox_5);
        spinSymbolLimit->setObjectName(QString::fromUtf8("spinSymbolLimit"));
        sizePolicy.setHeightForWidth(spinSymbolLimit->sizePolicy().hasHeightForWidth());
        spinSymbolLimit->setSizePolicy(sizePolicy);
        spinSymbolLimit->setMinimum(1);
        spinSymbolLimit->setMaximum(20000);

        gridLayout_5->addWidget(spinSymbolLimit, 0, 1, 1, 1);


        verticalLayout_5->addWidget(groupBox_5);

        groupBox_2 = new QGroupBox(tab_5);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_12, 0, 3, 1, 1);

        lb_binary = new QLabel(groupBox_2);
        lb_binary->setObjectName(QString::fromUtf8("lb_binary"));
        lb_binary->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(lb_binary, 3, 0, 1, 1);

        lb_null = new QLabel(groupBox_2);
        lb_null->setObjectName(QString::fromUtf8("lb_null"));
        lb_null->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(lb_null, 2, 0, 1, 1);

        lb_regular = new QLabel(groupBox_2);
        lb_regular->setObjectName(QString::fromUtf8("lb_regular"));
        lb_regular->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(lb_regular, 4, 0, 1, 1);

        fr_reg_fg = new QFrame(groupBox_2);
        fr_reg_fg->setObjectName(QString::fromUtf8("fr_reg_fg"));
        fr_reg_fg->setFocusPolicy(Qt::StrongFocus);
        fr_reg_fg->setAutoFillBackground(true);
        fr_reg_fg->setFrameShape(QFrame::StyledPanel);
        fr_reg_fg->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(fr_reg_fg, 4, 1, 1, 1);

        lb_text = new QLabel(groupBox_2);
        lb_text->setObjectName(QString::fromUtf8("lb_text"));
        lb_text->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lb_text, 0, 1, 1, 1);

        fr_null_fg = new QFrame(groupBox_2);
        fr_null_fg->setObjectName(QString::fromUtf8("fr_null_fg"));
        fr_null_fg->setFocusPolicy(Qt::StrongFocus);
        fr_null_fg->setAutoFillBackground(true);
        fr_null_fg->setFrameShape(QFrame::StyledPanel);
        fr_null_fg->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(fr_null_fg, 2, 1, 1, 1);

        lb_background = new QLabel(groupBox_2);
        lb_background->setObjectName(QString::fromUtf8("lb_background"));
        lb_background->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lb_background, 0, 2, 1, 1);

        fr_bin_fg = new QFrame(groupBox_2);
        fr_bin_fg->setObjectName(QString::fromUtf8("fr_bin_fg"));
        fr_bin_fg->setFocusPolicy(Qt::StrongFocus);
        fr_bin_fg->setAutoFillBackground(true);
        fr_bin_fg->setFrameShape(QFrame::StyledPanel);
        fr_bin_fg->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(fr_bin_fg, 3, 1, 1, 1);

        fr_null_bg = new QFrame(groupBox_2);
        fr_null_bg->setObjectName(QString::fromUtf8("fr_null_bg"));
        fr_null_bg->setFocusPolicy(Qt::StrongFocus);
        fr_null_bg->setAutoFillBackground(true);
        fr_null_bg->setFrameShape(QFrame::StyledPanel);
        fr_null_bg->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(fr_null_bg, 2, 2, 1, 1);

        fr_bin_bg = new QFrame(groupBox_2);
        fr_bin_bg->setObjectName(QString::fromUtf8("fr_bin_bg"));
        fr_bin_bg->setFocusPolicy(Qt::StrongFocus);
        fr_bin_bg->setAutoFillBackground(true);
        fr_bin_bg->setFrameShape(QFrame::StyledPanel);
        fr_bin_bg->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(fr_bin_bg, 3, 2, 1, 1);

        fr_reg_bg = new QFrame(groupBox_2);
        fr_reg_bg->setObjectName(QString::fromUtf8("fr_reg_bg"));
        fr_reg_bg->setFocusPolicy(Qt::StrongFocus);
        fr_reg_bg->setAutoFillBackground(true);
        fr_reg_bg->setFrameShape(QFrame::StyledPanel);
        fr_reg_bg->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(fr_reg_bg, 4, 2, 1, 1);

        txtNull = new QLineEdit(groupBox_2);
        txtNull->setObjectName(QString::fromUtf8("txtNull"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(txtNull->sizePolicy().hasHeightForWidth());
        txtNull->setSizePolicy(sizePolicy2);
        QFont font;
        font.setItalic(true);
        txtNull->setFont(font);
        txtNull->setText(QString::fromUtf8("NULL"));

        gridLayout_3->addWidget(txtNull, 2, 3, 1, 1);

        txtRegular = new QLineEdit(groupBox_2);
        txtRegular->setObjectName(QString::fromUtf8("txtRegular"));
        sizePolicy2.setHeightForWidth(txtRegular->sizePolicy().hasHeightForWidth());
        txtRegular->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setItalic(false);
        txtRegular->setFont(font1);
        txtRegular->setText(QString::fromUtf8("Preview only (N/A)"));
        txtRegular->setReadOnly(true);

        gridLayout_3->addWidget(txtRegular, 4, 3, 1, 1);

        txtBlob = new QLineEdit(groupBox_2);
        txtBlob->setObjectName(QString::fromUtf8("txtBlob"));
        sizePolicy2.setHeightForWidth(txtBlob->sizePolicy().hasHeightForWidth());
        txtBlob->setSizePolicy(sizePolicy2);
        txtBlob->setFont(font);
        txtBlob->setText(QString::fromUtf8("BLOB"));
        txtBlob->setReadOnly(false);

        gridLayout_3->addWidget(txtBlob, 3, 3, 1, 1);


        verticalLayout_5->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(tab_5);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QFormLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        editFilterEscape = new QLineEdit(groupBox_4);
        editFilterEscape->setObjectName(QString::fromUtf8("editFilterEscape"));
        editFilterEscape->setMaxLength(1);

        gridLayout_4->setWidget(1, QFormLayout::FieldRole, editFilterEscape);

        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_4->setWidget(1, QFormLayout::LabelRole, label_18);

        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_4->setWidget(0, QFormLayout::LabelRole, label_19);

        spinFilterDelay = new QSpinBox(groupBox_4);
        spinFilterDelay->setObjectName(QString::fromUtf8("spinFilterDelay"));
        spinFilterDelay->setMaximum(5000);

        gridLayout_4->setWidget(0, QFormLayout::FieldRole, spinFilterDelay);


        verticalLayout_5->addWidget(groupBox_4);


        gridLayout_2->addLayout(verticalLayout_5, 0, 0, 2, 2);

        tabWidget->addTab(tab_5, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        treeSyntaxHighlighting = new QTreeWidget(tab_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeSyntaxHighlighting);
        __qtreewidgetitem->setText(0, QString::fromUtf8("keyword"));
        new QTreeWidgetItem(treeSyntaxHighlighting);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeSyntaxHighlighting);
        __qtreewidgetitem1->setText(0, QString::fromUtf8("table"));
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeSyntaxHighlighting);
        __qtreewidgetitem2->setText(0, QString::fromUtf8("comment"));
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeSyntaxHighlighting);
        __qtreewidgetitem3->setText(0, QString::fromUtf8("identifier"));
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeSyntaxHighlighting);
        __qtreewidgetitem4->setText(0, QString::fromUtf8("string"));
        new QTreeWidgetItem(treeSyntaxHighlighting);
        treeSyntaxHighlighting->setObjectName(QString::fromUtf8("treeSyntaxHighlighting"));
        treeSyntaxHighlighting->setProperty("showDropIndicator", QVariant(false));
        treeSyntaxHighlighting->setRootIsDecorated(false);

        verticalLayout_4->addWidget(treeSyntaxHighlighting);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        spinEditorFontSize = new QSpinBox(tab_2);
        spinEditorFontSize->setObjectName(QString::fromUtf8("spinEditorFontSize"));
        spinEditorFontSize->setMinimum(1);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, spinEditorFontSize);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        spinLogFontSize = new QSpinBox(tab_2);
        spinLogFontSize->setObjectName(QString::fromUtf8("spinLogFontSize"));
        spinLogFontSize->setMinimum(1);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, spinLogFontSize);

        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_13);

        spinTabSize = new QSpinBox(tab_2);
        spinTabSize->setObjectName(QString::fromUtf8("spinTabSize"));
        spinTabSize->setMinimum(1);
        spinTabSize->setMaximum(16);
        spinTabSize->setValue(4);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, spinTabSize);

        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_14);

        comboEditorFont = new QFontComboBox(tab_2);
        comboEditorFont->setObjectName(QString::fromUtf8("comboEditorFont"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, comboEditorFont);

        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_15);

        checkErrorIndicators = new QCheckBox(tab_2);
        checkErrorIndicators->setObjectName(QString::fromUtf8("checkErrorIndicators"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, checkErrorIndicators);

        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_10);

        checkHorizontalTiling = new QCheckBox(tab_2);
        checkHorizontalTiling->setObjectName(QString::fromUtf8("checkHorizontalTiling"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, checkHorizontalTiling);

        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_20);

        checkAutoCompletion = new QCheckBox(tab_2);
        checkAutoCompletion->setObjectName(QString::fromUtf8("checkAutoCompletion"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, checkAutoCompletion);


        verticalLayout_4->addLayout(formLayout_2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listExtensions = new QListWidget(tab_3);
        listExtensions->setObjectName(QString::fromUtf8("listExtensions"));
        listExtensions->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listExtensions->setProperty("showDropIndicator", QVariant(false));

        horizontalLayout_2->addWidget(listExtensions);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        buttonAddExtension = new QToolButton(tab_3);
        buttonAddExtension->setObjectName(QString::fromUtf8("buttonAddExtension"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/load_extension"), QSize(), QIcon::Normal, QIcon::Off);
        buttonAddExtension->setIcon(icon1);

        verticalLayout_2->addWidget(buttonAddExtension);

        buttonRemoveExtension = new QToolButton(tab_3);
        buttonRemoveExtension->setObjectName(QString::fromUtf8("buttonRemoveExtension"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/remove_extension"), QSize(), QIcon::Normal, QIcon::Off);
        buttonRemoveExtension->setIcon(icon2);

        verticalLayout_2->addWidget(buttonRemoveExtension);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        checkRegexDisabled = new QCheckBox(tab_3);
        checkRegexDisabled->setObjectName(QString::fromUtf8("checkRegexDisabled"));

        verticalLayout_3->addWidget(checkRegexDisabled);

        tabWidget->addTab(tab_3, QString());
        tabRemote = new QWidget();
        tabRemote->setObjectName(QString::fromUtf8("tabRemote"));
        formLayout_5 = new QFormLayout(tabRemote);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label_21 = new QLabel(tabRemote);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_21);

        tableCaCerts = new QTableWidget(tabRemote);
        if (tableCaCerts->columnCount() < 5)
            tableCaCerts->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableCaCerts->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableCaCerts->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableCaCerts->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableCaCerts->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableCaCerts->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableCaCerts->setObjectName(QString::fromUtf8("tableCaCerts"));
        tableCaCerts->setMinimumSize(QSize(550, 0));
        tableCaCerts->setSelectionMode(QAbstractItemView::SingleSelection);
        tableCaCerts->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableCaCerts->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableCaCerts->horizontalHeader()->setHighlightSections(false);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, tableCaCerts);

        label_22 = new QLabel(tabRemote);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_22);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tableClientCerts = new QTableWidget(tabRemote);
        if (tableClientCerts->columnCount() < 6)
            tableClientCerts->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableClientCerts->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableClientCerts->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableClientCerts->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableClientCerts->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableClientCerts->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableClientCerts->setHorizontalHeaderItem(5, __qtablewidgetitem10);
        tableClientCerts->setObjectName(QString::fromUtf8("tableClientCerts"));
        tableClientCerts->setMinimumSize(QSize(550, 0));
        tableClientCerts->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableClientCerts->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableClientCerts->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableClientCerts->horizontalHeader()->setHighlightSections(false);

        horizontalLayout_3->addWidget(tableClientCerts);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        buttonClientCertAdd = new QToolButton(tabRemote);
        buttonClientCertAdd->setObjectName(QString::fromUtf8("buttonClientCertAdd"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/trigger_create"), QSize(), QIcon::Normal, QIcon::Off);
        buttonClientCertAdd->setIcon(icon3);

        verticalLayout_7->addWidget(buttonClientCertAdd);

        buttonClientCertRemove = new QToolButton(tabRemote);
        buttonClientCertRemove->setObjectName(QString::fromUtf8("buttonClientCertRemove"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/trigger_delete"), QSize(), QIcon::Normal, QIcon::Off);
        buttonClientCertRemove->setIcon(icon4);

        verticalLayout_7->addWidget(buttonClientCertRemove);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);


        horizontalLayout_3->addLayout(verticalLayout_7);


        formLayout_5->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);

        label_23 = new QLabel(tabRemote);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_23);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        editRemoteCloneDirectory = new QLineEdit(tabRemote);
        editRemoteCloneDirectory->setObjectName(QString::fromUtf8("editRemoteCloneDirectory"));
        editRemoteCloneDirectory->setEnabled(false);
        sizePolicy.setHeightForWidth(editRemoteCloneDirectory->sizePolicy().hasHeightForWidth());
        editRemoteCloneDirectory->setSizePolicy(sizePolicy);
        editRemoteCloneDirectory->setMinimumSize(QSize(316, 0));

        horizontalLayout_4->addWidget(editRemoteCloneDirectory);

        buttonRemoteBrowseCloneDirectory = new QToolButton(tabRemote);
        buttonRemoteBrowseCloneDirectory->setObjectName(QString::fromUtf8("buttonRemoteBrowseCloneDirectory"));

        horizontalLayout_4->addWidget(buttonRemoteBrowseCloneDirectory);


        formLayout_5->setLayout(0, QFormLayout::FieldRole, horizontalLayout_4);

        tabWidget->addTab(tabRemote, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label_4->setBuddy(locationEdit);
        label_9->setBuddy(languageComboBox);
        labelToolbarStyle->setBuddy(languageComboBox);
        labelUpdates->setBuddy(checkUpdates);
        label->setBuddy(encodingComboBox);
        label_5->setBuddy(foreignKeysCheckBox);
        label_8->setBuddy(checkHideSchemaLinebreaks);
        label_2->setBuddy(spinPrefetchSize);
        labelDatabaseDefaultSqlText->setBuddy(editDatabaseDefaultSqlText);
        label_11->setBuddy(comboDataBrowserFont);
        label_17->setBuddy(spinDataBrowserFontSize);
        label_symbol_limit->setBuddy(spinSymbolLimit);
        label_12->setBuddy(txtNull);
        label_18->setBuddy(editFilterEscape);
        label_19->setBuddy(spinFilterDelay);
        label_6->setBuddy(spinEditorFontSize);
        label_7->setBuddy(spinLogFontSize);
        label_13->setBuddy(spinTabSize);
        label_14->setBuddy(comboEditorFont);
        label_15->setBuddy(checkErrorIndicators);
        label_10->setBuddy(checkHorizontalTiling);
        label_20->setBuddy(checkAutoCompletion);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(comboDefaultLocation, locationEdit);
        QWidget::setTabOrder(locationEdit, setLocationButton);
        QWidget::setTabOrder(setLocationButton, languageComboBox);
        QWidget::setTabOrder(languageComboBox, toolbarStyleComboBox);
        QWidget::setTabOrder(toolbarStyleComboBox, checkUseRemotes);
        QWidget::setTabOrder(checkUseRemotes, checkUpdates);
        QWidget::setTabOrder(checkUpdates, encodingComboBox);
        QWidget::setTabOrder(encodingComboBox, foreignKeysCheckBox);
        QWidget::setTabOrder(foreignKeysCheckBox, checkHideSchemaLinebreaks);
        QWidget::setTabOrder(checkHideSchemaLinebreaks, spinPrefetchSize);
        QWidget::setTabOrder(spinPrefetchSize, defaultFieldTypeComboBox);
        QWidget::setTabOrder(defaultFieldTypeComboBox, buttonDatabaseAdvanced);
        QWidget::setTabOrder(buttonDatabaseAdvanced, editDatabaseDefaultSqlText);
        QWidget::setTabOrder(editDatabaseDefaultSqlText, comboDataBrowserFont);
        QWidget::setTabOrder(comboDataBrowserFont, spinDataBrowserFontSize);
        QWidget::setTabOrder(spinDataBrowserFontSize, fr_null_fg);
        QWidget::setTabOrder(fr_null_fg, fr_null_bg);
        QWidget::setTabOrder(fr_null_bg, txtNull);
        QWidget::setTabOrder(txtNull, fr_bin_fg);
        QWidget::setTabOrder(fr_bin_fg, fr_bin_bg);
        QWidget::setTabOrder(fr_bin_bg, txtBlob);
        QWidget::setTabOrder(txtBlob, fr_reg_fg);
        QWidget::setTabOrder(fr_reg_fg, fr_reg_bg);
        QWidget::setTabOrder(fr_reg_bg, txtRegular);
        QWidget::setTabOrder(txtRegular, spinFilterDelay);
        QWidget::setTabOrder(spinFilterDelay, editFilterEscape);
        QWidget::setTabOrder(editFilterEscape, treeSyntaxHighlighting);
        QWidget::setTabOrder(treeSyntaxHighlighting, comboEditorFont);
        QWidget::setTabOrder(comboEditorFont, spinEditorFontSize);
        QWidget::setTabOrder(spinEditorFontSize, spinLogFontSize);
        QWidget::setTabOrder(spinLogFontSize, spinTabSize);
        QWidget::setTabOrder(spinTabSize, checkAutoCompletion);
        QWidget::setTabOrder(checkAutoCompletion, checkErrorIndicators);
        QWidget::setTabOrder(checkErrorIndicators, checkHorizontalTiling);
        QWidget::setTabOrder(checkHorizontalTiling, listExtensions);
        QWidget::setTabOrder(listExtensions, buttonAddExtension);
        QWidget::setTabOrder(buttonAddExtension, buttonRemoveExtension);
        QWidget::setTabOrder(buttonRemoveExtension, checkRegexDisabled);
        QWidget::setTabOrder(checkRegexDisabled, editRemoteCloneDirectory);
        QWidget::setTabOrder(editRemoteCloneDirectory, buttonRemoteBrowseCloneDirectory);
        QWidget::setTabOrder(buttonRemoteBrowseCloneDirectory, tableCaCerts);
        QWidget::setTabOrder(tableCaCerts, tableClientCerts);
        QWidget::setTabOrder(tableClientCerts, buttonClientCertAdd);
        QWidget::setTabOrder(buttonClientCertAdd, buttonClientCertRemove);
        QWidget::setTabOrder(buttonClientCertRemove, tabWidget);

        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesDialog, SLOT(saveSettings()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesDialog, SLOT(reject()));
        QObject::connect(buttonAddExtension, SIGNAL(clicked()), PreferencesDialog, SLOT(addExtension()));
        QObject::connect(buttonRemoveExtension, SIGNAL(clicked()), PreferencesDialog, SLOT(removeExtension()));
        QObject::connect(treeSyntaxHighlighting, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), PreferencesDialog, SLOT(showColourDialog(QTreeWidgetItem*,int)));
        QObject::connect(setLocationButton, SIGNAL(clicked()), PreferencesDialog, SLOT(chooseLocation()));
        QObject::connect(buttonDatabaseAdvanced, SIGNAL(toggled(bool)), labelDatabaseDefaultSqlText, SLOT(setVisible(bool)));
        QObject::connect(buttonDatabaseAdvanced, SIGNAL(toggled(bool)), editDatabaseDefaultSqlText, SLOT(setVisible(bool)));
        QObject::connect(checkUseRemotes, SIGNAL(toggled(bool)), PreferencesDialog, SLOT(activateRemoteTab(bool)));
        QObject::connect(buttonClientCertAdd, SIGNAL(clicked()), PreferencesDialog, SLOT(addClientCertificate()));
        QObject::connect(buttonClientCertRemove, SIGNAL(clicked()), PreferencesDialog, SLOT(removeClientCertificate()));
        QObject::connect(buttonRemoteBrowseCloneDirectory, SIGNAL(clicked()), PreferencesDialog, SLOT(chooseRemoteCloneDirectory()));

        tabWidget->setCurrentIndex(0);
        toolbarStyleComboBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QCoreApplication::translate("PreferencesDialog", "Preferences", nullptr));
        label_4->setText(QCoreApplication::translate("PreferencesDialog", "Default &location", nullptr));
        comboDefaultLocation->setItemText(0, QCoreApplication::translate("PreferencesDialog", "Remember last location", nullptr));
        comboDefaultLocation->setItemText(1, QCoreApplication::translate("PreferencesDialog", "Always use this location", nullptr));
        comboDefaultLocation->setItemText(2, QCoreApplication::translate("PreferencesDialog", "Remember last location for session only", nullptr));

        setLocationButton->setText(QCoreApplication::translate("PreferencesDialog", "...", nullptr));
        label_9->setText(QCoreApplication::translate("PreferencesDialog", "Lan&guage", nullptr));
        labelToolbarStyle->setText(QCoreApplication::translate("PreferencesDialog", "Toolbar style", nullptr));
        toolbarStyleComboBox->setItemText(0, QCoreApplication::translate("PreferencesDialog", "Only display the icon", nullptr));
        toolbarStyleComboBox->setItemText(1, QCoreApplication::translate("PreferencesDialog", "Only display the text", nullptr));
        toolbarStyleComboBox->setItemText(2, QCoreApplication::translate("PreferencesDialog", "The text appears beside the icon", nullptr));
        toolbarStyleComboBox->setItemText(3, QCoreApplication::translate("PreferencesDialog", "The text appears under the icon", nullptr));
        toolbarStyleComboBox->setItemText(4, QCoreApplication::translate("PreferencesDialog", "Follow the style", nullptr));

        labelUseRemotes->setText(QCoreApplication::translate("PreferencesDialog", "Show remote options", nullptr));
        checkUseRemotes->setText(QCoreApplication::translate("PreferencesDialog", "enabled", nullptr));
        labelUpdates->setText(QCoreApplication::translate("PreferencesDialog", "Automatic &updates", nullptr));
        checkUpdates->setText(QCoreApplication::translate("PreferencesDialog", "enabled", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("PreferencesDialog", "&General", nullptr));
        label->setText(QCoreApplication::translate("PreferencesDialog", "Database &encoding", nullptr));

#if QT_CONFIG(tooltip)
        label_5->setToolTip(QCoreApplication::translate("PreferencesDialog", "Open databases with foreign keys enabled.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("PreferencesDialog", "&Foreign keys", nullptr));
        foreignKeysCheckBox->setText(QCoreApplication::translate("PreferencesDialog", "enabled", nullptr));
        label_8->setText(QCoreApplication::translate("PreferencesDialog", "Remove line breaks in schema &view", nullptr));
        checkHideSchemaLinebreaks->setText(QCoreApplication::translate("PreferencesDialog", "enabled", nullptr));
        label_2->setText(QCoreApplication::translate("PreferencesDialog", "Prefetch block si&ze", nullptr));
        buttonDatabaseAdvanced->setText(QCoreApplication::translate("PreferencesDialog", "Advanced", nullptr));
        labelDatabaseDefaultSqlText->setText(QCoreApplication::translate("PreferencesDialog", "SQ&L to execute after opening database", nullptr));
        defaultFieldTypeLabel->setText(QCoreApplication::translate("PreferencesDialog", "Default field type", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("PreferencesDialog", "&Database", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("PreferencesDialog", "Font", nullptr));
        label_11->setText(QCoreApplication::translate("PreferencesDialog", "&Font", nullptr));
        label_17->setText(QCoreApplication::translate("PreferencesDialog", "Font si&ze", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("PreferencesDialog", "Content", nullptr));
        label_symbol_limit->setText(QCoreApplication::translate("PreferencesDialog", "Symbol limit in cell", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PreferencesDialog", "Field display", nullptr));
        label_12->setText(QCoreApplication::translate("PreferencesDialog", "Displayed &text", nullptr));
        lb_binary->setText(QCoreApplication::translate("PreferencesDialog", "Binary", nullptr));
        lb_null->setText(QCoreApplication::translate("PreferencesDialog", "NULL", nullptr));
        lb_regular->setText(QCoreApplication::translate("PreferencesDialog", "Regular", nullptr));
        lb_text->setText(QCoreApplication::translate("PreferencesDialog", "Text color", nullptr));
        lb_background->setText(QCoreApplication::translate("PreferencesDialog", "Background color", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("PreferencesDialog", "Filters", nullptr));
        label_18->setText(QCoreApplication::translate("PreferencesDialog", "Escape character", nullptr));
        label_19->setText(QCoreApplication::translate("PreferencesDialog", "Delay time (&ms)", nullptr));
#if QT_CONFIG(tooltip)
        spinFilterDelay->setToolTip(QCoreApplication::translate("PreferencesDialog", "Set the waiting time before a new filter value is applied. Can be set to 0 for disabling waiting.", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("PreferencesDialog", "Data &Browser", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeSyntaxHighlighting->headerItem();
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("PreferencesDialog", "Underline", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("PreferencesDialog", "Italic", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("PreferencesDialog", "Bold", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("PreferencesDialog", "Colour", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("PreferencesDialog", "Context", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("PreferencesDialog", "Settings name", nullptr));

        const bool __sortingEnabled = treeSyntaxHighlighting->isSortingEnabled();
        treeSyntaxHighlighting->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeSyntaxHighlighting->topLevelItem(0);
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("PreferencesDialog", "Keyword", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeSyntaxHighlighting->topLevelItem(1);
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("PreferencesDialog", "Function", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("PreferencesDialog", "function", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = treeSyntaxHighlighting->topLevelItem(2);
        ___qtreewidgetitem3->setText(1, QCoreApplication::translate("PreferencesDialog", "Table", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = treeSyntaxHighlighting->topLevelItem(3);
        ___qtreewidgetitem4->setText(1, QCoreApplication::translate("PreferencesDialog", "Comment", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = treeSyntaxHighlighting->topLevelItem(4);
        ___qtreewidgetitem5->setText(1, QCoreApplication::translate("PreferencesDialog", "Identifier", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = treeSyntaxHighlighting->topLevelItem(5);
        ___qtreewidgetitem6->setText(1, QCoreApplication::translate("PreferencesDialog", "String", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = treeSyntaxHighlighting->topLevelItem(6);
        ___qtreewidgetitem7->setText(1, QCoreApplication::translate("PreferencesDialog", "Current line", nullptr));
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("PreferencesDialog", "currentline", nullptr));
        treeSyntaxHighlighting->setSortingEnabled(__sortingEnabled);

        label_6->setText(QCoreApplication::translate("PreferencesDialog", "SQL &editor font size", nullptr));
        label_7->setText(QCoreApplication::translate("PreferencesDialog", "SQL &results font size", nullptr));
        label_13->setText(QCoreApplication::translate("PreferencesDialog", "Tab size", nullptr));
        label_14->setText(QCoreApplication::translate("PreferencesDialog", "SQL editor &font", nullptr));
        label_15->setText(QCoreApplication::translate("PreferencesDialog", "Error indicators", nullptr));
#if QT_CONFIG(tooltip)
        checkErrorIndicators->setToolTip(QCoreApplication::translate("PreferencesDialog", "When set, the SQL code lines that caused errors during the last execution are highlighted and the results frame indicates the error in the background", nullptr));
#endif // QT_CONFIG(tooltip)
        checkErrorIndicators->setText(QCoreApplication::translate("PreferencesDialog", "enabled", nullptr));
        label_10->setText(QCoreApplication::translate("PreferencesDialog", "Hori&zontal tiling", nullptr));
#if QT_CONFIG(tooltip)
        checkHorizontalTiling->setToolTip(QCoreApplication::translate("PreferencesDialog", "If enabled the SQL code editor and the result table view are shown side by side instead of one over the other.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkHorizontalTiling->setText(QCoreApplication::translate("PreferencesDialog", "enabled", nullptr));
        label_20->setText(QCoreApplication::translate("PreferencesDialog", "Code co&mpletion", nullptr));
        checkAutoCompletion->setText(QCoreApplication::translate("PreferencesDialog", "enabled", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("PreferencesDialog", "&SQL", nullptr));
        label_3->setText(QCoreApplication::translate("PreferencesDialog", "Select extensions to load for every database:", nullptr));
#if QT_CONFIG(tooltip)
        buttonAddExtension->setToolTip(QCoreApplication::translate("PreferencesDialog", "Add extension", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        buttonRemoveExtension->setToolTip(QCoreApplication::translate("PreferencesDialog", "Remove extension", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkRegexDisabled->setToolTip(QCoreApplication::translate("PreferencesDialog", "<html><head/><body><p>While supporting the REGEXP operator SQLite doesn't implement any regular expression<br/>algorithm but calls back the running application. DB Browser for SQLite implements this<br/>algorithm for you to let you use REGEXP out of the box. However, as there are multiple possible<br/>implementations of this and you might want to use another one, you're free to disable the<br/>application's implementation and load your own by using an extension. Requires restart of the application.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkRegexDisabled->setText(QCoreApplication::translate("PreferencesDialog", "Disable Regular Expression extension", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("PreferencesDialog", "&Extensions", nullptr));
        label_21->setText(QCoreApplication::translate("PreferencesDialog", "CA certificates", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableCaCerts->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PreferencesDialog", "Subject CN", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem->setToolTip(QCoreApplication::translate("PreferencesDialog", "Common Name", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem1 = tableCaCerts->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PreferencesDialog", "Subject O", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem1->setToolTip(QCoreApplication::translate("PreferencesDialog", "Organization", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem2 = tableCaCerts->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("PreferencesDialog", "Valid from", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableCaCerts->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("PreferencesDialog", "Valid to", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableCaCerts->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("PreferencesDialog", "Serial number", nullptr));
        label_22->setText(QCoreApplication::translate("PreferencesDialog", "Your certificates", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableClientCerts->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("PreferencesDialog", "File", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableClientCerts->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("PreferencesDialog", "Subject CN", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem6->setToolTip(QCoreApplication::translate("PreferencesDialog", "Subject Common Name", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem7 = tableClientCerts->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("PreferencesDialog", "Issuer CN", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem7->setToolTip(QCoreApplication::translate("PreferencesDialog", "Issuer Common Name", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem8 = tableClientCerts->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("PreferencesDialog", "Valid from", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableClientCerts->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("PreferencesDialog", "Valid to", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableClientCerts->horizontalHeaderItem(5);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("PreferencesDialog", "Serial number", nullptr));
        buttonClientCertRemove->setText(QCoreApplication::translate("PreferencesDialog", "...", nullptr));
        label_23->setText(QCoreApplication::translate("PreferencesDialog", "Clone databases into", nullptr));
        buttonRemoteBrowseCloneDirectory->setText(QCoreApplication::translate("PreferencesDialog", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabRemote), QCoreApplication::translate("PreferencesDialog", "Remote", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H
