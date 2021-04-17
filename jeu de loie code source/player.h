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
    void operator=(const player &p){
        score=p.score;
        name=p.name ;
        color=p.color ;
        numde1=p.numde1 ;
        numde2=p.numde2 ;
        numcase=p.numcase;
        anciennenumcase=p.anciennenumcase;
    }
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