#include <stdio.h>
int p = 1;
int getPower(int base, int index)
{
    if (index != 0)
    {
        p = p * base;
        return getPower(base, --index);
    }
    else 
    {
        return p;
    }
}

int main()
{
    int base, index;
    printf("Enter Base:\n");
    scanf("%d", &base);

    printf("Enter Index:\n");
    scanf("%d", &index);

    int power = getPower(base, index);
    printf("\nPOwer is %d",power);
    return 0;
}

/*
#include <iostream>
using namespace std;
class rec
{
public:
    int p;

public:
    void setData()
    {
        p = 1;
    }
    int getPower(int base, int index)
    {
        if (index != 0)
        {
            p = p * base;
            return getPower(base, --index);
        }
        else
        {
            return p;
        }
    }
};

int main()
{
    int a, b;
    cout << "Enter base and index\n";
    cin >> a;
    cin >> b;
    rec r;
    r.setData();
    int result = r.getPower(a, b);
    cout << "\nPower of "<<a<<" = "<< result;
}

*/