#include "Database.h"
void createDatabase(string Path, FictionalCharacter* tab, node** noeud)
{
	bool result = false;
	load(Path, tab);
	while (result != true)
	{
		result = index(tab, noeud, 43);
	}
}