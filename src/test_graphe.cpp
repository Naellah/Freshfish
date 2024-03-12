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
  Plateau p ;
  //spécification de la dimension du plateau
  p.ajouter({0,0}, {9,9}) ;

  //placement d'un arbre
  //le dernier paramètre est le numéro du joueur (inutile pour un arbre)
  //{:}
  /*p.amenager({0,0}, Amenagement::ARBRE, 0) ;

  //placement d'un produscteur
  //+A+
  p.amenager({3,7}, Amenagement::PRODUCTEUR_AVOCAT, 0) ;

  //placement d'une boutique
  //$E$
  p.amenager({8,2}, Amenagement::BOUTIQUE_ECHALOTE, 1) ;*/

  //TEST
  std::vector<std::pair<int, int>> tab_pair;
  tab_pair = {{1, 3}, {7, 4}, {4, 4}, {5, 1}, {2, 1}, {0, 4},
              {6, 3}, {9, 3}, {8, 5}, {3, 4}, {4, 6}, {7, 3},
              {0, 3}, {9, 4}, {4, 5}, {5, 7}, {0, 0}, {3, 1},
              {0, 5}, {3, 3}, {5, 4}, {8, 9}, {7, 2}, {4, 0},
              {0, 6}, {4, 8}, {3, 0}, {5, 0}, {6, 4}, {5, 3},
              {1, 8}, {8, 7}, {9, 5}, {8, 8}, {5, 8}, {9, 0},
              {4, 7}, {9, 9}, {1, 6}, {7, 1}, {5, 6}, {1, 7},
              {9, 2}, {7, 5}, {0, 1}, {3, 5}, {7, 8}, {2, 7},
              {7, 7}, {9, 1}, {2, 8}};

  for(long unsigned int i=0; i<tab_pair.size(); i++)
  {
    p.amenager(tab_pair[i], Amenagement::ARBRE, 0);
  }

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
