
#include <iostream>

using namespace std;

void saisirPoint(float *x, float *y){
cout<<"Saisir x : ";
cin>>*x;
cout<<"Saisir y : ";
cin>>*y;
}

int main(){
float a, b;
saisirPoint(&a,&b);
cout<<"a= "<<a<<" "<<"b= "<<b;
}
