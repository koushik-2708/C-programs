#include <stdio.h>
int main() 
{
 char str[1001],i;
 printf("Enter a sentence: ");
 scanf("%[^\n]s", str);
 printf("Words in the sentence are:\n");
  for ( i = 0; str[i] != '\0'; i++)
 {
 if (str[i] == ' ') printf("\n");
 else printf("%c", str[i]);
 }
}

