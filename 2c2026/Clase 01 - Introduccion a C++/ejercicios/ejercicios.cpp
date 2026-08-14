// ============================================================================
// Ingeniería en Inteligencia Artificial - Algoritmos y Estructura de Datos
// 2C 2026 | Docente: Ing. Magali Marijuan
// ============================================================================

#include "ejercicios.h"

// ============================================================================
// Acá va TU código. Cada función tiene una cáscara con un "TODO": borrá el
// contenido de ejemplo y escribí la implementación.
//
// Los `(void)parametro;` que ves abajo están solo para que la cáscara
// compile sin advertencias antes de que la implementes. Cuando uses el
// parámetro en tu código, borrá la línea `(void)...` correspondiente.
// ============================================================================


// Ejercicio 1 — Hola, C++
std::string saludo(const std::string &nombre, int edad) {
    // TODO: armar y devolver el saludo con el formato pedido.
    std::cout << "Hola " << nombre << " tenes " << edad << " años."<< std::endl;
    return "Hola " + nombre + ", tenes " + std::to_string(edad) + " anios.";
}


// Ejercicio 2 — Par o impar
bool esPar(int numero) {
    // TODO: devolver true si numero es par.
    if (numero % 2 == 0){
        return true;
    }

    return false;
}


// Ejercicio 3 — Tabla de multiplicar
std::vector<int> tablaDeMultiplicar(int n) {
    std::vector<int> tabla(10);   // vector con 10 elementos, todos en 0
    for (int i = 0; i < 10; i++) {
        tabla[i] = n * (i + 1);   // asigno por posición
    }
    return tabla;
}


// Ejercicio 4 — esPrimo
bool esPrimo(int n) {
    if (n < 2) {
        return false;
    }
    for (int divisor = 2; divisor * divisor <= n; divisor++) {
        if (n % divisor == 0) {
            return false;
        }
    }
    return true;
}


// Ejercicio 5 — swap por referencia
void swap(int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
}

// Ejercicio 6 — Sobrecarga: maximo
int maximo(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

double maximo(double a, double b) {
    if (a > b) {
        return a;
    }
    return b;
}


// Ejercicio 7 — Promedio de un arreglo
double promedioArreglo(const int numeros[], int tamanio) {
    int suma = 0;
    for (int i = 0; i < tamanio; i++) {
        suma += numeros[i];
    }
    return (double)suma / tamanio;
}


// Ejercicio 8 — vector de notas
double promedio(const std::vector<double> &notas) {
    double suma = 0.0;
    double cantidad = 0.0;
    for (double nota : notas) {
        suma += nota;
        cantidad += 1.0;
    }
    return suma / cantidad;
}
 
double maxima(const std::vector<double> &notas) {
    double masAlta = notas[0];
    for (double nota : notas) {
        if (nota > masAlta) {
            masAlta = nota;
        }
    }
    return masAlta;
}


// Ejercicio 9 — Contar vocales
int contarVocales(const std::string &texto) {
    // TODO: contar vocales sin distinguir mayúsculas de minúsculas.
    (void)texto;
    return 0;
}


// Propuesto 1 — invertir in-place
void invertir(std::vector<int> &v) {
    // TODO: invertir el orden de los elementos sin crear otro vector.
    (void)v;
}


// Propuesto 2 — contar palabras
int contarPalabras(const std::string &oracion) {
    // TODO: contar palabras separadas por un único espacio.
    (void)oracion;
    return 0;
}


// Ejercicio 10 — Clase Punto
Punto::Punto(double xInicial, double yInicial)
{
    // TODO: inicializar x e y con los valores recibidos.
    (void)xInicial;
    (void)yInicial;
}

double Punto::distanciaAlOrigen() const
{
    // TODO: devolver la distancia entre este punto y el origen (0, 0).
    return 0.0;
}

double Punto::distanciaA(const Punto &otro) const
{
    // TODO: devolver la distancia entre este punto y "otro".
    (void)otro;
    return 0.0;
}

// Ejercicio 11 — Clase Rectangulo
Rectangulo::Rectangulo(double baseInicial, double alturaInicial)
{
    // TODO: inicializar base y altura con los valores recibidos.
    (void)baseInicial;
    (void)alturaInicial;
}

double Rectangulo::area() const
{
    // TODO: devolver el área del rectángulo (base * altura).
    return 0.0;
}

double Rectangulo::perimetro() const
{
    // TODO: devolver el perímetro del rectángulo (2 * (base + altura)).
    return 0.0;
}

bool Rectangulo::esCuadrado() const
{
    // TODO: devolver true si el rectángulo es un cuadrado (base == altura).
    return false;
}
