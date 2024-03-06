#include <iostream>
#include <math.h>

using namespace std;

int Punto9() {
    int num;
    int cifras[10];
    int i = 0;
    int resultado = 0;

    cout << "Por favor ingrese un numero: ";
    cin >> num;

    //Separo el numero por digitos y guardo cada digito en un arreglo
    while(num > 0) {
        cifras[i] = num % 10;
        num = num / 10;
        i++;
    }

    for(int j = i-1; j >= 0; j--) {
        resultado = resultado + (pow(cifras[j], cifras[j])); //El pow es para elevar un numero
    }

    cout << "El resultado de la suma es: " << resultado << endl;

    return 0;
}
