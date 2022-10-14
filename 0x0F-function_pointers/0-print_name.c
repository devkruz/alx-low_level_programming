/**
* print_name - Prints a name
* @name: The name to be printed
* @f: The callback function to print @name
*
* Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
