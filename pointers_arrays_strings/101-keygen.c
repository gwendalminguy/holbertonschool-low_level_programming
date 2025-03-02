#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** main - generates characters key whose sum equals 2772
 *
 * Return: string matching expectations
 */
int main(void)
{
	char key[64];
	unsigned int num, sum, i, j = 1;

	srand(time(0));

	while (sum != 2772)
	{
		*key = '\0';
		sum = 0;
		i = 0;

		while (sum < 2772)
		{
			num = rand() % 26 + 65;
			key[i] = num;
			/* printf("key[%d] = %c\n", i, key[i]); */
			sum += num;
			i++;
		}

		key[i] = '\0';
		/* printf("Attempt %d: %s\n", j, key); */
		j++;
	}

	printf("%s\n", key);

	return (0);
}
