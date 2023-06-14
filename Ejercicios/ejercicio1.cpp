#include <iostream>
using namespace std;

template <typename M> M calculardistancia(M v, M t) { return v * t; }
template <typename N> N tiempodeentrega(N d, N v) { return d / v; }
template <typename R> R generarinforme(R a, R b) { (a == 1) ? cout << "La distancia recorrida fue: " << b : cout << "El tiempo de entrega estimado es de: " << b; }
int main() {
    int opcion;
    float velocidad;
    float tiempo;
    
    do {
        cout << "Menu" << endl;
        cout << "1.-Calcular distancia" << endl;
        cout << "2.-Calcular tiempo de entrega" << endl;
        cout << "0.-Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese la velocidad: ";
                cin >> velocidad;
                cout << "Ingrese el tiempo: ";
                cin >> tiempo;
                cout << "Distancia calculada: " << calculardistancia(velocidad, tiempo) << endl;
                break;
            case 2:
                int distanciaEntera, velocidadEntera;
                cout << "Ingrese la distancia: ";
                cin >> distanciaEntera;
                cout << "Ingrese la velocidad: ";
                cin >> velocidadEntera;
                cout << "Tiempo de entrega estimado: " << tiempodeentrega(distanciaEntera, velocidadEntera) << endl;
                break;
            case 0:
                cout << "Saliendo " << endl;
                break;

            default:
                cout << "Opción invalida. Por favor, seleccione una opcion valida." << endl;
                break;
        }

        cout << endl;
    } while (opcion != 0);

    return 0;
}