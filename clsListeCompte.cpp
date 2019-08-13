#include "clsListeCompte.h"

int clsListeCompte::NombreElement()
{
	return maListeCompte.size();
}

void clsListeCompte::Ajouter(clsCompte *Compte)
{
	maListeCompte.push_back(*Compte);
}

clsCompte *clsListeCompte::Trouver(string Numero)
{
	for (clsCompte *courant = &maListeCompte[0]; courant != &maListeCompte[maListeCompte.size() - 1]; courant++)
	{
		if (courant->getNumero() == Numero)
		{
			return courant;
		}return NULL;
	}
}

//string clsListeCompte::Afficher()
//{
//	string info = "";
//	for (vector <clsCompte>::iterator courant = maListeCompte.begin(); courant != maListeCompte.end(); courant++)
//	{
//		
//
//	}
//}
