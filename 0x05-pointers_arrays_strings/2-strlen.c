/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the input string.
 *
 * Description:
 * This function takes a pointer to a null-terminated string as a parameter
 * and returns the length of the string (excluding the null terminator).
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

