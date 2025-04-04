#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * main - generates a six characters key from a given username
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 if successful ; 1 otherwise
 */
int main(int argc, char **argv)
{
	char key[6];
	char *user;
	char *str;
	int length = 0, sum = 0, product = 1, seed = 0, square = 0, random = 0;
	int i = 0, j = 0;

	if (argc != 2)
		return (1);
	str = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	user = argv[1];
	length = strlen(user);
	i = (length ^ 59) & 63;
	key[0] = str[i];
	for (j = 0 ; j < length ; j++)
		sum += user[j];
	i = (sum ^ 79) & 63;
	key[1] = str[i];
	for (j = 0 ; j < length ; j++)
		product *= user[j];
	i = (product ^ 85) & 63;
	key[2] = str[i];
	for (j = 0 ; j < length ; j++)
	{
		if (user[j] > seed)
			seed = user[j];
	}
	srand(seed ^ 14);
	i = rand() & 63;
	key[3] = str[i];
	for (j = 0 ; j < length ; j++)
		square += user[j] * user[j];
	i = (square ^ 239) & 63;
	key[4] = str[i];
	for (j = 0 ; user[0] > j ; j++)
		random = rand();
	i = (random ^ 229) & 63;
	key[5] = str[i];
	printf("%s", key);
	return (0);
}
