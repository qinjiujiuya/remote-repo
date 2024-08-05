#include <iostream>
using namespace std;

int func(int n){
    if(n==1) 
        return 1;
    else
        return n+func(n-1);
}

int main()
{
    int num=func(10);
    printf("hello world%d...\n",num);
}