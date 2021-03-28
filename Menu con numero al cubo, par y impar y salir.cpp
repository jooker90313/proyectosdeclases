#include <iostream>
#include <math.h>

using namespace std;

int main(){
int numero, cubo, opc;

cout<<"\Bienvenido a su calculadora"<<endl<<endl;
cout<<"1. Calcular un numero al cubo"<<endl;
cout<<"2. Determinar si el numero es par o impar"<<endl;
cout<<"3. Salir"<<endl;
cout<<"Opcion :"; cin>>opc;

switch(opc){
case 1:
cout<<"Digite un numero :"; cin>>numero;
cubo= pow(numero,3);
cout<<"El resultado del numero al cubo es :"<<cubo;break;

case 2:
cout<<"Digite un numero :"; cin>>numero;
if(numero==0){
        cout<<"El numero es cero \n" << endl;
}
    else if(numero%2==0){
        cout<<"El numero es PAR \n" << endl;

}
    else{
         cout<<"El numero es IMPAR \n" << endl;
  }

case 3: break;
}

return 0;
}
