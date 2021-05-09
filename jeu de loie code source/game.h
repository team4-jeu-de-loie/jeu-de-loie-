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
    bool sucess();               //afficher le joueur qui gagne 
    void afficher_joueurs();       //aficher les proprietés de joueurs 
    void tour();                  //changer le tour d'u  joueur à un autre
    bool existname(player p);          //verification de l'existance de nom de joueur dans le tableau de joueur (deux jouer ne peuvent pas avoir le meme nom)
    bool existcolor(player p);          //verification de l'existance du color de joueur dans le tableaux des joueur (deux joueurs ne peut pas avoir le meme color de pion) 
    ~game();                      //destrecteur de la classe game
    private:
    // le nombre des joueurs qui participent dans le jeu ne doit pas passer 6 joueurs
    const int max;          
    int nbplayers ;
    int compteur ;
    player *players  ;  
};
#endif //GAME 