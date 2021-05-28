#include "FictionalCharacter.h"
#include "BST.h"

bool insert(string key, int index, node** noeud)
{
	if ((*noeud) == nullptr)
	{
		*noeud = new node;
		(*noeud)->index = index;
		(*noeud)->key = key;
		(*noeud)->left = nullptr;
		(*noeud)->right = nullptr;
	}
	else {
		if (key.compare((*noeud)->key) > 0) // key apres (*noeud)->key ds l'alphabet
		{
			return insert(key, index, &(*noeud)->right);
		}
		else {
			if (key.compare((*noeud)->key) < 0) // key avant (*noeud)->key ds l'alphabet
			{
				return insert(key, index, &(*noeud)->left);
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
	cout << "(" << t->index << " ";
	cout << t->key << ")" << " ";
	if (t->right != nullptr)
		display(t->right);
}

bool check(node* node)  // a refaire , mettre une variable plus mettre next et return la fonction 
{
	if (node == nullptr)
		return true;

	// faux par rapport aux mauvaises insertions de nom gauche > noeud en question
	if (node->left != nullptr && node->left->key > node->key)
		return false;

	// faux par rapport aux mauvaises insertions de nom droite < noeud en question
	if (node->right != nullptr && node->right->key < node->key)
		return false;

	//test recursif
	if (!check(node->left) || !check(node->right))
		return false;

	// si on passe ts les tests c'est un bst
	return true;
}


int getheight(node** noeud, BinaryTree* tree) // a finaliser
{
	if ((*noeud)->right == nullptr)
	{
		tree->depth++;
		return tree->depth;
	}
	else
	{
		tree->depth++;
		getheight(&(*noeud)->right, tree);
	}
}


bool index(FictionalCharacter* tab, node** noeud, int datacount)
{
	bool result = false;
	for (int i = 0; i < datacount; i++)
	{
		result = insert(tab[i].nom, i, noeud); // on utilise prénom pour eviter que l'arbre soit totalement à droite vu que 
		//le fichier csv est classé par ordre alphabétique pour les noms
	}
	return result;
}

void find_carac(FictionalCharacter* tab, node** node, string name)
{

	if ((*node)->key == name)
	{
		display_tab(tab, (*node)->index);
		EXIT_SUCCESS;
	}
	else
	{
		if ((*node)->left != nullptr)
			find_carac(tab, &(*node)->left, name);
		if ((*node)->right != nullptr)
			find_carac(tab, &(*node)->right, name);
	}

}

void find_range(FictionalCharacter* tab, node** node, string name1, string name2)
{
	static int somme = 0;
	static float moy = 0.0;
	static int cpt = 0;
	if (name1.compare((*node)->key) <= 0)
	{
		if (name2.compare((*node)->key) >= 0)
		{
			display_tab(tab, (*node)->index);
			somme += tab[(*node)->index].age;
			cpt++;
			moy = (float)somme / (float)cpt;
			cout << "l'age moyen est:" << moy << endl;
		}
	}
	if ((*node)->left != nullptr)
		find_range(tab, &(*node)->left, name1, name2);
	if ((*node)->right != nullptr)
		find_range(tab, &(*node)->right, name1, name2);
}