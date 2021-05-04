#pragma once
#include "FictionalCharacter.h"
typedef struct node {
	string key;
	int index;
	node* left;
	node* right;
};
struct BinaryTree {
	int size;
	int depth;
	node* root;
};

bool insert(string key, int index, node** noeud, BinaryTree* racine);
void display(node* t);
bool check(BinaryTree* tree);
int getheight(node** noeud, BinaryTree* tree);
bool index(FictionalCharacter* tab, BinaryTree* tree, int datacount);