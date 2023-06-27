/**
 * _puts - rest pointers dereference
 * @str: character to check.
 */
void _puts(char *str)
{
	int n = 0;

	while ( str[n] != 0 )
	{
		_putchar (str[n]);
		n++;
	}
	_putchar ('\n');
}
