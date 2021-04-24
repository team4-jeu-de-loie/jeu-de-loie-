#include<iostream>
#include"string.h"
using namespace std ;
#ifndef PLAYER
#define PLAYER
class player
{
    private:
    int score ;   //score de joueur
    string name ;    //nom de joueur
    string color ;    //coleur de pion de joueur 
    int numde1 ;          //la valeur donnée par le premier dé  
    int numde2;           //la valeur donnée par le deuxième dé
    int numcase ;          //le numéro de case ou se trouve le joueur
    int anciennenumcase ;     //sauvgarder la dernier position de joueur
    public:
    player();             //constructeur de la classe player
    void claculescore(int);      //calculer le score de joueur
    void saisiename();
    void saisiecolor () ;         
    void  lancement_de(player p) ;
    void afficher()  ;
    string getname();
    int getnumcase();
    ~player();
};  
#endif