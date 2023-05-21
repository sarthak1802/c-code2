#include <iostream>
using namespace std;
//program to find the sum of right diognal in dda

int main()
{
	int n[3][3],r,c,s=0;
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			cout << "enter number"<<endl;
			cin>>n[r][c];
		}
	}
	cout<<endl;
	cout<<endl;
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			cout << n[r][c] <<"\t";
		}
	}
	cout<<endl;
	cout<<endl;
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			if(r==c)
			{
				s=s+n[r][c];
			}
		}
	}
	cout<<"the sum is "<<s<<endl;
}