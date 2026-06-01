#include <iostream>
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
        void calcularOerimetro();
};
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