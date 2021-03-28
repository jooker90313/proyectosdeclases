#include<iostream>
  #include<stdlib.h>
   #define TAM 100
   using namespace std;

void captura (int n, int lista []);
void ordenamiento (int n, int lista []);
void impresion (int n, int lista []);

int main(){
int n, lista[TAM];
cout<<"\nescriba el numero de elementos a ordenar"<<"\n";
cin>> n;
cout<<"\ncaptura de datos"<<"\n";
captura(n, lista);
cout<<"lista de elemtos del arreglo no ordenados\n";
impresion(n, lista);
cout<<"\nordenando elementos de manera ascendente\n";
ordenamiento(n, lista);
cout<<"\nlista de elemetos del arreglo ordenados\n";
impresion(n, lista);
cout<<"\n\n";
system ("pause");

return 0;
}
void captura (int n, int lista [])    {
for (int i=0; i<n; i++)
    {
        cout<<"ingrese el numero  ";
    cin>>lista[i];
}
}
void ordenamiento (int n, int lista []) {
int i,j,aux;
for (int i=0; i<n-1; i++)
    for (int j=0; j<n-1; j++)
    if(lista[j]>lista[j+1])
        {
       aux=lista [j];
    lista[j]= lista [j+1];
     lista[j+1]=aux;
      }
       }
      void impresion (int n, int lista []){

          for (int i=0; i<n; i++)
            cout<<"\n"<<lista[i]<<"\t";
            }
