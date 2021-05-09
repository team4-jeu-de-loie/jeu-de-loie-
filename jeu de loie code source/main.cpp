#include <iostream>
#include"surface.cpp"
#include"game.cpp"
#include"player.cpp"
int main(){
game g ;
g.saisienbplayers();
int n=g.getnbplayers();
for(int i=0;i<n;i++){
    player p ;
    while (g.existname(p)==true){
        cout<<"le nom de ce joueur existe déjà il faut choisir un autre"<<endl;
        p.saisiename(); 
    }
    while (g.existcolor(p)==true){
        cout<<"le couleur de ce joueur existe déjà il faut choisir un autre"<<endl;
        p.saisiecolor();
    }
    g.addplayer(p);
}
g.afficher_joueurs();
g.startgame();
g.tour();
g.gameover();
}