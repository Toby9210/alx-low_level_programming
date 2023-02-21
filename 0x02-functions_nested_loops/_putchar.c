#include <unistd.h>


/**
 * _purchar - write the character c to stdout
 * @c: The character to print
 * Return: 0n success 1.
 * 0n error, -1 is returned, and errno is set appropriately.
 */

int _purchar(char c)

{

	return (write(1, &c, 1));

}
