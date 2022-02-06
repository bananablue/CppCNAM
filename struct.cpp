#include <iostream>
#include <array>

using namespace std;

struct Point{
float abscisse;
float ordonnee;
};

void saisirPoint (Point &p){
cout<<"Saisir abscisse : ";
cin>>p.abscisse;
cout<<"Saisir ordonnee : ";
cin>>p.ordonnee;
}
void afficherPoint(const Point &p){
cout<<"("<<p.abscisse<<","<<p.ordonnee")";
}

int main(){
Point a;
saisirPoint(a);
afficherPoint(a);
return 0;
}

