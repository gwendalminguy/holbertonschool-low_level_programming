#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

/**
 * main - generates a six characters key from a given username
 * @argc: number of arguments
 * @argv: argument
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char key[6];
	char *username;
	char *str = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	int length = 0, sum = 0, product = 1, seed = 0, square = 0, random = 0;
	int i = 0, j = 0;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: ./103-keygen [username]\n");
		exit(1);
	}

	username = argv[1];
	length = strlen(username);

	/* First character of the key */
	i = (length ^ 59) & 63;
	key[0] = str[i];

	/* Second character of the key */
	for (j = 0 ; j < length ; j++)
		sum += username[j];

	i = (sum ^ 79) & 63;
	key[1] = str[i];

	/* Third character of the key */
	for (j = 0 ; j < length ; j++)
		product *= username[j];

	i = (product ^ 85) & 63;
	key[2] = str[i];

	/* Fourth character of the key */
	for (j = 0 ; j < length ; j++)
	{
		if (username[j] > seed)
			seed = username[j];
	}

	srand(seed ^ 14);
	i = rand() & 63;
	key[3] = str[i];

	/* Fifth character of the key */
	for (j = 0 ; j < length ; j++)
		square += username[j] * username[j];

	i = (square ^ 239) & 63;
	key[4] = str[i];

	/* Sixth character of the key */
	for (j = 0 ; username[0] > j ; j++)
		random = rand();

	i = (random ^ 229) & 63;
	key[5] = str[i];

	printf("%s", key);

	return (0);
}
