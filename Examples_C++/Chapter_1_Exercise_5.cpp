#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void powerSet(string str, int index = -1, string curr = "")
{
	int n = str.length();
	if(index == n)
	{
		return;
	}
	cout<<curr<<"\n";
	for (int i=index+1;i<n; i++)
	{
		curr += str[i];
		powerSet(str, i, curr);
		cout<<curr;
		curr.erase(curr.size()-1);
	}
	return;
}




int main()
{
	string str= "";
	int L;
	cin>>L;
	for (int i=0; i<L; i++)
	{
		str = str + "A";
	}
	powerSet(str);
	return 0;
}
