/* Enter six subject marks of student and
 caculate its percentage and
 if per>80 && per<=100 then student in distinction,
 if per>60 && per<=80 then student in first division and
 if per>50 && per<=60 then student in second division
 if per>40 && per<=50 then student in third division and
 per<40 then student failed.*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 float s1,s2,s3,s4,s5,s6,per;
 clrscr();
 printf("enter marks of six subjects: \n");
 scanf("%f%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5,&s6);
 per= ((s1+s2+s3+s4+s5+s6)/600)*100; //also you can write (total marks)/6

 per>80 && per<=100 ? printf("distinction %f\n",per)
 :per>60 && per<=80 ? printf("fisrt division %f\n",per)
 :per>50 && per<=60 ? printf("second division %f\n",per)
 :per>40 && per<=50 ? printf("third division %f\n",per)
 :printf("failed%f",per);

 getch();
 }