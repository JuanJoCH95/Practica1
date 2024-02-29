#include <iostream>

using namespace std;

int Punto5() {
    int num;

    cout << "Por favor ingrese un numero impar: ";
    cin >> num;

    if(num % 2 == 1) {
        for(int i = 1; i <= num; i++) {
            if(i % 2 == 1) {
                for(int j = 1; j <= i; j++) {
                    cout << " * ";
                }
            }
            cout << endl;
        }
    } else {
        cout << num << " no es un numero impar." << endl;
    }

    return 0;
}
