// What will be the output of the following code snippet?
#include <stdio.h> 
void solve()
{
    int a = 3;
    int res = a++ + ++a + a++ + ++a;
    printf("%d", res);
}
int main()
{
    solve();
    return 0;
}
