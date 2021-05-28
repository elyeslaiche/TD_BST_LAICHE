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
	load("FictionalCharacters.csv", tab);
	int size = sizeof(tab) / sizeof(tab[0]);
	/*bool result = index(tab, &tree, size);
	if (result == true)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	cout << "----------------------------------" << endl;

	result = check(&tree); //check if binary tree is a BST
	
	display(tree.root);

	
	cout << tree.depth << endl;*/
	
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


