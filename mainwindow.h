#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QString>
#include <QVector>
#include <QDate>
#include <QLabel>
#include <QCalendarWidget>
#include <QListWidget>
#include <QStatusBar>
#include <QLCDNumber>
#include <iostream>
#include <string>
#include <QProgressBar>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include "addexpensedialog.h"

QT_BEGIN_NAMESPACE
namespace Ui {
    class FinancialManagement;
}
QT_END_NAMESPACE

class FinancialManagement : public QMainWindow
{
    Q_OBJECT

public:
    FinancialManagement(QWidget *parent = nullptr);
    ~FinancialManagement();

private slots:
    void on_addOutcome_clicked();
    void on_addIncome_clicked();


private:
    Ui::FinancialManagement *ui;
    addExpenseDialog *addOutcome;

private:
     bool searchFlag;
     QString itemName;
     QString Category;
     double moneyAccount;
     std::vector<item> * expenseItems;
     std::vector<item> * incomeItems;
     std::vector<std::string> * expenseLabels;
     std::vector<std::string> * incomeLabels;
     std::vector<std::pair<std::string, double> > * shoppingItems;


};
#endif // MAINWINDOW_H
