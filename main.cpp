#include <iostream>
using namespace std;
void saludar();
void sumar(int a, int b);
float dividir(int c, int d);
float multiplicar(int e, int f);
int main() {
    saludar();
    sumar(5,9);
    dividir(100,4);
    multiplicar(5,8);
    return 0;
}

void saludar(){
    cout<<"Hola Mundo\n";
}
void sumar(int a, int b){
    cout<<a<<"+"<<b<< "="<<a+b<<endl;
}

float dividir(int divisor, int dividendo){
    cout<<divisor<<"/"<<dividendo<<"="<<divisor/dividendo<<endl;
}

float multlicacion(int e, int f){
    cout<<e<<"x"<<f<<"="<<e*f<<endl;
}