#include<iostream>
using namespace std;
 int sum_of_two_number(int first_number,int second_number)
 {

     return first_number + second_number;
 }

 int main()
 {

     int a=0,b=0,sum;

     std::cin>>a;
     std::cin>>b;
     std::cout<<sum_of_two_number(a,b);

     return 0;
 }
