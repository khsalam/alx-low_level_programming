/**
 * _strlen - rest pointers dereference
 * @s: character to check.
 * Return: return the string Length
 */
int _strlen(char *s)
{
	int n = 0;
	while (s[n] != 0)
	{
		n++;
	}
	return (n);
}
