#include <iostream>
using namespace std;
template <typename M> M calculardistancia(M v, M t){return v*t;}
template <typename N> N tiempodeentrega(N d, N v){return d/v;}
template <typename R> R generarinforme(R a, R b){(a = 1)? cout << "La distancia recorrida fue: " << b : cout << "El tiempo de entrega estimado es de: " << b;}
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
        cout << "Gestion de rutas de entrega" << endl;
        int distancia = calculardistancia(100, 5);
        cout << "Distancia calculada: " << distancia << endl;
        int tiempo = tiempodeentrega(500, 100);
        cout << "Tiempo estimado de entrega: " << tiempo << endl;
        generarinforme(1, distancia);
    }
};

int main() {
    Gestion<int> sistema; 
    sistema.gestionarRutas();

    return 0;
}