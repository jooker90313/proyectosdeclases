#include <iostream>

using namespace std;

int main(){
float nota1, nota2, nota3, nota4, aux;

cout<<"Introduzca nota 1 :"; cin>>nota1;
cout<<"Introduzca nota 2 :"; cin>>nota2;
cout<<"Introduzca nota 3 :"; cin>>nota3;
cout<<"Introduzca nota 4 :"; cin>>nota4;

aux = (nota1 + nota2 + nota3 + nota4) / 4;

cout<<"La nota media es : " <<aux<<endl;

return 0;
}
