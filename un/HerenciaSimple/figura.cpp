#include <iostream>
#include <cmath>
using namespace std;

class figura{
    protected:
        string color;
    public:
        figura(string c);
};

figura::figura(string c){
    color=c;
}
/*
---------------------------------------------------------------------
*/
class circulo:public figura{
    private:
        float radio;
    public:
        circulo(string c, float r);
        void calcularArea();
        void calcularPerimetro();
};

circulo::circulo(string c, float r):figura(c){
    radio=r;
}

void circulo::calcularArea(){
    cout<<"= ÁREA DEL CÍRCULO =\nÁrea: "<<3.14*pow(radio,2);
}

void circulo::calcularPerimetro(){
    cout<<"= PERÍMETRO DEL CÍRCULO =\nPerímetro: "<<3.14*2*radio;
}
/*
---------------------------------------------------------------------
*/
class rectangulo:public figura{
    private:
        float base;
        float altura;
    public:
        rectangulo(string c, float b, float a);
        void calcularArea();
};
/*
---------------------------------------------------------------------
*/
class triangulo:public figura{
    private:
        float base;
        float altura;
        string tipo;
    public:
        triangulo(string c, float b, float a, string t);
        void calcularArea();
};
/*
---------------------------------------------------------------------
*/
int main(){

    return 0;
}