#include"player.h" 
#include<iostream>
#include"string.h"
using namespace std ;
//constrecteur de joueur
player::player():name(""),color("") , score(0),numde1(0),numde2(0),numcase(0), anciennenumcase(0){     
        cout<<"construction de joueur"<<endl ;
}
void player::claculescore(int i){
    score+=i; 
}
void player::saisiename(){
    cout<<"donner le nom de joueur à ajouter"<<endl ;
    cin>>name;
}
void player::saisiecolor(){
    cout<<"donner le coleur de joueur"<<endl ;
    cin>>color;
}
void player::lancement_de(player p){
    int somme=0 ;
    int difference= 0;
    anciennenumcase= numcase ;
    numde1= (rand()%6)+1;
    numde2= (rand()%6)+1;
    somme= numde1+numde2 ;
    numcase =anciennenumcase + somme ;
    if ((numcase==0) && (somme==9)){
        cout<<"vous avez de la chance vous tomber sur un oie pour la première fois "<<endl;
        if ((numde1==3 && numde2==6)|| (numde1==6 && numde2==3)){
            numcase=26;
        }
        else if ((numde1==4 && numde2==5)||(numde1==5 && numde2==4))
        {
            numcase=53;
        }
    }
    else if ((numcase==18 ||numcase==27||numcase==45||numcase==54)&&(somme!=6)){
        numcase+=somme;
    }
    else if (somme==6){
        numcase=12;
    }
    else if (numcase==19){
        cout<<"vous n'avez pas le droit de jouer"<<endl ;
    }
    else if (numcase==31 && p.numcase==31){
        numcase=p.anciennenumcase ;
    }
    else if (numcase==31 && p.numcase!=31){
        numcase=31;
        cout<<"aucun  joueur arrive au 31 vous devrez rester dans cette case"<<endl ;
    }
    else if (numcase==42) {
        numcase=30 ;
    }
    else if (numcase==52 && p.numcase==52){
        cout<<"félicitation vous pouvez continuer de jouer d'une façons ordinaire"<<endl ;
        numcase=numcase+somme ;
    }
    else if (numcase==58){
        cout<<"c'est la tete de la mort vous devrerz recommencer le jeu "<<endl ;
        numcase=0;
    }
    else if (numcase==p.numcase){
        numcase=p.anciennenumcase ;
    }
    else if (numcase==63){
        cout<<"félicitation vous avez gagné le jeu " ;
    }
    else if (numcase>63){
        difference=numcase-63 ;
        numcase=63-difference ;
    }
}

void player::afficher(){
    cout<<name ;
}
//retourner le nom de joueur
string player::getname(){
    return(name);
}
//retourner le numero de case
int player::getnumcase(){
    return (numcase);
}
//destrecteur de joueur
player::~player(){
    cout<<"destruction de joueur"<<endl ;
}