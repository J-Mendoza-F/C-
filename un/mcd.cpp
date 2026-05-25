#include <iostream>
#include <windows.h>
using namespace std;

int MCD(int x, int y);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int v1, v2;
    cout<<"=== PROGRAMA PARA CÁLCULO DE MÁXIMO COMÚN DIVISOR DE 2 NÚMEROS ENTEROS ===\n";
    cout<<"Introduzca el primer valor: "; cin>>v1;
    cout<<"Introduzca el segunda valor: "; cin>>v2;
    cout<<"\nResultado: "<<MCD(v1, v2);

    return 0;
}

int MCD(int x, int y){
    if(y==0) return x;
    else return MCD(y, x%y);
}