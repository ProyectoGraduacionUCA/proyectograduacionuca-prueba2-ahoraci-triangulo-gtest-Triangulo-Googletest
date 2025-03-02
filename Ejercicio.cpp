#include <iostream>
using namespace std;

//Función para imprimir un triángul
string imprimirTriangulo(int n) {
    string triangulo;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            triangulo += "*"; 
        }
        triangulo += "\n"; 
    }
    return triangulo; 
}

#ifndef TEST_MODE
int main() {
    
    //Definiendo medidas de los triangulos
    int a, b, c;
    cout << "Ingrese la medida del lado del triángulo a: ";
    cin >> a;
    cout << "Ingrese la medida del lado del triángulo b: ";
    cin >> b;
    cout << "Ingrese la medida del lado del triángulo c: ";
    cin >> c;

    //Imprimiendo triángulo a
    cout << "Triangulo a" << endl;
    cout << imprimirTriangulo(a);

    //Imprimiendo triángulo b
    cout << "Triangulo b" << endl;
    cout << imprimirTriangulo(b);

    //Imprimiendo triángulo c
    cout << "Triangulo c" << endl;
    cout << imprimirTriangulo(c);

    return 0;
}
#endif
