#ifndef SERVIDOR_H
#define SERVIDOR_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class servidor;
}
QT_END_NAMESPACE

class servidor : public QWidget
{
    Q_OBJECT

public:
    servidor(QWidget *parent = nullptr);
    ~servidor();

private:
    Ui::servidor *ui;
};
#endif // SERVIDOR_H
