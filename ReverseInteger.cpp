#include <iostream>
#include<stdlib.h>
using namespace std;

int reverse(int x) 
{
    int result=0;
    int digit;
    while(abs(x)>0)
    {
    digit=x%10;
    x=x/10;
    result=result*10 + digit;
    }
    return (x<0)? (-result):result;
}

int main() {
    cout<<reverse(-205);
    return 0;
}