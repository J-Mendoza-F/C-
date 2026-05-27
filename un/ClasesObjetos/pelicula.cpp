#include <iostream>
#include <windows.h>
using namespace std;

class clasePelicula{
    public:
        char titulo[20];
        int duracion;
        float precio;

        void registrar();
        void imprimirInfo();
};

void clasePelicula::registrar(){
    cout<<"= REGISTRAR =\n";
    cout<<"Título: "; fflush(stdin); gets(titulo);
    cout<<"Duración (min): "; cin>>duracion;
    cout<<"Precio (S/): "; cin>>precio;
    cout<<endl;
}

void clasePelicula::imprimirInfo(){
    cout<<"= DATOS REGISTRADOS =\n";
    cout<<"Título: "<<titulo<<endl;
    cout<<"Duración (min): "<<duracion<<endl;
    cout<<"Precio (S/): "<<precio<<endl;
    cout<<endl;
}

int main(){
    SetConsoleOutputCP(CP_UTF8);

    clasePelicula titanic;
    titanic.registrar();
    cout<<"Título: "<<titanic.titulo<<endl<<endl;
    titanic.imprimirInfo();

    return 0;
}