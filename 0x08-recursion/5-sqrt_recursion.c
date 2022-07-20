include main.h
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (helper(n, 2));
}
