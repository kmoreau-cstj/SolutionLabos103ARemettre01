// But : le programme  lit un entier et  détermine et affiche s’il s’agit d’un entier pair ou d’un entier impair
// Auteur : Emmanuel Junior Hondt Hondt Vi
// Date : 2021-09-02

#include<iostream>


void main()

{
	setlocale(LC_ALL, "");

	
    // Déclaration de nos variables
	
	int Nb;

	// Démande a l'utilisateur un nombre entier
	std::cout << "entrer nombre entier";
	std::cin >> Nb;

	// Si le nombre est divisible par deux il est pair si non il est impair le reste de la
    //  division par deux doit etre égale a zéro

	if (Nb% 2==0)
	{
		std::cout << Nb << " est pair\n"<<std::endl;
	}

	else
	{
	std::cout << Nb << " est impair\n" << std::endl;
	}

}
// Plan de tests
// Nb				ecran
// 1				1 est impair
// 2				2 est pair
// -1				-1 est impair
// -2				-2 est pair
// 0				0 est pair
// a				erreur (mais affiche 0 est pair)