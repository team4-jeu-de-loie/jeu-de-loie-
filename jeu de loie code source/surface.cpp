#include"surface.h" 
#include<iostream>
using namespace std ;
//constructeur de la classe surface par défaut 
surface::surface():ls(0),hs(0){
    cout<<"la construction de la classe surface"<<endl ;
}

//saisir la longeur et le hauteur du plateau condition de saisie
void surface::plateau(){
    //il y deux type d'interface(1080*1080 px)ou(1700*1080 px)l'utilisateur doit choisir entre ces deux plateau
    while((ls!=1080 && hs!=1080)|| (ls!=1700 && hs!=1080)){
        cout<<"donner la surface de plateau qui vous aimez jouer avec"<<endl ;
        cout<<"donner la lanngueur de la surface"<<endl ;
        cin>>ls;
        cout<<"donner la hauteur de la surface"<<endl ;
        cin>>hs;
    }
}
//destruction de la classe surface 
surface::~surface(){
    cout<<"la destruction de la classe surface"<<endl ;
}