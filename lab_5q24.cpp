//including library
#include <iostream> 

using namespace std ;


//include functions

int main ()

{ 
	//declaring variables
	int a ;
	
	//ask for input value
	cout << " To input all the alphabets from a to z " << endl;
	
	//running the while loop
	a=97 ;
	while (a<=122)
	{
		cout << char (a) << endl;
		a++;
	}


//end
return 0;
}
