#include <iostream>
#include"surface.cpp"
#include"game.cpp"
#include"player.cpp"
int main(){
    player p1 ;
    player p2 ;
    p1.saisiename() ;
    p1.saisiecolor() ;
    p2.saisiename();
    p2.saisiecolor();
    cout<<"les joueurs qui vont participer à ce jeu sont "<<endl ;
    p1.afficher();
    p2.afficher();
    for(int i=0;i<10;i++){
        p1.lancement_de();cout<<"les deux dé de premier joueur donne:"<<endl;
        cout<<"le premier dé"<<p1.getnumde1()<<endl;
        cout<<"le deuxieme dé"<<p1.getnumde2()<<endl ;
        p1.evenement(p2);
        cout<<"le numero de la case devient"<<p1.getnumcase()<<endl ; cout<<"avec un score"<<p1.getscore()<<endl ; 
        p2.lancement_de();
        cout<<"les deux dé de deuxieme joueur donnent :"<<endl;
        cout<<"le premier dé"<<p2.getnumde1()<<endl;
        cout<<"le deuxieme dé"<<p2.getnumde2()<<endl ;
        p2.evenement(p1);
        cout<<"le numero de la case devient"<<p2.getnumcase()<<endl ;cout<<"avec un score"<<p2.getscore()<<endl ;
    }
}