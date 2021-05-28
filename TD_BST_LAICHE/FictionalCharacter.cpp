#include "FictionalCharacter.h"

void load(string path, FictionalCharacter* ptr_tab) {

	ifstream fin(path);
	string age;
	int i = 0;
	while (fin.peek() != EOF) {
		
		getline(fin, ptr_tab[i].nom, ';');
		getline(fin, ptr_tab[i].prenom, ';');
		getline(fin, ptr_tab[i].titre, ';');
		getline(fin, age, '\n');
		ptr_tab[i].age = stoi(age);
		i++;

	}


}

void display_tab(FictionalCharacter* tab, int i)
{
	cout << "-----------------------" << endl;
	cout << "nom: " << tab[i].nom << endl;
	cout << "prenom: " << tab[i].prenom << endl;
	cout << "titre: " << tab[i].titre << endl;
	cout << "age: " << tab[i].age << endl;
	
}