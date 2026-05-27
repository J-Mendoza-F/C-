#include <iostream>
#include <windows.h>
using namespace std;

class boligrafo{
    private:
        int tinta;
        string color;
    public:
        boligrafo();
        void escribir();
        void recargar();
        void cambiarColor();
};

boligrafo::boligrafo(){
    tinta=100;
    color="azul";
}

void boligrafo::escribir(){
    string texto;
    cout<<"= ESCRIBIR =\nEscriba: "; cin>>texto;
    cout<<"Tinta gastada: "<<20<<"\nTinta restante: "<<tinta-20;
}

void boligrafo::recargar(){
    cout<<"= RECARGAR TINTA =\n";
    tinta=100;
    cout<<"Tinta recargada\n";
}

void boligrafo::cambiarColor(){
    cout<<"= CAMBIAR COLOR =\n1) Azul\n2) Negro\n3) Rojo\n4) Verde\nOpción: "; int op; cin>>op;
    switch(op){
        case 1:
            color="Azul\n";
            break;
        case 2:
            color="Negro\n";
            break;
        case 3:
            color="Rojo\n";
            break;
        case 4:
            color="Verde\n";
            break;
    }
}

int main(){
    cout<<"=== BOLIGRAFO ===\n";
    boligrafo boli;
    int op=1;
    while(op!=0){
        cout<<"== MENÚ ==\n";
        cout<<"1) Escribir\n2) Recargar\n3) Cambiar color\nOpción: "; cin>>op;
        switch(op){
            case 1:
                boli.escribir();
                break;
            case 2:
                boli.recargar();
                break;
            case 3:
                boli.cambiarColor();
                break;
        }
        cout<<"[FIN DEL PROGRAMA]\n";
    }
    return 0;
}