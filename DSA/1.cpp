#include<iostream>

using namespace std;
//Write a Program to find the sum of all digits of a given number. Only use for loop to solve a problem.
main()
{
	int n;
	cout<<"Enter the vlaue of n :  ";
	cin>>n;
	int a,sum=0;
	for(int i=n;i>0;i--)
	{
		a=n%10;
		n/=10;
		sum=sum+a;
	}
	cout<<"Sum of all digit : "<<sum<<" ";
}
