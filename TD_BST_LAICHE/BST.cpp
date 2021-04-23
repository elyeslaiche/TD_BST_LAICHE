#include "FictionalCharacter.h"


typedef struct node {
	string key;
	int index;
};

bool insert(string key, int index)
{
	node* noeud = new node();
		noeud->index = index;
		noeud->key = key;
		return true;
	
}