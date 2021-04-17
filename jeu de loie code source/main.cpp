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
    //
    int n ;
    while ((n<0) || (n>6)){
        cout<<"donner le nombre des joueur qui vont particper à cette jeu " ;
        cin>>n ;
    }
    game g(n) ;
    for(int i=0; i<n;i++){
        player a ;
        a.saisiename();
        a.saisiecolor();
        g.addplayer(a);
    }
    g.startgame();
    
    g.tour();
    
    g.gameover();
    g.sucess();
    return 0;
}