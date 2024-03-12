# Fresh Fish

Fresh Fish est un jeu de société créé par Friedemann Friese et édité par 2F-Spiele en 2014. Ce jeu de stratégie met les joueurs dans la peau de marchands cherchant à vendre différents types de denrées en plaçant leurs boutiques aussi près que possible des producteurs correspondants.

## Objectif du Jeu

Le but du jeu est de vendre les denrées les plus fraîches possible en plaçant ses boutiques près des producteurs correspondants. Chaque joueur doit placer une boutique pour chaque type de denrée : avocats, brocolis, carottes, dattes et échalotes.

## Installation

### Prérequis

- C++ compiler
- CMake

### Instructions

1. Clonez ce dépôt vers votre machine locale.
2. Compilez le code en utilisant votre compilateur C++ et CMake.
3. Exécutez le programme pour commencer à jouer.

## Fonctionnalités

### 1. Placement des Routes

Le programme automatise le placement des routes sur le plateau de jeu, en suivant les règles du jeu. Les routes relient les différents aménagements du plateau, permettant ainsi aux marchands de se déplacer librement.

### 2. Comptage des Points

Une fois la partie terminée, le programme peut compter les points des joueurs en fonction de la proximité de leurs boutiques aux producteurs de denrées.

### 3. Joueur Automatique (À venir)

Il est prévu d'étendre le programme pour inclure un joueur automatique, permettant ainsi de jouer contre l'ordinateur.

## Compilation et Exécution

Pour compiler le programme, vous pouvez utiliser le fichier CMakeLists.txt fourni ou le Makefile fourni dans le dossier src.

```bash
# Avec CMake
mkdir build
cd build
cmake ..
make

# Avec Make
cd src
make

