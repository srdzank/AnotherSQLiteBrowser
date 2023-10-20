/****************************************************************************
** Meta object code from reading C++ file 'qsciscintilla.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Qsci/qsciscintilla.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsciscintilla.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QsciScintilla_t {
    QByteArrayData data[179];
    char stringdata0[2451];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QsciScintilla_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QsciScintilla_t qt_meta_stringdata_QsciScintilla = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QsciScintilla"
QT_MOC_LITERAL(1, 14, 21), // "cursorPositionChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "line"
QT_MOC_LITERAL(4, 42, 5), // "index"
QT_MOC_LITERAL(5, 48, 13), // "copyAvailable"
QT_MOC_LITERAL(6, 62, 3), // "yes"
QT_MOC_LITERAL(7, 66, 16), // "indicatorClicked"
QT_MOC_LITERAL(8, 83, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(9, 105, 5), // "state"
QT_MOC_LITERAL(10, 111, 17), // "indicatorReleased"
QT_MOC_LITERAL(11, 129, 12), // "linesChanged"
QT_MOC_LITERAL(12, 142, 13), // "marginClicked"
QT_MOC_LITERAL(13, 156, 6), // "margin"
QT_MOC_LITERAL(14, 163, 18), // "marginRightClicked"
QT_MOC_LITERAL(15, 182, 21), // "modificationAttempted"
QT_MOC_LITERAL(16, 204, 19), // "modificationChanged"
QT_MOC_LITERAL(17, 224, 1), // "m"
QT_MOC_LITERAL(18, 226, 16), // "selectionChanged"
QT_MOC_LITERAL(19, 243, 11), // "textChanged"
QT_MOC_LITERAL(20, 255, 17), // "userListActivated"
QT_MOC_LITERAL(21, 273, 2), // "id"
QT_MOC_LITERAL(22, 276, 6), // "string"
QT_MOC_LITERAL(23, 283, 6), // "append"
QT_MOC_LITERAL(24, 290, 4), // "text"
QT_MOC_LITERAL(25, 295, 19), // "autoCompleteFromAll"
QT_MOC_LITERAL(26, 315, 20), // "autoCompleteFromAPIs"
QT_MOC_LITERAL(27, 336, 24), // "autoCompleteFromDocument"
QT_MOC_LITERAL(28, 361, 7), // "callTip"
QT_MOC_LITERAL(29, 369, 5), // "clear"
QT_MOC_LITERAL(30, 375, 4), // "copy"
QT_MOC_LITERAL(31, 380, 3), // "cut"
QT_MOC_LITERAL(32, 384, 19), // "ensureCursorVisible"
QT_MOC_LITERAL(33, 404, 17), // "ensureLineVisible"
QT_MOC_LITERAL(34, 422, 7), // "foldAll"
QT_MOC_LITERAL(35, 430, 8), // "children"
QT_MOC_LITERAL(36, 439, 8), // "foldLine"
QT_MOC_LITERAL(37, 448, 6), // "indent"
QT_MOC_LITERAL(38, 455, 6), // "insert"
QT_MOC_LITERAL(39, 462, 8), // "insertAt"
QT_MOC_LITERAL(40, 471, 19), // "moveToMatchingBrace"
QT_MOC_LITERAL(41, 491, 5), // "paste"
QT_MOC_LITERAL(42, 497, 4), // "redo"
QT_MOC_LITERAL(43, 502, 18), // "removeSelectedText"
QT_MOC_LITERAL(44, 521, 19), // "replaceSelectedText"
QT_MOC_LITERAL(45, 541, 29), // "resetSelectionBackgroundColor"
QT_MOC_LITERAL(46, 571, 29), // "resetSelectionForegroundColor"
QT_MOC_LITERAL(47, 601, 9), // "selectAll"
QT_MOC_LITERAL(48, 611, 6), // "select"
QT_MOC_LITERAL(49, 618, 21), // "selectToMatchingBrace"
QT_MOC_LITERAL(50, 640, 32), // "setAutoCompletionCaseSensitivity"
QT_MOC_LITERAL(51, 673, 2), // "cs"
QT_MOC_LITERAL(52, 676, 28), // "setAutoCompletionReplaceWord"
QT_MOC_LITERAL(53, 705, 7), // "replace"
QT_MOC_LITERAL(54, 713, 27), // "setAutoCompletionShowSingle"
QT_MOC_LITERAL(55, 741, 6), // "single"
QT_MOC_LITERAL(56, 748, 23), // "setAutoCompletionSource"
QT_MOC_LITERAL(57, 772, 20), // "AutoCompletionSource"
QT_MOC_LITERAL(58, 793, 6), // "source"
QT_MOC_LITERAL(59, 800, 26), // "setAutoCompletionThreshold"
QT_MOC_LITERAL(60, 827, 6), // "thresh"
QT_MOC_LITERAL(61, 834, 26), // "setAutoCompletionUseSingle"
QT_MOC_LITERAL(62, 861, 23), // "AutoCompletionUseSingle"
QT_MOC_LITERAL(63, 885, 13), // "setAutoIndent"
QT_MOC_LITERAL(64, 899, 10), // "autoindent"
QT_MOC_LITERAL(65, 910, 16), // "setBraceMatching"
QT_MOC_LITERAL(66, 927, 10), // "BraceMatch"
QT_MOC_LITERAL(67, 938, 2), // "bm"
QT_MOC_LITERAL(68, 941, 21), // "setBackspaceUnindents"
QT_MOC_LITERAL(69, 963, 8), // "unindent"
QT_MOC_LITERAL(70, 972, 23), // "setCaretForegroundColor"
QT_MOC_LITERAL(71, 996, 3), // "col"
QT_MOC_LITERAL(72, 1000, 27), // "setCaretLineBackgroundColor"
QT_MOC_LITERAL(73, 1028, 19), // "setCaretLineVisible"
QT_MOC_LITERAL(74, 1048, 6), // "enable"
QT_MOC_LITERAL(75, 1055, 13), // "setCaretWidth"
QT_MOC_LITERAL(76, 1069, 5), // "width"
QT_MOC_LITERAL(77, 1075, 8), // "setColor"
QT_MOC_LITERAL(78, 1084, 1), // "c"
QT_MOC_LITERAL(79, 1086, 17), // "setCursorPosition"
QT_MOC_LITERAL(80, 1104, 10), // "setEolMode"
QT_MOC_LITERAL(81, 1115, 7), // "EolMode"
QT_MOC_LITERAL(82, 1123, 4), // "mode"
QT_MOC_LITERAL(83, 1128, 16), // "setEolVisibility"
QT_MOC_LITERAL(84, 1145, 7), // "visible"
QT_MOC_LITERAL(85, 1153, 10), // "setFolding"
QT_MOC_LITERAL(86, 1164, 9), // "FoldStyle"
QT_MOC_LITERAL(87, 1174, 4), // "fold"
QT_MOC_LITERAL(88, 1179, 14), // "setIndentation"
QT_MOC_LITERAL(89, 1194, 11), // "indentation"
QT_MOC_LITERAL(90, 1206, 20), // "setIndentationGuides"
QT_MOC_LITERAL(91, 1227, 35), // "setIndentationGuidesBackgroun..."
QT_MOC_LITERAL(92, 1263, 35), // "setIndentationGuidesForegroun..."
QT_MOC_LITERAL(93, 1299, 22), // "setIndentationsUseTabs"
QT_MOC_LITERAL(94, 1322, 4), // "tabs"
QT_MOC_LITERAL(95, 1327, 19), // "setIndentationWidth"
QT_MOC_LITERAL(96, 1347, 8), // "setLexer"
QT_MOC_LITERAL(97, 1356, 10), // "QsciLexer*"
QT_MOC_LITERAL(98, 1367, 5), // "lexer"
QT_MOC_LITERAL(99, 1373, 25), // "setMarginsBackgroundColor"
QT_MOC_LITERAL(100, 1399, 14), // "setMarginsFont"
QT_MOC_LITERAL(101, 1414, 1), // "f"
QT_MOC_LITERAL(102, 1416, 25), // "setMarginsForegroundColor"
QT_MOC_LITERAL(103, 1442, 20), // "setMarginLineNumbers"
QT_MOC_LITERAL(104, 1463, 4), // "lnrs"
QT_MOC_LITERAL(105, 1468, 19), // "setMarginMarkerMask"
QT_MOC_LITERAL(106, 1488, 4), // "mask"
QT_MOC_LITERAL(107, 1493, 20), // "setMarginSensitivity"
QT_MOC_LITERAL(108, 1514, 4), // "sens"
QT_MOC_LITERAL(109, 1519, 14), // "setMarginWidth"
QT_MOC_LITERAL(110, 1534, 1), // "s"
QT_MOC_LITERAL(111, 1536, 11), // "setModified"
QT_MOC_LITERAL(112, 1548, 8), // "setPaper"
QT_MOC_LITERAL(113, 1557, 11), // "setReadOnly"
QT_MOC_LITERAL(114, 1569, 2), // "ro"
QT_MOC_LITERAL(115, 1572, 12), // "setSelection"
QT_MOC_LITERAL(116, 1585, 8), // "lineFrom"
QT_MOC_LITERAL(117, 1594, 9), // "indexFrom"
QT_MOC_LITERAL(118, 1604, 6), // "lineTo"
QT_MOC_LITERAL(119, 1611, 7), // "indexTo"
QT_MOC_LITERAL(120, 1619, 27), // "setSelectionBackgroundColor"
QT_MOC_LITERAL(121, 1647, 27), // "setSelectionForegroundColor"
QT_MOC_LITERAL(122, 1675, 13), // "setTabIndents"
QT_MOC_LITERAL(123, 1689, 11), // "setTabWidth"
QT_MOC_LITERAL(124, 1701, 7), // "setText"
QT_MOC_LITERAL(125, 1709, 7), // "setUtf8"
QT_MOC_LITERAL(126, 1717, 2), // "cp"
QT_MOC_LITERAL(127, 1720, 23), // "setWhitespaceVisibility"
QT_MOC_LITERAL(128, 1744, 20), // "WhitespaceVisibility"
QT_MOC_LITERAL(129, 1765, 11), // "setWrapMode"
QT_MOC_LITERAL(130, 1777, 8), // "WrapMode"
QT_MOC_LITERAL(131, 1786, 4), // "undo"
QT_MOC_LITERAL(132, 1791, 6), // "zoomIn"
QT_MOC_LITERAL(133, 1798, 5), // "range"
QT_MOC_LITERAL(134, 1804, 7), // "zoomOut"
QT_MOC_LITERAL(135, 1812, 6), // "zoomTo"
QT_MOC_LITERAL(136, 1819, 4), // "size"
QT_MOC_LITERAL(137, 1824, 14), // "setScrollWidth"
QT_MOC_LITERAL(138, 1839, 10), // "pixelWidth"
QT_MOC_LITERAL(139, 1850, 14), // "getScrollWidth"
QT_MOC_LITERAL(140, 1865, 22), // "setScrollWidthTracking"
QT_MOC_LITERAL(141, 1888, 7), // "enabled"
QT_MOC_LITERAL(142, 1896, 22), // "getScrollWidthTracking"
QT_MOC_LITERAL(143, 1919, 18), // "handleCallTipClick"
QT_MOC_LITERAL(144, 1938, 3), // "dir"
QT_MOC_LITERAL(145, 1942, 15), // "handleCharAdded"
QT_MOC_LITERAL(146, 1958, 9), // "charadded"
QT_MOC_LITERAL(147, 1968, 20), // "handleIndicatorClick"
QT_MOC_LITERAL(148, 1989, 3), // "pos"
QT_MOC_LITERAL(149, 1993, 9), // "modifiers"
QT_MOC_LITERAL(150, 2003, 22), // "handleIndicatorRelease"
QT_MOC_LITERAL(151, 2026, 17), // "handleMarginClick"
QT_MOC_LITERAL(152, 2044, 22), // "handleMarginRightClick"
QT_MOC_LITERAL(153, 2067, 14), // "handleModified"
QT_MOC_LITERAL(154, 2082, 5), // "mtype"
QT_MOC_LITERAL(155, 2088, 11), // "const char*"
QT_MOC_LITERAL(156, 2100, 3), // "len"
QT_MOC_LITERAL(157, 2104, 5), // "added"
QT_MOC_LITERAL(158, 2110, 7), // "foldNow"
QT_MOC_LITERAL(159, 2118, 8), // "foldPrev"
QT_MOC_LITERAL(160, 2127, 5), // "token"
QT_MOC_LITERAL(161, 2133, 20), // "annotationLinesAdded"
QT_MOC_LITERAL(162, 2154, 20), // "handlePropertyChange"
QT_MOC_LITERAL(163, 2175, 4), // "prop"
QT_MOC_LITERAL(164, 2180, 3), // "val"
QT_MOC_LITERAL(165, 2184, 22), // "handleSavePointReached"
QT_MOC_LITERAL(166, 2207, 19), // "handleSavePointLeft"
QT_MOC_LITERAL(167, 2227, 22), // "handleSelectionChanged"
QT_MOC_LITERAL(168, 2250, 29), // "handleAutoCompletionSelection"
QT_MOC_LITERAL(169, 2280, 23), // "handleUserListSelection"
QT_MOC_LITERAL(170, 2304, 22), // "handleStyleColorChange"
QT_MOC_LITERAL(171, 2327, 5), // "style"
QT_MOC_LITERAL(172, 2333, 24), // "handleStyleEolFillChange"
QT_MOC_LITERAL(173, 2358, 7), // "eolfill"
QT_MOC_LITERAL(174, 2366, 21), // "handleStyleFontChange"
QT_MOC_LITERAL(175, 2388, 22), // "handleStylePaperChange"
QT_MOC_LITERAL(176, 2411, 14), // "handleUpdateUI"
QT_MOC_LITERAL(177, 2426, 7), // "updated"
QT_MOC_LITERAL(178, 2434, 16) // "delete_selection"

    },
    "QsciScintilla\0cursorPositionChanged\0"
    "\0line\0index\0copyAvailable\0yes\0"
    "indicatorClicked\0Qt::KeyboardModifiers\0"
    "state\0indicatorReleased\0linesChanged\0"
    "marginClicked\0margin\0marginRightClicked\0"
    "modificationAttempted\0modificationChanged\0"
    "m\0selectionChanged\0textChanged\0"
    "userListActivated\0id\0string\0append\0"
    "text\0autoCompleteFromAll\0autoCompleteFromAPIs\0"
    "autoCompleteFromDocument\0callTip\0clear\0"
    "copy\0cut\0ensureCursorVisible\0"
    "ensureLineVisible\0foldAll\0children\0"
    "foldLine\0indent\0insert\0insertAt\0"
    "moveToMatchingBrace\0paste\0redo\0"
    "removeSelectedText\0replaceSelectedText\0"
    "resetSelectionBackgroundColor\0"
    "resetSelectionForegroundColor\0selectAll\0"
    "select\0selectToMatchingBrace\0"
    "setAutoCompletionCaseSensitivity\0cs\0"
    "setAutoCompletionReplaceWord\0replace\0"
    "setAutoCompletionShowSingle\0single\0"
    "setAutoCompletionSource\0AutoCompletionSource\0"
    "source\0setAutoCompletionThreshold\0"
    "thresh\0setAutoCompletionUseSingle\0"
    "AutoCompletionUseSingle\0setAutoIndent\0"
    "autoindent\0setBraceMatching\0BraceMatch\0"
    "bm\0setBackspaceUnindents\0unindent\0"
    "setCaretForegroundColor\0col\0"
    "setCaretLineBackgroundColor\0"
    "setCaretLineVisible\0enable\0setCaretWidth\0"
    "width\0setColor\0c\0setCursorPosition\0"
    "setEolMode\0EolMode\0mode\0setEolVisibility\0"
    "visible\0setFolding\0FoldStyle\0fold\0"
    "setIndentation\0indentation\0"
    "setIndentationGuides\0"
    "setIndentationGuidesBackgroundColor\0"
    "setIndentationGuidesForegroundColor\0"
    "setIndentationsUseTabs\0tabs\0"
    "setIndentationWidth\0setLexer\0QsciLexer*\0"
    "lexer\0setMarginsBackgroundColor\0"
    "setMarginsFont\0f\0setMarginsForegroundColor\0"
    "setMarginLineNumbers\0lnrs\0setMarginMarkerMask\0"
    "mask\0setMarginSensitivity\0sens\0"
    "setMarginWidth\0s\0setModified\0setPaper\0"
    "setReadOnly\0ro\0setSelection\0lineFrom\0"
    "indexFrom\0lineTo\0indexTo\0"
    "setSelectionBackgroundColor\0"
    "setSelectionForegroundColor\0setTabIndents\0"
    "setTabWidth\0setText\0setUtf8\0cp\0"
    "setWhitespaceVisibility\0WhitespaceVisibility\0"
    "setWrapMode\0WrapMode\0undo\0zoomIn\0range\0"
    "zoomOut\0zoomTo\0size\0setScrollWidth\0"
    "pixelWidth\0getScrollWidth\0"
    "setScrollWidthTracking\0enabled\0"
    "getScrollWidthTracking\0handleCallTipClick\0"
    "dir\0handleCharAdded\0charadded\0"
    "handleIndicatorClick\0pos\0modifiers\0"
    "handleIndicatorRelease\0handleMarginClick\0"
    "handleMarginRightClick\0handleModified\0"
    "mtype\0const char*\0len\0added\0foldNow\0"
    "foldPrev\0token\0annotationLinesAdded\0"
    "handlePropertyChange\0prop\0val\0"
    "handleSavePointReached\0handleSavePointLeft\0"
    "handleSelectionChanged\0"
    "handleAutoCompletionSelection\0"
    "handleUserListSelection\0handleStyleColorChange\0"
    "style\0handleStyleEolFillChange\0eolfill\0"
    "handleStyleFontChange\0handleStylePaperChange\0"
    "handleUpdateUI\0updated\0delete_selection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QsciScintilla[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     115,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  589,    2, 0x06 /* Public */,
       5,    1,  594,    2, 0x06 /* Public */,
       7,    3,  597,    2, 0x06 /* Public */,
      10,    3,  604,    2, 0x06 /* Public */,
      11,    0,  611,    2, 0x06 /* Public */,
      12,    3,  612,    2, 0x06 /* Public */,
      14,    3,  619,    2, 0x06 /* Public */,
      15,    0,  626,    2, 0x06 /* Public */,
      16,    1,  627,    2, 0x06 /* Public */,
      18,    0,  630,    2, 0x06 /* Public */,
      19,    0,  631,    2, 0x06 /* Public */,
      20,    2,  632,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      23,    1,  637,    2, 0x0a /* Public */,
      25,    0,  640,    2, 0x0a /* Public */,
      26,    0,  641,    2, 0x0a /* Public */,
      27,    0,  642,    2, 0x0a /* Public */,
      28,    0,  643,    2, 0x0a /* Public */,
      29,    0,  644,    2, 0x0a /* Public */,
      30,    0,  645,    2, 0x0a /* Public */,
      31,    0,  646,    2, 0x0a /* Public */,
      32,    0,  647,    2, 0x0a /* Public */,
      33,    1,  648,    2, 0x0a /* Public */,
      34,    1,  651,    2, 0x0a /* Public */,
      34,    0,  654,    2, 0x2a /* Public | MethodCloned */,
      36,    1,  655,    2, 0x0a /* Public */,
      37,    1,  658,    2, 0x0a /* Public */,
      38,    1,  661,    2, 0x0a /* Public */,
      39,    3,  664,    2, 0x0a /* Public */,
      40,    0,  671,    2, 0x0a /* Public */,
      41,    0,  672,    2, 0x0a /* Public */,
      42,    0,  673,    2, 0x0a /* Public */,
      43,    0,  674,    2, 0x0a /* Public */,
      44,    1,  675,    2, 0x0a /* Public */,
      45,    0,  678,    2, 0x0a /* Public */,
      46,    0,  679,    2, 0x0a /* Public */,
      47,    1,  680,    2, 0x0a /* Public */,
      47,    0,  683,    2, 0x2a /* Public | MethodCloned */,
      49,    0,  684,    2, 0x0a /* Public */,
      50,    1,  685,    2, 0x0a /* Public */,
      52,    1,  688,    2, 0x0a /* Public */,
      54,    1,  691,    2, 0x0a /* Public */,
      56,    1,  694,    2, 0x0a /* Public */,
      59,    1,  697,    2, 0x0a /* Public */,
      61,    1,  700,    2, 0x0a /* Public */,
      63,    1,  703,    2, 0x0a /* Public */,
      65,    1,  706,    2, 0x0a /* Public */,
      68,    1,  709,    2, 0x0a /* Public */,
      70,    1,  712,    2, 0x0a /* Public */,
      72,    1,  715,    2, 0x0a /* Public */,
      73,    1,  718,    2, 0x0a /* Public */,
      75,    1,  721,    2, 0x0a /* Public */,
      77,    1,  724,    2, 0x0a /* Public */,
      79,    2,  727,    2, 0x0a /* Public */,
      80,    1,  732,    2, 0x0a /* Public */,
      83,    1,  735,    2, 0x0a /* Public */,
      85,    2,  738,    2, 0x0a /* Public */,
      85,    1,  743,    2, 0x2a /* Public | MethodCloned */,
      88,    2,  746,    2, 0x0a /* Public */,
      90,    1,  751,    2, 0x0a /* Public */,
      91,    1,  754,    2, 0x0a /* Public */,
      92,    1,  757,    2, 0x0a /* Public */,
      93,    1,  760,    2, 0x0a /* Public */,
      95,    1,  763,    2, 0x0a /* Public */,
      96,    1,  766,    2, 0x0a /* Public */,
      96,    0,  769,    2, 0x2a /* Public | MethodCloned */,
      99,    1,  770,    2, 0x0a /* Public */,
     100,    1,  773,    2, 0x0a /* Public */,
     102,    1,  776,    2, 0x0a /* Public */,
     103,    2,  779,    2, 0x0a /* Public */,
     105,    2,  784,    2, 0x0a /* Public */,
     107,    2,  789,    2, 0x0a /* Public */,
     109,    2,  794,    2, 0x0a /* Public */,
     109,    2,  799,    2, 0x0a /* Public */,
     111,    1,  804,    2, 0x0a /* Public */,
     112,    1,  807,    2, 0x0a /* Public */,
     113,    1,  810,    2, 0x0a /* Public */,
     115,    4,  813,    2, 0x0a /* Public */,
     120,    1,  822,    2, 0x0a /* Public */,
     121,    1,  825,    2, 0x0a /* Public */,
     122,    1,  828,    2, 0x0a /* Public */,
     123,    1,  831,    2, 0x0a /* Public */,
     124,    1,  834,    2, 0x0a /* Public */,
     125,    1,  837,    2, 0x0a /* Public */,
     127,    1,  840,    2, 0x0a /* Public */,
     129,    1,  843,    2, 0x0a /* Public */,
     131,    0,  846,    2, 0x0a /* Public */,
      69,    1,  847,    2, 0x0a /* Public */,
     132,    1,  850,    2, 0x0a /* Public */,
     132,    0,  853,    2, 0x0a /* Public */,
     134,    1,  854,    2, 0x0a /* Public */,
     134,    0,  857,    2, 0x0a /* Public */,
     135,    1,  858,    2, 0x0a /* Public */,
     137,    1,  861,    2, 0x0a /* Public */,
     139,    0,  864,    2, 0x0a /* Public */,
     140,    1,  865,    2, 0x0a /* Public */,
     142,    0,  868,    2, 0x0a /* Public */,
     143,    1,  869,    2, 0x08 /* Private */,
     145,    1,  872,    2, 0x08 /* Private */,
     147,    2,  875,    2, 0x08 /* Private */,
     150,    2,  880,    2, 0x08 /* Private */,
     151,    3,  885,    2, 0x08 /* Private */,
     152,    3,  892,    2, 0x08 /* Private */,
     153,   10,  899,    2, 0x08 /* Private */,
     162,    2,  920,    2, 0x08 /* Private */,
     165,    0,  925,    2, 0x08 /* Private */,
     166,    0,  926,    2, 0x08 /* Private */,
     167,    1,  927,    2, 0x08 /* Private */,
     168,    0,  930,    2, 0x08 /* Private */,
     169,    2,  931,    2, 0x08 /* Private */,
     170,    2,  936,    2, 0x08 /* Private */,
     172,    2,  941,    2, 0x08 /* Private */,
     174,    2,  946,    2, 0x08 /* Private */,
     175,    2,  951,    2, 0x08 /* Private */,
     176,    1,  956,    2, 0x08 /* Private */,
     178,    0,  959,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 8,    3,    4,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 8,    3,    4,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 8,   13,    3,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 8,   13,    3,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   21,   22,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   24,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, 0x80000000 | 57,   58,
    QMetaType::Void, QMetaType::Int,   60,
    QMetaType::Void, 0x80000000 | 62,   55,
    QMetaType::Void, QMetaType::Bool,   64,
    QMetaType::Void, 0x80000000 | 66,   67,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void, QMetaType::QColor,   71,
    QMetaType::Void, QMetaType::QColor,   71,
    QMetaType::Void, QMetaType::Bool,   74,
    QMetaType::Void, QMetaType::Int,   76,
    QMetaType::Void, QMetaType::QColor,   78,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, 0x80000000 | 81,   82,
    QMetaType::Void, QMetaType::Bool,   84,
    QMetaType::Void, 0x80000000 | 86, QMetaType::Int,   87,   13,
    QMetaType::Void, 0x80000000 | 86,   87,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,   89,
    QMetaType::Void, QMetaType::Bool,   74,
    QMetaType::Void, QMetaType::QColor,   71,
    QMetaType::Void, QMetaType::QColor,   71,
    QMetaType::Void, QMetaType::Bool,   94,
    QMetaType::Void, QMetaType::Int,   76,
    QMetaType::Void, 0x80000000 | 97,   98,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,   71,
    QMetaType::Void, QMetaType::QFont,  101,
    QMetaType::Void, QMetaType::QColor,   71,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   13,  104,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,  106,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   13,  108,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   76,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   13,  110,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::QColor,   78,
    QMetaType::Void, QMetaType::Bool,  114,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  116,  117,  118,  119,
    QMetaType::Void, QMetaType::QColor,   71,
    QMetaType::Void, QMetaType::QColor,   71,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Int,   76,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::Bool,  126,
    QMetaType::Void, 0x80000000 | 128,   82,
    QMetaType::Void, 0x80000000 | 130,   82,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,  133,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  133,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  136,
    QMetaType::Void, QMetaType::Int,  138,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Bool,  141,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,  144,
    QMetaType::Void, QMetaType::Int,  146,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  148,  149,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  148,  149,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,  148,   13,  149,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,  148,   13,  149,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 155, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  148,  154,   24,  156,  157,    3,  158,  159,  160,  161,
    QMetaType::Void, 0x80000000 | 155, 0x80000000 | 155,  163,  164,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 155, QMetaType::Int,   24,   21,
    QMetaType::Void, QMetaType::QColor, QMetaType::Int,   78,  171,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,  173,  171,
    QMetaType::Void, QMetaType::QFont, QMetaType::Int,  101,  171,
    QMetaType::Void, QMetaType::QColor, QMetaType::Int,   78,  171,
    QMetaType::Void, QMetaType::Int,  177,
    QMetaType::Void,

       0        // eod
};

void QsciScintilla::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QsciScintilla *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->copyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->indicatorClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3]))); break;
        case 3: _t->indicatorReleased((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3]))); break;
        case 4: _t->linesChanged(); break;
        case 5: _t->marginClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3]))); break;
        case 6: _t->marginRightClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3]))); break;
        case 7: _t->modificationAttempted(); break;
        case 8: _t->modificationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->selectionChanged(); break;
        case 10: _t->textChanged(); break;
        case 11: _t->userListActivated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->append((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->autoCompleteFromAll(); break;
        case 14: _t->autoCompleteFromAPIs(); break;
        case 15: _t->autoCompleteFromDocument(); break;
        case 16: _t->callTip(); break;
        case 17: _t->clear(); break;
        case 18: _t->copy(); break;
        case 19: _t->cut(); break;
        case 20: _t->ensureCursorVisible(); break;
        case 21: _t->ensureLineVisible((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->foldAll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->foldAll(); break;
        case 24: _t->foldLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->indent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->insert((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->insertAt((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 28: _t->moveToMatchingBrace(); break;
        case 29: _t->paste(); break;
        case 30: _t->redo(); break;
        case 31: _t->removeSelectedText(); break;
        case 32: _t->replaceSelectedText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->resetSelectionBackgroundColor(); break;
        case 34: _t->resetSelectionForegroundColor(); break;
        case 35: _t->selectAll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->selectAll(); break;
        case 37: _t->selectToMatchingBrace(); break;
        case 38: _t->setAutoCompletionCaseSensitivity((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->setAutoCompletionReplaceWord((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->setAutoCompletionShowSingle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->setAutoCompletionSource((*reinterpret_cast< AutoCompletionSource(*)>(_a[1]))); break;
        case 42: _t->setAutoCompletionThreshold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->setAutoCompletionUseSingle((*reinterpret_cast< AutoCompletionUseSingle(*)>(_a[1]))); break;
        case 44: _t->setAutoIndent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->setBraceMatching((*reinterpret_cast< BraceMatch(*)>(_a[1]))); break;
        case 46: _t->setBackspaceUnindents((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->setCaretForegroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 48: _t->setCaretLineBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 49: _t->setCaretLineVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->setCaretWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 52: _t->setCursorPosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 53: _t->setEolMode((*reinterpret_cast< EolMode(*)>(_a[1]))); break;
        case 54: _t->setEolVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->setFolding((*reinterpret_cast< FoldStyle(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 56: _t->setFolding((*reinterpret_cast< FoldStyle(*)>(_a[1]))); break;
        case 57: _t->setIndentation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 58: _t->setIndentationGuides((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: _t->setIndentationGuidesBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 60: _t->setIndentationGuidesForegroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 61: _t->setIndentationsUseTabs((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: _t->setIndentationWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 63: _t->setLexer((*reinterpret_cast< QsciLexer*(*)>(_a[1]))); break;
        case 64: _t->setLexer(); break;
        case 65: _t->setMarginsBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 66: _t->setMarginsFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 67: _t->setMarginsForegroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 68: _t->setMarginLineNumbers((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 69: _t->setMarginMarkerMask((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 70: _t->setMarginSensitivity((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 71: _t->setMarginWidth((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 72: _t->setMarginWidth((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 73: _t->setModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 74: _t->setPaper((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 75: _t->setReadOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 76: _t->setSelection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 77: _t->setSelectionBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 78: _t->setSelectionForegroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 79: _t->setTabIndents((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 80: _t->setTabWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 81: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 82: _t->setUtf8((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 83: _t->setWhitespaceVisibility((*reinterpret_cast< WhitespaceVisibility(*)>(_a[1]))); break;
        case 84: _t->setWrapMode((*reinterpret_cast< WrapMode(*)>(_a[1]))); break;
        case 85: _t->undo(); break;
        case 86: _t->unindent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 87: _t->zoomIn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 88: _t->zoomIn(); break;
        case 89: _t->zoomOut((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 90: _t->zoomOut(); break;
        case 91: _t->zoomTo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 92: _t->setScrollWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 93: { int _r = _t->getScrollWidth();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 94: _t->setScrollWidthTracking((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 95: { bool _r = _t->getScrollWidthTracking();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 96: _t->handleCallTipClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 97: _t->handleCharAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 98: _t->handleIndicatorClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 99: _t->handleIndicatorRelease((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 100: _t->handleMarginClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 101: _t->handleMarginRightClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 102: _t->handleModified((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9])),(*reinterpret_cast< int(*)>(_a[10]))); break;
        case 103: _t->handlePropertyChange((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 104: _t->handleSavePointReached(); break;
        case 105: _t->handleSavePointLeft(); break;
        case 106: _t->handleSelectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 107: _t->handleAutoCompletionSelection(); break;
        case 108: _t->handleUserListSelection((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 109: _t->handleStyleColorChange((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 110: _t->handleStyleEolFillChange((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 111: _t->handleStyleFontChange((*reinterpret_cast< const QFont(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 112: _t->handleStylePaperChange((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 113: _t->handleUpdateUI((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 114: _t->delete_selection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QsciScintilla::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QsciScintilla::cursorPositionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QsciScintilla::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QsciScintilla::copyAvailable)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QsciScintilla::*)(int , int , Qt::KeyboardModifiers );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QsciScintilla::indicatorClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QsciScintilla::*)(int , int , Qt::KeyboardModifiers );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QsciScintilla::indicatorReleased)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QsciScintilla::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QsciScintilla::linesChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QsciScintilla::*)(int , int , Qt::KeyboardModifiers );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QsciScintilla::marginClicked)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QsciScintilla::*)(int , int , Qt::KeyboardModifiers );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QsciScintilla::marginRightClicked)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QsciScintilla::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QsciScintilla::modificationAttempted)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QsciScintilla::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QsciScintilla::modificationChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QsciScintilla::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QsciScintilla::selectionChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QsciScintilla::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QsciScintilla::textChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QsciScintilla::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QsciScintilla::userListActivated)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QsciScintilla::staticMetaObject = { {
    QMetaObject::SuperData::link<QsciScintillaBase::staticMetaObject>(),
    qt_meta_stringdata_QsciScintilla.data,
    qt_meta_data_QsciScintilla,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QsciScintilla::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QsciScintilla::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QsciScintilla.stringdata0))
        return static_cast<void*>(this);
    return QsciScintillaBase::qt_metacast(_clname);
}

int QsciScintilla::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QsciScintillaBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 115)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 115;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 115)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 115;
    }
    return _id;
}

// SIGNAL 0
void QsciScintilla::cursorPositionChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QsciScintilla::copyAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QsciScintilla::indicatorClicked(int _t1, int _t2, Qt::KeyboardModifiers _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QsciScintilla::indicatorReleased(int _t1, int _t2, Qt::KeyboardModifiers _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QsciScintilla::linesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QsciScintilla::marginClicked(int _t1, int _t2, Qt::KeyboardModifiers _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QsciScintilla::marginRightClicked(int _t1, int _t2, Qt::KeyboardModifiers _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QsciScintilla::modificationAttempted()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QsciScintilla::modificationChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QsciScintilla::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QsciScintilla::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QsciScintilla::userListActivated(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
