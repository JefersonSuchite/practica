#include <iostream>
using namespace std;
void saludar();
void sumar(int a, int b);
float dividir(int c, int d);
int main() {
    saludar();
    sumar(5,9);
    dividir(100,4);
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