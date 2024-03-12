#include "partie.hpp"
#include "melangeur.hpp"

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>

int main() {

  //n'hésitez pas à ajouter vos propres tests

  //test de la fonction voisine
  std::cout << "=== positions voisines de {0,3} ===" << std::endl ;

  std::cout << "attendu : {-1,3}" << std::endl ;
  std::cout << voisine({0,3}, 0) << std::endl ;
  std::cout << "attendu : {0,4}" << std::endl ;
  std::cout << voisine({0,3}, 1) << std::endl ;
  std::cout << "attendu : {1,3}" << std::endl ;
  std::cout << voisine({0,3}, 2) << std::endl ;
  std::cout << "attendu : {0,2}" << std::endl ;
  std::cout << voisine({0,3}, 3) << std::endl ;

  //création d'un plateau
  /*Plateau p ;
  //spécification de la dimension du plateau
  p.ajouter({0,0}, {9,9}) ;

  //placement d'un arbre
  //le dernier paramètre est le numéro du joueur (inutile pour un arbre)
  //{:}
  p.amenager({0,0}, Amenagement::ARBRE, 0) ;

  //placement d'un produscteur
  //+A+
  p.amenager({3,7}, Amenagement::PRODUCTEUR_AVOCAT, 0) ;

  //placement d'une boutique
  //$E$
  p.amenager({8,2}, Amenagement::BOUTIQUE_ECHALOTE, 1) ;*/

  Plateau p ;
  p.ajouter({0,0}, {9,9}) ;


  p.amenager({3,2}, Amenagement::ARBRE, 0) ;
  p.amenager({3,6}, Amenagement::ARBRE, 0) ;
  p.amenager({3,7}, Amenagement::ARBRE, 0) ;
  p.amenager({4,1}, Amenagement::ARBRE, 0) ;
  p.amenager({5,3}, Amenagement::ARBRE, 0) ;
  p.amenager({5,5}, Amenagement::ARBRE, 0) ;
  p.amenager({6,5}, Amenagement::ARBRE, 0) ;
  p.amenager({8,6}, Amenagement::ARBRE, 0) ;
  p.amenager({9,5}, Amenagement::ARBRE, 0) ;
  p.amenager({9,6}, Amenagement::ARBRE, 0) ;

  p.amenager({2,8}, Amenagement::PRODUCTEUR_AVOCAT, 0) ;
  p.amenager({8,9}, Amenagement::PRODUCTEUR_BROCOLI, 0) ;
  p.amenager({4,2}, Amenagement::PRODUCTEUR_CAROTTE, 0) ;
  p.amenager({2,2}, Amenagement::PRODUCTEUR_DATTE, 0) ;
  p.amenager({9,4}, Amenagement::PRODUCTEUR_ECHALOTE, 0) ;

  p.amenager({2,1}, Amenagement::BOUTIQUE_CAROTTE, 2) ;
  p.amenager({2,4}, Amenagement::BOUTIQUE_CAROTTE, 4) ;
  p.amenager({2,5}, Amenagement::BOUTIQUE_BROCOLI, 0) ;
  p.amenager({2,7}, Amenagement::BOUTIQUE_CAROTTE, 1) ;

  p.amenager({3,4}, Amenagement::BOUTIQUE_ECHALOTE, 3) ;
  p.amenager({3,5}, Amenagement::BOUTIQUE_ECHALOTE, 4) ;
  p.amenager({3,8}, Amenagement::BOUTIQUE_AVOCAT, 1) ;

  p.amenager({4,3}, Amenagement::BOUTIQUE_DATTE, 1) ;

  p.amenager({5,1}, Amenagement::BOUTIQUE_BROCOLI, 3) ;

  p.amenager({8,2}, Amenagement::BOUTIQUE_CAROTTE, 0) ;
  p.amenager({8,8}, Amenagement::BOUTIQUE_DATTE, 0) ;

  p.amenager({9,2}, Amenagement::BOUTIQUE_AVOCAT, 4) ;
  p.amenager({9,9}, Amenagement::BOUTIQUE_DATTE, 2) ;


  //dessin du plateau dans la console
  std::cout << p << std::endl ;

  //dessin du plateau dans une image
  //il est également possible d'écrire un fichier png
  //pour que ça fonctionne, il faut avoir librsvg-2.0

#ifndef NO_GRAPHICS
  p.dessiner("plateau.svg", 100) ;
#endif
  
  return 0 ;
}
