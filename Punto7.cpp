#include <iostream>

using namespace std;

int Punto7() {
    int num;
    int num2 = 1;
    int num3 = 1;
    int serie = 0;
    int resultado = 0;

    cout << "Por favor ingrese un numero: ";
    cin >> num;

    while(serie < num) {
        serie = num2 + num3;
        num3 = num2;
        num2 = serie;

        if(serie % 2 == 0) {
            resultado = resultado + serie;
        }
    }

    cout << "El resultado de la suma es: " << resultado << endl;

    return 0;
}
