#include "partie.hpp"
#include "melangeur.hpp"

#include <iostream>
#include <cstdlib>
#include <sstream>

int main() {

  Plateau p ;
  p.ajouter({0,0}, {10,10}) ;

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

  Melangeur<Position> candidates ;
  for(auto& t : p.tuiles) {
    candidates.inserer(t.first) ;
  }

  while(candidates.taille() > 0) {
    Position pos = candidates.retirer() ;
    if(p.tuiles[pos].amenagement == Amenagement::VIDE) {
      p.reserver(pos, 0) ;
      p.amenager(pos, Amenagement::ARBRE, 0) ;
      std::cout << "============================================" << std::endl ;
      std::cout << p << std::endl ;

    }
  }

  std::cout << p << std::endl ;

#ifndef NO_GRAPHICS
  p.dessiner("routes.svg", 100) ;
#endif


  return 0 ;
}
