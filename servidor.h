#ifndef SERVIDOR_H
#define SERVIDOR_H

#include <QWidget>
#include <QTcpSocket>
#include <QRandomGenerator64>
#include <QTcpServer>
 #include <QNetworkInterface>

//para obtener las IP

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
    QTcpServer*serverSocket=nullptr;

    //donde se guardan los mensajes
    QVector<QString> randomMessages;
    void initServer();
private slots:

    void sendRandomMessage();

};
#endif // SERVIDOR_H
