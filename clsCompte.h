#pragma once
#include <string>
#include <iostream>
using namespace std;
class clsCompte
{
private:
	string Numero;
	string Client;
	string NIP;
	float Solde;
public:
	//Les Constructors
	clsCompte();
	clsCompte(string Numero, string Client, string NIP, float Solde);

	//Methodes d'access aux proprietes
	string getNumero();
	void setNumero(string unNumero);
	string getClient();
	void setClient(string unClient);
	string getNIP();
	void setNIP(string unNip);
	float getSolde();
	void setSolde(float unSolde);

	//Les Methodes

	void Ouvrir(string unNumero, string unClient, string unNIP);
	bool Deposer(int unDepot);
	bool Retirer(int unRetrait);
	string Consulter();
};
