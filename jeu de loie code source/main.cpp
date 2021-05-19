#include <iostream>
#include"surface.cpp"
#include"game.cpp"
#include"player.cpp"
#include"de.cpp"
int main(){
surface s;
s.plateau();
s.affiche();
game g ;
g.saisienbplayers();
int n=g.getnbplayers();
int i=0;
while(i<n){
    player p ;
    p.saisiename();
    p.saisiecolor();
    g.addplayer(p);
    i++;
}
g.afficher_joueurs();
g.startgame();
g.tour();
g.sucess();
g.gameover();
}