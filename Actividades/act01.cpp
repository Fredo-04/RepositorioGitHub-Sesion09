#include <iostream>
using namespace std;
template <typename M> M calculardistancia(M v, M t){return v*t;}
template <typename N> N tiempodeentrega(N d, N v){return d/v;}
template <typename T> T generarinforme(T a, T b){(a = 1)? cout << "La distancia recorrida fue: " << b : cout << "El tiempo de entrega estimado es de: " << b;}
int main() {
    double velocidad = 50.5;
    double tiempo = 2.5;
    double distancia = calculardistancia(velocidad, tiempo);
    cout << "Distancia calculada: " << distancia << endl;

    int distanciaEntera = 100;
    int velocidadEntera = 20;
    int tiempoEntrega = tiempodeentrega(distanciaEntera, velocidadEntera);
    cout << "Tiempo de entrega estimado: " << tiempoEntrega << endl;

    int opcion = 1;
    double valor = 200.75;
    string generarinforme(opcion, valor);

    return 0;
}