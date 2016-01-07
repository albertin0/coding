#include<stdio.h>
#include<stdlib.h>
#include<string.h>	
typedef struct node
{
	int a;
	int b;
	char c;
} adt;
int main()
{
	int* a1 = (int*)malloc(4*sizeof(int));
	a1[0] = 19012;
	printf("%d\n", a1[0]);
	
	a1 = (int*)calloc(4,sizeof(int));
	a1[0] = 19012;
	printf("%d\n", a1[0]);
	
	a1 = (int*)realloc(a1,5*sizeof(int));
	a1[0] = 19012;
	printf("%d\n", a1[0]);
	free(a1);

	char *str;

   /* Initial memory allocation */
   str = (char *) malloc(5);
   strcpy(str, "albert");
   printf("String = %s,  Address = %u, \n", str, str);

   printf("\n");
   int i;
   for( i = 0; i<= strlen(str); i++)
   {
   		printf("%d   ", str[i] );
   }
   printf("\n");
   printf("\n");

   /* Reallocating memory */
   str = (char *) realloc(str, 25);
   strcat(str, "mathews");
   printf("String = %s,  Address = %u\n", str, str);

   free(str);
}