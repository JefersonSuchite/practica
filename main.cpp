#include <iostream>
using namespace std;
void saludar();
void sumar(int a, int b);

int main() {
    saludar();
    sumar(5,9);
    return 0;
}

void saludar(){
    cout<<"Hola Mundo\n";
}
void sumar(int a, int b){
    cout<<a<<"+"<<b<< "="<<a+b<<endl;
}