//including library
#include <iostream> 

using namespace std ;


//include functions

int main ()

{ 
	//declaring variables
	int n , sum ;
	
	//asking input 
	cout << " To find the sum of all natural numbers from 1 to n " <<endl;
	cout << " Enter any positive integer " <<endl;
	cin >>n;

	//running the loop
	for (int x=1 ; x<=n ; ++x)
	{
		sum+= x;
	}
	
	cout << " The sum is = " << sum <<endl;

//end 
return 0;
}
