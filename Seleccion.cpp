#include <iostream> 


using namespace std;

int main(){
    
    const float pi = 3.1416;
    float radio = 0.0;
    float lado = 0.0;
    float base = 0.0;
    float altura = 0.0;
    float resultado = 0.0;
    int opcion = 0;

    cout<<"¿Que área necesita calcular? Ingrese el numero de la opción deseada"<<endl;
    cout<<"(1) Circulo"<<endl;
    cout<<"(2) Cuadrado"<<endl;
    cout<<"(3) Triangulo"<<endl;
    cin>>opcion;



    switch (opcion){
    
    case 1:
        cout<<"Ingrese el radio del circulo"<<endl;
        cin>>radio;
        radio = radio * radio;
        resultado = pi * radio;

        cout<<"El area del circulo es de "<< resultado <<"cm^2";
        
        break;

    case 2:
        cout<<"Ingrese un lado del cuadrado"<<endl;
        cin>>lado;

        resultado = lado * lado;
        
        cout<<"El area del cuadrado es de "<< resultado<<" cm^2" <<endl;
    
        break;

    case 3: 
        
        cout<<"Ingrese la Base de su triangulo"<<endl;
        cin>>base;

        cout<<"Ingrese la altura de su triangulo"<<endl;
        cin>>altura;

        resultado = (base * altura) /2;
        cout<<"El área del triangulo es "<<resultado<<" cm^2";

        
        break;
    
    default:
        cout<<"Dato erroneo, vuelva a intentarlo"<<endl;
        break;
    }

    return 0;
}