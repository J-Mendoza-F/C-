#include <iostream>
#include <windows.h>
using namespace std;

class vehiculo{
    protected:
        string numeroPlaca;
        string color;
        string marca;
        int velocimetro;
    public:
        vehiculo(string nP, string c, string m, int v);
        void mostrarDatos();
        void cambiarVelocidad();
};

vehiculo::vehiculo(string nP, string c, string m, int v){
    numeroPlaca=nP;
    color=c;
    marca=m;
    velocimetro=v;
}

void vehiculo::mostrarDatos(){
    cout<<"= DATOS DE VEHICULO =\nNúmero de placa: "<<numeroPlaca<<"\nColor: "<<color<<"\nMarca: "<<marca<<"\nVelocímetro: "<<velocimetro<<endl;
}

void vehiculo::cambiarVelocidad(){
    cout<<"= CAMBIAR VELOCIDAD =\nVelocidad actual: "<<velocimetro<<"\nNueva velocidad: "; int nV; cin>>nV;
    velocimetro=nV;
}
/*
---------------------------------------------------------------------
---------------------------------------------------------------------
*/
class automovil:public vehiculo{
    private:
        int cantidadPuertas;
        int cantidadPasajeros;
    public:
        automovil(string nP, string c, string m, int v, int cPu, int cPa);
        void mostrarAutomovil();
        void subirPasajeros();
        void bajarPasajeros();
};

automovil::automovil(string nP, string c, string m, int v, int cPu, int cPa):vehiculo(nP, c, m, v){
    cantidadPuertas=cPu;
    cantidadPasajeros=cPa;
}

void automovil::mostrarAutomovil(){
    mostrarDatos();
    cout<<"- DATOS DE AUTOMOVIL -\nCantidad de puertas: "<<cantidadPuertas<<"\ncantidad de pasajeros :"<<cantidadPasajeros<<endl;
}

void automovil::subirPasajeros(){
    cout<<"- SUBIR PASAJEROS -\n¿Cuántos suben?: "; int sub; cin>>sub;
    cantidadPasajeros=cantidadPasajeros+sub;
}

void automovil::bajarPasajeros(){
    cout<<"- BAJAR PASAJEROS -\n¿Cuántos bajan?: "; int baj; cin>>baj;
    cantidadPasajeros-=baj;
}
/*
---------------------------------------------------------------------
---------------------------------------------------------------------
*/
class camion:public vehiculo{
    private:
        float carga;
    public:
        camion(string nP, string c, string m, int v, float carga);
        void mostrarCamion();
        void cambiarCarga();
};

camion::camion(string nP, string c, string m, int v, float ca):vehiculo(nP, c, m, v){
    carga=ca;
}

void camion::mostrarCamion(){
    mostrarDatos();
    cout<<"- MOSTRAR CAMION -\nCarga: "<<carga<<endl;
}

void camion::cambiarCarga(){
    cout<<"- CAMBIAR CARGA -\nCarga actual: "<<carga<<" kg\nNueva carga: "; float nC; cin>>nC;
}
/*
---------------------------------------------------------------------
---------------------------------------------------------------------
*/
int main(){
    SetConsoleOutputCP(CP_UTF8);
    int op;
    do{
        cout<<"=== MENÚ PRINCIPAL ===\n1) Crear objeto\n2) Vehículos disponibles\n3) Reservar vehículo\n0) Salir de la aplicación\nOopción: "; cin>>op;
        switch(op){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
        }
    }while(op!=0);
    return 0;
}