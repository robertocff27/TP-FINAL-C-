#pragma once
#include <vector>
#include "clsCompte.h"

class clsListeCompte
{
private:
	vector <clsCompte> maListeCompte;
public:
	int NombreElement();

	void Ajouter(clsCompte *Compte);

	//Suprimmer()

	clsCompte *Trouver(string Numero);

	string Afficher();
};
