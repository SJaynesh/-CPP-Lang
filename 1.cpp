// WAP to find all even elements from given 1D array.

#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "--------------------------------------" << endl;
	cout << "Enter The Size Of Array :";
	cin  >> n;
	cout << endl << endl;
	int arr[n];
	
	cout << "----- DECLARE ARRAY -----" << endl;
	for(int i=0; i<n; i++)
	{
		cout << "| Enter The Array a[%d] : |";
		cin  >> arr[i];
	}
	
	
	cout << endl << " \t --: Even Element :--" << endl << endl;
	for(int i=0; i<n; i++)
	{
		if(arr[i]%2==0)
		{
			cout << "| Array : " << arr[i] << "|" << endl;
		}
	}
}
