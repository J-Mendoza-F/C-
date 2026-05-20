#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

void MontoPorPrestamo(float P, float i, float n, float &S, float &I);

int main(){
    SetConsoleOutputCP(CP_UTF8);

    float montoInicial, tasaI, n, montoFinal, montoInteres;
    cout<<"ingrese la siguiente información sobre el préstamo: ";
    cout<<"\n\nMonto inicial (S/.): "; cin>>montoInicial;
    cout<<"Tasa de interés anual (%): "; cin>>tasaI;
    cout<<"Tiempo (años): "; cin>>n;

    MontoPorPrestamo(montoInicial, tasaI, n,  montoFinal, montoInteres);
    cout<<"\nUsted pagará al final S/."<<montoFinal;
    cout<<"\n\nInterés a pagar será de S/."<<montoInteres;
    return 0;
}

void MontoPorPrestamo(float P, float i, float n, float &S, float &I){
    i=i/100;
    S=P*pow(1+i,n);
    I=S-P;
}