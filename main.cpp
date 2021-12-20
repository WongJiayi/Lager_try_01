#include <QApplication>
#include <QWidget>
#include <QPushButton>

int main(int argc,char **argv)
{
    QApplication app(argc,argv);
    QWidget w;
    w.setWindowTitle("ich bin Wong");

    QPushButton b;
    b.setText("按我");
    b.setParent(&w);
    b.move(100,100);

    QPushButton b1(&w);
    b1.setText("abc");
    b1.move(200,200);

    w.show();




    app.exec();
    return 0;
}
