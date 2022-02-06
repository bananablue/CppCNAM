#include <iostream>
#include <array>

using namespace std;
const int TAILLE = 10;

void remplirTableau (array<int,TAILLE> &tab)
{
    cout<<"Remplir le tableau "<<endl;
    for (int i = 0; i < tab.size(); i++)
    {
        cout<<"tab["<<i<<"]= ";
        cin>>tab[i];
    }

}

void afficherTableau(const array<int,TAILLE> &tab)
{
    cout<<"Afficher le tableau "<<endl;
    for(int i = 0; i<TAILLE; i++)
    {
        cout<<"tab["<<i<<"]= "<<tab[i]<<endl;
    }

}
void inverserTableau(array<int,TAILLE> &tab)
{
    cout<<"Inverser le tableau "<<endl;
    for (int i = 0; i<TAILLE/2; i++)
    {
        int aux=tab[i];
        tab[i]=tab[TAILLE-i-1];
        tab[TAILLE-i-1]=aux;
    }
}

void multiplierTableau(const array<int,TAILLE> &tab,array<int,TAILLE>&tab1,int x)
{
    for (int i = 0; i<TAILLE; i++)
    {
        tab1[i] = tab[i]*x;
    }

}

int main()
{
    array<int, TAILLE> t,t1;
    remplirTableau(t);
    afficherTableau(t);
    cout<<endl;
    inverserTableau(t);
    afficherTableau(t);
    int x;
    cout<<"Multiplier le tableau par : ";
        cin>>x;
    multiplierTableau(t,t1,x);
    afficherTableau(t1);
    return 0;
}
