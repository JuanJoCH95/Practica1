#include <iostream>

using namespace std;

int Punto1() {
    char car;

    cout << "Por favor ingrese un caracter: " << endl;
    cin >> car;

    //Con esto pasamos la letra a minuscula
    car = towlower(car);

    if(car == 'a' || car == 'e' || car == 'i' || car == 'o' || car == 'u') {
        cout << car << " es una vocal." << endl;
    } else if(car == 'b' || car == 'c' || car == 'd' || car == 'f' || car == 'g' || car == 'h' || car == 'j' || car == 'k' ||
              car == 'l' || car == 'm' || car == 'n' || car == 'p' || car == 'q' || car == 'r' || car == 's' || car == 't' ||
              car == 'v' || car == 'w' || car == 'x' || car == 'y' || car == 'z') {
        cout << car << " es una consonante." << endl;
    } else {
        cout << "No es una letra." << endl;
    }
    return 0;
}
