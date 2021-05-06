#include<iostream>
#include<string.h>
using namespace std;
	
	int main()
	{
		//Expression
		// z = x2 + 2xy - x/y	=  x*x  +  2*x*y  -  (x/y)
		
		int x = 2;
		int y = 1;
		int z = 0;	//initialize with zero to avoid any problem with garbage value.
		
		int iterator = 1;		
		string id = "BC190201004";	
		int studentIdLastDigit = 4; 	//TODO: assign accouding to yours.
		
		z = (x*x) + (2*x*y) - (x/y);	//All three parts must be evaluated first before adding or substracting.
		
		cout << "After evaluation of given expression value of z = "
					<< z << endl;
					
		
		z = z + studentIdLastDigit;
		
		
		if(	z%2 == 0 )
		{
		
			cout << "I got an even number " << z << endl;
			
			while(z > 0)
			{
				cout << "Iteration: " << iterator << endl
					<< "My name is Usman Khan"<< endl;
				
				z--;	//Decrement loop controller.
				iterator++;
			}	
		}
		else
		{
			cout << "I got an odd number " << z << endl;
			
			while(z > 0)
			{
				
				cout << "Iteration: " << iterator << endl
					<< "My VU ID is " << id << endl;
				
				z--;	//Decrement loop controller.
				iterator++;
			}
		}
		
		return 0;
	}
