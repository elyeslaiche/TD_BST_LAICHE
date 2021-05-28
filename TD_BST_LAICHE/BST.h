#pragma once
#include "FictionalCharacter.h"
typedef struct node {
	string key;
	int index;
	node* left;
	node* right;
};
typedef struct BinaryTree {
	int size;
	int depth;
	node* root;
};

bool insert(string key, int index, node** noeud);
void display(node* t);
bool check(node* node);
int getheight(node** noeud, BinaryTree* tree);
void find_carac(FictionalCharacter* tab, node** node, string name);
void find_range(FictionalCharacter* tab, node** node, string name1, string name2);
bool index(FictionalCharacter* tab, node** noeud, int datacount);