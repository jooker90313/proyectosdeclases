#include <iostream>
#include <math.h>

using namespace std;
int main(){

int a, b, c;
float resultado1=0, resultado2=0;

cout<< "Inserte el valor de A : "; cin>>a;
cout<< "Inserte el valor de B : "; cin>>b;
cout<< "Inserte el valor de C : "; cin>>c;

resultado1= ((-b)+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
resultado2= ((-b)-(sqrt(pow(b,2)-(4*a*c))))/(2*a);

cout<< "El resultado de x1 es : " <<resultado1<<endl;
cout<< "El resultado de x2 es : " <<resultado2<<endl;

return 0;
}






