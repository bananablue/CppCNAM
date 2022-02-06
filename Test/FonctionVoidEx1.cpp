#include <iostream>

using namespace std;

void echanger (int *x, int *y)
{
    int a = *x;
    *x = *y;
    *y = a;
}
void pAdditionner(int a, int b, int &c )
{
    c = a+b;

}

int main ()
{
    cout << "ECHANGER 2 VALEURS ";
    int x = 0;
    int y = 0;
    cout <<"Entrer un entier :"<<endl;
    cin>> x;
    cout <<"Entrer un entier :"<<endl;
    cin>> y;
    cout << " AVANT : x = " << x<<"; y = "<<y<<endl<< " APRES :";
    echanger(&x,&y);

    cout << " x = "<<x << "; y = "<< y<<endl <<"--------------------------------"<<endl;

    cout<<" ADDITIONNER "<< endl;
    int c = 0;

    pAdditionner(x,y,c );

    cout << c;

    return 0;
}
