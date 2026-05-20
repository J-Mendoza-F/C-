#include <iostream>
using namespace std;

void demo(int valor);

int main(){
    int n;
    n=10;
    cout<<"Antes de llamar a la función demo, n="<<n<<endl;
    demo(n);
    cout<<"Después de llamar a la función, n="<<n<<endl;
    return 0;
}

void demo(int valor){
    valor=5;
    cout<<"Dentro de la función, valor="<<valor<<endl;
}