// TD_BST_LAICHE.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "FictionalCharacter.h"
#include "BST.h"
#include "Database.h"
int main()
{
	FictionalCharacter tab[43];
	BinaryTree tree;
	tree.size = 0;
	tree.depth = 0;
	tree.root = nullptr;
	createDatabase("FictionalCharacters.csv", tab, &tree.root);
	int aaa = getheight(&tree.root, &tree);
	bool aa = check(tree.root);
	if (aa == true)
	{
		cout << "the tree is a BST" << endl;
	}
	else {
		cout << "the tree isn't a BST" << endl;
	}
	cout << aaa << endl;
	display(tree.root);
	find_carac(tab,&(tree.root),"Janie");
	find_carac(tab, &(tree.root), "Jani");
	return 0;
}


