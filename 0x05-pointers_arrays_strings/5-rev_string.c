/**
 * rev_string - rest pointers dereference
 * @s: character to check.
 * Return: Return the Revere of the string
 */
void rev_string(char *s)
{
	int n = 0;
	int i;
	int n1;
	char c;

	while ( s[n] != 0 )
		n ++;

	n1 = n - 1;

	for (i = 0; i < n / 2 ; i++)
	{
		c = s[i];
		s[i] = s[n1];
		s[n1] = c;
		n1--;
	}
}
