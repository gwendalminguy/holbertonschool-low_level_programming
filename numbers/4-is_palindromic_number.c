/**
 * is_palindromic_number - determines wheter n is a palindromic number or not
 * @n: integer
 *
 * Return: 1 if n is a palindromic number ; 0 otherwise
 */
int is_palindromic_number(unsigned long long int n)
{
	int len = 1;
	int parity = 0;
	int i = 0;
	unsigned long long int a = 0, b = 0;
	unsigned long long int power = 1;
	unsigned long long int number = n;

	/* Getting number of digits of n */
	while (number > 9)
	{
		number = number / 10;
		len++;
	}

	/* Checking for parity of the number of digits */
	if (len % 2 == 1)
		parity = 1;

	/* Checking if n is a palindromic number */
	while (len > parity)
	{
		power = 1;

		for (i = 0 ; i < len - 1 ; i++)
			power *= 10;

		a = n % 10;
		b = n / power;

		if (a != b)
			return (0);

		n = (n % power) / 10;
		len -= 2;
	}

	return (1);
}
