#include <stdlib.h> /* Pour la fonction atoi() */

/**
 * main - multiplie deux entiers passés en argument
 * @argc: Le nombre d'arguments
 * @argv: Le tableau des arguments
 * Return: 0 si succès, 1 si erreur
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
