#ifndef SURFACE_H
#define SURFACE_H
class surface 
{
    private:
    int ls ;      // largeur de plateau
    int hs ;      // hauteur de plateau
    int const ncase = 63 ;      // nombre des cases

    public: 
    surface();
    void plateau(int i , int j) ;
    ~surface();     //destrecteur surface
};
#endif