#include <iostream>
#include <windows.h>

using namespace std;

class Calculadora{
    private:
        int primero;
        int segundo;
    public:
        Calculadora();
        void comprobar();
        void fijarNumeros();
        void sumar();
        void dividir();
};

Calculadora::Calculadora(){
    primero=0;
    segundo=0;
}

void Calculadora::comprobar(){
    cout<<"= COMPROBAR =\n";
    cout<<"Ambos valores son números\n";
}

void Calculadora::dividir(){
    cout<<"= DIVIDIR =\n";
    cout<<"Resultado: "<<primero/segundo<<endl;
}

void Calculadora::sumar(){
    cout<<"= SUMAR =\n";
    cout<<"Resultado: "<<primero+segundo<<endl;
}

void Calculadora::fijarNumeros(){
    cout<<"= FIJAR NÚMEROS =\n";
    cout<<"Ingrese el primer valor: "; cin>>primero;
    cout<<"Ingrese el segundo valor: "; cin>>segundo;
}

int main(){
    SetConsoleOutputCP(CP_UTF8);

    Calculadora casio;
    int op=1;

    while(op!=0){
        cout<<"=== CALCULADORA ===\n1) Comprobar\n2) Dividir\n3) Sumar\n4) Fijar números\n";
        cout<<"Ingrese una opción: "; int op; cin>>op;
        switch(op){
            case 1:
                casio.comprobar();
                break;
            case 2:
                casio.dividir();
                break;                
            case 3:
                casio.sumar();
                break;
            case 4:
                casio.fijarNumeros();
                break;    
           default:
                cout<<"[ERROR Y FIN]\n";
        }
        system("pause");
        system("cls");
    }
    
}