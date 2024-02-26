// what will be output of given code?
# include <stdio.h>
int main()
{
   int i=0;
   for(i=0; i<20; i++)
   {
     switch(i)
     {
       case 0:
         i+=5;
       case 1:
         i+=2;
       case 5:
         i+=5;
       default:              
         i+=4;
         break;
     }
     printf("%d  ", i);
   }
 
   getchar();
   return 0;
}  
/*	O/P: 16  21
for(i=0;0<=20)
 {
     switch(0)
     {
       case 0: //matched case
         i+=5; //i = i + 5 = 0 + 5 = 5
          // no " break; " Satement , so it will continue executing other cases
      
       case 1:
         i+=2; // i = 5 + 2 =7
         
       case 5:
         i+=5; // 7 + 5 ==12
         
       default:              
         i+=4; // 12 + 4 = 16    /////// after i++ ,,i=17 ======i = 16 + 5 =21
         break;
     }
     printf("%d  ", i);  // print = 16 ,,,,,print 21
     i++; // 16++ = 17
     //now i =17 and there is no case 17 so it will execute " default" statement 
   }
 
   getchar();
   return 0;
}  
