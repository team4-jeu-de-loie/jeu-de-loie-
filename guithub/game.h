#include<iostream>
#include<string>
#include "player.h"
#include "player.cpp"
using namespace std ;
#ifndef GAME_H
#define GAME_H
class game
{
    public:
    game(int n);
    void addplayer(player &a);
    void startgame();          
    void gameover();           
    void sucess();
    void afficher_joueur();
    int tour();
    ~game();
    private:
    int const max;       //le nombre maximale des joueurs c'est 6
    int nbplayers ;
    player *players  ;    /*pointeur qui pointe sur les élements 
                           de tableau qui sont des joueurs */
};
#endif