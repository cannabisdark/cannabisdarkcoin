#ifndef CANNABISDARKCOINADDRESSVALIDATOR_H
#define CANNABISDARKCOINADDRESSVALIDATOR_H

#include <QRegExpValidator>

/** Base48 entry widget validator.
   Corrects near-miss characters and refuses characters that are no part of base48.
 */
class CannabisDarkcoinAddressValidator : public QValidator
{
    Q_OBJECT
public:
    explicit CannabisDarkcoinAddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 128;
signals:

public slots:

};

#endif // CANNABISDARKCOINADDRESSVALIDATOR_H
