//Write a Program to find the largest element from a dynamic RxC 2D array. 
//Use only while loop in a whole program.

#include<iostream>

using namespace std;

main()
{
	int row,col;
	cout<<"Enter the number of row : ";
	cin>>row;
	cout<<"Enter the number of colum : ";
	cin>>col;
	int a[row][col];
	int i=0,j;
	for(i=0;i<row;i++)
	{
//		int j=0;
	for(j=0;j<col;j++)
		{
			cout<<"Enter the value of array ["<<i<<"]["<<j<<"] : ";
			cin>>a[i][j];
//			j++;
		}
		cout<<endl;
		
//		i++;
	}
	
	int max=a[0][0];

//		int j=0;
	for(i=0;i<row;i++)
	{
		for(j=i+1;j<col;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}
		
		}
	
	}
	cout<<"The large number of 2D array : "<<max<<" ";
	
	
}
	
