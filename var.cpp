
#include <iostream>

using namespace std;

int main (){

int numero1, numero2, numero3;

cout<< "Digite 3 numeros : "; cin>>numero1>>numero2>>numero3;

if (numero1 == numero2 and numero1 == numero3){
    cout<<"los 3 numeros son iguales" ;
}
else if (numero1>numero2 and numero3){
     cout<<"El numero mayor es : " <<numero1;}

else if (numero2>numero3 and numero1){
     cout<<"El numero mayor es : " <<numero2;}


else if (numero3>numero1 and numero2){
     cout<<"El numero mayor es : " <<numero3;
     }


return 0;
}
