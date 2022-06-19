#include<iostream>

using namespace std;

template <class T>
void Perm(T list[], int k, int m)
{
	int i;
	if (k==m)
	{
		for (i=0;i<=m;i++)
		{
			cout<<list[i];
			cout<<endl;
		}
	}
	else
	{
		for (i=k; i<=m; i++)
		{
			Swap(list[k], list[i]);
			Perm(list, k+1, m);
			Swap(list[k],list[i]);
		}
	}
}


template<class T>
inline void Swap(T& a, T& b)
{
	T temp = a; a=b; b=temp;
}




int main()
{
	return 0;
}
