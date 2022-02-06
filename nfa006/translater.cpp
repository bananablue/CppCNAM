#include <iostream>
#include <array>

using namespace std;
const int TAILLE = 10;

void remplirTableau (array<int,TAILLE> &tab)
{
    for (int i = 0; i < tab.size(); i++)
    {
        cout<<"tab["<<i<<"]= ";
        cin>>tab[i];
    }

}

void afficherTableau(const array<<int,TAILLE> &tab)
{
    cout<<"tab["<<i<<"]= ";
}

int main()
{
    remplirTableau();
    afficherTableau();
    return 0;
}
