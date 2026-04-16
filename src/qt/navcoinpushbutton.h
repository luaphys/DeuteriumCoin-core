// Copyright (c) 2019-2020 The Deuteriumcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef DEUTERIUMCOINPUSHBUTTON_H
#define DEUTERIUMCOINPUSHBUTTON_H

#include <QIcon>
#include <QPushButton>
#include <QPainter>
#include <QString>
#include <QWidget>

class DeuteriumcoinPushButton : public QPushButton
{
    Q_OBJECT

public:
    DeuteriumcoinPushButton(QString label);
    void paintEvent(QPaintEvent*);
    void setBadge(int nValue);

private:
    QIcon getBadgeIcon(int nValue);
};

#endif // DEUTERIUMCOINPUSHBUTTON_H
