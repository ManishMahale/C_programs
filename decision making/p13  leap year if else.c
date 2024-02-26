/*	To check whether a year is leap or not
Step 1:
• We first divide the year by 4.
• If it is not divisible by 4 then it is not a leap year.
• If it is divisible by 4 leaving remainder 0
Step 2:
• We divide the year by 100
• If it is not divisible by 100 then it is a leap year.
• If it is divisible by 100 leaving remainder 0
Step 3:
• We divide the year by 400
• If it is not divisible by 400 then it is a leap year.
• If it is divisible by 400 leaving remainder 0  */

#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   // leap year if perfectly divisible by 400
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   // not a leap year if divisible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   // all other years are not leap years
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}
