#include "mesFunctions.h"
#include <iostream>
#include "clsListeCompte.h"
#include "clsCompte.h"
#include "clsGuichet.h"
#include <fstream>

using namespace std;

int main() {
	int choix;
	char titre1[] = "banque royale";
	char titre2[] = "Guichet Automatique Bancaire";
	clsCompte *Compte1;
	clsListeCompte Liste1;

	AfficherTitre1(titre1);
	AfficherTitre2(titre2);
	//LireFichier(Liste1, "bank.txt");
	//LireCompte(Liste1);
	
	system("Pause");
	return 0;
}
