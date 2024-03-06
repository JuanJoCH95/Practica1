#include <iostream>

using namespace std;

int Punto13() {
    int num;
    int sum = 0;

    cout << "Por favor ingrese un numero: ";
    cin >> num;

    for(int i = 1; i <= num; i++) {
        if(esPrimo(i)) {
            sum = sum +i;
        }
    }

    cout << "El resultado de la suma es: " << sum << endl;

    return 0;
}

bool esPrimo(int n) {
    int divisores = 0;
    int i;

    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            divisores++;
        }
    }

    if(divisores == 2) {
        return true;
    } else {
        return false;
    }
}
