#include<iostream>

using namespace std;


template<class T>
bool positiveNumber(float a)
{
	while (a<0)
	{
		int i=0;
		while(i<3)
		{
			if (a>0)
			{
				cout<<a<<endl;
				return true;
				i=4;
			}
			else
			{
				cin>>a;
				i++;
			}
		}
		return false;
	}
	if (a>0)
	{
		cout<<a;
		return true;
	}
}

int main()
{
	bool result;
	result = positiveNumber<bool>(-1);
	return 0;	
}
