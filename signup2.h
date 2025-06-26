#ifndef SIGNUP2_H
#define SIGNUP2_H

#include <QWidget>

namespace Ui {
class signUP2;
}

class signUP2 : public QWidget
{
    Q_OBJECT

public:
    explicit signUP2(QWidget *parent = nullptr);
    ~signUP2();

private:
    Ui::signUP2 *ui;
};

#endif // SIGNUP2_H
