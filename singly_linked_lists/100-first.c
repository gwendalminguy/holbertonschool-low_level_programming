#include "lists.h"

/**
 * startup_print - prints a message before execution of main
 */
__attribute__ ((constructor))void startup_print(void)
{
	char *message_a = "You're beat! and yet, you must allow,\n";
	char *message_b = "I bore my house upon my back!\n";

	printf("%s%s", message_a, message_b);
}
