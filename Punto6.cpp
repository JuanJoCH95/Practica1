#include <iostream>

using namespace std;

int Punto6() {
    int num;
    int factorial;
    float euler = 0.0;

    cout << "Por favor ingrese un numero: ";
    cin >> num;

    for(int i = 0; i < num; i++) {
        factorial = 1;

        if(i != 0) {
            for(int j = 1; j <= i; j++) {
                factorial = factorial * j;
            }
        }
        euler = euler + (float(1) / float(factorial));
    }

    cout << "e es aproximadamente: " << euler << endl;

    return 0;
}
