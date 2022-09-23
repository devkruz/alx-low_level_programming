
/**
* rot13 - Encodes a string using rot13
* @str: The string to be endcoded
* Return: Tht endcoded string
*/

char *rot13(char *str)
{
int i_str = 0, i_let = 0;

char letters[] = {'A', 'B', 'C', 'D', 'E', 'F',
'G', 'H', 'I', 'J', 'K', 'L',
'M', 'N', 'O', 'P', 'Q', 'R',
'S', 'T', 'U', 'V', 'W', 'X',
'Y', 'Z', 'a', 'b', 'c', 'd',
'e', 'f', 'g', 'h', 'i', 'j',
'k', 'l', 'm', 'n', 'o', 'p',
'q', 'r', 's', 't', 'u', 'v',
'w', 'x', 'y', 'z'};

char r_13[] = {'N', 'O', 'P', 'Q', 'R', 'S',
'T', 'U', 'V', 'W', 'X', 'Y',
'Z', 'A', 'B', 'C', 'D', 'E',
'F', 'G', 'H', 'I', 'J', 'K',
'L', 'M', 'n', 'o', 'p', 'q',
'r', 's', 't', 'u', 'v', 'w',
'x', 'y', 'z', 'a', 'b', 'c',
'd', 'e', 'f', 'g', 'h', 'i',
'j', 'k', 'l', 'm'};

while (str[i_str] != '\0')
{
while (letters[i_let] != '\0')
{
if (str[i_str] == letters[i_let])
{
str[i_str] = r_13[i_let];
}
i_let++;
}

i_str++;

}
return (str);
}

