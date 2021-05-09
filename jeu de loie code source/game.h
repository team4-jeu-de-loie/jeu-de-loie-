#include<iostream>
#include<string>
#include "player.h"
using namespace std ;

#ifndef GAME 
#define GAME
class game
{
    public:
    game(int);             //constructeur de la classe game      
    void saisienbplayers();     //donner le nombre de joueurs qui vont participer à ce jeu
    bool existname(player p);   //verifier si le nom à saisie déjà existe
    bool existcolor(player p);   //verifier si la coleur à saisie existe déjà         
    void addplayer(player &a);       //ajouter un joueur au tableau des joueurs
    void startgame();                //commencer le jeu
    void tour() ;                    //commencer à jouer jusqu'à la fin de jeu 
    bool sucess();                   //afficher le gagnant
    void gameover();                  //indiquer la fin de jeu
    void afficher_joueurs();                //afficher le tableau des joueurs      
    int getnbplayers();
    ~game();                     
    private:
   
    const int max;          //max est une canstante=6        
    int nbplayers ;         //nombre des joueurs peut etre entre 1 et 6
    int compteur ;          
    player *players  ;       //pointeur qui pointe sur les elements du tableau 
}; 

#endif //GAME 