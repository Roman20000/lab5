//include library
#include<iostream>


using namespace std ;
 
//include functions
	int main () 
{
	//declaring variables
	int x,y ;

	//ask for input value
	cout << " To find maximum between two numbers"<< endl;
	cout << " Give two numbers separated by space " << endl;
	cin >>x>>y ;
	//applying conditions 
	if (x>y)
	{
		cout <<x<< " is maximum between " <<x<< " and " <<y<< endl;
	}
	else 
	{
		cout <<y<< "is maximum between " <<x<< " and " <<y<< endl;
	}
	

//end program
return 0 ;


}
