#include "lists.h"

/**
 * startup_print - prints a message before execution of main
 */
__attribute__ ((constructor)) void startup_print(void)
{
	char *message = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";

	printf("%s", message);
}
