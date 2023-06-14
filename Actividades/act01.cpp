#include <iostream>
using namespace std;
template <typename M> M calculardistancia(M v, M t){return v*t;}
template <typename N> N tiempodeentrega(N d, N v){return d/v;}
template <typename T> T generarinforme(T a, T b){(a = 1)? cout << "La distancia recorrida fue: " << b : cout << "El tiempo de entrega estimado es de: " << b;}
int main() {
    float velocidad = 50.5;
    float tiempo = 2.5;
    float distancia = calculardistancia(velocidad, tiempo);
    cout << "Distancia calculada: " << distancia << endl;

    int distanciaEntera = 100;
    int velocidadEntera = 20;
    int tiempoEntrega = tiempodeentrega(distanciaEntera, velocidadEntera);
    cout << "Tiempo de entrega estimado: " << tiempoEntrega << endl;

    int opcion = 1;
    float valor = 200.75;
    string generarinforme(opcion, valor);

    return 0;
}