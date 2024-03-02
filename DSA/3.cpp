//Write a Program to create a dynamic 1D array of odd elements from given range. 
//Also find the average of the generated elements.
#include<iostream>

using namespace std;

main()
{
	int n=20;
	int a[n];
	int sum=0,average=0;
	for(int i=0;i<=n;i++)
	{
		if(i%2==1)
		{
			cout<<i<<" ";
		}
			sum=sum+i;
		
	}
	cout<<endl<<"Sum of Array : "<<sum<<" "<<endl;
	average=sum/20;
	cout<<"Average of Array : "<<average<<" ";
	
}
	
