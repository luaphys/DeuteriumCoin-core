// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef DEUTERIUMCOIN_QT_DEUTERIUMCOINADDRESSVALIDATOR_H
#define DEUTERIUMCOIN_QT_DEUTERIUMCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class DeuteriumcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit DeuteriumcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Deuteriumcoin address widget validator, checks for a valid deuteriumcoin address.
 */
class DeuteriumcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit DeuteriumcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // DEUTERIUMCOIN_QT_DEUTERIUMCOINADDRESSVALIDATOR_H
