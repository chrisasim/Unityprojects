#include<iostream>
#include<vector> //header file to implement vectors
#include<bits/stdc++.h> //header file that provides all STL containers and functions


using namespace std;

int nonRecursiveFibonacci(int i,int n,int firstTerm,int secondTerm,int sum)
{
	while (i<=n)
	{
		sum=firstTerm+secondTerm;
		firstTerm=secondTerm;
		secondTerm=sum;
		++i;
		cout<<sum<<endl;
	}
	return sum;
}


int main()
{
	int i, n, firstTerm=0, secondTerm=1, sum=0;
	cin>>n;
	i=2;
	nonRecursiveFibonacci(i, n, firstTerm, secondTerm, sum);
	return 0;
}
