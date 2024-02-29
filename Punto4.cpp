#include <iostream>

using namespace std;

int Punto4() {
    int hora;
    int duracion;
    int horaAuxiliar;
    int minAuxiliar;
    int hDuracion;
    int mDuracion;

    cout << "Por favor ingrese la hora: " ;
    cin >> hora;

    cout << "Por favor ingrese un tiempo de duracion: " ;
    cin >> duracion;

    //Separo la hora y los minutos en variables aparte
    horaAuxiliar = hora / 100;
    minAuxiliar = hora % 100;
    hDuracion = duracion / 100;
    mDuracion = duracion % 100;

    if(horaAuxiliar > 23 || minAuxiliar > 59) {
        cout << hora << " es un tiempo invalido." << endl ;
    } else {
        horaAuxiliar = horaAuxiliar + hDuracion;
        minAuxiliar = minAuxiliar + mDuracion;

        //Se valida si la suma de las horas pasa de las 23H
        if(horaAuxiliar > 23) {
            horaAuxiliar = horaAuxiliar - 24;
        }

        //Si la suma de los minutos se pasa de 59, se suma otra hora
        if(minAuxiliar > 59) {
            horaAuxiliar = horaAuxiliar + 1;
            minAuxiliar = minAuxiliar - 60;
        }

        cout << "La hora es: " << horaAuxiliar << minAuxiliar << endl;
    }

    return 0;
}
