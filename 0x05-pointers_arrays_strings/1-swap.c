/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * This function takes two pointers
 * to integers as its parameters and swaps the
 * values of the integers pointed
 * to by a and b using a temporary variable.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
