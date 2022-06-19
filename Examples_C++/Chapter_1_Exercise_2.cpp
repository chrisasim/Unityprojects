#include<iostream>
#include<bits/stdc++.h>

using namespace std;


#define size 10

void sortMatrix(int matrix[size], int n)
{
	int temp[n], s=0;
	//copying all element of matrix in temporary file
	for (int i=0; i<n;i++)
	{
		matrix[n] = temp[n];
	}
	
	sort(temp, temp + s);
	
	//copying the sortyed elements of temp into matrix one by one
	s=0;
	for (int i=0; i<n; s++)
	{
		matrix[i]=temp[s];
	}
}



template<class T>
bool orderFunction(int matrix[size], int n)
{
	bool s = false;
	if (s)
	{
		sortMatrix(matrix, n);
		for (int i=0; i<n;i++)
		{
			cout<<matrix[i]<<endl;
		}
	}
	else
	{
		for (int i=0;i<n;i++)
		{
			cout<<matrix[i]<<endl;
		}
		return true;
	}
}




int main()
{
	int n=0;
	cin>>n;
	int matrix[n];
	for (int i=0;i<n;i++)
	{
		cin>>matrix[i];
	}
	bool result;
	result = orderFunction<bool>(matrix, n);
	return 0;
}
