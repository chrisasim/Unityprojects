// C++ program to illustrate the concepts
// of creating 1D array of pointers
#include<iostream>

using namespace std;

int main()
{
	    // Dynamically creating the array
    // of size = 5
	int* p = new int[5];
	
	// Initialize the array p[] as
    // {10, 20, 30, 40, 50}
    for (int i=0; i<5; i++)
    {
    	p[i]= 10* (i+1);
	}
	
	// Print the values using pointers
	cout<<*(p+1)<<endl;
	return 0;
}
