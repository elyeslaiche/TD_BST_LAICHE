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
		if (key.compare((*noeud)->key) > 0)
		{
			return insert(key, index, &(*noeud)->right, arbre);
		}
		else {
			if (key.compare((*noeud)->key) < 0)
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