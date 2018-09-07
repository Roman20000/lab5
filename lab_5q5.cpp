//include library
#include<iostream>


using namespace std ;
 
//include functions
	int main () 
{
	//declaring variables
	int a;

	//ask for input value
	cout << " To find out whether the number is even or odd " << endl;
	cout << " enter your number " << endl;
	cin >>a ;

	//applying conditions
	if (a%2==0)
	{
		cout << " This number is even " << endl;
	}
	else
	{
		cout << " This number is odd " << endl;
	}

//end
return 0 ;
}
