//including library
#include <iostream> 

using namespace std ;


//include functions

int main ()

{ 
	//declaring variables
	int x,y,z ;
	
	//ask for input value
	cout << " To find maximum between three numbers"<< endl;
	cout << " Give three numbers separated by space " << endl;
	cin >>x>>y>>z ;
	//applying conditions
	if (x>=y && x>=z)
	{
		cout <<x<< " is maximum between the three numbers "<< endl;
	
	
	}
	else if (y>=x && y>=z)
	{
		cout <<y<< " is maximum between the three numbers "<< endl;
	}
	else 
	{	
		cout <<z<< " is maximum between the three numbers "<< endl;
	}

//end
return 0;
}
