#include <iostream>

using namespace std;

int Punto2() {
    int valorInicial;
    int acumulador = 0;
    int cincuentaMil = 0;
    int veinteMil = 0;
    int diezMil = 0;
    int cincoMil = 0;
    int dosMil = 0;
    int mil = 0;
    int quinientos = 0;
    int doscientos = 0;
    int cien = 0;
    int cincuenta = 0;
    int faltante = 0;


    cout << "Por favor ingrese la cantidad de dinero deseada: ";
    cin >> valorInicial;

    int valorAuxiliar = valorInicial;

    while (acumulador < valorInicial) {
        if(valorAuxiliar >= 50000) {
            cincuentaMil++;
            acumulador = acumulador + 50000;
            valorAuxiliar = valorAuxiliar - 50000;
        } else if(valorAuxiliar >= 20000) {
            veinteMil++;
            acumulador = acumulador + 20000;
            valorAuxiliar = valorAuxiliar - 20000;
        } else if(valorAuxiliar >= 10000) {
            diezMil++;
            acumulador = acumulador + 10000;
            valorAuxiliar = valorAuxiliar - 10000;
        } else if(valorAuxiliar >= 5000) {
            cincoMil++;
            acumulador = acumulador + 5000;
            valorAuxiliar = valorAuxiliar - 5000;
        } else if(valorAuxiliar >= 2000) {
            dosMil++;
            acumulador = acumulador + 2000;
            valorAuxiliar = valorAuxiliar - 2000;
        } else if(valorAuxiliar >= 1000) {
            mil++;
            acumulador = acumulador + 1000;
            valorAuxiliar = valorAuxiliar - 1000;
        } else if(valorAuxiliar >= 500) {
            quinientos++;
            acumulador = acumulador + 500;
            valorAuxiliar = valorAuxiliar - 500;
        } else if(valorAuxiliar >= 200) {
            doscientos++;
            acumulador = acumulador + 200;
            valorAuxiliar = valorAuxiliar - 200;
        } else if(valorAuxiliar >= 100) {
            cien++;
            acumulador = acumulador + 100;
            valorAuxiliar = valorAuxiliar - 100;
        } else if(valorAuxiliar >= 50) {
            cincuenta++;
            acumulador = acumulador + 50;
            valorAuxiliar = valorAuxiliar - 50;
        } else {
            faltante = valorAuxiliar;
            acumulador = acumulador + faltante;
        }
    }

    cout << "50.000: " << cincuentaMil << endl;
    cout << "20.000: " << veinteMil << endl;
    cout << "10.000: " << diezMil << endl;
    cout << "5.000: " << cincoMil << endl;
    cout << "2.000: " << dosMil << endl;
    cout << "1.000: " << mil << endl;
    cout << "500: " << quinientos << endl;
    cout << "200: " << doscientos << endl;
    cout << "100: " << cien << endl;
    cout << "50: " << cincuenta << endl;
    cout << "Faltante: " << faltante << endl;

    return 0;
}
