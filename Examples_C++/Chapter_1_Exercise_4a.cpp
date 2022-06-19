#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int fib(int x, int counter)
{
	if((x==1) || (x==0))
	{
		//Substantially, if I prove that the f_{1} is calculated more than once then I have proved that the same F_{i} is calculated more than once.
		return(x);
	}
	else
	{
		counter++;
		cout<<counter<<endl;
		return(fib(x-1, counter)+fib(x-2, counter));
	}
}


int main()
{
	int x, i=0, counter=0;
	cout<<"Enter the number of terms of series : ";
	cin>>x;
	cout<<"\nFibonacci Series : ";
	while(i<x)
	{
		
		cout<<" "<<fib(i, counter);
		i++;
	}
	return 0;
}
