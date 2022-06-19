#include <iostream>
#include <stdlib.h>
#include <excpt.h>
#include <stdlib.h>

using namespace std;

//template <class T>
//bool make2DArray(T ** &x, int rows, int cols)
//{
//	try
//	{
//		//create pointers for the rows
//		x = new T * [rows];
//		//get memory for each row
//		for (int i=0;i<rows;++i)
//		{
//			x[i] = new T [cols];
//		}
//		return true;
//	}
//	catch (bad_alloc) {return false;
//	}
//}

int main()
{
	int row = 2, col=3;
	int *arr = (int *)malloc(row * col * sizeof(int));
	int i, j;
	for (int i=0; i<row; i++)
	{
		for (int j=0; j<col; j++)
		{
			*(arr + i*col + j ) = i + j ;
		}
	}
	cout<<"The matrix of elements are:\n"<<endl;
	for (int i=0; i<row; i++)
	{
		for (j=0; j<col;j++)
		{
			cout<<*(arr+i*col+j)<<endl;
		}
	}
	free(arr);
	return 0;
}
