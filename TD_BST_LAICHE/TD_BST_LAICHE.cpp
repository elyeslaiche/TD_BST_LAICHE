// TD_BST_LAICHE.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "FictionalCharacter.h"
#include "BST.h"
int main()
{
	FictionalCharacter tab[43];
	BinaryTree tree;
	tree.size = 0;
	tree.depth = 0;
	tree.root = nullptr;
	load("FictionalCharacters.csv", tab);
	
		for (int i = 0; i <= 42; i++) {
			cout << "-----------------------" << endl;
			cout << "nom: " << tab[i].nom << endl;
			cout << "prenom: " << tab[i].prenom << endl;
			cout << "titre: " << tab[i].titre << endl;
			cout << "age: " << tab[i].age << endl;
			bool result = insert(tab[i].nom, i, &tree.root, &tree);
			if (result == true)
			{
				cout << "true" << endl;
			}
			else {
				cout << "false" << endl;
			}
		}

		display(tree.root);
	

}


