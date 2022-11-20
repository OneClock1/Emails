/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *btn_open;
    QAction *btn_create;
    QAction *btn_close;
    QAction *btn_add_menu;
    QAction *btn_about;
    QAction *btn_info;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *inp_search;
    QComboBox *drop;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_add;
    QTableWidget *table;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(851, 597);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("download.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        btn_open = new QAction(MainWindow);
        btn_open->setObjectName("btn_open");
        btn_create = new QAction(MainWindow);
        btn_create->setObjectName("btn_create");
        btn_close = new QAction(MainWindow);
        btn_close->setObjectName("btn_close");
        btn_add_menu = new QAction(MainWindow);
        btn_add_menu->setObjectName("btn_add_menu");
        btn_about = new QAction(MainWindow);
        btn_about->setObjectName("btn_about");
        btn_info = new QAction(MainWindow);
        btn_info->setObjectName("btn_info");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);
        label->setTextFormat(Qt::AutoText);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        inp_search = new QLineEdit(centralwidget);
        inp_search->setObjectName("inp_search");

        horizontalLayout_2->addWidget(inp_search);

        drop = new QComboBox(centralwidget);
        drop->addItem(QString());
        drop->addItem(QString());
        drop->addItem(QString());
        drop->addItem(QString());
        drop->addItem(QString());
        drop->setObjectName("drop");

        horizontalLayout_2->addWidget(drop);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btn_add = new QPushButton(centralwidget);
        btn_add->setObjectName("btn_add");

        horizontalLayout_2->addWidget(btn_add);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        table = new QTableWidget(centralwidget);
        if (table->columnCount() < 5)
            table->setColumnCount(5);
        table->setObjectName("table");
        table->setDragEnabled(false);
        table->setAlternatingRowColors(true);
        table->setSelectionBehavior(QAbstractItemView::SelectRows);
        table->setTextElideMode(Qt::ElideRight);
        table->setGridStyle(Qt::SolidLine);
        table->setSortingEnabled(true);
        table->setCornerButtonEnabled(true);
        table->setColumnCount(5);
        table->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(table, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 851, 29));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName("menu_3");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(btn_open);
        menu->addAction(btn_create);
        menu->addAction(btn_close);
        menu_2->addAction(btn_add_menu);
        menu_3->addAction(btn_about);
        menu_3->addAction(btn_info);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\273\321\226\320\272 \320\277\321\226\320\264\321\200\321\203\321\207\320\275\320\270\320\272\321\226\320\262", nullptr));
        btn_open->setText(QCoreApplication::translate("MainWindow", "\320\222\321\226\320\264\320\272\321\200\320\270\321\202\320\270 \321\204\320\260\320\271\320\273", nullptr));
#if QT_CONFIG(shortcut)
        btn_open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_create->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \321\204\320\260\320\271\320\273", nullptr));
#if QT_CONFIG(shortcut)
        btn_create->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_close->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\321\203", nullptr));
        btn_add_menu->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\277\321\226\320\264\321\200\321\203\321\207\320\275\320\270\320\272", nullptr));
        btn_about->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276 \321\200\320\276\320\267\321\200\320\276\320\261\320\275\320\270\320\272\320\260", nullptr));
        btn_info->setText(QCoreApplication::translate("MainWindow", "\320\206\320\275\321\201\321\202\321\200\321\203\320\272\321\206\321\226\321\217", nullptr));
#if QT_CONFIG(shortcut)
        btn_info->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\273\321\226\320\272 \320\277\321\226\320\264\321\200\321\203\321\207\320\275\320\270\320\272\321\226\320\262 \320\262 \320\272\320\276\320\273\320\265\320\264\320\266\321\226", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\210\321\203\320\272", nullptr));
        drop->setItemText(0, QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260", nullptr));
        drop->setItemText(1, QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        drop->setItemText(2, QCoreApplication::translate("MainWindow", "\320\240\321\226\320\272", nullptr));
        drop->setItemText(3, QCoreApplication::translate("MainWindow", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214", nullptr));
        drop->setItemText(4, QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\321\226\321\202\320\272\320\260", nullptr));

        btn_add->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\277\321\226\320\264\321\200\321\203\321\207\320\275\320\270\320\272", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\237\321\226\320\264\321\200\321\203\321\207\320\275\320\270\320\272", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
