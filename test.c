#include <stdio.h>
#include <stdlib.h>
int main()
{

	char *jour; 
	char *nuit;
   	char test[5] = {'j','u','m','p','\0'};
	jour = malloc(sizeof(char) * 11); 
	nuit = malloc(sizeof(char) * 11); 

	int i;
	
	i = 0;
	while (i < 10)
	{
		jour[i] = 97 + i;
		i++;
	}
	i = 0;
	while (i < 10)
	{
		nuit[i] = 65 + i;
		i++;
	}
	jour[10] = 0;
	printf("%s",jour);
	printf("\n%d",*(jour - 50));
	printf("\n%s",(test + 50));
}
