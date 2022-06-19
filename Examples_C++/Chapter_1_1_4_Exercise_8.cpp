//How to declare a 2D array dynamically in C++ using new operator
//Method 1: using a single pointer – In this method, a memory block of size M*N is allocated and then the memory blocks are accessed using pointer arithmetic. Below is the program for the same:
// C++ program to dynamically allocate
// the memory for 2D array in C++
// using new operator 


#include<iostream>

using namespace std;

//Driver code
int main()
{
	
	//in this case c is the inserted elements into the n*m array
	//like strating from 1 and ending to 12 because it is ++c
	int m=3, n=4, c=0;
	
	//Declare a memory block of size m*n
	
	int* arr = new int[m *n];
	
	//Traverse the 2D array
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			//Assign values to the memory block
			*(arr + i*n +j) = ++c;
		}
	}
	
	//Traverse the 2D array
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			cout << *(arr + i*n +j)<<" ";
		}
		cout<<endl;
	}
	delete [] arr;
	
	return 0;
}
