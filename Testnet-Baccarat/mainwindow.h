/*
dReam Tables Dero Baccarat
Copyright (C) 2022  dReam Tables

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.

Always play responsibly.

https://dreamtables.net
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "QMainWindow"
#include "iostream"
#include "dialog.h"
#include "dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void loginInfo();
    void delay();
    int fetchScData(void);
    int fetchHandData(void);
    int searchHandData(void);
    int checkDaemon(void);
    int checkWallet(void);
    int getChips(void);
    int tradeChips(void);
    int playerBet(void);
    int bankerBet(void);
    int tieBet(void);
    void findMyHand();
    void blankCards();
    void readoutConfirm();
    QPixmap displayPlayerCards(int);
    QPixmap displayBankerCards(int);
    QPixmap displayDrawPlayerCard(int);
    QPixmap displayDrawBankerCard(int);

private slots:

    void refresh();

    void on_playerButton_clicked();

    void on_daemonRPCbutton_clicked(bool checked);

    void on_walletRPCbutton_clicked(bool checked);

    void on_bankerButton_clicked();

    void on_getChipButton_clicked();

    void on_tradeChipButton_clicked();

    void on_tieButton_clicked();

    void on_helpButton_clicked();

    void on_reloadButton_clicked();


    void on_searchButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

