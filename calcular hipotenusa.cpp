#include <iostream>
#include <math.h>

using namespace std;

int main(){
float a, b, c, h;


cout<< "\nDigite el valor de cateto Adyacente : "; cin>>b;
cout<< "\nDigite el valor de cateto Opuesto : ";  cin>>a;

c= (b*b)+(a*a);
h=sqrt(c);


cout<< "\nEl resultado de la hipotenusa es :" <<h;

return 0;
}
// (sqrt(pow(b,2))+(pow(a,2)));
