#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n<=1)
    {

        return n;
    }
    for(int i=3;i<n;++i)
    {

        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{

    int n;
    std::cin>>n;
    std::cout<<fibonacci(n);
}
