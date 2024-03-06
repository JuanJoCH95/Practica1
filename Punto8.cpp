#include <iostream>

using namespace std;

int Punto8() {
    int a;
    int b;
    int c;
    int multiploA = 0;
    int multiploB = 0;
    int i = 1;
    int j = 1;
    int suma = 0;

    cout << "Ingrese numero 1: ";
    cin >> a;

    cout << "Ingrese numero 2: ";
    cin >> b;

    cout << "Ingrese numero 3: ";
    cin >> c;

    while(multiploA < c) {
        multiploA = a * i++;

        if(multiploA < c) {
            cout << multiploA << " + ";
            suma = suma + multiploA;
        }
    }

    while(multiploB < c) {
        multiploB = b * j++;

        if(multiploB < c) {
            cout << multiploB << " + ";
            suma = suma + multiploB;
        }
    }

    cout << " = " << suma << endl;

    return 0;
}
