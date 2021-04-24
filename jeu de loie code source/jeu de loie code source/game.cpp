#include<iostream>
#include"game.h"
#include"string.h"
using namespace std ;
//constrecteur de la classe game
game::game(int n=6):max(n),nbplayers(0){
    players = new player[max];
    cout<<"concrtecteur de jeu de loie"<<endl ;
}
//le nombre de joueur ne doit dépasser 6 joueurs
void game::saisienbplayers(){
    int n=0 ;
    while ((n<=0) || (n>6)){
        cout<<"donner le nombre des joueur qui vont particper à cette jeu "<<endl ;
        cin>>n ;
        cout <<"il ne faut pas dépasser le 6 joueur"<<endl ;
    }
    nbplayers=n;
}
int game::getnbplayers(){
    return(nbplayers);
}
//c'est pour ajouter les joueurs au tableau players
void game::addplayer(player & a){
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
        cout<<"Attention il faut au moins deux joueurs pour commencer!! "<<endl ;
    }
}
//methode pour afficher le nom de gagnant 
void game::sucess(){
    int i=0;
    while (players[i].getnumcase()!=63){
        i++;
    }
    cout<<"le joueur "<<players[i].getname()<<"est le gagnant" ;
}
void game::afficher_joueur(){
    for (int i=0;i<nbplayers;i++){
         players[i].afficher();
    }
}
void game::gameover(){
    cout<<"le jeu est terminée"<<endl ;
}
int game::tour(){
    int tour=0;
    int i;
       do{                                          //s'arrete si un joueur arrive au case 63
       players[0].lancement_de(players[0]);
       for (int i =1 ; i<nbplayers;i++){
         players[i].lancement_de(players[i-1]);
       }
       tour++;
       }
       while(players[i].getnumcase()!=63);     //si on trouve un joueur qui arrive à la case 63 le jeu se termine 
    return tour;     //retourner le nombre de tour affecté pour qu'on trouve un gangnant 
}
//destruction de la classe game
game::~game(){
    delete [] players ;
    cout<<"destruction de la classe game";          
}