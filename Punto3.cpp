#include <iostream>

using namespace std;

int Punto3() {
    int dia;
    int mes;

    cout << "Por favor ingrese un mes: ";
    cin >> mes;

    cout << "Por favor ingrese un dia del mes: ";
    cin >> dia;

    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        if(dia > 31) {
            cout << dia << "/" << mes << " es una fecha invalida." << endl;
        } else {
            cout << dia << "/" << mes << " es una fecha valida." << endl;
        }
    } else if(mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if(dia > 30) {
            cout << dia << "/" << mes << " es una fecha invalida." << endl;
        } else {
            cout << dia << "/" << mes << " es una fecha valida." << endl;
        }
    } else if(mes == 2) {
        if(dia > 29) {
            cout << dia << "/" << mes << " es una fecha invalida." << endl;
        } else if(dia == 29) {
            cout << dia << "/" << mes << " es valida en año bisiesto." << endl;
        } else {
            cout << dia << "/" << mes << " es una fecha valida." << endl;
        }
    } else {
        cout << mes << " es un mes invalido" << endl;
    }

    return 0;
}
