#include <iostream>
using namespace std;

long int factorial(int n);

int main(){
    int n;
    cout<<"Calcula el factorial de un número entero positivo"<<endl;
    do{
        cout<<endl<<"Digite el número entero positivo: "; cin>>n;
        if(n<0) cout<<endl<<"-> error, ingreo valor negativo, intente de nuevo...";
    }while(n<0);

    cout<<endl<<n<<"! = "<<factorial(n);
    return 0;
}

long int factorial(int n){
        if((n==0) or (n==1)){
            return (1);
        }
        else{
            return(n*factorial(n-1));
        }
    }