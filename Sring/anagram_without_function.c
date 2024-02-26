/*WAP to input two strings from keyboard and 
check strings are anagram or not 
Example:
first string  : abc
second string : bca
Output: Anagram

first string  : abd
second string : bca
Output : Not Anagram
*/

#include <stdio.h>
#include <string.h>

int main () {
   char s1[20];
   char s2[20];
   gets(s1);
   gets(s2);
   char temp;

   int i, j;
   int n1  = strlen(s1);
   int n2 = strlen(s2);

   // If both strings are of different length, then they are not anagrams

   if( n1 != n2) {    
      printf("%s and %s are not anagrams! \n", s1, s2);
      return 0;
   }
   
   // lets sort both strings first âˆ’

   for (i = 0; i < n1-1; i++) {
      for (j = i+1; j < n1; j++) {
         if (s1[i] > s1[j]) {
            temp  = s1[i];
            s1[i] = s1[j];
            s1[j] = temp;
         }
         if (s2[i] > s2[j]) {
            temp  = s2[i];
            s2[i] = s2[j];
            s2[j] = temp;
         }
      }
   }

   // Compare both strings character by character

   for(i = 0; i<n1; i++) {
      if(s1[i] != s2[i]) {    
         printf("Strings are not anagrams! \n", s1, s2);
         return 0;
      }
   }

   printf("Strings are anagrams! \n");
   return 0;
}