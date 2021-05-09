#include<iostream>
#include"string.h"
using namespace std ;
#ifndef PLAYER
#define PLAYER
class player
{
    private:
    string name ;     // le nom de joueur 
    string color ;    // la coleur de joueur
    int score ;       // le score de joueur
    int numde1 ;      // la valeur donnée par le premier dé
    int numde2;       //la valeur donnée par le deuxième dé
    int anciennenumcase ;      //la vlauer de l'ancienne case
    int numcase ;              //la valeur de la case actuelle
    public:
    player();                 //coonstruction de la classe player        
    void saisiename();        //donner le nom de joueur
    void saisiecolor () ;     //doner la coleur de joueur
    bool verificolor();       //verifier si la coleur existe dans le tableau donné
    void lancement_de();       //donner un valeur aléatoire entre 1 et 6 pour un dé
    void  evenement(player p) ;  //les differents mouvement possibles des pion 
    void calculescore(int);      //calculer le score de joueur
    bool jocker();               //si on tombe dans la tete de mort et on a un score>100 on peut retourner a l'ancienne numcase
    void afficher() ;            //aficher les caractéristiques d'un joueur
    void  operator = (const player & p) ;
    string getname();            
    string getcolor();
    int getnumde1();
    int getnumde2(); 
    int getscore();
    int getnumcase();
    int getanciennenumcase();     
    ~player(){};
};  
#endif