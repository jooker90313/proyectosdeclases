#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
void media(int n1, int n2, int n3,float x);

void varianza(int n1, int n2, int n3,float x, float y, float c);

void desviacion(int n1, int n2, int n3, float x, float y, float c, float z );

void resultados(int n1, int n2, int n3, float x, float y, float c, float z);
int main()
{
int n;
    float n1;
    float n2;
    float n3,n4,x,y,z,c;
    cout<<"Digite el primer numero\n";
    cin>>n1;
    cout<<"Digite el segundo numero\n";
    cin>>n2;
    cout<<"Digite el tercer numero\n";
    cin>>n3;

    do
    {
        cout<<"\nmenu principal\n";
             cout<<"\n1. Calcular el resultado de la Media\n";
      cout<<"\n2. Calcular el resultado de la varianza \n" ;
      cout<<"\n3. Calcular el resultado de la desviacion\n" ;
      cout<<"\n4. Mostrar todos los resultados\n";
            cout<<"\n5 Salir\n";
            cin>>n;

            }    while(!(n>=1 & n<=5));

            switch(n)
                {
            case 1:media(n1, n2,  n3, x);break;

 case 2:varianza(n1, n2, n3, x, y, c);break;

 case 3:desviacion(n1, n2,  n3, c, z, x, y);break;

 case 4:resultados(n1, n2, n3, c, z, x, y);break;

 case 5:break;
 }
 system ("pause");
 }
 //inicio de voids


void media(int n1, int n2, int n3, float x){
x=((n1+n2+n3)/3);
cout<<"El resultado de la media es : "<<x<<"\n";
}
void varianza(int n1, int n2, int n3, float x, float y, float c ){

c=n1+n2+n3;
x=((n1+n2+n3)/3);
y=((c-x)/3);
cout<<"El resultado de la varianza es : "<<y<<"\n" ;
}

void desviacion(int n1, int n2, int n3, float x, float y, float c, float z ){

c=n1+n2+n3;
x=((n1+n2+n3)/3);
y=((c-x)/3);
z=sqrt(y);
cout<<"El resultado de la desviacion es:"<<z<<"\n" ;
}
void resultados(int n1, int n2, int n3,float x,float y, float c, float z){
c=n1+n2+n3;
x=((n1+n2+n3)/3);
y=((c-x)/3);
z=sqrt(y);
cout<<"El total de los resultados son : " <<endl;
cout<<"El total de la media es :"<<x<<"\n" ;
cout<<"El total de la varianza es : "<<y<<"\n" ;
cout<<"El total de la desviacion es :"<<z<<"\n" ;



}



