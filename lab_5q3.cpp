//include library
#include<iostream>


using namespace std ;
 
//include functions
	int main () 
{
	//declaring variables
	int p;

	//ask for input value
	cout << " To check whether the number is negative or positive or zero "<< endl;
	cout << " Give your number " << endl;
	cin >>p ;
	
	//applying conditions
	if (p<0)
	{
		cout <<p<< " is negative " <<endl;
	}
	else if (p>0)
	{
		cout <<p<< " is positive " <<endl;
	}
	else 
	{	
		cout <<p<< " is zero " <<endl;
	}
//end
return 0;
}
