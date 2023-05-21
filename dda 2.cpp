#include <iostream>
using namespace std;
//program to store 15 number in row major format and find the multiplication of last coloumn and print the result 

int main()
{
	int n[5][3],r,c,m=1;
	
	for(r=0;r<5;r++)
	{
		for(c=0;c<3;c++)
		{
			cout << "enter no"<<endl;
			cin>>n[r][c];
		}
	}
	cout<<endl;
	cout<<endl;
	
		for(r=0;r<5;r++)
	{
		for(c=0;c<3;c++)
		{
			cout << n[r][c]<<"\t";
		}
	}
    cout<<endl;
	cout<<endl;
	
	for(r=0;r<5;r++)
	{
		m=m*n[r][2];
	}
	cout<<"multiplication of the coulumn is"<<m<<endl;
}
