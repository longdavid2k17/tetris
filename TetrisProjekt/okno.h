#ifndef OKNO_H
#define OKNO_H
#include <QFrame>
#include <QWidget>

QT_BEGIN_NAMESPACE
class QLCDNumber;
class QLabel;
class QPushButton;
QT_END_NAMESPACE

class okno : public QWidget
{
    Q_OBJECT
private:
    QLabel *createLabel(const QString &text);

    QLabel *NastepnyLabel;
    QLCDNumber *LicznikPunktow;
    QPushButton *StartButton;
    QPushButton *RankingButton;

public:
    okno();
};

#endif // OKNO_H
