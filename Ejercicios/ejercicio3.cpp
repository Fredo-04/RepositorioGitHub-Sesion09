#include <iostream>
using namespace std;

template <typename M> M calculardistancia(M v, M t){return v*t;}
template <typename N> N tiempodeentrega(N d, N v){return d/v;}
template <typename R> void generarinforme(R a, R b){(a == 1)? cout << "La distancia recorrida fue: " << b << endl : cout << "El tiempo de entrega estimado es de: " << b << endl;}
template <typename T>
class Ruta {
public:
    void imprimir(T valor) {
        cout << "La ruta seleccionada es: " << valor << endl;
    }
};
template <class A>
class Gestion {
public:
    void gestionarRutas() {
        cout << "-Menu" << endl;
        cout << "1.Imprimir ruta" << endl;
        cout << "2.Calcular distancia" << endl;
        cout << "3.Calcular tiempo de entrega" << endl;
        cout << "4.Generar informe" << endl;
        cout << "0.Salir" << endl;
        float velocidad;
        float tiempo;
        float distancia;
        string opcionInforme;
        string valorInforme;
        int opcion;
        string ruta;
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cout << "Ingrese la ruta: ";
                cin >> ruta;
                Ruta<string> rutaObj;
                rutaObj.imprimir(ruta);
                break;
            }
            case 2: {
                cout << "Ingrese la velocidad y el tiempo separados por espacios: ";
                cin >> velocidad >> tiempo;
                cout << "La distancia calculada es: " << calculardistancia(velocidad, tiempo) << endl;
                break;
            }
            case 3: {
                cout << "Ingrese la distancia y la velocidad separadas por espacios: ";
                cin >> distancia >> velocidad;
                cout << "El tiempo de entrega estimado es: " << tiempodeentrega(distancia, velocidad) << endl;
                break;
            }
            /*case 4: {
                cout << "Ingrese 1 para distancia o 2 para tiempo: ";
                cin >> opcionInforme;
                cout << "Ingrese el valor correspondiente: ";
                cin >> valorInforme;
                generarinforme(opcionInforme, valorInforme);
                break;
            }*/
            case 0: {
                cout << "Saliendo del programa..." << endl;
                break;
            }
            default:
                cout << "Opcion inválida. Por favor, seleccione una opcion valida." << endl;
                break;
        }
    }
};

int main() {
    Gestion<int> sistema; 
    sistema.gestionarRutas();

    return 0;
}
