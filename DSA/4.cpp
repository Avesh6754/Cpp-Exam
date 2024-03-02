#include<iostream>
//Write a Program to find the transpose matrix of a given NxN 2D array.
// The 2D array must be a dynamic array and a square matrix same time. 
//If the array is not a square matrix, then display a proper validation message.
using namespace std;

main()
{
	int row,col;
	cout<<"Enter the number of row : ";
	cin>>row;
	cout<<"Enter the number of colum : ";
	cin>>col;
	int a[row][col];
	int b[row][col];

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"Enter the value of array ["<<i<<"]["<<j<<"] : ";
			cin>>a[i][j];
		}
		
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
		
	}
	cout<<"Transpose of 2d array : "<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
		
	}
	
	
}
	
