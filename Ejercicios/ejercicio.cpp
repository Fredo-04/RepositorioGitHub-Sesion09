#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

template <typename M> M calculardistancia(M v, M t) { return v * t; }
template <typename N> N tiempodeentrega(N d, N v) { return d / v; }
template <typename R> R generarinforme(R a, R b) { (a == 1) ? cout << "La distancia recorrida fue: " << b : cout << "El tiempo de entrega estimado es de: " << b; }

template <typename T>
class Ruta {
public:
    void imprimir(T valor) {
        cout << "La ruta seleccionada es: " << valor << endl;
    }
};

template <typename T>
class Gestion {
public:
    void gestionarRutas() {
        cout << "Gestión de rutas de entrega" << endl;

        // Ejemplo de uso de plantillas de función para ordenar el arreglo
        T arreglo[] = { 5, 2, 8, 1, 9 };
        int tamano = sizeof(arreglo) / sizeof(arreglo[0]);

        cout << "Arreglo original: ";
        imprimirArreglo(arreglo, tamano);

        ordenarArregloFuncion(arreglo, tamano);

        cout << "Arreglo ordenado (Plantilla de función): ";
        imprimirArreglo(arreglo, tamano);

        // Ejemplo de uso de plantillas de método para ordenar el arreglo
        T arreglo2[] = { 5, 2, 8, 1, 9 };
        int tamano2 = sizeof(arreglo2) / sizeof(arreglo2[0]);

        cout << "Arreglo original: ";
        imprimirArreglo(arreglo2, tamano2);

        ordenarArregloMetodo(arreglo2, tamano2);

        cout << "Arreglo ordenado (Plantilla de método): ";
        imprimirArreglo(arreglo2, tamano2);
    }

    void imprimirArreglo(T arreglo[], int tamano) {
        for (int i = 0; i < tamano; i++) {
            cout << arreglo[i] << " ";
        }
        cout << endl;
    }

    void ordenarArregloFuncion(T arreglo[], int tamano) {
        for (int i = 0; i < tamano - 1; i++) {
            for (int j = 0; j < tamano - i - 1; j++) {
                if (arreglo[j] > arreglo[j + 1]) {
                    T temp = arreglo[j];
                    arreglo[j] = arreglo[j + 1];
                    arreglo[j + 1] = temp;
                }
            }
        }
    }

    template <typename U>
    void ordenarArregloMetodo(U arreglo[], int tamano) {
        for (int i = 0; i < tamano - 1; i++) {
            for (int j = 0; j < tamano - i - 1; j++) {
                if (arreglo[j] > arreglo[j + 1]) {
                    U temp = arreglo[j];
                    arreglo[j] = arreglo[j + 1];
                    arreglo[j + 1] = temp;
                }
            }
        }
    }
};

template <typename T>
class Recipiente {
private:
    T* datos;
    int tamano;
public:
    Recipiente(T arr[], int t) : tamano(t) {
        datos = new T[tamano];
        for (int i = 0; i < tamano; i++) {
            datos[i] = arr[i];
        }
    }

    ~Recipiente() {
        delete[] datos;
    }

    void imprimirDatos() {
        for (int i = 0; i < tamano; i++) {
            cout << datos[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Gestion<int> sistema;
    sistema.gestionarRutas();

    // Ejemplo de uso de la clase Recipiente con diferentes tipos de datos
    int arreglo1[] = { 10, 5, 8, 2, 6 };
    Recipiente<int> recipiente1(arreglo1, sizeof(arreglo1) / sizeof(arreglo1[0]));
    cout << "Datos en el recipiente 1: ";
    recipiente1.imprimirDatos();

    char arreglo2[] = { 'H', 'e', 'l', 'l', 'o' };
    Recipiente<char> recipiente2(arreglo2, sizeof(arreglo2) / sizeof(arreglo2[0]));
    cout << "Datos en el recipiente 2: ";
    recipiente2.imprimirDatos();

    double arreglo3[] = { 3.14, 2.71, 1.618, 0.707 };
    Recipiente<double> recipiente3(arreglo3, sizeof(arreglo3) / sizeof(arreglo3[0]));
    cout << "Datos en el recipiente 3: ";
    recipiente3.imprimirDatos();

    return 0;
}
