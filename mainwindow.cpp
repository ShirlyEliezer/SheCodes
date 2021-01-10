#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDate>
#include <QtWidgets>
#include <QtGui>
#include <QtCore>
#include <QGridLayout>
#include <QPixmap>
#include <QLabel>
#include <QPalette>

FinancialManagement::FinancialManagement(QWidget *parent)
    : QMainWindow(parent)

    // init the UI
    , ui(new Ui::FinancialManagement)
{
    ui->setupUi(this);
}

FinancialManagement::~FinancialManagement()
{
    delete ui;
}


void FinancialManagement::on_addOutcome_clicked()
{
    addOutcome = new addExpenseDialog();
    addOutcome -> setWindowTitle("Add Outcome");

}

void FinancialManagement::on_addIncome_clicked()
{
    addIncome = new addIncomeDialog();
    addOutcome -> setWindowTitle("Add Outcome");
}
