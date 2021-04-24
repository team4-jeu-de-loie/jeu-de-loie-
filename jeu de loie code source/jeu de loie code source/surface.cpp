#include"surface.h" 
#include<iostream>
using namespace std ;
//saisir la longeur et le hauteur du plateau
void surface::plateau(int i , int j){   
    ls=i ;
    hs= j ;
}
//constructeur de la classe surface par défaut 
surface::surface():ls(0),hs(0){
    cout<<"la construction de la classe surface"<<endl ;
}
//destruction de la classe surface 
surface::~surface(){
    cout<<"la destruction de la classe surface"<<endl ;
}