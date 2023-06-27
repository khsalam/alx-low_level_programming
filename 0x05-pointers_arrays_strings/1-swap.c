/**
 * swap_int - swap to integers
 * @a: First int.
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
