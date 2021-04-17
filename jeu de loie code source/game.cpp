#include"game.h"
#include"player.h"
#include<iostream>
using namespace std ;
//constrecteur de la classe game
game::game(int n): nbplayers(n), max(6){   
        players = new player[max];
        cout<<"concrtecteur de jeu de loie"<<endl ;
}
//c'est pour ajouter les joueurs au tableau players
void game::addplayer(player &a){
    if (nbplayers==max){
        cout<<"le nombres des joueur maximale est atteint "<<endl ;
    }
    else {
        players[nbplayers++]=a;
        nbplayers=nbplayers+1 ;
    }
}
//commencer le jeu dés que le nombre des joueurs présents  est superieur à 1
void game::startgame(){
    if(nbplayers>1){
        cout<<"le jeu commence"<<endl ;
    }
    else{
        cout<<"il faut au moins deux joueurs pour commencer!! "<<endl ;
    }
}
//la fin de jeu dés que l'un des joueurs arrive à la case 63 
void game::gameover(){
    int i=0 ;
    while (players[i].getnumcase()!=63){
        i++;
        cout<<"le jeu n a pas encore terminé"<<endl ;
    }
    cout<<"le jeu est terminer"<<endl ;
}
//methode pour afficher le nom de gagnant 
void game::sucess(){
    for (int i=0;i<nbplayers;i++){
        if (players[i].getnumcase()==63){
            cout<<"le joueur "<<players[i].getname()<<"est le gagnant" ;
            break;
        }
    }
    cout<<"pas de gagnant por le moment!!"; 
}
void game::afficher_joueur(){
    for (int i=0;i<nbplayers;i++){
         players[i].afficher();
    }
}
int game::tour(){
    int tour=0;
    
    int i;
       do{
       i=0;                                          //s'arrete si un joueur arrive au case 63
       players[i].lancement_de(players[i]);
       for (i =1 ; i<nbplayers;i++){
         players[i].lancement_de(players[i-1]);
         
       }
       tour++;
       }
       while(players[i].getnumcase()!=63);
    
    return tour;
}
//destruction de la classe game
game::~game(){
        delete [] players ;
        cout<<"destruction de la classe game";          
}