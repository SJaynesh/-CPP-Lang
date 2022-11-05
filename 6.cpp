// WAP to generate cube of given 5 numbers and make an array of that generated cubes.

#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter The Size Of Array :";
	cin  >> n;
	
	int a[n];
	int b[n];
	
	for(int i=0; i<n; i++)
	{
		cout << " \t Enter The Element :";
		cin  >> a[i];
		
		b[i] = a[i] * a[i] * a[i];
	}
	
	for(int i=0; i<n; i++)
	{
		cout <<endl << "\t |------------------------|" << endl;  
		cout << "\t |Cube :" << b[i] << "\t\t |" << endl;
	}
	
	
}



