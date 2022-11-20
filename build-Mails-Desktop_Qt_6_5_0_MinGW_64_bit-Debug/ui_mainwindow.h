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
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *btn_add_letter;
    QAction *btn_del_db;
    QAction *btn_close;
    QAction *btn_help;
    QAction *btn_about;
    QAction *btn_to1;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *searchLine;
    QTableView *mailList;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *img;
    QLabel *labelText;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *line_subj;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *line_from;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *line_to;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QDateTimeEdit *dateTime;
    QTextBrowser *text_Message;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(991, 640);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/mail.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0)"));
        btn_add_letter = new QAction(MainWindow);
        btn_add_letter->setObjectName("btn_add_letter");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/icons8-e-mail-\320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202-80.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_add_letter->setIcon(icon1);
        btn_del_db = new QAction(MainWindow);
        btn_del_db->setObjectName("btn_del_db");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_del_db->setIcon(icon2);
        btn_close = new QAction(MainWindow);
        btn_close->setObjectName("btn_close");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_close->setIcon(icon3);
        btn_help = new QAction(MainWindow);
        btn_help->setObjectName("btn_help");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/icons8-\320\277\320\276\320\274\320\276\321\211\321\214-240.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_help->setIcon(icon4);
        btn_about = new QAction(MainWindow);
        btn_about->setObjectName("btn_about");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/icons8-\320\276-\320\275\320\260\321\201-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_about->setIcon(icon5);
        btn_to1 = new QAction(MainWindow);
        btn_to1->setObjectName("btn_to1");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/mail (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_to1->setIcon(icon6);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(40, 40));
        label_5->setMaximumSize(QSize(40, 40));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/img/email.png")));
        label_5->setScaledContents(true);

        horizontalLayout_5->addWidget(label_5);

        searchLine = new QLineEdit(page);
        searchLine->setObjectName("searchLine");

        horizontalLayout_5->addWidget(searchLine);


        verticalLayout_3->addLayout(horizontalLayout_5);

        mailList = new QTableView(page);
        mailList->setObjectName("mailList");
        mailList->setMaximumSize(QSize(9999, 16777215));

        verticalLayout_3->addWidget(mailList);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        img = new QLabel(page);
        img->setObjectName("img");
        img->setMaximumSize(QSize(16777215, 999999));
        img->setPixmap(QPixmap(QString::fromUtf8(":/img/mail (1).png")));
        img->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(img);

        labelText = new QLabel(page);
        labelText->setObjectName("labelText");
        labelText->setMinimumSize(QSize(500, 0));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        labelText->setFont(font);
        labelText->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelText);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        gridLayout_2->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        line_subj = new QLineEdit(page);
        line_subj->setObjectName("line_subj");

        horizontalLayout_3->addWidget(line_subj);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        line_from = new QLineEdit(page);
        line_from->setObjectName("line_from");
        line_from->setEnabled(true);

        horizontalLayout_2->addWidget(line_from);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        line_to = new QLineEdit(page);
        line_to->setObjectName("line_to");

        horizontalLayout->addWidget(line_to);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(page);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        dateTime = new QDateTimeEdit(page);
        dateTime->setObjectName("dateTime");
        dateTime->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_4->addWidget(dateTime);


        verticalLayout->addLayout(horizontalLayout_4);

        text_Message = new QTextBrowser(page);
        text_Message->setObjectName("text_Message");

        verticalLayout->addWidget(text_Message);


        gridLayout_2->addLayout(verticalLayout, 0, 2, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName("gridLayout_3");
        textBrowser = new QTextBrowser(page_2);
        textBrowser->setObjectName("textBrowser");

        gridLayout_3->addWidget(textBrowser, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 991, 26));
        menubar->setStyleSheet(QString::fromUtf8("QMunuBar:item:hover {background: rgb(255, 220, 0)}"));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(btn_to1);
        menu->addAction(btn_add_letter);
        menu->addAction(btn_del_db);
        menu->addAction(btn_close);
        menu_2->addAction(btn_help);
        menu_2->addAction(btn_about);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Mail", nullptr));
        btn_add_letter->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\273\320\270\321\201\321\202", nullptr));
        btn_del_db->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\261\320\260\320\267\321\203 \320\264\320\260\320\275\320\270\321\205", nullptr));
        btn_close->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\321\205\321\226\320\264", nullptr));
        btn_help->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\277\320\276\320\274\320\276\320\263\320\260", nullptr));
        btn_about->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\321\203", nullptr));
        btn_to1->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\273\321\226\320\272 \320\277\320\276\321\210\321\202\320\270", nullptr));
        label_5->setText(QString());
        img->setText(QString());
        labelText->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\265\321\200\321\226\321\202\321\214 \320\260\320\261\320\276 \320\264\320\276\320\264\320\260\320\271\321\202\320\265 \320\273\320\270\321\201\321\202", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\260:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\226\320\264:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260:", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">\320\224\320\276\320\277\320\276\320\274\320\276\320\263\320\260</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\260 \320\277\321\200\320\270\320\267\320\275\320\260\321\207\320\265\320\275\320\260 \320\264\320\273\321\217 \320\276\320\261\320\273\320\272\321"
                        "\203 \320\277\320\276\321\210\321\202\320\270.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">\320\224\320\273\321\217 \321\200\320\276\320\261\320\276\321\202\320\270 \320\277\320\276\321\207\320\260\321\202\320\272\321\203 \320\277\321\200\320\276\321\206\320\265\321\201\321\203 \320\277\320\276\321\202\321\200\321\226\320\261\320\275\320\276 \320\264\320\276\320\264\320\260\321\202\320\270 \320\275\320\265\320\276\320\261\321\205\321\226\320\264\320\275\321\226 \320\273\320\270\321\201\321\202\320\270:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/img/help1.png\" /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">1. \320\222 \320\277\321\203\320\275"
                        "\320\272\321\202\321\226 \320\274\320\265\320\275\321\216 \320\276\320\261\321\200\320\260\321\202\320\270 \320\241\320\272\320\260\321\207\320\260\321\202\321\214 \321\201\320\276\320\261\321\211\320\265\320\275\320\270\320\265;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">2. \320\222 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\321\226 \320\262\320\270\320\272\320\276\321\200\320\270\321\201\321\202\320\276\320\262\321\203\321\216\321\207\320\270 \320\277\321\203\320\275\320\272\321\202 \320\274\320\265\320\275\321\216 \320\244\320\260\320\271\320\273 -&gt; \320\224\320\276\320\264\320\260\321\202\320\270 \320\273\320\270\321\201\321\202, \320\276\320\261\321\200\320\260\321\202\320\270 \321\201\320\272\320\260\321\207\320\260\320\275\320\270\320\271 .eml \321\204\320\260\320\271\320\273.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left"
                        ":0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\260 \320\267\320\264\321\226\320\271\321\201\320\275\321\216\321\224 \320\262\321\226\320\264\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\275\321\217 \320\276\321\201\320\275\320\276\320\262\320\275\320\270\321\205 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\226\320\262 \320\262\320\270\320\261\321\200\320\260\320\275\320\276\320\263\320\276 \320\273\320\270\321\201\321\202\320\260 (\320\242\320\265\320\274\320\260, \320\262\321\226\320\264 \320\272\320\276\320\263\320\276, \320\272\320\276\320\274\321\203, \320\264\320\260\321\202\321\203 \321\202\320\260 \321\207\320\260\321\201 \320\262\321\226\320\264\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\275\321\217 \321\226 \321\201\320\260\320\274\320\265 \320\277\320\276\320\262\321\226\320\264\320\276\320\274\320\273\320\265\320\275\320\275"
                        "\321\217).</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">\320\237\320\276\321\210\321\203\320\272 \320\267\320\264\321\226\320\271\321\201\320\275\321\216\321\224\321\202\321\214\321\201\321\217 \320\277\320\276 \321\201\320\277\320\270\321\201\320\272\321\203 \321\226\320\267 \320\277\320\276\320\262\321\226\320\264\320\276\320\274\320\273\320\265\320\275\320\275\321\217\320\274\320\270 (\320\242\320\265\320\274\320\260\321\205 \320\273\320\270\321\201\321\202\321\226\320\262).</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\320\270 \321\200\320\276\320\261\320\276\321\202\321\203 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\270 \320\274\320\276\320\266\320\275\320"
                        "\260 \320\262\320\270\320\272\320\276\321\200\320\270\321\201\321\202\320\276\320\262\321\203\321\216\321\207\320\270 \320\244\320\260\320\271\320\273 -&gt; \320\227\320\260\320\272\321\200\320\270\321\202\320\270</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p></body></html>", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
