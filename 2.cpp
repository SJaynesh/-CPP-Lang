// WAP to find leap years from 2000 to 3000.

#include<iostream>
using namespace std;

int main()
{
	cout << endl << "\t\t----- Leap Years From 2000 To 3000. -----" << 
   endl << endl;
	for(int i=2000; i<=3000; i++)
	{
	    if(i%4 == 0)
		{
			cout << "\t\t |---------------------|" << endl;
			cout << " \t \t |--Leap Year :  " << i << "--|" << endl;
		}
		
	}
	
	
}

