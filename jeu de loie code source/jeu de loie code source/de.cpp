#include<iostream>
#include<cstdlib>
#include<ctime>
#include"de.h"
using namespace std;
de::de():numde1(0),numde2(0){}
void de::lancement_de(){
    srand(time(NULL));
    numde1= (rand()%6)+1;          //choisir un nombre entre 1 et 6 pour dé 1
    numde2= (rand()%6)+1;          //choisir un nombre entre 1 et 6 pour dé 1
}
int de::getnumde1(){
    return(numde1);
}
int de::getnumde2(){
    return(numde2);
}
de::~de(){
    //destruction de la classe dé
}
