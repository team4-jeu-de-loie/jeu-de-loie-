#include <iostream>
#include"surface.cpp"
#include"player.cpp"
int main(){
    player joueur ;
    joueur.claculescore(5);
    joueur.saisiecolor();
    joueur.saisiename();
    surface s ;
    s.plateau(5,7);
}