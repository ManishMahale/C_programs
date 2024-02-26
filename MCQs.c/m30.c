#include <stdio.h>
#include <conio.h>
void main()
{
    int k = 12, n = 30;
    k = (k > 5 &&n = 4 ? 100 : 200);
printf ("k = %d*,k); // no duble quotes after asterisk'*'
getch();
}

/*
O/P:

note: expected 'const char *' but argument is of type 'int'
 _CRTIMP __cdecl __MINGW_NOTHROW  int printf (const char *, ...);
                                      ^~~~~~
c:9:1: error: expected ';' before '}' token
 }
 ^
*/