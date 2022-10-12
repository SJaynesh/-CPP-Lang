// -- WAP to find all leap years from 2020 to 3030 and store them into an array.--



#include<iostream>
using namespace std;

int main()
{
	
	int a[1000], count = 0;
	
	for(int i=2000; i<=3000; i++)
	{
		if(i%4 == 0)
			a[count++] = i;
	}
	
	cout << endl << "------ Leap Year ------" << endl;
	for(int i=0; i<count; i++)
	{
		cout << a[i] << endl;
	}
}
