#include <iostream>

using namespace std;

int Punto10() {
    int num;
    int enesimo;
    bool primo = false;

    cout << "Por favor ingrese un numero: ";
    cin >> num;

    enesimo = num + (num - 1);

    //Si el enesimo numero de num no es primo, le sumo 1 hasta que encuentre el primo mas cercano
    while(!primo) {
        for(int i = 2; i < enesimo; i++) {
            if(!(enesimo % i == 0)) {
                primo = true;
            }
        }

        if(primo == false) {
            enesimo++;
        }
    }

    cout << "El primo numero " << num << " es: " << enesimo << endl;

    return 0;
}
