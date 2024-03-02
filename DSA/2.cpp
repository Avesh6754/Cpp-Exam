#include<iostream>

using namespace std;

main()
{
	int i=1;
	
	int j;
	while(i<=10)
	{
		j=i;
		while(j<=10)
		{
			if(i%2==1)
			{
				cout<<"@ ";
			}
			else
			{
				cout<<"% ";
			}
			j++;
		}
		i++;
		cout<<endl;
	}
}
	
