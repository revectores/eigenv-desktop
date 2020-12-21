#include <QApplication>
#include "dashboard.h"

int main(int argc, char* argv[]){

    QApplication app(argc, argv);

    Dashboard window;

    window.resize(852, 480);
    window.setWindowTitle("Eigenvalues and Eigenvectors Calculator");
    window.show();

    return app.exec();
}
