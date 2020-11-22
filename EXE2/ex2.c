#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	unsigned int nombre = 2868838400;

	int nombre_bits = 32;
	int bits_par_octets = 8;
	int solution_a = nombre_bits / bits_par_octets;
	printf("Le nombre d' octets pour representer le nombre entier est : %d octets\n", solution_a);
	int solution_b = solution_a * bits_par_octets;
	printf("Le nombre de bits pour representer le nombre entier est : %d bits\n", solution_b);
	int i = 0;
	while (nombre > 0)
	{
		unsigned int comparaison = nombre & 1;

		char res[255];


		if (comparaison == 1)
		{
			strcpy_s(res, 255, "ON");
			
		}
		else
		{
			strcpy_s(res, 255, "OFF");
			
		}

		printf("bit %2d : %s \n", i, res);
		i++;
		nombre = nombre >> 1;

	}
	printf("Bye !\n");
	return(EXIT_SUCCESS);
}