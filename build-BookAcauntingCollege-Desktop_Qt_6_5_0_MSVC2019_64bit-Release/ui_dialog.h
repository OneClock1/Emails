/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QLineEdit *inp_name;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLineEdit *inp_author;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *inp_year;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *inp_count;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QTextEdit *inp_com;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_add;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(454, 455);
        QFont font;
        font.setPointSize(9);
        Dialog->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("download.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName("gridLayout");
        label_6 = new QLabel(Dialog);
        label_6->setObjectName("label_6");
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label = new QLabel(Dialog);
        label->setObjectName("label");

        verticalLayout_5->addWidget(label);

        inp_name = new QLineEdit(Dialog);
        inp_name->setObjectName("inp_name");

        verticalLayout_5->addWidget(inp_name);


        verticalLayout_6->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");

        verticalLayout_4->addWidget(label_2);

        inp_author = new QLineEdit(Dialog);
        inp_author->setObjectName("inp_author");

        verticalLayout_4->addWidget(inp_author);


        verticalLayout_6->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        inp_year = new QLineEdit(Dialog);
        inp_year->setObjectName("inp_year");
        inp_year->setMaximumSize(QSize(100, 16777215));

        verticalLayout_3->addWidget(inp_year);


        verticalLayout_6->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(Dialog);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        inp_count = new QLineEdit(Dialog);
        inp_count->setObjectName("inp_count");
        inp_count->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(inp_count);


        verticalLayout_6->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout_6, 1, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_5 = new QLabel(Dialog);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        inp_com = new QTextEdit(Dialog);
        inp_com->setObjectName("inp_com");

        verticalLayout->addWidget(inp_com);


        verticalLayout_7->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_add = new QPushButton(Dialog);
        btn_add->setObjectName("btn_add");

        horizontalLayout->addWidget(btn_add);


        verticalLayout_7->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_7, 2, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\277\321\226\320\264\321\200\321\203\321\207\320\275\320\270\320\272", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\320\235\320\260\320\267\320\262\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "\320\240\321\226\320\272", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "\320\237\321\200\320\270\320\274\321\226\321\202\320\272\320\260", nullptr));
        btn_add->setText(QCoreApplication::translate("Dialog", "\320\224\320\276\320\264\320\260\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
