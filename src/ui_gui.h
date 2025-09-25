/********************************************************************************
** Form generated from reading UI file 'gui.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gui
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *isoEd;
    QLabel *label_2;
    QLineEdit *fragsEd;
    QLabel *label_3;
    QLineEdit *thetaEd;
    QLabel *label_4;
    QLineEdit *rhoEd;
    QLabel *label_5;
    QLineEdit *deltaEd;
    QLabel *label_10;
    QLineEdit *popSizeEd;
    QToolButton *popSizeShow;
    QFrame *line;
    QLabel *label_6;
    QLineEdit *dataTo;
    QToolButton *dataSelect;
    QLabel *label_9;
    QLineEdit *ltTo;
    QToolButton *ltSelect;
    QLabel *label_7;
    QLineEdit *cgTo;
    QToolButton *cgSelect;
    QLabel *label_8;
    QLineEdit *dotTo;
    QToolButton *dotSelect;
    QCheckBox *amEd;
    QHBoxLayout *hboxLayout;
    QPushButton *help;
    QPushButton *run;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Gui)
    {
        if (Gui->objectName().isEmpty())
            Gui->setObjectName(QStringLiteral("Gui"));
        Gui->resize(389, 443);
        centralwidget = new QWidget(Gui);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        isoEd = new QLineEdit(centralwidget);
        isoEd->setObjectName(QStringLiteral("isoEd"));
        isoEd->setFrame(true);
        isoEd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(isoEd, 0, 1, 1, 3);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        fragsEd = new QLineEdit(centralwidget);
        fragsEd->setObjectName(QStringLiteral("fragsEd"));
        fragsEd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(fragsEd, 1, 1, 1, 3);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        thetaEd = new QLineEdit(centralwidget);
        thetaEd->setObjectName(QStringLiteral("thetaEd"));
        thetaEd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(thetaEd, 2, 1, 1, 3);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        rhoEd = new QLineEdit(centralwidget);
        rhoEd->setObjectName(QStringLiteral("rhoEd"));
        rhoEd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(rhoEd, 3, 1, 1, 3);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        deltaEd = new QLineEdit(centralwidget);
        deltaEd->setObjectName(QStringLiteral("deltaEd"));
        deltaEd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(deltaEd, 4, 1, 1, 3);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 5, 0, 1, 1);

        popSizeEd = new QLineEdit(centralwidget);
        popSizeEd->setObjectName(QStringLiteral("popSizeEd"));
        popSizeEd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(popSizeEd, 5, 1, 1, 1);

        popSizeShow = new QToolButton(centralwidget);
        popSizeShow->setObjectName(QStringLiteral("popSizeShow"));

        gridLayout->addWidget(popSizeShow, 5, 2, 1, 2);

        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 6, 0, 1, 4);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 7, 0, 1, 1);

        dataTo = new QLineEdit(centralwidget);
        dataTo->setObjectName(QStringLiteral("dataTo"));

        gridLayout->addWidget(dataTo, 7, 1, 1, 2);

        dataSelect = new QToolButton(centralwidget);
        dataSelect->setObjectName(QStringLiteral("dataSelect"));

        gridLayout->addWidget(dataSelect, 7, 3, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        ltTo = new QLineEdit(centralwidget);
        ltTo->setObjectName(QStringLiteral("ltTo"));

        gridLayout->addWidget(ltTo, 8, 1, 1, 2);

        ltSelect = new QToolButton(centralwidget);
        ltSelect->setObjectName(QStringLiteral("ltSelect"));

        gridLayout->addWidget(ltSelect, 8, 3, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 9, 0, 1, 1);

        cgTo = new QLineEdit(centralwidget);
        cgTo->setObjectName(QStringLiteral("cgTo"));

        gridLayout->addWidget(cgTo, 9, 1, 1, 2);

        cgSelect = new QToolButton(centralwidget);
        cgSelect->setObjectName(QStringLiteral("cgSelect"));

        gridLayout->addWidget(cgSelect, 9, 3, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 10, 0, 1, 1);

        dotTo = new QLineEdit(centralwidget);
        dotTo->setObjectName(QStringLiteral("dotTo"));

        gridLayout->addWidget(dotTo, 10, 1, 1, 2);

        dotSelect = new QToolButton(centralwidget);
        dotSelect->setObjectName(QStringLiteral("dotSelect"));

        gridLayout->addWidget(dotSelect, 10, 3, 1, 1);

        amEd = new QCheckBox(centralwidget);
        amEd->setObjectName(QStringLiteral("amEd"));

        gridLayout->addWidget(amEd, 11, 0, 1, 3);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        help = new QPushButton(centralwidget);
        help->setObjectName(QStringLiteral("help"));

        hboxLayout->addWidget(help);

        run = new QPushButton(centralwidget);
        run->setObjectName(QStringLiteral("run"));

        hboxLayout->addWidget(run);


        gridLayout->addLayout(hboxLayout, 12, 0, 1, 4);

        Gui->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Gui);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Gui->setStatusBar(statusbar);

        retranslateUi(Gui);

        QMetaObject::connectSlotsByName(Gui);
    } // setupUi

    void retranslateUi(QMainWindow *Gui)
    {
        Gui->setWindowTitle(QApplication::translate("Gui", "SimMLST", 0));
        label->setText(QApplication::translate("Gui", "Number of isolates", 0));
#ifndef QT_NO_WHATSTHIS
        isoEd->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        isoEd->setInputMask(QString());
        isoEd->setText(QApplication::translate("Gui", "100", 0));
        label_2->setText(QApplication::translate("Gui", "Lengths of gene fragments", 0));
        fragsEd->setText(QApplication::translate("Gui", "400,400,400,400,400,400,400", 0));
        label_3->setText(QApplication::translate("Gui", "Mutation rate (theta)", 0));
        thetaEd->setText(QApplication::translate("Gui", "100", 0));
        label_4->setText(QApplication::translate("Gui", "Recombination rate (rho)", 0));
        rhoEd->setText(QApplication::translate("Gui", "100", 0));
        label_5->setText(QApplication::translate("Gui", "Mean tract length (delta)", 0));
        deltaEd->setText(QApplication::translate("Gui", "500", 0));
        label_10->setText(QApplication::translate("Gui", "Population size model", 0));
        popSizeShow->setText(QApplication::translate("Gui", "Show", 0));
        label_6->setText(QApplication::translate("Gui", "Save data to...", 0));
        dataSelect->setText(QApplication::translate("Gui", "...", 0));
        label_9->setText(QApplication::translate("Gui", "Save local trees to...", 0));
        ltSelect->setText(QApplication::translate("Gui", "...", 0));
        label_7->setText(QApplication::translate("Gui", "Save clonal genealogy to...", 0));
        cgSelect->setText(QApplication::translate("Gui", "...", 0));
        label_8->setText(QApplication::translate("Gui", "Save DOT graph to...", 0));
        dotSelect->setText(QApplication::translate("Gui", "...", 0));
        amEd->setText(QApplication::translate("Gui", "Save ancestral material in the DOT graph", 0));
        help->setText(QApplication::translate("Gui", "Help", 0));
        run->setText(QApplication::translate("Gui", "Simulate!", 0));
    } // retranslateUi

};

namespace Ui {
    class Gui: public Ui_Gui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
