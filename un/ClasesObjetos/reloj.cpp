#include <iostream>
#include <windows.h>

using namespace std;

class reloj{
    private:
        int horas, minutos, segundos;
        int bateria;
    public:
        reloj(int h, int m, int s, int b);
        void tic_tac();
        void avanza(int h, int m, int s);
        void atrasa(int h, int m, int s);
        bool estaParado();
        void recargaBateria(int b);
        void horaFormato12h();
        void horaFormato24h();
};

int main(){
    SetConsoleOutputCP(CP_UTF8);


    return 0;
}