#include<stdio.h>
int main()
{
   int n;
   for(n = 7; n!=0; n--)
     printf("n = %d ", n--);
   getchar();
   return 0;
}
/*	O/P: infitine loop

	flow of execution:-
	for(n = 7; 7!=0; 5)
     printf("n = 7 ", 6);
     
     for(n =5 ; 5!=0; 3)
     printf("n = 5 ", 4);
     
     for(n = 3; 3!=0; 1)
     printf("n = 3 ", 2);
     
     for(n = 1; 1!=0; -1)
     printf("n = 1 ", 0);
     
     for(n = -1; -1!=0; -3)
     printf("n = -1 ", -2);
     
     .
     .
     .
     
     infitite loop 
     
     because n is always n != 0*/
     
	
