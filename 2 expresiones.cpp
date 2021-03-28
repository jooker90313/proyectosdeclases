#include <iostream>

using  namespace std;

int main(){

float a, b, c, d, resultado;

cout<< "Digite el valor de A: "; cin>>a ;
cout<< "Digite el valor de B: "; cin>>b ;
cout<< "Digite el valor de C: "; cin>>c ;
cout<< "Digite el valor de D: "; cin>>d ;


resultado = a + (b/(c-d)) ;

cout<< "El resultado es : "<<resultado;


return 0;
}
//(a+(b)/(c-d))
