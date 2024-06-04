#include<iostream>
using namespace std;
int main()
{
int a,ans;
cout<<"Enter the tree digit number : ";
cin>>a;
ans=a/100+((a/10)%10)+a%10;
cout<< ans;


return 0;
}