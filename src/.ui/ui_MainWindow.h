/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ExtendedTableWidget.h"
#include "sqltextedit.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *fileNewAction;
    QAction *fileOpenAction;
    QAction *fileCloseAction;
    QAction *fileRevertAction;
    QAction *fileSaveAction;
    QAction *fileCompactAction;
    QAction *fileExitAction;
    QAction *fileImportSQLAction;
    QAction *fileImportCSVAction;
    QAction *fileExportSQLAction;
    QAction *fileExportCSVAction;
    QAction *editCreateTableAction;
    QAction *editDeleteObjectAction;
    QAction *editModifyObjectAction;
    QAction *editCreateIndexAction;
    QAction *viewPreferencesAction;
    QAction *viewDBToolbarAction;
    QAction *helpWhatsThisAction;
    QAction *helpAboutAction;
    QAction *actionRecent_y_opened;
    QAction *actionSqlOpenTab;
    QAction *actionExecuteSql;
    QAction *actionSqlOpenFile;
    QAction *actionSqlSaveFile;
    QAction *actionLoadExtension;
    QAction *actionSqlExecuteLine;
    QAction *actionExportCsvPopup;
    QAction *actionWiki;
    QAction *actionBug_report;
    QAction *actionWebsite;
    QAction *actionSaveProject;
    QAction *actionOpenProject;
    QAction *fileAttachAction;
    QAction *actionEncryption;
    QAction *actionSqlSaveFileAs;
    QAction *actionSqlSaveFilePopup;
    QAction *actionEditBrowseTable;
    QAction *actionEditCopyCreateStatement;
    QAction *actionBrowseTableEditDisplayFormat;
    QAction *actionShowRowidColumn;
    QAction *actionSetTableEncoding;
    QAction *actionSetAllTablesEncoding;
    QAction *actionSqlCipherFaq;
    QAction *fileExportJsonAction;
    QAction *actionRefresh;
    QAction *fileOpenReadOnlyAction;
    QAction *actionUnlockViewEditing;
    QAction *actionSqlResultsSave;
    QAction *actionSqlFind;
    QAction *actionSqlFindReplace;
    QAction *actionSqlResultsExportCsv;
    QAction *actionSqlResultsSaveAsView;
    QAction *actionHideColumns;
    QAction *actionShowAllColumns;
    QAction *viewProjectToolbarAction;
    QAction *viewExtraDBToolbarAction;
    QWidget *centralwidget;
    QTabWidget *mainTab;
    QWidget *browser;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QComboBox *comboBrowseTable;
    QToolButton *buttonRefresh;
    QToolButton *buttonClearFilters;
    QToolButton *buttonSaveFilterAsView;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonNewRecord;
    QPushButton *buttonDeleteRecord;
    QGridLayout *gridLayout_4;
    QToolButton *buttonBegin;
    QToolButton *buttonPrevious;
    QLabel *labelRecordset;
    QToolButton *buttonNext;
    QToolButton *buttonEnd;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonGoto;
    QLineEdit *editGoto;
    ExtendedTableWidget *dataTable;
    QWidget *pragmas;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollareaPragmas;
    QWidget *scrollAreaWidgetContents;
    QFormLayout *formLayout;
    QLabel *labelPragmaAutoVacuum;
    QComboBox *comboboxPragmaAutoVacuum;
    QLabel *labelPragmaAutomaticIndex;
    QCheckBox *checkboxPragmaAutomaticIndex;
    QLabel *labelPragmaCheckpointFullFsync;
    QCheckBox *checkboxPragmaCheckpointFullFsync;
    QLabel *labelPragmaForeignKeys;
    QCheckBox *checkboxPragmaForeignKeys;
    QLabel *labelPragmaFullFsync;
    QCheckBox *checkboxPragmaFullFsync;
    QLabel *labelPragmaIgnoreCheckConstraints;
    QCheckBox *checkboxPragmaIgnoreCheckConstraints;
    QLabel *labelPragmaJournalMode;
    QComboBox *comboboxPragmaJournalMode;
    QLabel *labelJournalSizeLimit;
    QSpinBox *spinPragmaJournalSizeLimit;
    QLabel *labelPragmaLockingMode;
    QComboBox *comboboxPragmaLockingMode;
    QLabel *labelPragmaMaxPageCount;
    QSpinBox *spinPragmaMaxPageCount;
    QLabel *labelPragmaPageSize;
    QSpinBox *spinPragmaPageSize;
    QLabel *labelPragmaRecursiveTriggers;
    QCheckBox *checkboxPragmaRecursiveTriggers;
    QLabel *labelPragmaSecureDelete;
    QCheckBox *checkboxPragmaSecureDelete;
    QLabel *labelPragmaSynchronous;
    QComboBox *comboboxPragmaSynchronous;
    QLabel *labelPragmaTempStore;
    QComboBox *comboboxPragmaTempStore;
    QLabel *labelPragmaUserVersion;
    QSpinBox *spinPragmaUserVersion;
    QLabel *labelPragmaWalAutoCheckpoint;
    QSpinBox *spinPragmaWalAutoCheckpoint;
    QDialogButtonBox *buttonBoxPragmas;
    QWidget *query;
    QGridLayout *gridLayout_3;
    QTabWidget *tabSqlAreas;
    QToolBar *toolbarSql;
    QMenuBar *menubar;
    QMenu *fileMenu;
    QMenu *menuImport;
    QMenu *menuExport;
    QMenu *editMenu;
    QMenu *viewMenu;
    QMenu *helpMenu;
    QStatusBar *statusbar;
    QToolBar *toolbarDB;
    QDockWidget *dockEdit;
    QWidget *dockWidgetContents_4;
    QDockWidget *dockLog;
    QWidget *dockWidgetContents;
    QStackedWidget *stackLog;
    SqlTextEdit *editLogUser;
    SqlTextEdit *editLogApplication;
    QLabel *labelLogSubmittedBy;
    QComboBox *comboLogSubmittedBy;
    QPushButton *buttonLogClear;
    QDockWidget *dockPlot;
    QWidget *dockWidgetContents_2;
    QDockWidget *dockSchema;
    QWidget *dockWidgetContents_3;
    QTreeView *treeSchemaDock;
    QDockWidget *dockRemote;
    QWidget *dockWidgetContents_5;
    QToolBar *toolbarExtraDB;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_12;
    QGridLayout *gridLayout;
    QTreeView *dbTreeWidget;
    QToolBar *dbToolbar_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1223, 769);
        MainWindow->setMinimumSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/appicon"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        fileNewAction = new QAction(MainWindow);
        fileNewAction->setObjectName(QString::fromUtf8("fileNewAction"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/db_new"), QSize(), QIcon::Normal, QIcon::Off);
        fileNewAction->setIcon(icon1);
        fileNewAction->setMenuRole(QAction::NoRole);
        fileOpenAction = new QAction(MainWindow);
        fileOpenAction->setObjectName(QString::fromUtf8("fileOpenAction"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/db_open"), QSize(), QIcon::Normal, QIcon::Off);
        fileOpenAction->setIcon(icon2);
        fileOpenAction->setMenuRole(QAction::NoRole);
        fileCloseAction = new QAction(MainWindow);
        fileCloseAction->setObjectName(QString::fromUtf8("fileCloseAction"));
        fileCloseAction->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/close"), QSize(), QIcon::Normal, QIcon::Off);
        fileCloseAction->setIcon(icon3);
        fileCloseAction->setMenuRole(QAction::NoRole);
        fileRevertAction = new QAction(MainWindow);
        fileRevertAction->setObjectName(QString::fromUtf8("fileRevertAction"));
        fileRevertAction->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/db_revert"), QSize(), QIcon::Normal, QIcon::Off);
        fileRevertAction->setIcon(icon4);
        fileRevertAction->setMenuRole(QAction::NoRole);
        fileSaveAction = new QAction(MainWindow);
        fileSaveAction->setObjectName(QString::fromUtf8("fileSaveAction"));
        fileSaveAction->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/db_save"), QSize(), QIcon::Normal, QIcon::Off);
        fileSaveAction->setIcon(icon5);
        fileSaveAction->setMenuRole(QAction::NoRole);
        fileCompactAction = new QAction(MainWindow);
        fileCompactAction->setObjectName(QString::fromUtf8("fileCompactAction"));
        fileCompactAction->setEnabled(false);
        fileCompactAction->setMenuRole(QAction::NoRole);
        fileExitAction = new QAction(MainWindow);
        fileExitAction->setObjectName(QString::fromUtf8("fileExitAction"));
        fileExitAction->setMenuRole(QAction::QuitRole);
        fileImportSQLAction = new QAction(MainWindow);
        fileImportSQLAction->setObjectName(QString::fromUtf8("fileImportSQLAction"));
        fileImportSQLAction->setMenuRole(QAction::NoRole);
        fileImportCSVAction = new QAction(MainWindow);
        fileImportCSVAction->setObjectName(QString::fromUtf8("fileImportCSVAction"));
        fileImportCSVAction->setMenuRole(QAction::NoRole);
        fileExportSQLAction = new QAction(MainWindow);
        fileExportSQLAction->setObjectName(QString::fromUtf8("fileExportSQLAction"));
        fileExportSQLAction->setMenuRole(QAction::NoRole);
        fileExportCSVAction = new QAction(MainWindow);
        fileExportCSVAction->setObjectName(QString::fromUtf8("fileExportCSVAction"));
        fileExportCSVAction->setMenuRole(QAction::NoRole);
        editCreateTableAction = new QAction(MainWindow);
        editCreateTableAction->setObjectName(QString::fromUtf8("editCreateTableAction"));
        editCreateTableAction->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/table_create"), QSize(), QIcon::Normal, QIcon::Off);
        editCreateTableAction->setIcon(icon6);
        editCreateTableAction->setMenuRole(QAction::NoRole);
        editDeleteObjectAction = new QAction(MainWindow);
        editDeleteObjectAction->setObjectName(QString::fromUtf8("editDeleteObjectAction"));
        editDeleteObjectAction->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/table_delete"), QSize(), QIcon::Normal, QIcon::Off);
        editDeleteObjectAction->setIcon(icon7);
        editDeleteObjectAction->setMenuRole(QAction::NoRole);
        editModifyObjectAction = new QAction(MainWindow);
        editModifyObjectAction->setObjectName(QString::fromUtf8("editModifyObjectAction"));
        editModifyObjectAction->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/table_modify"), QSize(), QIcon::Normal, QIcon::Off);
        editModifyObjectAction->setIcon(icon8);
        editModifyObjectAction->setMenuRole(QAction::NoRole);
        editCreateIndexAction = new QAction(MainWindow);
        editCreateIndexAction->setObjectName(QString::fromUtf8("editCreateIndexAction"));
        editCreateIndexAction->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/index_create"), QSize(), QIcon::Normal, QIcon::Off);
        editCreateIndexAction->setIcon(icon9);
        editCreateIndexAction->setMenuRole(QAction::NoRole);
        viewPreferencesAction = new QAction(MainWindow);
        viewPreferencesAction->setObjectName(QString::fromUtf8("viewPreferencesAction"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/settings"), QSize(), QIcon::Normal, QIcon::Off);
        viewPreferencesAction->setIcon(icon10);
        viewPreferencesAction->setMenuRole(QAction::PreferencesRole);
        viewDBToolbarAction = new QAction(MainWindow);
        viewDBToolbarAction->setObjectName(QString::fromUtf8("viewDBToolbarAction"));
        viewDBToolbarAction->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/toolbar"), QSize(), QIcon::Normal, QIcon::Off);
        viewDBToolbarAction->setIcon(icon11);
        viewDBToolbarAction->setMenuRole(QAction::NoRole);
        helpWhatsThisAction = new QAction(MainWindow);
        helpWhatsThisAction->setObjectName(QString::fromUtf8("helpWhatsThisAction"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/whatis"), QSize(), QIcon::Normal, QIcon::Off);
        helpWhatsThisAction->setIcon(icon12);
        helpWhatsThisAction->setMenuRole(QAction::NoRole);
        helpAboutAction = new QAction(MainWindow);
        helpAboutAction->setObjectName(QString::fromUtf8("helpAboutAction"));
        helpAboutAction->setMenuRole(QAction::AboutRole);
        actionRecent_y_opened = new QAction(MainWindow);
        actionRecent_y_opened->setObjectName(QString::fromUtf8("actionRecent_y_opened"));
        actionSqlOpenTab = new QAction(MainWindow);
        actionSqlOpenTab->setObjectName(QString::fromUtf8("actionSqlOpenTab"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/open_tab"), QSize(), QIcon::Normal, QIcon::Off);
        actionSqlOpenTab->setIcon(icon13);
        actionExecuteSql = new QAction(MainWindow);
        actionExecuteSql->setObjectName(QString::fromUtf8("actionExecuteSql"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/run"), QSize(), QIcon::Normal, QIcon::Off);
        actionExecuteSql->setIcon(icon14);
        actionSqlOpenFile = new QAction(MainWindow);
        actionSqlOpenFile->setObjectName(QString::fromUtf8("actionSqlOpenFile"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/document_open"), QSize(), QIcon::Normal, QIcon::Off);
        actionSqlOpenFile->setIcon(icon15);
        actionSqlSaveFile = new QAction(MainWindow);
        actionSqlSaveFile->setObjectName(QString::fromUtf8("actionSqlSaveFile"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/save_sql"), QSize(), QIcon::Normal, QIcon::Off);
        actionSqlSaveFile->setIcon(icon16);
        actionLoadExtension = new QAction(MainWindow);
        actionLoadExtension->setObjectName(QString::fromUtf8("actionLoadExtension"));
        actionLoadExtension->setEnabled(false);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons/load_extension"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadExtension->setIcon(icon17);
        actionLoadExtension->setMenuRole(QAction::NoRole);
        actionSqlExecuteLine = new QAction(MainWindow);
        actionSqlExecuteLine->setObjectName(QString::fromUtf8("actionSqlExecuteLine"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/icons/run_line"), QSize(), QIcon::Normal, QIcon::Off);
        actionSqlExecuteLine->setIcon(icon18);
        actionExportCsvPopup = new QAction(MainWindow);
        actionExportCsvPopup->setObjectName(QString::fromUtf8("actionExportCsvPopup"));
        actionExportCsvPopup->setEnabled(false);
        actionWiki = new QAction(MainWindow);
        actionWiki->setObjectName(QString::fromUtf8("actionWiki"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/icons/browser_open"), QSize(), QIcon::Normal, QIcon::Off);
        actionWiki->setIcon(icon19);
        actionWiki->setMenuRole(QAction::NoRole);
        actionBug_report = new QAction(MainWindow);
        actionBug_report->setObjectName(QString::fromUtf8("actionBug_report"));
        actionBug_report->setIcon(icon19);
        actionBug_report->setMenuRole(QAction::NoRole);
        actionWebsite = new QAction(MainWindow);
        actionWebsite->setObjectName(QString::fromUtf8("actionWebsite"));
        actionWebsite->setIcon(icon19);
        actionWebsite->setMenuRole(QAction::NoRole);
        actionSaveProject = new QAction(MainWindow);
        actionSaveProject->setObjectName(QString::fromUtf8("actionSaveProject"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/icons/project_save"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveProject->setIcon(icon20);
        actionSaveProject->setMenuRole(QAction::NoRole);
        actionOpenProject = new QAction(MainWindow);
        actionOpenProject->setObjectName(QString::fromUtf8("actionOpenProject"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/icons/project_open"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenProject->setIcon(icon21);
        actionOpenProject->setMenuRole(QAction::NoRole);
        fileAttachAction = new QAction(MainWindow);
        fileAttachAction->setObjectName(QString::fromUtf8("fileAttachAction"));
        fileAttachAction->setEnabled(false);
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/icons/db_attach"), QSize(), QIcon::Normal, QIcon::Off);
        fileAttachAction->setIcon(icon22);
        fileAttachAction->setMenuRole(QAction::NoRole);
        actionEncryption = new QAction(MainWindow);
        actionEncryption->setObjectName(QString::fromUtf8("actionEncryption"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/icons/encryption"), QSize(), QIcon::Normal, QIcon::Off);
        actionEncryption->setIcon(icon23);
        actionEncryption->setMenuRole(QAction::NoRole);
        actionSqlSaveFileAs = new QAction(MainWindow);
        actionSqlSaveFileAs->setObjectName(QString::fromUtf8("actionSqlSaveFileAs"));
        actionSqlSaveFileAs->setIcon(icon16);
        actionSqlSaveFilePopup = new QAction(MainWindow);
        actionSqlSaveFilePopup->setObjectName(QString::fromUtf8("actionSqlSaveFilePopup"));
        actionSqlSaveFilePopup->setIcon(icon16);
        actionEditBrowseTable = new QAction(MainWindow);
        actionEditBrowseTable->setObjectName(QString::fromUtf8("actionEditBrowseTable"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/icons/table"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditBrowseTable->setIcon(icon24);
        actionEditCopyCreateStatement = new QAction(MainWindow);
        actionEditCopyCreateStatement->setObjectName(QString::fromUtf8("actionEditCopyCreateStatement"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/icons/copy"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditCopyCreateStatement->setIcon(icon25);
        actionBrowseTableEditDisplayFormat = new QAction(MainWindow);
        actionBrowseTableEditDisplayFormat->setObjectName(QString::fromUtf8("actionBrowseTableEditDisplayFormat"));
        actionShowRowidColumn = new QAction(MainWindow);
        actionShowRowidColumn->setObjectName(QString::fromUtf8("actionShowRowidColumn"));
        actionShowRowidColumn->setCheckable(true);
        actionSetTableEncoding = new QAction(MainWindow);
        actionSetTableEncoding->setObjectName(QString::fromUtf8("actionSetTableEncoding"));
        actionSetAllTablesEncoding = new QAction(MainWindow);
        actionSetAllTablesEncoding->setObjectName(QString::fromUtf8("actionSetAllTablesEncoding"));
        actionSqlCipherFaq = new QAction(MainWindow);
        actionSqlCipherFaq->setObjectName(QString::fromUtf8("actionSqlCipherFaq"));
        actionSqlCipherFaq->setIcon(icon19);
        fileExportJsonAction = new QAction(MainWindow);
        fileExportJsonAction->setObjectName(QString::fromUtf8("fileExportJsonAction"));
        fileExportJsonAction->setMenuRole(QAction::NoRole);
        actionRefresh = new QAction(MainWindow);
        actionRefresh->setObjectName(QString::fromUtf8("actionRefresh"));
        fileOpenReadOnlyAction = new QAction(MainWindow);
        fileOpenReadOnlyAction->setObjectName(QString::fromUtf8("fileOpenReadOnlyAction"));
        fileOpenReadOnlyAction->setIcon(icon2);
        fileOpenReadOnlyAction->setMenuRole(QAction::NoRole);
        actionUnlockViewEditing = new QAction(MainWindow);
        actionUnlockViewEditing->setObjectName(QString::fromUtf8("actionUnlockViewEditing"));
        actionUnlockViewEditing->setCheckable(true);
        actionSqlResultsSave = new QAction(MainWindow);
        actionSqlResultsSave->setObjectName(QString::fromUtf8("actionSqlResultsSave"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/icons/save_table"), QSize(), QIcon::Normal, QIcon::Off);
        actionSqlResultsSave->setIcon(icon26);
        actionSqlFind = new QAction(MainWindow);
        actionSqlFind->setObjectName(QString::fromUtf8("actionSqlFind"));
        actionSqlFind->setCheckable(true);
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/icons/find"), QSize(), QIcon::Normal, QIcon::Off);
        actionSqlFind->setIcon(icon27);
        actionSqlFindReplace = new QAction(MainWindow);
        actionSqlFindReplace->setObjectName(QString::fromUtf8("actionSqlFindReplace"));
        actionSqlFindReplace->setCheckable(false);
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/icons/text_replace"), QSize(), QIcon::Normal, QIcon::Off);
        actionSqlFindReplace->setIcon(icon28);
        actionSqlResultsExportCsv = new QAction(MainWindow);
        actionSqlResultsExportCsv->setObjectName(QString::fromUtf8("actionSqlResultsExportCsv"));
        actionSqlResultsSaveAsView = new QAction(MainWindow);
        actionSqlResultsSaveAsView->setObjectName(QString::fromUtf8("actionSqlResultsSaveAsView"));
        actionHideColumns = new QAction(MainWindow);
        actionHideColumns->setObjectName(QString::fromUtf8("actionHideColumns"));
        actionShowAllColumns = new QAction(MainWindow);
        actionShowAllColumns->setObjectName(QString::fromUtf8("actionShowAllColumns"));
        viewProjectToolbarAction = new QAction(MainWindow);
        viewProjectToolbarAction->setObjectName(QString::fromUtf8("viewProjectToolbarAction"));
        viewProjectToolbarAction->setCheckable(true);
        viewProjectToolbarAction->setChecked(false);
        viewProjectToolbarAction->setIcon(icon11);
        viewProjectToolbarAction->setMenuRole(QAction::NoRole);
        viewExtraDBToolbarAction = new QAction(MainWindow);
        viewExtraDBToolbarAction->setObjectName(QString::fromUtf8("viewExtraDBToolbarAction"));
        viewExtraDBToolbarAction->setCheckable(true);
        viewExtraDBToolbarAction->setIcon(icon11);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        mainTab = new QTabWidget(centralwidget);
        mainTab->setObjectName(QString::fromUtf8("mainTab"));
        mainTab->setGeometry(QRect(10, 0, 831, 651));
        browser = new QWidget();
        browser->setObjectName(QString::fromUtf8("browser"));
        gridLayout_5 = new QGridLayout(browser);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label = new QLabel(browser);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        comboBrowseTable = new QComboBox(browser);
        comboBrowseTable->setObjectName(QString::fromUtf8("comboBrowseTable"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBrowseTable->sizePolicy().hasHeightForWidth());
        comboBrowseTable->setSizePolicy(sizePolicy);
        comboBrowseTable->setMinimumSize(QSize(150, 0));
        comboBrowseTable->setMaxVisibleItems(30);
        comboBrowseTable->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_2->addWidget(comboBrowseTable, 0, 0, 1, 1);

        buttonRefresh = new QToolButton(browser);
        buttonRefresh->setObjectName(QString::fromUtf8("buttonRefresh"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/icons/refresh"), QSize(), QIcon::Normal, QIcon::Off);
        buttonRefresh->setIcon(icon29);

        gridLayout_2->addWidget(buttonRefresh, 0, 1, 1, 1);

        buttonClearFilters = new QToolButton(browser);
        buttonClearFilters->setObjectName(QString::fromUtf8("buttonClearFilters"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/icons/clear_filters"), QSize(), QIcon::Normal, QIcon::Off);
        buttonClearFilters->setIcon(icon30);

        gridLayout_2->addWidget(buttonClearFilters, 0, 2, 1, 1);

        buttonSaveFilterAsView = new QToolButton(browser);
        buttonSaveFilterAsView->setObjectName(QString::fromUtf8("buttonSaveFilterAsView"));
        buttonSaveFilterAsView->setIcon(icon26);

        gridLayout_2->addWidget(buttonSaveFilterAsView, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 4, 1, 1);

        buttonNewRecord = new QPushButton(browser);
        buttonNewRecord->setObjectName(QString::fromUtf8("buttonNewRecord"));

        gridLayout_2->addWidget(buttonNewRecord, 0, 5, 1, 1);

        buttonDeleteRecord = new QPushButton(browser);
        buttonDeleteRecord->setObjectName(QString::fromUtf8("buttonDeleteRecord"));

        gridLayout_2->addWidget(buttonDeleteRecord, 0, 6, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 0, 1, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        buttonBegin = new QToolButton(browser);
        buttonBegin->setObjectName(QString::fromUtf8("buttonBegin"));
        buttonBegin->setEnabled(false);
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/icons/resultset_first.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonBegin->setIcon(icon31);

        gridLayout_4->addWidget(buttonBegin, 0, 0, 1, 1);

        buttonPrevious = new QToolButton(browser);
        buttonPrevious->setObjectName(QString::fromUtf8("buttonPrevious"));
        buttonPrevious->setEnabled(false);
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/icons/resultset_previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonPrevious->setIcon(icon32);

        gridLayout_4->addWidget(buttonPrevious, 0, 1, 1, 1);

        labelRecordset = new QLabel(browser);
        labelRecordset->setObjectName(QString::fromUtf8("labelRecordset"));

        gridLayout_4->addWidget(labelRecordset, 0, 2, 1, 1);

        buttonNext = new QToolButton(browser);
        buttonNext->setObjectName(QString::fromUtf8("buttonNext"));
        buttonNext->setEnabled(false);
        buttonNext->setIcon(icon14);

        gridLayout_4->addWidget(buttonNext, 0, 3, 1, 1);

        buttonEnd = new QToolButton(browser);
        buttonEnd->setObjectName(QString::fromUtf8("buttonEnd"));
        buttonEnd->setEnabled(false);
        buttonEnd->setIcon(icon18);

        gridLayout_4->addWidget(buttonEnd, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(99, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 5, 1, 1);

        buttonGoto = new QPushButton(browser);
        buttonGoto->setObjectName(QString::fromUtf8("buttonGoto"));

        gridLayout_4->addWidget(buttonGoto, 0, 6, 1, 1);

        editGoto = new QLineEdit(browser);
        editGoto->setObjectName(QString::fromUtf8("editGoto"));

        gridLayout_4->addWidget(editGoto, 0, 7, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 2, 0, 1, 2);

        dataTable = new ExtendedTableWidget(browser);
        dataTable->setObjectName(QString::fromUtf8("dataTable"));
        dataTable->setAcceptDrops(true);
        dataTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        dataTable->setDragDropMode(QAbstractItemView::DragDrop);
        dataTable->setDefaultDropAction(Qt::CopyAction);
        dataTable->setSelectionMode(QAbstractItemView::ContiguousSelection);
        dataTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));

        gridLayout_5->addWidget(dataTable, 1, 0, 1, 2);

        mainTab->addTab(browser, QString());
        pragmas = new QWidget();
        pragmas->setObjectName(QString::fromUtf8("pragmas"));
        verticalLayout_4 = new QVBoxLayout(pragmas);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        scrollareaPragmas = new QScrollArea(pragmas);
        scrollareaPragmas->setObjectName(QString::fromUtf8("scrollareaPragmas"));
        scrollareaPragmas->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 801, 563));
        formLayout = new QFormLayout(scrollAreaWidgetContents);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        labelPragmaAutoVacuum = new QLabel(scrollAreaWidgetContents);
        labelPragmaAutoVacuum->setObjectName(QString::fromUtf8("labelPragmaAutoVacuum"));
        labelPragmaAutoVacuum->setOpenExternalLinks(true);
        labelPragmaAutoVacuum->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelPragmaAutoVacuum);

        comboboxPragmaAutoVacuum = new QComboBox(scrollAreaWidgetContents);
        comboboxPragmaAutoVacuum->addItem(QString());
        comboboxPragmaAutoVacuum->addItem(QString());
        comboboxPragmaAutoVacuum->addItem(QString());
        comboboxPragmaAutoVacuum->setObjectName(QString::fromUtf8("comboboxPragmaAutoVacuum"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboboxPragmaAutoVacuum);

        labelPragmaAutomaticIndex = new QLabel(scrollAreaWidgetContents);
        labelPragmaAutomaticIndex->setObjectName(QString::fromUtf8("labelPragmaAutomaticIndex"));
        labelPragmaAutomaticIndex->setOpenExternalLinks(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, labelPragmaAutomaticIndex);

        checkboxPragmaAutomaticIndex = new QCheckBox(scrollAreaWidgetContents);
        checkboxPragmaAutomaticIndex->setObjectName(QString::fromUtf8("checkboxPragmaAutomaticIndex"));

        formLayout->setWidget(1, QFormLayout::FieldRole, checkboxPragmaAutomaticIndex);

        labelPragmaCheckpointFullFsync = new QLabel(scrollAreaWidgetContents);
        labelPragmaCheckpointFullFsync->setObjectName(QString::fromUtf8("labelPragmaCheckpointFullFsync"));
        labelPragmaCheckpointFullFsync->setOpenExternalLinks(true);

        formLayout->setWidget(2, QFormLayout::LabelRole, labelPragmaCheckpointFullFsync);

        checkboxPragmaCheckpointFullFsync = new QCheckBox(scrollAreaWidgetContents);
        checkboxPragmaCheckpointFullFsync->setObjectName(QString::fromUtf8("checkboxPragmaCheckpointFullFsync"));

        formLayout->setWidget(2, QFormLayout::FieldRole, checkboxPragmaCheckpointFullFsync);

        labelPragmaForeignKeys = new QLabel(scrollAreaWidgetContents);
        labelPragmaForeignKeys->setObjectName(QString::fromUtf8("labelPragmaForeignKeys"));
        labelPragmaForeignKeys->setOpenExternalLinks(true);

        formLayout->setWidget(3, QFormLayout::LabelRole, labelPragmaForeignKeys);

        checkboxPragmaForeignKeys = new QCheckBox(scrollAreaWidgetContents);
        checkboxPragmaForeignKeys->setObjectName(QString::fromUtf8("checkboxPragmaForeignKeys"));

        formLayout->setWidget(3, QFormLayout::FieldRole, checkboxPragmaForeignKeys);

        labelPragmaFullFsync = new QLabel(scrollAreaWidgetContents);
        labelPragmaFullFsync->setObjectName(QString::fromUtf8("labelPragmaFullFsync"));
        labelPragmaFullFsync->setOpenExternalLinks(true);

        formLayout->setWidget(4, QFormLayout::LabelRole, labelPragmaFullFsync);

        checkboxPragmaFullFsync = new QCheckBox(scrollAreaWidgetContents);
        checkboxPragmaFullFsync->setObjectName(QString::fromUtf8("checkboxPragmaFullFsync"));

        formLayout->setWidget(4, QFormLayout::FieldRole, checkboxPragmaFullFsync);

        labelPragmaIgnoreCheckConstraints = new QLabel(scrollAreaWidgetContents);
        labelPragmaIgnoreCheckConstraints->setObjectName(QString::fromUtf8("labelPragmaIgnoreCheckConstraints"));
        labelPragmaIgnoreCheckConstraints->setOpenExternalLinks(true);

        formLayout->setWidget(5, QFormLayout::LabelRole, labelPragmaIgnoreCheckConstraints);

        checkboxPragmaIgnoreCheckConstraints = new QCheckBox(scrollAreaWidgetContents);
        checkboxPragmaIgnoreCheckConstraints->setObjectName(QString::fromUtf8("checkboxPragmaIgnoreCheckConstraints"));

        formLayout->setWidget(5, QFormLayout::FieldRole, checkboxPragmaIgnoreCheckConstraints);

        labelPragmaJournalMode = new QLabel(scrollAreaWidgetContents);
        labelPragmaJournalMode->setObjectName(QString::fromUtf8("labelPragmaJournalMode"));
        labelPragmaJournalMode->setOpenExternalLinks(true);

        formLayout->setWidget(6, QFormLayout::LabelRole, labelPragmaJournalMode);

        comboboxPragmaJournalMode = new QComboBox(scrollAreaWidgetContents);
        comboboxPragmaJournalMode->addItem(QString());
        comboboxPragmaJournalMode->addItem(QString());
        comboboxPragmaJournalMode->addItem(QString());
        comboboxPragmaJournalMode->addItem(QString());
        comboboxPragmaJournalMode->addItem(QString());
        comboboxPragmaJournalMode->addItem(QString());
        comboboxPragmaJournalMode->setObjectName(QString::fromUtf8("comboboxPragmaJournalMode"));

        formLayout->setWidget(6, QFormLayout::FieldRole, comboboxPragmaJournalMode);

        labelJournalSizeLimit = new QLabel(scrollAreaWidgetContents);
        labelJournalSizeLimit->setObjectName(QString::fromUtf8("labelJournalSizeLimit"));
        labelJournalSizeLimit->setOpenExternalLinks(true);

        formLayout->setWidget(7, QFormLayout::LabelRole, labelJournalSizeLimit);

        spinPragmaJournalSizeLimit = new QSpinBox(scrollAreaWidgetContents);
        spinPragmaJournalSizeLimit->setObjectName(QString::fromUtf8("spinPragmaJournalSizeLimit"));
        spinPragmaJournalSizeLimit->setMinimum(-1);
        spinPragmaJournalSizeLimit->setMaximum(100000);

        formLayout->setWidget(7, QFormLayout::FieldRole, spinPragmaJournalSizeLimit);

        labelPragmaLockingMode = new QLabel(scrollAreaWidgetContents);
        labelPragmaLockingMode->setObjectName(QString::fromUtf8("labelPragmaLockingMode"));
        labelPragmaLockingMode->setOpenExternalLinks(true);

        formLayout->setWidget(8, QFormLayout::LabelRole, labelPragmaLockingMode);

        comboboxPragmaLockingMode = new QComboBox(scrollAreaWidgetContents);
        comboboxPragmaLockingMode->addItem(QString());
        comboboxPragmaLockingMode->addItem(QString());
        comboboxPragmaLockingMode->setObjectName(QString::fromUtf8("comboboxPragmaLockingMode"));

        formLayout->setWidget(8, QFormLayout::FieldRole, comboboxPragmaLockingMode);

        labelPragmaMaxPageCount = new QLabel(scrollAreaWidgetContents);
        labelPragmaMaxPageCount->setObjectName(QString::fromUtf8("labelPragmaMaxPageCount"));
        labelPragmaMaxPageCount->setOpenExternalLinks(true);

        formLayout->setWidget(9, QFormLayout::LabelRole, labelPragmaMaxPageCount);

        spinPragmaMaxPageCount = new QSpinBox(scrollAreaWidgetContents);
        spinPragmaMaxPageCount->setObjectName(QString::fromUtf8("spinPragmaMaxPageCount"));
        spinPragmaMaxPageCount->setMaximum(2000000000);

        formLayout->setWidget(9, QFormLayout::FieldRole, spinPragmaMaxPageCount);

        labelPragmaPageSize = new QLabel(scrollAreaWidgetContents);
        labelPragmaPageSize->setObjectName(QString::fromUtf8("labelPragmaPageSize"));
        labelPragmaPageSize->setOpenExternalLinks(true);

        formLayout->setWidget(10, QFormLayout::LabelRole, labelPragmaPageSize);

        spinPragmaPageSize = new QSpinBox(scrollAreaWidgetContents);
        spinPragmaPageSize->setObjectName(QString::fromUtf8("spinPragmaPageSize"));
        spinPragmaPageSize->setMinimum(512);
        spinPragmaPageSize->setMaximum(65536);

        formLayout->setWidget(10, QFormLayout::FieldRole, spinPragmaPageSize);

        labelPragmaRecursiveTriggers = new QLabel(scrollAreaWidgetContents);
        labelPragmaRecursiveTriggers->setObjectName(QString::fromUtf8("labelPragmaRecursiveTriggers"));
        labelPragmaRecursiveTriggers->setOpenExternalLinks(true);

        formLayout->setWidget(11, QFormLayout::LabelRole, labelPragmaRecursiveTriggers);

        checkboxPragmaRecursiveTriggers = new QCheckBox(scrollAreaWidgetContents);
        checkboxPragmaRecursiveTriggers->setObjectName(QString::fromUtf8("checkboxPragmaRecursiveTriggers"));

        formLayout->setWidget(11, QFormLayout::FieldRole, checkboxPragmaRecursiveTriggers);

        labelPragmaSecureDelete = new QLabel(scrollAreaWidgetContents);
        labelPragmaSecureDelete->setObjectName(QString::fromUtf8("labelPragmaSecureDelete"));
        labelPragmaSecureDelete->setOpenExternalLinks(true);

        formLayout->setWidget(12, QFormLayout::LabelRole, labelPragmaSecureDelete);

        checkboxPragmaSecureDelete = new QCheckBox(scrollAreaWidgetContents);
        checkboxPragmaSecureDelete->setObjectName(QString::fromUtf8("checkboxPragmaSecureDelete"));

        formLayout->setWidget(12, QFormLayout::FieldRole, checkboxPragmaSecureDelete);

        labelPragmaSynchronous = new QLabel(scrollAreaWidgetContents);
        labelPragmaSynchronous->setObjectName(QString::fromUtf8("labelPragmaSynchronous"));
        labelPragmaSynchronous->setOpenExternalLinks(true);

        formLayout->setWidget(13, QFormLayout::LabelRole, labelPragmaSynchronous);

        comboboxPragmaSynchronous = new QComboBox(scrollAreaWidgetContents);
        comboboxPragmaSynchronous->addItem(QString());
        comboboxPragmaSynchronous->addItem(QString());
        comboboxPragmaSynchronous->addItem(QString());
        comboboxPragmaSynchronous->setObjectName(QString::fromUtf8("comboboxPragmaSynchronous"));

        formLayout->setWidget(13, QFormLayout::FieldRole, comboboxPragmaSynchronous);

        labelPragmaTempStore = new QLabel(scrollAreaWidgetContents);
        labelPragmaTempStore->setObjectName(QString::fromUtf8("labelPragmaTempStore"));
        labelPragmaTempStore->setOpenExternalLinks(true);

        formLayout->setWidget(14, QFormLayout::LabelRole, labelPragmaTempStore);

        comboboxPragmaTempStore = new QComboBox(scrollAreaWidgetContents);
        comboboxPragmaTempStore->addItem(QString());
        comboboxPragmaTempStore->addItem(QString());
        comboboxPragmaTempStore->addItem(QString());
        comboboxPragmaTempStore->setObjectName(QString::fromUtf8("comboboxPragmaTempStore"));

        formLayout->setWidget(14, QFormLayout::FieldRole, comboboxPragmaTempStore);

        labelPragmaUserVersion = new QLabel(scrollAreaWidgetContents);
        labelPragmaUserVersion->setObjectName(QString::fromUtf8("labelPragmaUserVersion"));
        labelPragmaUserVersion->setOpenExternalLinks(true);

        formLayout->setWidget(15, QFormLayout::LabelRole, labelPragmaUserVersion);

        spinPragmaUserVersion = new QSpinBox(scrollAreaWidgetContents);
        spinPragmaUserVersion->setObjectName(QString::fromUtf8("spinPragmaUserVersion"));
        spinPragmaUserVersion->setMaximum(2147483647);

        formLayout->setWidget(15, QFormLayout::FieldRole, spinPragmaUserVersion);

        labelPragmaWalAutoCheckpoint = new QLabel(scrollAreaWidgetContents);
        labelPragmaWalAutoCheckpoint->setObjectName(QString::fromUtf8("labelPragmaWalAutoCheckpoint"));
        labelPragmaWalAutoCheckpoint->setOpenExternalLinks(true);

        formLayout->setWidget(16, QFormLayout::LabelRole, labelPragmaWalAutoCheckpoint);

        spinPragmaWalAutoCheckpoint = new QSpinBox(scrollAreaWidgetContents);
        spinPragmaWalAutoCheckpoint->setObjectName(QString::fromUtf8("spinPragmaWalAutoCheckpoint"));
        spinPragmaWalAutoCheckpoint->setMaximum(10000);

        formLayout->setWidget(16, QFormLayout::FieldRole, spinPragmaWalAutoCheckpoint);

        scrollareaPragmas->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollareaPragmas);

        buttonBoxPragmas = new QDialogButtonBox(pragmas);
        buttonBoxPragmas->setObjectName(QString::fromUtf8("buttonBoxPragmas"));
        buttonBoxPragmas->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        buttonBoxPragmas->setCenterButtons(false);

        verticalLayout_4->addWidget(buttonBoxPragmas);

        mainTab->addTab(pragmas, QString());
        query = new QWidget();
        query->setObjectName(QString::fromUtf8("query"));
        gridLayout_3 = new QGridLayout(query);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tabSqlAreas = new QTabWidget(query);
        tabSqlAreas->setObjectName(QString::fromUtf8("tabSqlAreas"));
        tabSqlAreas->setTabsClosable(true);
        tabSqlAreas->setMovable(true);

        gridLayout_3->addWidget(tabSqlAreas, 1, 0, 1, 1);

        toolbarSql = new QToolBar(query);
        toolbarSql->setObjectName(QString::fromUtf8("toolbarSql"));

        gridLayout_3->addWidget(toolbarSql, 0, 0, 1, 1);

        mainTab->addTab(query, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1223, 26));
        fileMenu = new QMenu(menubar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        menuImport = new QMenu(fileMenu);
        menuImport->setObjectName(QString::fromUtf8("menuImport"));
        menuExport = new QMenu(fileMenu);
        menuExport->setObjectName(QString::fromUtf8("menuExport"));
        editMenu = new QMenu(menubar);
        editMenu->setObjectName(QString::fromUtf8("editMenu"));
        viewMenu = new QMenu(menubar);
        viewMenu->setObjectName(QString::fromUtf8("viewMenu"));
        helpMenu = new QMenu(menubar);
        helpMenu->setObjectName(QString::fromUtf8("helpMenu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolbarDB = new QToolBar(MainWindow);
        toolbarDB->setObjectName(QString::fromUtf8("toolbarDB"));
        toolbarDB->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolbarDB);
        dockEdit = new QDockWidget(MainWindow);
        dockEdit->setObjectName(QString::fromUtf8("dockEdit"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        dockEdit->setWidget(dockWidgetContents_4);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockEdit);
        dockLog = new QDockWidget(MainWindow);
        dockLog->setObjectName(QString::fromUtf8("dockLog"));
        dockLog->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        stackLog = new QStackedWidget(dockWidgetContents);
        stackLog->setObjectName(QString::fromUtf8("stackLog"));
        stackLog->setGeometry(QRect(8, 40, 351, 78));
        editLogUser = new SqlTextEdit();
        editLogUser->setObjectName(QString::fromUtf8("editLogUser"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        font.setPointSize(8);
        editLogUser->setFont(font);
        editLogUser->setReadOnly(true);
        stackLog->addWidget(editLogUser);
        editLogApplication = new SqlTextEdit();
        editLogApplication->setObjectName(QString::fromUtf8("editLogApplication"));
        editLogApplication->setFont(font);
        editLogApplication->setReadOnly(true);
        stackLog->addWidget(editLogApplication);
        labelLogSubmittedBy = new QLabel(dockWidgetContents);
        labelLogSubmittedBy->setObjectName(QString::fromUtf8("labelLogSubmittedBy"));
        labelLogSubmittedBy->setGeometry(QRect(10, 10, 129, 30));
        labelLogSubmittedBy->setMinimumSize(QSize(0, 30));
        comboLogSubmittedBy = new QComboBox(dockWidgetContents);
        comboLogSubmittedBy->addItem(QString());
        comboLogSubmittedBy->addItem(QString());
        comboLogSubmittedBy->setObjectName(QString::fromUtf8("comboLogSubmittedBy"));
        comboLogSubmittedBy->setGeometry(QRect(145, 10, 90, 30));
        comboLogSubmittedBy->setMinimumSize(QSize(0, 30));
        buttonLogClear = new QPushButton(dockWidgetContents);
        buttonLogClear->setObjectName(QString::fromUtf8("buttonLogClear"));
        buttonLogClear->setGeometry(QRect(267, 10, 80, 30));
        buttonLogClear->setMinimumSize(QSize(0, 30));
        dockLog->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockLog);
        dockPlot = new QDockWidget(MainWindow);
        dockPlot->setObjectName(QString::fromUtf8("dockPlot"));
        dockPlot->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        dockPlot->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockPlot);
        dockSchema = new QDockWidget(MainWindow);
        dockSchema->setObjectName(QString::fromUtf8("dockSchema"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        treeSchemaDock = new QTreeView(dockWidgetContents_3);
        treeSchemaDock->setObjectName(QString::fromUtf8("treeSchemaDock"));
        treeSchemaDock->setGeometry(QRect(9, 9, 339, 78));
        treeSchemaDock->setAlternatingRowColors(true);
        treeSchemaDock->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        treeSchemaDock->setAnimated(true);
        dockSchema->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockSchema);
        dockRemote = new QDockWidget(MainWindow);
        dockRemote->setObjectName(QString::fromUtf8("dockRemote"));
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        dockRemote->setWidget(dockWidgetContents_5);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockRemote);
        toolbarExtraDB = new QToolBar(MainWindow);
        toolbarExtraDB->setObjectName(QString::fromUtf8("toolbarExtraDB"));
        toolbarExtraDB->setEnabled(true);
        toolbarExtraDB->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolbarExtraDB);
        dockWidget_2 = new QDockWidget(MainWindow);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidget_2->sizePolicy().hasHeightForWidth());
        dockWidget_2->setSizePolicy(sizePolicy1);
        dockWidgetContents_12 = new QWidget();
        dockWidgetContents_12->setObjectName(QString::fromUtf8("dockWidgetContents_12"));
        gridLayout = new QGridLayout(dockWidgetContents_12);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dbTreeWidget = new QTreeView(dockWidgetContents_12);
        dbTreeWidget->setObjectName(QString::fromUtf8("dbTreeWidget"));
        dbTreeWidget->setMinimumSize(QSize(0, 0));
        dbTreeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        dbTreeWidget->setDragEnabled(true);
        dbTreeWidget->setDragDropMode(QAbstractItemView::DragDrop);
        dbTreeWidget->setAlternatingRowColors(true);
        dbTreeWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        dbTreeWidget->setAnimated(true);

        gridLayout->addWidget(dbTreeWidget, 0, 0, 1, 1);

        dbToolbar_3 = new QToolBar(dockWidgetContents_12);
        dbToolbar_3->setObjectName(QString::fromUtf8("dbToolbar_3"));
        dbToolbar_3->setEnabled(true);
        dbToolbar_3->setToolButtonStyle(Qt::ToolButtonFollowStyle);

        gridLayout->addWidget(dbToolbar_3, 1, 0, 1, 1);

        dockWidget_2->setWidget(dockWidgetContents_12);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget_2);
#if QT_CONFIG(shortcut)
        label->setBuddy(comboBrowseTable);
        labelPragmaAutoVacuum->setBuddy(comboboxPragmaAutoVacuum);
        labelPragmaAutomaticIndex->setBuddy(checkboxPragmaAutomaticIndex);
        labelPragmaCheckpointFullFsync->setBuddy(checkboxPragmaCheckpointFullFsync);
        labelPragmaForeignKeys->setBuddy(checkboxPragmaForeignKeys);
        labelPragmaFullFsync->setBuddy(checkboxPragmaFullFsync);
        labelPragmaIgnoreCheckConstraints->setBuddy(checkboxPragmaIgnoreCheckConstraints);
        labelPragmaJournalMode->setBuddy(comboboxPragmaJournalMode);
        labelJournalSizeLimit->setBuddy(spinPragmaJournalSizeLimit);
        labelPragmaLockingMode->setBuddy(comboboxPragmaLockingMode);
        labelPragmaMaxPageCount->setBuddy(spinPragmaMaxPageCount);
        labelPragmaPageSize->setBuddy(spinPragmaPageSize);
        labelPragmaRecursiveTriggers->setBuddy(checkboxPragmaRecursiveTriggers);
        labelPragmaSecureDelete->setBuddy(checkboxPragmaSecureDelete);
        labelPragmaSynchronous->setBuddy(comboboxPragmaSynchronous);
        labelPragmaTempStore->setBuddy(comboboxPragmaTempStore);
        labelPragmaUserVersion->setBuddy(spinPragmaUserVersion);
        labelPragmaWalAutoCheckpoint->setBuddy(spinPragmaWalAutoCheckpoint);
        labelLogSubmittedBy->setBuddy(comboLogSubmittedBy);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(dbTreeWidget, comboLogSubmittedBy);
        QWidget::setTabOrder(comboLogSubmittedBy, buttonLogClear);
        QWidget::setTabOrder(buttonLogClear, treeSchemaDock);
        QWidget::setTabOrder(treeSchemaDock, comboBrowseTable);
        QWidget::setTabOrder(comboBrowseTable, buttonRefresh);
        QWidget::setTabOrder(buttonRefresh, buttonClearFilters);
        QWidget::setTabOrder(buttonClearFilters, buttonNewRecord);
        QWidget::setTabOrder(buttonNewRecord, buttonDeleteRecord);
        QWidget::setTabOrder(buttonDeleteRecord, dataTable);
        QWidget::setTabOrder(dataTable, buttonBegin);
        QWidget::setTabOrder(buttonBegin, buttonPrevious);
        QWidget::setTabOrder(buttonPrevious, buttonNext);
        QWidget::setTabOrder(buttonNext, buttonEnd);
        QWidget::setTabOrder(buttonEnd, buttonGoto);
        QWidget::setTabOrder(buttonGoto, editGoto);
        QWidget::setTabOrder(editGoto, scrollareaPragmas);
        QWidget::setTabOrder(scrollareaPragmas, comboboxPragmaAutoVacuum);
        QWidget::setTabOrder(comboboxPragmaAutoVacuum, checkboxPragmaAutomaticIndex);
        QWidget::setTabOrder(checkboxPragmaAutomaticIndex, checkboxPragmaCheckpointFullFsync);
        QWidget::setTabOrder(checkboxPragmaCheckpointFullFsync, checkboxPragmaForeignKeys);
        QWidget::setTabOrder(checkboxPragmaForeignKeys, checkboxPragmaFullFsync);
        QWidget::setTabOrder(checkboxPragmaFullFsync, checkboxPragmaIgnoreCheckConstraints);
        QWidget::setTabOrder(checkboxPragmaIgnoreCheckConstraints, comboboxPragmaJournalMode);
        QWidget::setTabOrder(comboboxPragmaJournalMode, spinPragmaJournalSizeLimit);
        QWidget::setTabOrder(spinPragmaJournalSizeLimit, comboboxPragmaLockingMode);
        QWidget::setTabOrder(comboboxPragmaLockingMode, spinPragmaMaxPageCount);
        QWidget::setTabOrder(spinPragmaMaxPageCount, spinPragmaPageSize);
        QWidget::setTabOrder(spinPragmaPageSize, checkboxPragmaSecureDelete);
        QWidget::setTabOrder(checkboxPragmaSecureDelete, checkboxPragmaRecursiveTriggers);
        QWidget::setTabOrder(checkboxPragmaRecursiveTriggers, comboboxPragmaSynchronous);
        QWidget::setTabOrder(comboboxPragmaSynchronous, comboboxPragmaTempStore);
        QWidget::setTabOrder(comboboxPragmaTempStore, spinPragmaUserVersion);
        QWidget::setTabOrder(spinPragmaUserVersion, spinPragmaWalAutoCheckpoint);
        QWidget::setTabOrder(spinPragmaWalAutoCheckpoint, tabSqlAreas);

        toolbarSql->addAction(actionSqlOpenTab);
        toolbarSql->addAction(actionSqlOpenFile);
        toolbarSql->addAction(actionSqlSaveFilePopup);
        toolbarSql->addSeparator();
        toolbarSql->addAction(actionExecuteSql);
        toolbarSql->addAction(actionSqlExecuteLine);
        toolbarSql->addSeparator();
        toolbarSql->addAction(actionSqlResultsSave);
        toolbarSql->addSeparator();
        toolbarSql->addAction(actionSqlFind);
        toolbarSql->addAction(actionSqlFindReplace);
        menubar->addAction(fileMenu->menuAction());
        menubar->addAction(editMenu->menuAction());
        menubar->addAction(viewMenu->menuAction());
        menubar->addAction(helpMenu->menuAction());
        fileMenu->addAction(fileNewAction);
        fileMenu->addAction(fileOpenAction);
        fileMenu->addAction(fileOpenReadOnlyAction);
        fileMenu->addAction(fileAttachAction);
        fileMenu->addAction(fileCloseAction);
        fileMenu->addSeparator();
        fileMenu->addSeparator();
        fileMenu->addAction(fileSaveAction);
        fileMenu->addAction(fileRevertAction);
        fileMenu->addAction(fileCompactAction);
        fileMenu->addAction(actionEncryption);
        fileMenu->addAction(actionLoadExtension);
        fileMenu->addSeparator();
        fileMenu->addAction(menuImport->menuAction());
        fileMenu->addAction(menuExport->menuAction());
        fileMenu->addSeparator();
        fileMenu->addAction(actionOpenProject);
        fileMenu->addAction(actionSaveProject);
        fileMenu->addSeparator();
        fileMenu->addAction(fileExitAction);
        menuImport->addAction(fileImportSQLAction);
        menuImport->addAction(fileImportCSVAction);
        menuExport->addAction(fileExportSQLAction);
        menuExport->addAction(fileExportCSVAction);
        menuExport->addAction(fileExportJsonAction);
        editMenu->addAction(editCreateTableAction);
        editMenu->addAction(editModifyObjectAction);
        editMenu->addAction(editDeleteObjectAction);
        editMenu->addSeparator();
        editMenu->addAction(editCreateIndexAction);
        viewMenu->addAction(viewDBToolbarAction);
        viewMenu->addAction(viewExtraDBToolbarAction);
        viewMenu->addAction(viewProjectToolbarAction);
        viewMenu->addSeparator();
        viewMenu->addAction(viewPreferencesAction);
        helpMenu->addAction(helpWhatsThisAction);
        helpMenu->addAction(actionWebsite);
        helpMenu->addAction(actionWiki);
        helpMenu->addAction(actionSqlCipherFaq);
        helpMenu->addAction(actionBug_report);
        helpMenu->addAction(helpAboutAction);
        toolbarDB->addAction(fileNewAction);
        toolbarDB->addAction(fileOpenAction);
        toolbarDB->addSeparator();
        toolbarDB->addAction(fileSaveAction);
        toolbarDB->addAction(fileRevertAction);
        toolbarExtraDB->addAction(fileAttachAction);
        toolbarExtraDB->addAction(fileCloseAction);
        toolbarExtraDB->addSeparator();
        toolbarExtraDB->addAction(editCreateTableAction);
        toolbarExtraDB->addAction(editDeleteObjectAction);
        toolbarExtraDB->addAction(editModifyObjectAction);
        toolbarExtraDB->addAction(editCreateIndexAction);

        retranslateUi(MainWindow);
        QObject::connect(fileExitAction, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(fileOpenAction, SIGNAL(triggered()), MainWindow, SLOT(fileOpen()));
        QObject::connect(fileNewAction, SIGNAL(triggered()), MainWindow, SLOT(fileNew()));
        QObject::connect(fileCloseAction, SIGNAL(triggered()), MainWindow, SLOT(fileClose()));
        QObject::connect(fileCompactAction, SIGNAL(triggered()), MainWindow, SLOT(compact()));
        QObject::connect(helpWhatsThisAction, SIGNAL(triggered()), MainWindow, SLOT(helpWhatsThis()));
        QObject::connect(helpAboutAction, SIGNAL(triggered()), MainWindow, SLOT(helpAbout()));
        QObject::connect(fileImportCSVAction, SIGNAL(triggered()), MainWindow, SLOT(importTableFromCSV()));
        QObject::connect(fileExportCSVAction, SIGNAL(triggered()), MainWindow, SLOT(exportTableToCSV()));
        QObject::connect(fileRevertAction, SIGNAL(triggered()), MainWindow, SLOT(fileRevert()));
        QObject::connect(fileSaveAction, SIGNAL(triggered()), MainWindow, SLOT(fileSave()));
        QObject::connect(editCreateIndexAction, SIGNAL(triggered()), MainWindow, SLOT(createIndex()));
        QObject::connect(editDeleteObjectAction, SIGNAL(triggered()), MainWindow, SLOT(deleteObject()));
        QObject::connect(editModifyObjectAction, SIGNAL(triggered()), MainWindow, SLOT(editObject()));
        QObject::connect(fileExportSQLAction, SIGNAL(triggered()), MainWindow, SLOT(exportDatabaseToSQL()));
        QObject::connect(fileImportSQLAction, SIGNAL(triggered()), MainWindow, SLOT(importDatabaseFromSQL()));
        QObject::connect(viewPreferencesAction, SIGNAL(triggered()), MainWindow, SLOT(openPreferences()));
        QObject::connect(viewDBToolbarAction, SIGNAL(toggled(bool)), toolbarDB, SLOT(setVisible(bool)));
        QObject::connect(actionSqlFind, SIGNAL(toggled(bool)), MainWindow, SLOT(setFindFrameVisibility(bool)));
        QObject::connect(actionSqlFindReplace, SIGNAL(triggered()), MainWindow, SLOT(openFindReplaceDialog()));
        QObject::connect(editCreateTableAction, SIGNAL(triggered()), MainWindow, SLOT(createTable()));
        QObject::connect(buttonLogClear, SIGNAL(clicked()), editLogApplication, SLOT(clear()));
        QObject::connect(buttonLogClear, SIGNAL(clicked()), editLogUser, SLOT(clear()));
        QObject::connect(comboLogSubmittedBy, SIGNAL(currentIndexChanged(int)), stackLog, SLOT(setCurrentIndex(int)));
        QObject::connect(actionExecuteSql, SIGNAL(triggered()), MainWindow, SLOT(executeQuery()));
        QObject::connect(actionSqlOpenTab, SIGNAL(triggered()), MainWindow, SLOT(openSqlTab()));
        QObject::connect(actionSqlOpenFile, SIGNAL(triggered()), MainWindow, SLOT(openSqlFile()));
        QObject::connect(actionSqlSaveFile, SIGNAL(triggered()), MainWindow, SLOT(saveSqlFile()));
        QObject::connect(actionLoadExtension, SIGNAL(triggered()), MainWindow, SLOT(loadExtension()));
        QObject::connect(actionSqlExecuteLine, SIGNAL(triggered()), MainWindow, SLOT(executeQuery()));
        QObject::connect(actionExportCsvPopup, SIGNAL(triggered()), MainWindow, SLOT(exportTableToCSV()));
        QObject::connect(actionOpenProject, SIGNAL(triggered()), MainWindow, SLOT(loadProject()));
        QObject::connect(actionSaveProject, SIGNAL(triggered()), MainWindow, SLOT(saveProject()));
        QObject::connect(fileAttachAction, SIGNAL(triggered()), MainWindow, SLOT(fileAttach()));
        QObject::connect(actionEncryption, SIGNAL(triggered()), MainWindow, SLOT(editEncryption()));
        QObject::connect(actionSqlSaveFilePopup, SIGNAL(triggered()), MainWindow, SLOT(saveSqlFile()));
        QObject::connect(actionSqlSaveFileAs, SIGNAL(triggered()), MainWindow, SLOT(saveSqlFileAs()));
        QObject::connect(actionEditBrowseTable, SIGNAL(triggered()), MainWindow, SLOT(switchToBrowseDataTab()));
        QObject::connect(actionEditCopyCreateStatement, SIGNAL(triggered()), MainWindow, SLOT(copyCurrentCreateStatement()));
        QObject::connect(actionBrowseTableEditDisplayFormat, SIGNAL(triggered()), MainWindow, SLOT(editDataColumnDisplayFormat()));
        QObject::connect(actionShowRowidColumn, SIGNAL(triggered(bool)), MainWindow, SLOT(showRowidColumn(bool)));
        QObject::connect(actionSetTableEncoding, SIGNAL(triggered()), MainWindow, SLOT(browseDataSetTableEncoding()));
        QObject::connect(actionSetAllTablesEncoding, SIGNAL(triggered()), MainWindow, SLOT(browseDataSetDefaultTableEncoding()));
        QObject::connect(fileExportJsonAction, SIGNAL(triggered()), MainWindow, SLOT(exportTableToJson()));
        QObject::connect(actionRefresh, SIGNAL(triggered()), MainWindow, SLOT(refresh()));
        QObject::connect(fileOpenReadOnlyAction, SIGNAL(triggered()), MainWindow, SLOT(fileOpenReadOnly()));
        QObject::connect(actionUnlockViewEditing, SIGNAL(toggled(bool)), MainWindow, SLOT(unlockViewEditing(bool)));
        QObject::connect(actionSqlResultsExportCsv, SIGNAL(triggered()), MainWindow, SLOT(saveSqlResultsAsCsv()));
        QObject::connect(actionSqlResultsSaveAsView, SIGNAL(triggered()), MainWindow, SLOT(saveSqlResultsAsView()));
        QObject::connect(actionHideColumns, SIGNAL(triggered()), MainWindow, SLOT(hideColumns()));
        QObject::connect(viewExtraDBToolbarAction, SIGNAL(toggled(bool)), toolbarExtraDB, SLOT(setVisible(bool)));
        QObject::connect(MainWindow, SIGNAL(toolButtonStyleChanged(Qt::ToolButtonStyle)), toolbarDB, SLOT(setToolButtonStyle(Qt::ToolButtonStyle)));
        QObject::connect(MainWindow, SIGNAL(toolButtonStyleChanged(Qt::ToolButtonStyle)), toolbarExtraDB, SLOT(setToolButtonStyle(Qt::ToolButtonStyle)));
        QObject::connect(dbTreeWidget, SIGNAL(customContextMenuRequested(QPoint)), MainWindow, SLOT(createTreeContextMenu(QPoint)));
        QObject::connect(buttonNext, SIGNAL(clicked()), MainWindow, SLOT(navigateNext()));
        QObject::connect(buttonEnd, SIGNAL(clicked()), MainWindow, SLOT(navigateEnd()));
        QObject::connect(dataTable, SIGNAL(doubleClicked(QModelIndex)), MainWindow, SLOT(doubleClickTable(QModelIndex)));
        QObject::connect(mainTab, SIGNAL(currentChanged(int)), MainWindow, SLOT(mainTabSelected(int)));
        QObject::connect(editGoto, SIGNAL(returnPressed()), MainWindow, SLOT(navigateGoto()));
        QObject::connect(buttonDeleteRecord, SIGNAL(clicked()), MainWindow, SLOT(deleteRecord()));
        QObject::connect(buttonRefresh, SIGNAL(clicked()), MainWindow, SLOT(refresh()));
        QObject::connect(buttonSaveFilterAsView, SIGNAL(clicked()), MainWindow, SLOT(saveFilterAsView()));
        QObject::connect(buttonBoxPragmas, SIGNAL(rejected()), MainWindow, SLOT(loadPragmas()));
        QObject::connect(tabSqlAreas, SIGNAL(currentChanged(int)), MainWindow, SLOT(changeSqlTab(int)));
        QObject::connect(dataTable, SIGNAL(foreignKeyClicked(sqlb::ObjectIdentifier,QString,QByteArray)), MainWindow, SLOT(jumpToRow(sqlb::ObjectIdentifier,QString,QByteArray)));
        QObject::connect(buttonBoxPragmas, SIGNAL(accepted()), MainWindow, SLOT(savePragmas()));
        QObject::connect(buttonGoto, SIGNAL(clicked()), MainWindow, SLOT(navigateGoto()));
        QObject::connect(comboBrowseTable, SIGNAL(activated(QString)), MainWindow, SLOT(populateTable()));
        QObject::connect(tabSqlAreas, SIGNAL(tabBarDoubleClicked(int)), MainWindow, SLOT(renameSqlTab(int)));
        QObject::connect(tabSqlAreas, SIGNAL(tabCloseRequested(int)), MainWindow, SLOT(closeSqlTab(int)));
        QObject::connect(buttonPrevious, SIGNAL(clicked()), MainWindow, SLOT(navigatePrevious()));
        QObject::connect(buttonBegin, SIGNAL(clicked()), MainWindow, SLOT(navigateBegin()));
        QObject::connect(buttonNewRecord, SIGNAL(clicked()), MainWindow, SLOT(addRecord()));

        mainTab->setCurrentIndex(0);
        tabSqlAreas->setCurrentIndex(-1);
        stackLog->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DB Browser for SQLite", nullptr));
        fileNewAction->setText(QCoreApplication::translate("MainWindow", "&New Database...", nullptr));
#if QT_CONFIG(tooltip)
        fileNewAction->setToolTip(QCoreApplication::translate("MainWindow", "Create a new database file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileNewAction->setStatusTip(QCoreApplication::translate("MainWindow", "Create a new database file", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        fileNewAction->setWhatsThis(QCoreApplication::translate("MainWindow", "This option is used to create a new database file.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        fileNewAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        fileOpenAction->setText(QCoreApplication::translate("MainWindow", "&Open Database...", nullptr));
#if QT_CONFIG(tooltip)
        fileOpenAction->setToolTip(QCoreApplication::translate("MainWindow", "Open an existing database file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileOpenAction->setStatusTip(QCoreApplication::translate("MainWindow", "Open an existing database file", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        fileOpenAction->setWhatsThis(QCoreApplication::translate("MainWindow", "This option is used to open an existing database file.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        fileOpenAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        fileCloseAction->setText(QCoreApplication::translate("MainWindow", "&Close Database", nullptr));
#if QT_CONFIG(tooltip)
        fileCloseAction->setToolTip(QCoreApplication::translate("MainWindow", "Close the current database file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileCloseAction->setStatusTip(QCoreApplication::translate("MainWindow", "Close the current database file", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        fileCloseAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        fileRevertAction->setText(QCoreApplication::translate("MainWindow", "&Revert Changes", nullptr));
#if QT_CONFIG(tooltip)
        fileRevertAction->setToolTip(QCoreApplication::translate("MainWindow", "Revert database to last saved state", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileRevertAction->setStatusTip(QCoreApplication::translate("MainWindow", "Revert database to last saved state", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        fileRevertAction->setWhatsThis(QCoreApplication::translate("MainWindow", "This option is used to revert the current database file to its last saved state. All changes made since the last save operation are lost.", nullptr));
#endif // QT_CONFIG(whatsthis)
        fileSaveAction->setText(QCoreApplication::translate("MainWindow", "&Write Changes", nullptr));
#if QT_CONFIG(tooltip)
        fileSaveAction->setToolTip(QCoreApplication::translate("MainWindow", "Write changes to the database file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileSaveAction->setStatusTip(QCoreApplication::translate("MainWindow", "Write changes to the database file", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        fileSaveAction->setWhatsThis(QCoreApplication::translate("MainWindow", "This option is used to save changes to the database file.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        fileSaveAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        fileCompactAction->setText(QCoreApplication::translate("MainWindow", "Compact &Database", nullptr));
#if QT_CONFIG(tooltip)
        fileCompactAction->setToolTip(QCoreApplication::translate("MainWindow", "Compact the database file, removing space wasted by deleted records", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileCompactAction->setStatusTip(QCoreApplication::translate("MainWindow", "Compact the database file, removing space wasted by deleted records.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        fileCompactAction->setWhatsThis(QCoreApplication::translate("MainWindow", "Compact the database file, removing space wasted by deleted records.", nullptr));
#endif // QT_CONFIG(whatsthis)
        fileExitAction->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
#if QT_CONFIG(shortcut)
        fileExitAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        fileImportSQLAction->setText(QCoreApplication::translate("MainWindow", "&Database from SQL file...", nullptr));
#if QT_CONFIG(tooltip)
        fileImportSQLAction->setToolTip(QCoreApplication::translate("MainWindow", "Import data from an .sql dump text file into a new or existing database.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        fileImportSQLAction->setWhatsThis(QCoreApplication::translate("MainWindow", "This option lets you import data from an .sql dump text file into a new or existing database. SQL dump files can be created on most database engines, including MySQL and PostgreSQL.", nullptr));
#endif // QT_CONFIG(whatsthis)
        fileImportCSVAction->setText(QCoreApplication::translate("MainWindow", "&Table from CSV file...", nullptr));
#if QT_CONFIG(tooltip)
        fileImportCSVAction->setToolTip(QCoreApplication::translate("MainWindow", "Open a wizard that lets you import data from a comma separated text file into a database table.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        fileImportCSVAction->setWhatsThis(QCoreApplication::translate("MainWindow", "Open a wizard that lets you import data from a comma separated text file into a database table. CSV files can be created on most database and spreadsheet applications.", nullptr));
#endif // QT_CONFIG(whatsthis)
        fileExportSQLAction->setText(QCoreApplication::translate("MainWindow", "&Database to SQL file...", nullptr));
#if QT_CONFIG(tooltip)
        fileExportSQLAction->setToolTip(QCoreApplication::translate("MainWindow", "Export a database to a .sql dump text file.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        fileExportSQLAction->setWhatsThis(QCoreApplication::translate("MainWindow", "This option lets you export a database to a .sql dump text file. SQL dump files contain all data necessary to recreate the database on most database engines, including MySQL and PostgreSQL.", nullptr));
#endif // QT_CONFIG(whatsthis)
        fileExportCSVAction->setText(QCoreApplication::translate("MainWindow", "&Table(s) as CSV file...", nullptr));
#if QT_CONFIG(tooltip)
        fileExportCSVAction->setToolTip(QCoreApplication::translate("MainWindow", "Export a database table as a comma separated text file.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        fileExportCSVAction->setWhatsThis(QCoreApplication::translate("MainWindow", "Export a database table as a comma separated text file, ready to be imported into other database or spreadsheet applications.", nullptr));
#endif // QT_CONFIG(whatsthis)
        editCreateTableAction->setText(QCoreApplication::translate("MainWindow", "&Create Table...", nullptr));
#if QT_CONFIG(whatsthis)
        editCreateTableAction->setWhatsThis(QCoreApplication::translate("MainWindow", "Open the Create Table wizard, where it is possible to define the name and fields for a new table in the database", nullptr));
#endif // QT_CONFIG(whatsthis)
        editDeleteObjectAction->setText(QCoreApplication::translate("MainWindow", "&Delete Table...", nullptr));
#if QT_CONFIG(tooltip)
        editDeleteObjectAction->setToolTip(QCoreApplication::translate("MainWindow", "Delete Table", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        editDeleteObjectAction->setWhatsThis(QCoreApplication::translate("MainWindow", "Open the Delete Table wizard, where you can select a database table to be dropped.", nullptr));
#endif // QT_CONFIG(whatsthis)
        editModifyObjectAction->setText(QCoreApplication::translate("MainWindow", "&Modify Table...", nullptr));
#if QT_CONFIG(whatsthis)
        editModifyObjectAction->setWhatsThis(QCoreApplication::translate("MainWindow", "Open the Modify Table wizard, where it is possible to rename an existing table. It is also possible to add or delete fields form a table, as well as modify field names and types.", nullptr));
#endif // QT_CONFIG(whatsthis)
        editCreateIndexAction->setText(QCoreApplication::translate("MainWindow", "Create &Index...", nullptr));
#if QT_CONFIG(whatsthis)
        editCreateIndexAction->setWhatsThis(QCoreApplication::translate("MainWindow", "Open the Create Index wizard, where it is possible to define a new index on an existing database table.", nullptr));
#endif // QT_CONFIG(whatsthis)
        viewPreferencesAction->setText(QCoreApplication::translate("MainWindow", "&Preferences...", nullptr));
#if QT_CONFIG(tooltip)
        viewPreferencesAction->setToolTip(QCoreApplication::translate("MainWindow", "Open the preferences window.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        viewPreferencesAction->setWhatsThis(QCoreApplication::translate("MainWindow", "Open the preferences window.", nullptr));
#endif // QT_CONFIG(whatsthis)
        viewDBToolbarAction->setText(QCoreApplication::translate("MainWindow", "&DB Toolbar", nullptr));
#if QT_CONFIG(whatsthis)
        viewDBToolbarAction->setWhatsThis(QCoreApplication::translate("MainWindow", "Shows or hides the Database toolbar.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        viewDBToolbarAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        helpWhatsThisAction->setText(QCoreApplication::translate("MainWindow", "W&hat's This?", nullptr));
#if QT_CONFIG(shortcut)
        helpWhatsThisAction->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F1", nullptr));
#endif // QT_CONFIG(shortcut)
        helpAboutAction->setText(QCoreApplication::translate("MainWindow", "&About...", nullptr));
        actionRecent_y_opened->setText(QCoreApplication::translate("MainWindow", "&Recently opened", nullptr));
        actionSqlOpenTab->setText(QCoreApplication::translate("MainWindow", "Open &tab", nullptr));
#if QT_CONFIG(shortcut)
        actionSqlOpenTab->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExecuteSql->setText(QCoreApplication::translate("MainWindow", "&Execute SQL", nullptr));
#if QT_CONFIG(tooltip)
        actionExecuteSql->setToolTip(QCoreApplication::translate("MainWindow", "Execute SQL [F5, Ctrl+Return, Ctrl+R]", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSqlOpenFile->setText(QCoreApplication::translate("MainWindow", "Open SQL file", nullptr));
        actionSqlSaveFile->setText(QCoreApplication::translate("MainWindow", "Save SQL file", nullptr));
        actionLoadExtension->setText(QCoreApplication::translate("MainWindow", "&Load extension", nullptr));
        actionSqlExecuteLine->setText(QCoreApplication::translate("MainWindow", "Execute current line", nullptr));
#if QT_CONFIG(tooltip)
        actionSqlExecuteLine->setToolTip(QCoreApplication::translate("MainWindow", "Execute current line [Shift+F5]", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSqlExecuteLine->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExportCsvPopup->setText(QCoreApplication::translate("MainWindow", "Export as CSV file", nullptr));
#if QT_CONFIG(tooltip)
        actionExportCsvPopup->setToolTip(QCoreApplication::translate("MainWindow", "Export table as comma separated values file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionWiki->setText(QCoreApplication::translate("MainWindow", "&Wiki...", nullptr));
        actionBug_report->setText(QCoreApplication::translate("MainWindow", "Bug &report...", nullptr));
        actionWebsite->setText(QCoreApplication::translate("MainWindow", "Web&site...", nullptr));
        actionSaveProject->setText(QCoreApplication::translate("MainWindow", "Sa&ve Project", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveProject->setToolTip(QCoreApplication::translate("MainWindow", "Save the current session to a file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSaveProject->setStatusTip(QCoreApplication::translate("MainWindow", "Save the current session to a file", nullptr));
#endif // QT_CONFIG(statustip)
        actionOpenProject->setText(QCoreApplication::translate("MainWindow", "Open &Project", nullptr));
#if QT_CONFIG(tooltip)
        actionOpenProject->setToolTip(QCoreApplication::translate("MainWindow", "Load a working session from a file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionOpenProject->setStatusTip(QCoreApplication::translate("MainWindow", "Load a working session from a file", nullptr));
#endif // QT_CONFIG(statustip)
        fileAttachAction->setText(QCoreApplication::translate("MainWindow", "&Attach Database", nullptr));
#if QT_CONFIG(tooltip)
        fileAttachAction->setToolTip(QCoreApplication::translate("MainWindow", "Add another database file to the current database connection", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileAttachAction->setStatusTip(QCoreApplication::translate("MainWindow", "Add another database file to the current database connection", nullptr));
#endif // QT_CONFIG(statustip)
        actionEncryption->setText(QCoreApplication::translate("MainWindow", "&Set Encryption", nullptr));
        actionSqlSaveFileAs->setText(QCoreApplication::translate("MainWindow", "Save SQL file as", nullptr));
#if QT_CONFIG(tooltip)
        actionSqlSaveFileAs->setToolTip(QCoreApplication::translate("MainWindow", "Save SQL file as", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSqlSaveFilePopup->setText(QCoreApplication::translate("MainWindow", "Save SQL file", nullptr));
#if QT_CONFIG(tooltip)
        actionSqlSaveFilePopup->setToolTip(QCoreApplication::translate("MainWindow", "Save SQL file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditBrowseTable->setText(QCoreApplication::translate("MainWindow", "&Browse Table", nullptr));
        actionEditCopyCreateStatement->setText(QCoreApplication::translate("MainWindow", "Copy Create statement", nullptr));
#if QT_CONFIG(tooltip)
        actionEditCopyCreateStatement->setToolTip(QCoreApplication::translate("MainWindow", "Copy the CREATE statement of the item to the clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBrowseTableEditDisplayFormat->setText(QCoreApplication::translate("MainWindow", "Edit display format", nullptr));
#if QT_CONFIG(tooltip)
        actionBrowseTableEditDisplayFormat->setToolTip(QCoreApplication::translate("MainWindow", "Edit the display format of the data in this column", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowRowidColumn->setText(QCoreApplication::translate("MainWindow", "Show rowid column", nullptr));
#if QT_CONFIG(tooltip)
        actionShowRowidColumn->setToolTip(QCoreApplication::translate("MainWindow", "Toggle the visibility of the rowid column", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSetTableEncoding->setText(QCoreApplication::translate("MainWindow", "Set encoding", nullptr));
#if QT_CONFIG(tooltip)
        actionSetTableEncoding->setToolTip(QCoreApplication::translate("MainWindow", "Change the encoding of the text in the table cells", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSetAllTablesEncoding->setText(QCoreApplication::translate("MainWindow", "Set encoding for all tables", nullptr));
#if QT_CONFIG(tooltip)
        actionSetAllTablesEncoding->setToolTip(QCoreApplication::translate("MainWindow", "Change the default encoding assumed for all tables in the database", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSqlCipherFaq->setText(QCoreApplication::translate("MainWindow", "SQLCipher &FAQ...", nullptr));
#if QT_CONFIG(tooltip)
        actionSqlCipherFaq->setToolTip(QCoreApplication::translate("MainWindow", "Opens the SQLCipher FAQ in a browser window", nullptr));
#endif // QT_CONFIG(tooltip)
        fileExportJsonAction->setText(QCoreApplication::translate("MainWindow", "Table(&s) to JSON...", nullptr));
#if QT_CONFIG(tooltip)
        fileExportJsonAction->setToolTip(QCoreApplication::translate("MainWindow", "Export one or more table(s) to a JSON file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRefresh->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
#if QT_CONFIG(shortcut)
        actionRefresh->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        fileOpenReadOnlyAction->setText(QCoreApplication::translate("MainWindow", "Open Data&base Read Only...", nullptr));
#if QT_CONFIG(tooltip)
        fileOpenReadOnlyAction->setToolTip(QCoreApplication::translate("MainWindow", "Open an existing database file in read only mode", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileOpenReadOnlyAction->setStatusTip(QCoreApplication::translate("MainWindow", "Open an existing database file", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        fileOpenReadOnlyAction->setWhatsThis(QCoreApplication::translate("MainWindow", "This option is used to open an existing database file.", nullptr));
#endif // QT_CONFIG(whatsthis)
        actionUnlockViewEditing->setText(QCoreApplication::translate("MainWindow", "Unlock view editing", nullptr));
#if QT_CONFIG(tooltip)
        actionUnlockViewEditing->setToolTip(QCoreApplication::translate("MainWindow", "This unlocks the current view for editing. However, you will need appropriate triggers for editing.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSqlResultsSave->setText(QCoreApplication::translate("MainWindow", "Save results", nullptr));
#if QT_CONFIG(tooltip)
        actionSqlResultsSave->setToolTip(QCoreApplication::translate("MainWindow", "Save the results view", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSqlFind->setText(QCoreApplication::translate("MainWindow", "Find text in SQL editor", nullptr));
#if QT_CONFIG(tooltip)
        actionSqlFind->setToolTip(QCoreApplication::translate("MainWindow", "Find text in SQL editor [Ctrl+F]", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSqlFind->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSqlFindReplace->setText(QCoreApplication::translate("MainWindow", "Find or replace text in SQL editor", nullptr));
#if QT_CONFIG(tooltip)
        actionSqlFindReplace->setToolTip(QCoreApplication::translate("MainWindow", "Find or replace text in SQL editor [Ctrl+H]", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSqlResultsExportCsv->setText(QCoreApplication::translate("MainWindow", "Export to &CSV", nullptr));
        actionSqlResultsSaveAsView->setText(QCoreApplication::translate("MainWindow", "Save as &view", nullptr));
#if QT_CONFIG(tooltip)
        actionSqlResultsSaveAsView->setToolTip(QCoreApplication::translate("MainWindow", "Save as view", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHideColumns->setText(QCoreApplication::translate("MainWindow", "Hide column(s)", nullptr));
#if QT_CONFIG(tooltip)
        actionHideColumns->setToolTip(QCoreApplication::translate("MainWindow", "Hide selected column(s)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowAllColumns->setText(QCoreApplication::translate("MainWindow", "Show all columns", nullptr));
#if QT_CONFIG(tooltip)
        actionShowAllColumns->setToolTip(QCoreApplication::translate("MainWindow", "Show all columns that were hidden", nullptr));
#endif // QT_CONFIG(tooltip)
        viewProjectToolbarAction->setText(QCoreApplication::translate("MainWindow", "Project Toolbar", nullptr));
#if QT_CONFIG(whatsthis)
        viewProjectToolbarAction->setWhatsThis(QCoreApplication::translate("MainWindow", "Shows or hides the Project toolbar.", nullptr));
#endif // QT_CONFIG(whatsthis)
        viewExtraDBToolbarAction->setText(QCoreApplication::translate("MainWindow", "Extra DB Toolbar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "&Table:", nullptr));
#if QT_CONFIG(tooltip)
        comboBrowseTable->setToolTip(QCoreApplication::translate("MainWindow", "Select a table to browse data", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        comboBrowseTable->setWhatsThis(QCoreApplication::translate("MainWindow", "Use this list to select a table to be displayed in the database view", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        buttonRefresh->setToolTip(QCoreApplication::translate("MainWindow", "Refresh the data in the selected table [F5, Ctrl+R]", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        buttonRefresh->setWhatsThis(QCoreApplication::translate("MainWindow", "This button refreshes the data in the currently selected table.", nullptr));
#endif // QT_CONFIG(whatsthis)
        buttonRefresh->setText(QString());
#if QT_CONFIG(tooltip)
        buttonClearFilters->setToolTip(QCoreApplication::translate("MainWindow", "Clear all filters", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonClearFilters->setText(QString());
#if QT_CONFIG(tooltip)
        buttonSaveFilterAsView->setToolTip(QCoreApplication::translate("MainWindow", "Save the current filter, sort column and display formats as a view", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonSaveFilterAsView->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        buttonNewRecord->setToolTip(QCoreApplication::translate("MainWindow", "Insert a new record in the current table", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        buttonNewRecord->setWhatsThis(QCoreApplication::translate("MainWindow", "This button creates a new, empty record in the database", nullptr));
#endif // QT_CONFIG(whatsthis)
        buttonNewRecord->setText(QCoreApplication::translate("MainWindow", "New Record", nullptr));
#if QT_CONFIG(tooltip)
        buttonDeleteRecord->setToolTip(QCoreApplication::translate("MainWindow", "Delete the current record", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        buttonDeleteRecord->setWhatsThis(QCoreApplication::translate("MainWindow", "This button deletes the record currently selected in the database", nullptr));
#endif // QT_CONFIG(whatsthis)
        buttonDeleteRecord->setText(QCoreApplication::translate("MainWindow", "Delete Record", nullptr));
#if QT_CONFIG(tooltip)
        buttonBegin->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Scroll to the beginning</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        buttonBegin->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Clicking this button navigates to the beginning in the table view above.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        buttonBegin->setText(QCoreApplication::translate("MainWindow", "|<", nullptr));
#if QT_CONFIG(tooltip)
        buttonPrevious->setToolTip(QCoreApplication::translate("MainWindow", "Scroll one page upwards", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        buttonPrevious->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Clicking this button navigates one page of records upwards in the table view above.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        buttonPrevious->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        labelRecordset->setText(QCoreApplication::translate("MainWindow", "0 - 0 of 0", nullptr));
#if QT_CONFIG(tooltip)
        buttonNext->setToolTip(QCoreApplication::translate("MainWindow", "Scroll one page downwards", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        buttonNext->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Clicking this button navigates one page of records downwards in the table view above.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        buttonNext->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
#if QT_CONFIG(tooltip)
        buttonEnd->setToolTip(QCoreApplication::translate("MainWindow", "Scroll to the end", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        buttonEnd->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>&lt;html&gt;&lt;head/&gt;&lt;body&gt;&lt;p&gt;Clicking this button navigates up to the end in the table view above.&lt;/p&gt;&lt;/body&gt;&lt;/html&gt;</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        buttonEnd->setText(QCoreApplication::translate("MainWindow", ">|", nullptr));
#if QT_CONFIG(tooltip)
        buttonGoto->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Click here to jump to the specified record</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        buttonGoto->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>This button is used to navigate to the record number specified in the Go to area.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        buttonGoto->setText(QCoreApplication::translate("MainWindow", "Go to:", nullptr));
#if QT_CONFIG(tooltip)
        editGoto->setToolTip(QCoreApplication::translate("MainWindow", "Enter record number to browse", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        editGoto->setWhatsThis(QCoreApplication::translate("MainWindow", "Type a record number in this area and click the Go to: button to display the record in the database view", nullptr));
#endif // QT_CONFIG(whatsthis)
        editGoto->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(whatsthis)
        dataTable->setWhatsThis(QCoreApplication::translate("MainWindow", "This is the database view. You can double-click any record to edit its contents in the cell editor window.", nullptr));
#endif // QT_CONFIG(whatsthis)
        mainTab->setTabText(mainTab->indexOf(browser), QCoreApplication::translate("MainWindow", "Browse Data", nullptr));
        labelPragmaAutoVacuum->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_auto_vacuum\"><span style=\" text-decoration: underline; color:#0000ff;\">Auto Vacuum</span></a></p></body></html>", nullptr));
        comboboxPragmaAutoVacuum->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        comboboxPragmaAutoVacuum->setItemText(1, QCoreApplication::translate("MainWindow", "Full", nullptr));
        comboboxPragmaAutoVacuum->setItemText(2, QCoreApplication::translate("MainWindow", "Incremental", nullptr));

        labelPragmaAutomaticIndex->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_automatic_index\"><span style=\" text-decoration: underline; color:#0000ff;\">Automatic Index</span></a></p></body></html>", nullptr));
        checkboxPragmaAutomaticIndex->setText(QString());
        labelPragmaCheckpointFullFsync->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_checkpoint_fullfsync\"><span style=\" text-decoration: underline; color:#0000ff;\">Checkpoint Full FSYNC</span></a></p></body></html>", nullptr));
        checkboxPragmaCheckpointFullFsync->setText(QString());
        labelPragmaForeignKeys->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_foreign_keys\"><span style=\" text-decoration: underline; color:#0000ff;\">Foreign Keys</span></a></p></body></html>", nullptr));
        checkboxPragmaForeignKeys->setText(QString());
        labelPragmaFullFsync->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_fullfsync\"><span style=\" text-decoration: underline; color:#0000ff;\">Full FSYNC</span></a></p></body></html>", nullptr));
        checkboxPragmaFullFsync->setText(QString());
        labelPragmaIgnoreCheckConstraints->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_ignore_check_constraints\"><span style=\" text-decoration: underline; color:#0000ff;\">Ignore Check Constraints</span></a></p></body></html>", nullptr));
        checkboxPragmaIgnoreCheckConstraints->setText(QString());
        labelPragmaJournalMode->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_journal_mode\"><span style=\" text-decoration: underline; color:#0000ff;\">Journal Mode</span></a></p></body></html>", nullptr));
        comboboxPragmaJournalMode->setItemText(0, QCoreApplication::translate("MainWindow", "Delete", nullptr));
        comboboxPragmaJournalMode->setItemText(1, QCoreApplication::translate("MainWindow", "Truncate", nullptr));
        comboboxPragmaJournalMode->setItemText(2, QCoreApplication::translate("MainWindow", "Persist", nullptr));
        comboboxPragmaJournalMode->setItemText(3, QCoreApplication::translate("MainWindow", "Memory", nullptr));
        comboboxPragmaJournalMode->setItemText(4, QCoreApplication::translate("MainWindow", "WAL", nullptr));
        comboboxPragmaJournalMode->setItemText(5, QCoreApplication::translate("MainWindow", "Off", nullptr));

        labelJournalSizeLimit->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_journal_size_limit\"><span style=\" text-decoration: underline; color:#0000ff;\">Journal Size Limit</span></a></p></body></html>", nullptr));
        labelPragmaLockingMode->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_locking_mode\"><span style=\" text-decoration: underline; color:#0000ff;\">Locking Mode</span></a></p></body></html>", nullptr));
        comboboxPragmaLockingMode->setItemText(0, QCoreApplication::translate("MainWindow", "Normal", nullptr));
        comboboxPragmaLockingMode->setItemText(1, QCoreApplication::translate("MainWindow", "Exclusive", nullptr));

        labelPragmaMaxPageCount->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_max_page_count\"><span style=\" text-decoration: underline; color:#0000ff;\">Max Page Count</span></a></p></body></html>", nullptr));
        labelPragmaPageSize->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_page_size\"><span style=\" text-decoration: underline; color:#0000ff;\">Page Size</span></a></p></body></html>", nullptr));
        labelPragmaRecursiveTriggers->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_recursive_triggers\"><span style=\" text-decoration: underline; color:#0000ff;\">Recursive Triggers</span></a></p></body></html>", nullptr));
        checkboxPragmaRecursiveTriggers->setText(QString());
        labelPragmaSecureDelete->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_secure_delete\"><span style=\" text-decoration: underline; color:#0000ff;\">Secure Delete</span></a></p></body></html>", nullptr));
        checkboxPragmaSecureDelete->setText(QString());
        labelPragmaSynchronous->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_synchronous\"><span style=\" text-decoration: underline; color:#0000ff;\">Synchronous</span></a></p></body></html>", nullptr));
        comboboxPragmaSynchronous->setItemText(0, QCoreApplication::translate("MainWindow", "Off", nullptr));
        comboboxPragmaSynchronous->setItemText(1, QCoreApplication::translate("MainWindow", "Normal", nullptr));
        comboboxPragmaSynchronous->setItemText(2, QCoreApplication::translate("MainWindow", "Full", nullptr));

        labelPragmaTempStore->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_temp_store\"><span style=\" text-decoration: underline; color:#0000ff;\">Temp Store</span></a></p></body></html>", nullptr));
        comboboxPragmaTempStore->setItemText(0, QCoreApplication::translate("MainWindow", "Default", nullptr));
        comboboxPragmaTempStore->setItemText(1, QCoreApplication::translate("MainWindow", "File", nullptr));
        comboboxPragmaTempStore->setItemText(2, QCoreApplication::translate("MainWindow", "Memory", nullptr));

        labelPragmaUserVersion->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_user_version\"><span style=\" text-decoration: underline; color:#0000ff;\">User Version</span></a></p></body></html>", nullptr));
        labelPragmaWalAutoCheckpoint->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_wal_autocheckpoint\"><span style=\" text-decoration: underline; color:#0000ff;\">WAL Auto Checkpoint</span></a></p></body></html>", nullptr));
        mainTab->setTabText(mainTab->indexOf(pragmas), QCoreApplication::translate("MainWindow", "Edit Pragmas", nullptr));
        toolbarSql->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar1", nullptr));
        mainTab->setTabText(mainTab->indexOf(query), QCoreApplication::translate("MainWindow", "Execute SQL", nullptr));
        fileMenu->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuImport->setTitle(QCoreApplication::translate("MainWindow", "&Import", nullptr));
        menuExport->setTitle(QCoreApplication::translate("MainWindow", "&Export", nullptr));
        editMenu->setTitle(QCoreApplication::translate("MainWindow", "&Edit", nullptr));
        viewMenu->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        helpMenu->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        toolbarDB->setWindowTitle(QCoreApplication::translate("MainWindow", "DB Toolbar", nullptr));
        dockEdit->setWindowTitle(QCoreApplication::translate("MainWindow", "Edit Database &Cell", nullptr));
        dockLog->setWindowTitle(QCoreApplication::translate("MainWindow", "SQL &Log", nullptr));
        labelLogSubmittedBy->setText(QCoreApplication::translate("MainWindow", "Show S&QL submitted by", nullptr));
        comboLogSubmittedBy->setItemText(0, QCoreApplication::translate("MainWindow", "User", nullptr));
        comboLogSubmittedBy->setItemText(1, QCoreApplication::translate("MainWindow", "Application", nullptr));

        buttonLogClear->setText(QCoreApplication::translate("MainWindow", "&Clear", nullptr));
        dockPlot->setWindowTitle(QCoreApplication::translate("MainWindow", "&Plot", nullptr));
        dockSchema->setWindowTitle(QCoreApplication::translate("MainWindow", "DB Sche&ma", nullptr));
        dockRemote->setWindowTitle(QCoreApplication::translate("MainWindow", "&Remote", nullptr));
        toolbarExtraDB->setWindowTitle(QCoreApplication::translate("MainWindow", "Extra DB toolbar", nullptr));
#if QT_CONFIG(tooltip)
        toolbarExtraDB->setToolTip(QCoreApplication::translate("MainWindow", "Close the current database file", nullptr));
#endif // QT_CONFIG(tooltip)
        dbToolbar_3->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
