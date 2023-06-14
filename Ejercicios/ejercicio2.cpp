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
    int opcion;
    string rutaSeleccionada;
    int numeroEntrega;

    do {
        cout << "Menu" << endl;
        cout << "1)Seleccionar ruta" << endl;
        cout << "2)Registrar entrega" << endl;
        cout << "0)Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cout << "Ingrese la ruta seleccionada: ";
                cin >> rutaSeleccionada;
                Ruta<string> ruta;
                ruta.imprimir(rutaSeleccionada);
                break;
            }

            case 2: {
                cout << "Ingrese el numero de entrega: ";
                cin >> numeroEntrega;
                Entrega<int> entrega;
                entrega.recibo(numeroEntrega);
                break;
            }

            case 0:
                cout << "Saliendo" << endl;
                break;

            default:
                cout << "Opcion invalida. Por favor, seleccione una opcion valida." << endl;
                break;
        }

        cout << endl;
    } while (opcion != 0);

    return 0;
}
