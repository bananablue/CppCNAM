#include <iostream>

using namespace std;

bool estPair (int n)
{
    if (n%2 == 0 )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int calculerSyracuse (int n)
{
    bool pair = estPair(n);
    if (pair)
    {
        return   n/2;
    }
    else
    {
        return n *3 + 1;
    }
}

int main ()
{
    int n = -1;

    while (n<=0)
    {
        cout<<"Entrer un entier positif";
        cin>>n;
        if (n<=0)
        {
            cout<<"Erreur, recommencer la saisie";
        }
        else
        {
            while (n != 1)
            {
                n= calculerSyracuse(n);
                cout<< n;
            }
        }


    }
    return 0;
}
