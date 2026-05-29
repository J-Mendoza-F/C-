#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------
class persona{
    protected:
        string nombre;
        string DNI;
        int edad;
    public:
        persona(string, string, int);
        void mostrarDatos();
};

persona::persona(string n, string d, int e){
    nombre=n;
    DNI=d;
    edad=e;
}

void persona::mostrarDatos(){
    cout<<"= "<<nombre<<" =\nDNI: "<<DNI<<"\nEdad: "<<edad<<" años"<<endl;
}

//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------
class docente:public persona{
    private:
        int sueldo;
        string especialidad;
    public:
        docente(string, string, int, int, string);
        void mostrarDocente();
        //void ingresarNotas();
        //void visualizarRegistro();
};

docente::docente(string n, string d, int e, int s, string es):persona(n, d, e){
    sueldo=s;
    especialidad=es;
}

void docente::mostrarDocente(){
    mostrarDatos();
    cout<<"Sueldo: "<<sueldo<<"\nEspecialidad: "<<especialidad<<endl;
}

//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------
class estudiante:public persona{
    private:
        int notas[5];
        int nNotas;
        string codigo;
    public:
        estudiante(string, string, int, int [], int, string);
        //void visualizarNotas();
        void mostrarEstudiante();
};

estudiante::estudiante(string n, string d, int e, int no[], int nn, string c):persona(n, d, e){
    nNotas=nn;
    for(int i=0; i<nn; i++){
        notas[i]=no[i];
    }
    codigo=c;
}

void estudiante::mostrarEstudiante(){
    mostrarDatos();
    cout<<"Código: "<<codigo<<"\nCantidad de notas: "<<nNotas<<"\nNotas: ";
    for(int i=0; i<nNotas; i++){
        cout<<notas[i]<<" - ";
    }
    cout<<endl;
}

//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------
int main(){
    SetConsoleOutputCP(CP_UTF8);

    string nombre;
    persona p("Juan Pérez", "40302010", 25);
    p.mostrarDatos(); cout<<endl;
    
    docente d("Pablo Iglesias", "10203040", 54, 3000, "Auditoria informática");
    d.mostrarDocente(); cout<<endl;

    int nota[]={20, 19, 18};
    cout<<"Ingrese nombre de estudiante: "; fflush(stdin);
    getline(cin, nombre);

    estudiante e(nombre, "90706050", 19, nota, 3, "2021-123");
    e.mostrarEstudiante(); cout<<endl;

    return 0;
}