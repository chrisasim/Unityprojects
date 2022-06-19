//library module that streams input data and output in operating systems
#include <iostream>
using namespace std;

int Factorial(int n)
{
	if (n<=1) return 1;
	else return n* Factorial(n-1);
}
int main()
{
	//float y = Abcd(2.0,3.0,4.0);
	//int z = Abc(2,3,4);
	//cout<<z<<" "<<y<<"";
	//so, I declare in this scope the data variable of the template function as well. 
//	int result1;
//	float result2;
//	int result3;
//	int x=5, y=6, c=7;
//	int& w=x, v=y, d=c;
//	result1 = Abcde<int>(x,y,c);
//	result2 = Abcde<float>(5.1,3.2,2.1);
//	result3 = Abcdef<int>(w,v,d);
//	cout<<result1<<" "<<result2<<"11 "<<result3<<endl;
	Factorial(5);
	cout<<Factorial(3)<<endl;
	return 0;
}




