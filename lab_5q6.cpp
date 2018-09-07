//including library
#include <iostream> 

using namespace std ;


//include functions

int main ()

{ 
	//declaring variables
	int q ;
	
	//ask for input value
	cout << " To find whether an year is leap year or not " << endl;
	cout << " Enter year " << endl;
	cin >>q ;

	//applying conditions
	if (q%4==0)
	{
		cout << " This year is a leap year " << endl;
	}
	else 
	{
		cout << " This year is not a leap year " << endl;
	}
//end
return 0;
} 
