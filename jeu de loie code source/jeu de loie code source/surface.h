#ifndef SURFACE_H
#define SURFACE_H
class surface 
{
    private:
    int ls ;      // largeur de plateau
    int hs ;      // hauteur de plateau
    int const ncase = 63 ;      // nombre des cases

    public: 
    surface();   //constructeur par défaut de la classe surface 
    void plateau() ;    //saisir la longeur et le hauteur du plateau
    void affiche();
    ~surface();     //destrecteur surface
};
#endif