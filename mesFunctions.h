#pragma once
#include<iostream>
#include<cstdio>
#include<iomanip>
#include<string>
#include<fstream>
#include<stdio.h>
#include<sstream>
#include "clsCompte.h"
#include "clsListeCompte.h"

using namespace std;

void AfficherTitre1(char *unTitre)
{
	char *ptr1 = unTitre;
	char *ptr2 = unTitre;
	cout << setw(30);

	while (*ptr1 != '\0')
	{
		cout << (char)toupper(*ptr1);
		ptr1++;
	}

	cout << endl << setw(30);

	while (*ptr2 != '\0')
	{
		cout << "-";
		ptr2++;
	}

	cout << endl;
}

void AfficherTitre2(char *unTitre)
{
	char *ptrtitre1 = unTitre;
	char *ptrtitre2 = unTitre;
	cout << setw(22);

	while (*ptrtitre1 != '\0')
	{
		cout << *ptrtitre1;
		ptrtitre1++;
	}

	cout << endl << setw(22);

	while (*ptrtitre2 != '\0')
	{
		cout << "-";
		ptrtitre2++;
	}

	cout << endl;
}

//void LireFichier(clsListeCompte uneListe, string unFile)
//{
//	ifstream file(unFile);
//	string tmpsolde;
//	while (!file.eof())
//	{
//		clsCompte * client = new clsCompte;
//		getline(file, client->setNumero);
//		getline(file, client->setClient);
//		getline(file, client->setNIP);
//		getline(file, tmpsolde);
//
//		client->Solde = strtof((tmpsolde).c_str(), 0);
//
//		if (uneListe->NBClients == 0)
//		{
//			uneListe->Premier = client;
//		}
//		else if (uneListe->NBClients > 0)
//		{
//			uneListe->Dernier->Suivant = client;
//		}
//
//		uneListe->Dernier = client;
//		client->Suivant = NULL;
//		uneListe->NBClients++;
//		//cout << client->Numero << client->Client << client->Nip << client->Solde;
//	}
//	//cout << uneListe->Premier->Client << endl;
//	//cout << uneListe->Dernier->Client;
//}

clsCompte * LireCompte(clsListeCompte *uneListe)
{
	string numeroCompte;
	string nip;
	clsCompte *existante;
	do
	{
		cout << "Entrez votre numero de compte : ";
		cin >> numeroCompte;
		
		existante = uneListe->Trouver(numeroCompte);
		if (existante != NULL)
		{
			cout << "\t Bienvenue " << existante->getClient() << endl;
		}
		/*for (Compte *ptrcourant = uneListe->Premier; ptrcourant != NULL; ptrcourant = ptrcourant->Suivant)
		{
			if (ptrcourant->Numero == numeroCompte)
			{
				cout << "\t Bienvenue " << ptrcourant->Client << endl;
				do
				{
					cout << "Entrez votre nip : ";
					cin >> nip;

					if (ptrcourant->Nip == nip)
					{
						existante = 1;
					}
				} while (existante != 1);
				return ptrcourant;
			}

		}*/
	} while (existante == NULL);

}

void FunctionDeposer(clsCompte *unCompte)
{
	int valeurDepot;

	do
	{
		cout << "Entrez le montant a deposer $ : ";
		cin >> valeurDepot;

	} while (unCompte->Deposer(valeurDepot));
	cout << "\n--- la transaction a reussi ---" << endl;
	FunctionConsulter(unCompte);
}

void FunctionRetirer(clsCompte *unCompte)
{
	int valeurRetrait;

	do
	{
		cout << "Entrez le montant a retirer $ : ";
		cin >> valeurRetrait;
	} while (unCompte->Retirer(valeurRetrait));
	cout << "\n--- la transaction a reussi ---" << endl;
	FunctionConsulter(unCompte);
	
}

void FunctionConsulter(clsCompte *unCompte)
{
	cout << "Les infos du compte" << endl;
	cout << unCompte->Consulter();
}
