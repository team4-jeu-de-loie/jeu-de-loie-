#include<iostream>
#include"surface.cpp"
#include"game.cpp"
#include"player.cpp"
#include <string.h>
using namespace std ;
int main(void){
    //préparation de l'inteface garphique 
    int const i=63 ;
    surface s ;
    int longueur ;
    int hauteur ;
    while (longueur<=0){
        cout<<"donner la languer de la surface"<<endl ;
        cin>>longueur ;
    }
     while (hauteur<=0){
        cout<<"donner la hauteur de la surface"<<endl ;
        cin>> hauteur ;
    }
    s.plateau(longueur, hauteur);    
    int const p=6;
    game g(p) ;
    g.saisienbplayers();
    int n ;
    n=g.getnbplayers();

    //cette boucle est déstinée à remplir le tableau players qui contient les données des joueurs
    for(int i=0; i<n ;i++){
        player a ;
        a.saisiename();
        a.saisiecolor();
        g.addplayer(a);
    }
    g.startgame();
    int nbtour ;
    nbtour = g.tour();
    g.gameover();
    cout<<"avec un nombre de tour est égale à"<<nbtour<<endl;
    g.sucess();
    return 0;
}