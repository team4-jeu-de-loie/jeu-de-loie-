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
    void calculescore(int);      //calculer le score de joueur
    void saisiename();
    void saisiecolor () ;
    bool verificolor();       
    void  evenement(player p) ;
    void lancement_de();
    void afficher()  ;
    string getname();
    string getcolor();
    int getnumcase();
    int getscore();
    int getanciennenumcase();
    bool jocker();
    void  operator = (const player & p) ;   
    int getnumde1();
    int getnumde2();   
    ~player(){};
};  
#endif