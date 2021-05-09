#include"player.h" 
#include<iostream>
#include<cstdlib>
#include<ctime>
#include"string.h"
using namespace std ;

//constrecteur par défaut de la classe joueur
player::player():name(""),color("") , score(0),numde1(0),numde2(0),numcase(0), anciennenumcase(0){}

//entrer le nom de joueur qui va participer au jeu
void player::saisiename(){
    cout<<"donner le nom de joueur :"<<endl ;
    cin>>name;
}

//saisir la coleur de joueur qui va participer au jeu
void player::saisiecolor(){
    cout<<"donner le coleur de joueur"<<endl;
    while (verificolor()==false){
        cout<<"il faut choisir entre les coleurs qui sont à votre disposition"<<endl ; 
        cin>>color;
    }
}

//cette methode nous permet de forcé le saisie de coleur parmi les 6 coleurs
bool player::verificolor(){
    string tab[6]={"jaune","bleu","rouge","vert","rose","orangé"};
    int i=0 ;
    bool test=false;
    while(color!=tab[i] && i<6){
        i++;
        test=false ;
    } 
    if(i==6){
        test=false;
    }
    else{
        test=true ;
    }
    return(test);
}

 //donner un valeur aléatoire entre 1 et 6 pour un dé
void player::lancement_de(){
    anciennenumcase= numcase ;
    srand(time(NULL));
    numde1= (rand()%6)+1;          //choisir un nombre entre 1 et 6 pour dé 1
    numde2= (rand()%6)+1;          //choisir un nombre entre 1 et 6 pour dé 1
    numcase =numcase  + numde1 + numde2 ;
}

//les differents mouvement possibles des pion 
void player::evenement(player p){
    int somme=0 ;
    int difference=0 ;
    somme=numde1+numde2 ;
    if (anciennenumcase==19){
        cout<<"vous n'avez pas le droit de jouer"<<endl ;
    }
    if ((somme==6)){
        if (numcase>12){
             calculescore(-10);
             numcase=12;
        }
        else{
            calculescore(10);
            numcase=12;
        }
    }
    switch(numcase){
        case 0:
            if (somme==9){
                cout<<"vous avez de la chance vous tomber sur un oie pour la première fois "<<endl;
                calculescore(20);
                if ((numde1==3 && numde2==6)|| (numde1==6 && numde2==3)){
                    numcase=26;
                }
                else if ((numde1==4 && numde2==5)||(numde1==5 && numde2==4)){
                    numcase=53;
                }
            }
            break;
        case 18 :
            if (somme!=6){
                numcase+=somme;
                calculescore(10);
            }
            break ;
        case 27 :
            if (somme!=6){
                numcase+=somme;
                calculescore(10);
            }
            break;
        
        case 45 :
            if (somme!=6){
                numcase+=somme;
                calculescore(10);
            }
            break ;
        
        case 54 :
            if (somme!=6){
                numcase+=somme;
                calculescore(10);
            }
            break ;
        case 31 :
            if (p.numcase==31){
                numcase=p.anciennenumcase;
            }
            else{
                numcase=31;
                cout<<"aucun  joueur arrive au 31 vous devrez rester dans cette case"<<endl ;
            }
            break;
        
        case 42 :
            numcase=30 ;
            break;
        case 52 :
            if( p.numcase==52){
                cout<<"félicitation vous pouvez continuer de jouer d'une façons ordinaire"<<endl ;
                numcase=numcase+somme ;
            }
            break ;
        case 58 :
            cout<<"c'est la tete de la mort vous devrerz recommencer le jeu vous pouvez utiliser le joker "<<endl ;
            if (jocker()==true){
                numcase=anciennenumcase;
                score=0; 
            } 
            else{
                numcase=0;
            }
            break;
        case 63:{
            cout<<"félicitation vous avez gagné le jeu ";
        }
        default:
            if (numcase==p.numcase){
                numcase=p.anciennenumcase;
            }
            else if(numcase>63){
                 difference=numcase-63 ;
                 numcase=63-difference ;
            }
    }
}

//pour calculer le score de joueur
void player::calculescore(int i){
    score+=i; 
}

//si votre score dépasse le 100 vous pouvez utiliser un jocker si vous etes en obstacle 
bool player::jocker(){
    bool ok=false;
    if (score>=100){
        cout<<"vous pouvez utliser un jocker";
        ok=true;
    }
    else{
        cout<<"votre score ne dépasse pas le 100 vous ne pouvez pas utiliser un jocker"<<endl;
    }
    return(ok);
}

//affichage de nom de joueur cette méthode utile pour la classe game pour affiche le gagnant
void player::afficher(){
    cout<<name<<endl ;
    cout<<color<<endl ; 
    cout<<score<<endl ;
}

void player ::operator = (const player & p) {
    score=p.score;
    name=p.name ;
    color=p.color ;
    numde1=p.numde1 ;
    numde2=p.numde2 ;
    numcase=p.numcase;
    anciennenumcase=p.anciennenumcase;
}

//retourner le nom de joueur
string player::getname(){
    return(name);
}

// retourner le coleur de joueur 
string player::getcolor(){
    return(color);
} 

int  player::getnumde1(){
    return(numde1);
}

int player::getnumde2(){
    return(numde2);
}

int player::getscore(){
    return(score);
}

//retourner le numero de case
int player::getnumcase(){
    return (numcase);
}

int player::getanciennenumcase(){
    return(anciennenumcase);
} 
