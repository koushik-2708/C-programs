#include <stdio.h>
int main() 
{
 char line[150],i;
 int vowels, consonant, digit, space;
 // initialize all variables to 0
 vowels = consonant = digit = space = 0;
 // get full line of string input
 printf("Enter a line of string: ");
 fgets(line, sizeof(line), stdin);
 // loop through each character of the string
 for (i = 0; line[i] != '\0'; ++i) 
{
 // convert character to lowercase
 line[i] = tolower(line[i]);
 // check if the character is a vowel
 if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
 line[i] == 'o' || line[i] == 'u') {
 ++vowels;
 }
 else if ((line[i] >= 'a' && line[i] <= 'z'))
 {
 ++consonant;
 }
 else if (line[i] >= '0' && line[i] <= '9') 
 {
 ++digit;
 }
 else if (line[i] == ' ') 
 {
 ++space;
 }
 }
 printf("Vowels: %d", vowels);
 printf("\nConsonants: %d", consonant);
 printf("\nDigits: %d", digit);
 printf("\nWhite spaces: %d", space);
 return 0;
}
