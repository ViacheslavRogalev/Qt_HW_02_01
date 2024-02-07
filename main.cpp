#include <QCoreApplication>
#include <QtSql/QSqlDatabase>
#include <QtNetwork/QTcpServer>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QSqlDatabase Sql;
    QTcpServer tcpServer;

    return a.exec();
}
