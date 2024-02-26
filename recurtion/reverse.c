#include <stdio.h>
int rem, rev = 0;
int reverse(int no) //definition
{
    if(no != 0)
    {
        rem = no % 10;
        rev = rev * 10 + rem;
        no = no / 10;
        reverse(no);  //recurciv call 
    }
    return rev;
}
int main()
{
    int no;
    
    printf("Enter Number:\n");
    
    scanf("%d", &no);
    
    int r = reverse(no); //initial or nirmal calling
    
    printf("Reverse Of %d = %d",no,r);
    
    return 0;
}