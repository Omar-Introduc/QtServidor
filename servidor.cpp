#include "servidor.h"
#include "ui_servidor.h"

servidor::servidor(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::servidor)
{
    ui->setupUi(this);
    connect(ui->pb_cerrar,&QAbstractButton::clicked,this,&QWidget::close);
    //adiconar
    connect(serverSocket,&QTcpServer::newConnection,this,&servidor::sendRandomMessage);

    for(int i=)
}

servidor::~servidor()
{
    delete ui;
}

void servidor::initServer()
{
    qDebug()<<"initServer!!!!";

    if(!serverSocket->listen()){
        qDebug()<<"Error en el servidor:"+ serverSocket->errorString();
        return;
    }
    //Obtener parametros
    QString port=QString::number(serverSocket->serverPort());

    QString ipAdress;
    QList<QHostAddress> ipAdressList=QNetworkInterface::allAddresses();

    for(int i=0; i<ipAdressList.size();++i){
        if(ipAdressList.at(i) !=QHostAddress::LocalHost && ipAdressList.at(i).toIPv4Address()){
            ipAdress=ipAdressList.at(i).toString();
            qDebug() << ipAdress;
            break;
        }
    }
}

void servidor::sendRandomMessage()
{
    qDebug()<<"Send Random message)!!!";

    //contenedor de dtos binarios y son las cadenas que se van a enviar
    QByteArray qByteArray;
    QDataStream qDataStream(&qByteArray,QIODevice)

}
