#include <iostream>
using namespace std;
template <typename T>
class Ruta {
public:
    void imprimir(T valor) {
        cout << "La ruta seleccionada es: " << valor << endl;
    }
};
template <typename M>
class Entrega{
    public: 
    void recibo(M valor){
        cout << "Se ha realizado la entrega del paquete " << valor << " correctamente\n";
    }
};
int main() {
    Ruta<string> ruta;
    ruta.imprimir("Ruta A");

    Entrega<int> entrega;
    entrega.recibo(12345);

    return 0;
}