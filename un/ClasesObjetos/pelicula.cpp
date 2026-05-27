#include <iostream>
#include <windows.h>
#include <cstring>
using namespace std;

class clasePelicula{
    private:
        char titulo[20];
        int duracion;
        float precio;
    public:
        clasePelicula();
        void registrar();
        void imprimirInfo();
};

clasePelicula::clasePelicula(){
    strcpy(titulo, "[SIN TÍTULO]");
    duracion=0;
    precio=0;
}

void clasePelicula::registrar(){
    cout<<"= REGISTRAR =\n";
    cout<<"Título: "; cin.ignore(); cin.getline(titulo,20);
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
    titanic.imprimirInfo();

    return 0;
}