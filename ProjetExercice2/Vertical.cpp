// But :  un programme qui prend comme entr�e un nombre de cinq chiffres. Le programme v�rifie qu'il y a bien
/* 5 chiffres dans le nombre.Puis il affiche le nombre verticalement, le premier chiffre sur la premi�re ligne, le
deuxi�me chiffre sur la deuxi�me ligne, ainsi de suite.Par exemple, l'utilisateur entre 12345, le programme va
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
	// D�claration de nos variables
	int monNombre;


	// Demander � l'utilisateur un nombre entier
	std::cout << "Veuillez entrer un nombre entier � cinq chiffres : ";
	std::cin >> monNombre;

	// Le programme doit valider que le nombre a bien 5 chiffres : 
	// un nombre � 5 chiffres est plus grand ou �gal � 10 000 et plus petit ou �gal � 99 999

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
	nb					�cran
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