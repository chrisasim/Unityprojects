#include <iostream>

using namespace std;

bool checkNum(int arr[], int size, int x)
{
	if (size==0)
	{
		return false;
	}
	else
	{
		if(arr[size]==x)
		{
			return true;
		}
		else
		{
			checkNum(arr, size-1, x);
		}
	}
}



int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int x;
	cin>>x;
	if(checkNum(a,n,x))
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
	
}
