//  WAP to check if a given character is vowel or consonant.

#include<iostream>
using namespace std;

int main()
{
	char a;
	
	cout << "Enter THe Any Character :";
	cin  >> a;
	
	cout << endl << "- check if a given character is vowel or consonant -" << endl << endl;
	
	if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U' || a=='a' ||   
         a=='i'|| a=='o' || a=='u')
	{
		cout << "Character Is Vowel...";
	}
	else if(a>='0' && a<='9')
	{
		cout << "Enter Not Digit..";
	}
	else
	{
		cout << "Character Is Consonont...";
	}
}

