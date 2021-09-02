// But :  un programme qui prend comme entrée un nombre de cinq chiffres. Le programme vérifie qu'il y a bien
/* 5 chiffres dans le nombre.Puis il affiche le nombre verticalement, le premier chiffre sur la première ligne, le
deuxième chiffre sur la deuxième ligne, ainsi de suite.Par exemple, l'utilisateur entre 12345, le programme va
afficher :
1
2
3
4
5
L'utilisateur tape 56 le programme affiche "Ce nombre ne contient pas 5 chiffres." 
*/
// Auteur : Karine Moreau
// Date : 2021-09-02

#include<iostream>


void main()

{
	setlocale(LC_ALL, "");
	// Déclaration de nos variables
	int monNombre;


	// Demander à l'utilisateur un nombre entier
	std::cout << "Veuillez entrer un nombre entier à cinq chiffres : ";
	std::cin >> monNombre;

	// Le programme doit valider que le nombre a bien 5 chiffres : 
	// un nombre à 5 chiffres est plus grand ou égal à 10 000 et plus petit ou égal à 99 999

	if (monNombre >=10000)
	{
		if (monNombre<= 99999)
		{
			// Ici le nombre est correct : le nombre a 5 chiffres
			std::cout << monNombre / 10000 % 10  << std::endl;
			std::cout << monNombre / 1000 % 10 << std::endl;
			std::cout << monNombre / 100 % 10 << std::endl;
			std::cout << monNombre / 10 % 10 << std::endl;
			std::cout << monNombre / 1 % 10 << std::endl;
		}
		else
		{
			std::cout << monNombre << " ne contient pas 5 chiffres" << std::endl;
		}
	}
	else
	{
		std::cout << monNombre << " ne contient pas 5 chiffres" << std::endl;
	}


}

// plan de tests
/*
	nb					écran
	56					Erreur le nombre n'a pas 5 chiffres
	123456				Erreur le nombre n'a pas 5 chiffres
	01234				Erreur le nombre n'a pas 5 chiffres
	-56					Erreur le nombre n'a pas 5 chiffres
	-123456				Erreur le nombre n'a pas 5 chiffres
	12345				1
						2
						3
						4
						5





*/