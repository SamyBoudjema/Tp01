#include "cihm.h"

 CIhm::CIhm()
 {
#include <iostream>
#include<conio.h>
     using namespace std;
 };

void CIhm::fonctionPrincipale()
{
cout <<"Bonjour Bts SNIR 2020 "<<endl;
     int a, b, calcul ; /*déclaration de 3 variables de type entière*/
     int u ; /* déclaration de la variable de type entière nommé u */
     char v ; /*déclaration du caractère v */
     cout << "BONJOUR\n\n"; /* utilisation d'une fonction-bibliothèque */
     a = 10 ; /* affectation*/
     b = 50 ; /* affectation */
     u = 65 ; /* affectation */
     v = 'A' ; /*affectation */
     calcul=(a+b)*2 ; /* affectation et opérateurs */
     cout <<"Voici le resultat:"<<calcul<<"\n\n" ; /*affichage du resultat*/
     cout <<"1er affichage de u:"<<u<<endl ; /*affichage du résultat*/
     cout <<"2ieme affichage de u:"<<(char)u<<"\n\n" ; /*affichage du resultat*/
     cout <<"1er affichage de v:"<<v<<endl ; /*affichage du resultat*/
     cout <<"2ieme affichage de v:"<<(int)v<<"\n\n"; /*affichage du resultat*/
     cout <<"Pour continuer frapper une touche..."<<endl<<endl; /*affichage d'un message*/
     getch();  /*fonction saisie d’un caractère clavier*/
     system("cls");
}
void CIhm::fonctionExercice2()
{
    int c;
    c=322;
    cout <<(char)c<<endl;
    cout <<(int)c<<endl ;
    cout <<oct<<(int)c<<endl ;
    cout <<hex<<(int)c<<endl ;
    cout <<dec<<(int)c<<endl ;
    cout <<"Pour continuer frapper une touche..."<<endl<<endl ;
    system("pause");
}
void CIhm::fonctionExercice3()
{
    char c='A';
    cout<<"decimal="<<(int)c<<"ASCII="<<c<<endl; /* c est le caractere alphanumerique A */
    cout<<"pour continuer frapper une touche...";
    getch();/* Attente d'une saisie clavier */
}
void CIhm::fonctionExercice4()
{
    int a, b;
    a=-21430;
    b=4782;
    cout<<"a=-21430"<<endl;
    cout<<"b=4782"<<endl;
    cout<<"a+b="<<(a+b)<<endl;
    cout<<"a-b="<<(a-b)<<endl;
    cout<<"a*b="<<(a*b)<<endl;
    cout<<"a/b="<<(a/b)<<endl;
    cout<<"a%b="<<(a%b)<<endl;
    system("pause");

}
void CIhm::calculPerimetreSurface()
{
    int rayon;
    cout<<"entrer la valeur du rayon"<<endl;
    cin>>rayon;
    cout<<"surface="<<(rayon*3.14)<<endl;
    cout<<"perimetre="<<(2*3.14*rayon)<<endl;
    system("pause");

}




