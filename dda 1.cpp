#include <iostream>
using namespace std;
//program to store any 15 number print all in matrix format

int main()
{
	int n[5][3],r,c;
	
	for(r=0;r<5;r++)
	{
		for(c=0;c<3;c++)
		{
			cout << "enter no"<<endl;
			cin>>n[r][c];
		}
	}
		for(r=0;r<5;r++)
	{
		for(c=0;c<3;c++)
		{
			cout << n[r][c]<<"\t";
		}
		cout<<endl;
	}
}