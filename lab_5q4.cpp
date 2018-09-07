//include library
#include<iostream>


using namespace std ;
 
//include functions
	int main () 
{
	//declaring variables
	int p;

	//ask for input value
	cout << " To find out whether the number is divisible by 5 and 11 or not " << endl;
	cout << " Enter your number " << endl;
	cin >>p ;

	//applying conditions
	if (p%55==0)
	{
		cout << " This number is divesible by 5 and 11 " << endl;
	}
	else 
	{
		cout << " This number is not divisible by 5 and 11 " << endl;
	}
//end
return 0 ;
}
