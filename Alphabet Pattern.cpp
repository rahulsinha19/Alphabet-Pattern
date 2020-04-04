using namespace std;
#include<iostream>
main()
{
	int i,j;
	char ch;
	for(i=0;i<6;i++)
	{
		ch=i+64;
		for(j=6;j>i;j--)
		{
			ch++;
			cout<<ch;
		}
		cout<<endl;
	}
}
