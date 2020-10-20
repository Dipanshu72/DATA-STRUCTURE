#include<iostream>
using namespace std;
int fibonacci(int n){
    int a=0;
    int b=0;
    for(int i=2;i<n-1;i++)
    {
       int temp=a;
       a=b;
       b=temp+a;

    }
    return b%10;
}

int main()
{

    int n;
    std::cin>>n;
    std::cout<<fibonacci(n);
}

