#include <iostream>
#include"surface.cpp"
#include"game.cpp"
#include"player.cpp"
int main(){
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
//afficher les joueurs de ce tableau ;
g.startgame();
g.tour();
}