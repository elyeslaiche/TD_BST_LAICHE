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
	
	
		for (int i = 0; i <= 42; i++) {
			display_tab(tab,i);
			bool result = insert(tab[i].nom, i, &tree.root, &tree); //insertion 
			if (result == true)
			{
				cout << "true" << endl;
			}
			else {
				cout << "false" << endl;
			}
		}
		cout << "----------------------------------" << endl;

		bool result = check(&tree); //check if binary tree is a BST
		if (result == true)
		{
			cout << "the tree is a BST" << endl;
		}
		else {
			cout << "the tree isn't a BST" << endl;
		}
		//display(tree.root);
		getheight(&tree.root, &tree);

		cout << tree.depth << endl;
	

}


