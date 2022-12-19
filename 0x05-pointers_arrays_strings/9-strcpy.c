/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @destn: A pointer to destination of string
 * @srce: A pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *destn, char *srce)
{
char *auxl = destn;
while (*srce)
*destn++ = *srce++;
return (auxl);
}
