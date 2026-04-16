// Copyright (c) 2020 The Deuteriumcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SWAPXDEU_H
#define SWAPXDEU_H

#include "aggregationsession.h"
#include "deuteriumcoinunits.h"
#include "optionsmodel.h"
#include "deuteriumcoinamountfield.h"
#include "blsct/key.h"
#include "wallet/wallet.h"
#include "clientmodel.h"
#include "walletmodel.h"

#include <QApplication>
#include <QPixmap>
#include <QBitmap>
#include <QPushButton>
#include <QPainter>
#include <QSpacerItem>
#include <QMessageBox>
#include <QDialog>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>

#define DEFAULT_UNIT 0

class SwapXDEUDialog : public QDialog
{
    Q_OBJECT

public:
    SwapXDEUDialog(QWidget *parent);

    void setModel(WalletModel *model);
    void setClientModel(ClientModel *model);
    void SetPublicBalance(CAmount a);
    void SetPrivateBalance(CAmount a);

private:
    CAmount publicBalance;
    CAmount privateBalance;

    bool fMode;

    WalletModel *model;
    ClientModel *clientModel;
    QVBoxLayout* layout;
    QLabel *label1;
    QLabel *label2;
    QLabel *toplabel1;
    QLabel *toplabel2;
    QPushButton *swapButton;
    DeuteriumcoinAmountField *amount;

    QLabel *icon1;
    QLabel *icon2;

private Q_SLOTS:
    void Swap();
    void Ok();
};

#endif // SWAPXDEU_H
