#ifndef DE
#define DE
class de{
    private:
    int numde1;       //le numero de premier dé
    int numde2;       //le numero de deuxième dé
    public :
    de();              //constructeur de la classe dé
    void lancement_de();      //donner deux valeurs de deux dé aleatoirement 
    int getnumde1();          //retourner le numero de prmier dé
    int getnumde2();          //retourner le numero de deuxieme dé
    ~de();                     //déstruction de la classe  dé

};
#endif