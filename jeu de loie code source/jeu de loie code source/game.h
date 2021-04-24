#include<iostream>
#include<string>
#include "player.h"
using namespace std ;
#ifndef GAME
#define GAME
class game
{
    public:
    game(int);       //constructeur de la classe game 
    void saisienbplayers();
    int getnbplayers();
    void addplayer(player &a);       //ajouter un joueur a la liste des joueurs
    void startgame();             //indiquer le debut de jeu     
    void gameover(); //juste pour indiquer au utilisateurs que le jeu est terminée     
    void sucess();               //afficher le joueur qui gagne 
    void afficher_joueur();       //aficher les proprietés de joueurs 
    int tour();                  //changer le tour d'u  joueur à un autre
    ~game();                      //destrecteur de la classe game
    private:
    // le nombre des joueurs qui participent dans le jeu ne doit pas passer 6 joueurs
    const int max;          
    int nbplayers ;
    player *players  ;  
};
#endif //GAME 