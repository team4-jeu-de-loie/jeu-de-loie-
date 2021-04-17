#include<iostream>
#include"string.h"
using namespace std ;
#ifndef PLAYER_H
#define PLAYER _H
class player
{
    private:
    int score ;
    string name ;
    string color ;
    int numde1 ;          
    int numde2;
    int numcase ;          
    int anciennenumcase ;     
    public:
    player();
    void claculescore(int);
    void saisiename();
    void saisiecolor () ;
    void  lancement_de(player p) ;
    void afficher()  ;
    string getname();
    int getnumcase();
    ~player();
};  
#endif