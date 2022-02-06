
#include <iostream>

using namespace std;

void pAdditionner(int a, int b, int *c){ //int  *c c'est le pointeur
*c=a+b;   //*c == contenu du pointeur
}

void pAdditionnerBis (int a , int b, int &c){
c=a+b;
}

int fAdditionner (int a, int b){
return a+b;
}

int main(){
int x, y, z;
cout<<"Entrer 2 entiers : ";
cin>>x>>y;

pAdditionner(x,y,&z);
cout<<z<<endl;

pAdditionnerBis (x, y, z);
cout<<z<<endl;

cout<<fAdditionner(x, y);

return 0;
}
