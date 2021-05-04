#include "FictionalCharacter.h"
#include "BST.h"

bool insert(string key, int index, node** noeud, BinaryTree* arbre)
{
	if ((*noeud) == nullptr)
	{
		*noeud = new node;
		(*noeud)->index = index;
		(*noeud)->key = key;
		(*noeud)->left = nullptr;
		(*noeud)->right = nullptr;
		arbre->size++;
	}
	else {
		if (key.compare((*noeud)->key) > 0) // key apres (*noeud)->key ds l'alphabet
		{
			return insert(key, index, &(*noeud)->right, arbre);
		}
		else {
			if (key.compare((*noeud)->key) < 0) // key avant (*noeud)->key ds l'alphabet
			{
				return insert(key, index, &(*noeud)->left, arbre);
			}
			else {
				return false;
			}
		}
	}
	return true;
}


void display(node* t) {

	if (t->left != nullptr)
		display(t->left);
	cout << t->index << " ";
	cout << t->key << " ";
	if (t->right != nullptr)
		display(t->right);
}

bool check(BinaryTree* tree)
{
	int i = 0;
	while (i <= tree->size)
	{
		if ((tree->root->left != nullptr) && (tree->root->key < tree->root->left->key))
		{
			return false;
		}
		else
		{
			if ((tree->root->right != nullptr) && (tree->root->key > tree->root->right->key))
			{
				return false;
			}
		}
		i++;
	}
	return true;
}

int getheight(node** noeud, BinaryTree* tree)
{
	if (((*noeud)->left == nullptr) && ((*noeud)->right == nullptr))
	{
		return tree->depth;
	}
	else
	{
		if ((*noeud)->left == nullptr)
		{
			tree->depth++;
			getheight(&(*noeud)->right, tree);
		}
		else
		{
			tree->depth++;
			getheight(&(*noeud)->left, tree);
		}
	}
}

bool index(FictionalCharacter* tab, BinaryTree* tree, int datacount)
{
	bool result;
	for (int i = 0; i < datacount; i++) 
	{
		 result = insert(tab[i].nom, i, &tree->root, tree); 
	}
	return result;
}