#include<iostream>
#include<string>
#include "player.h"
using namespace std ;
#ifndef GAME_H
#define GAME_H
class game
{
    public:
    game(int n);
    game(const game &g);
    void addplayer(player &a);
    void startgame();          
    void gameover();           
    void sucess();
    void afficher_joueur();
    int tour();
    ~game();
    private:
    int const max;   
    int nbplayers ;
    player *players  ;  
};
#endif