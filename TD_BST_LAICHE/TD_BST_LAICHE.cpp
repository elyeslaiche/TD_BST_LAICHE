// TD_BST_LAICHE.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "FictionalCharacter.h"

int main()
{
    FictionalCharacter tab[43];
     load("FictionalCharacters.csv",tab);
     for (int i = 0; i <= 42; i++) {
         cout <<"nom: " << tab[i].nom << endl;
         cout << "prenom: " << tab[i].prenom << endl;
         cout << "titre: " << tab[i].titre << endl;
         cout << "age: " << tab[i].age << endl;
     }
    
}


