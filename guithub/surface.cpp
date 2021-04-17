#include"surface.h" 
#include<iostream>
using namespace std ;
void surface::plateau(int i , int j){
    ls=i ;
    hs= j ;
}
surface::surface():ls(0),hs(0){
    cout<<"la construction de la classe surface"<<endl ;
}
surface::~surface(){
    cout<<"la struction de la classe surface"<<endl ;
}