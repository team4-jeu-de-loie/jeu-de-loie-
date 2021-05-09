#include<iostream>
#include"game.h"
#include"string.h"
using namespace std ;

//construction de la classe game
game::game(int n=6):max(n),nbplayers(0),compteur(0){
    players = new player[max];
    cout<<"concrtecteur de jeu de loie"<<endl ;
}

//donner le nombre des joueurs un entier entre 2 et 6
void game::saisienbplayers(){
    int n=0 ;
    while ((n<2) || (n>6)){
        cout<<"donner le nombre des joueur qui vont particper à cette jeu "<<endl ;
        cin>>n ;
        cout <<"il faut que le nombre des joueurs soit entre 2 et 6"<<endl ;
    }
    nbplayers=n;
}

//verifie si le nom existe déjà pour des joueurs existant déjà dans le tableau
bool game::existname(player p){
    bool test = false;
    for (int i=0;i<compteur;i++){
        if (p.getname()==players[i].getname()){
        test=true ;
        }
    }
    return(test);
}

//verifie si le nom existe déjà pour des joueurs existant déjà dans le tableau
bool game::existcolor(player p){
    bool test=false ;
    for (int i=0;i<compteur;i++){
        if (p.getcolor()==players[i].getcolor()){
        test=true ;
        }
    } 
    return(test);                                   
}

//ajouter un joueur au tableau
void game::addplayer(player &a){
    if (compteur==nbplayers){
        cout<<"le nombres des joueur maximale est atteint "<<endl ;
    }
    else {
        players[compteur++]=a;
        compteur=compteur+1 ;
    }
}

//commencer le jeu
void game::startgame(){
        cout<<"le jeu commence"<<endl ;
}

//commencer le jeu et arreter si on trouve un gagnant
void game::tour(){
    int i=0;
    int tour=1 ;
    while (sucess()==false){
        cout<<"on commence le "<<tour<<"eme tour"<<endl;
        for (int i=0; i<nbplayers;i++){
            for(int j=0;j<nbplayers;j++){
                if (i==j){
                    j++;
                }
                players[i].lancement_de();
                cout<<"c'est le tour de joueur"<<players[i].getname()<<endl;
                cout<<"les deux dés ont comme valeurs :"<<endl;
                cout<<"pour le premier dé"<<players[i].getnumde1()<<endl;
                cout<<"pour le deuxieme dé"<<players[i].getnumde2()<<endl;
                players[i].evenement(players[j]);
                cout<<"le joueur"<<players[i].getname()<<"est dans la case :"<<players[i].getnumcase()<<endl;
                cout<<"avec un score"<<players[i].getscore()<<endl;
            }
        }
        tour++;
    }  
} 
//afficher le joueur gagnant
bool game::sucess(){
    bool test=false;
    int i=0;
    while ((players[i].getnumcase()!=63)&&(i<nbplayers+1)){
        i++;
    }
    if (i==nbplayers+1){
        test=false ;
    }
    else {
        test=true;
        cout<<"le joueur "<<players[i].getname()<<"de couleur"<<players[i].getcolor()<<"est le gagnant avec un score"<<players[i].getscore()<<endl  ;
    }
    return(test);
}

// fin du jeu
void game::gameover() {
    cout<<"le jeu est terminée"<<endl ;
}

//afficher le tableau des joueurs
void game::afficher_joueurs(){
    cout<<"les joueurs qui vont participer à ce jeu sont"<<endl;
    for (int i=0;i<nbplayers;i++){
        players[i].afficher();
    }
}

//retourner le nombre des joueurs
int game::getnbplayers(){
    return(nbplayers);
}
//destruction de la classe  game 
game::~game(){
    delete [] players ;
    cout<<"destruction de la classe game";          
}