#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

typedef struct FictionalCharacter {
	string nom;
	string prenom;
	string titre;
	int age;
};

void load(string path, FictionalCharacter* ptr_tab);
void display_tab(FictionalCharacter* tab, int i);