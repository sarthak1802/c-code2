#include <iostream>
using namespace std;
//program to store any 9 number and finding sum of first,multiplication of middle and average of last row and print result using dda

int main()
{
	int n[3][3],r,c,s=0,s1=0,m=1;
	float av;
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			cout << "enter number "<<endl;
			cin>>n[r][c];
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			cout <<n[r][c]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(c=0;c<3;c++)
		{
			s=s+n[1][c];
		}
		cout<<"the sum of middle row  is"<<s<<endl;
		
	for(c=0;c<3;c++)
		{
			m=m*n[2][c];
		}
		cout<<"the mul of first row is"<<m<<endl;
		
		for(c=0;c<3;c++)
		{
			s1=s1+n[3][c];
			av=s1/3.0;
		}
		cout<<"the average of last row is"<<s<<endl;
	
}