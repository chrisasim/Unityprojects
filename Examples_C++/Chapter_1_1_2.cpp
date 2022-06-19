//library module that streams input data and output in operating systems
#include <iostream>
using namespace std;

int Abc(int a, int b, int c)
{
	return a+b+b*c+(a+b-c)/(a+b)+4;
}

float Abcd(float a , float b, float c)
{
	return a+b+b*c+(a+b-c)/(a+b)+4;
}

template<class T>
T Abcde(T a, T b, T c)
{
	return a+b+b*c+(a+b-c)/(a+b)+4;
}


template <class T>
T Abcdef(T& a, T& b , T& c)
{
	return a+b+b*c+(a+b-c)/(a+b)+4;
}

template<class Ta, class Tb, class Tc>
Ta Abcdefg(const Ta& a, const Tb& b, const Tc& c)
{
	//return a value
	return a+b+b*c+(a+b-c)/(a+b)+4;
}

int main()
{
	//float y = Abcd(2.0,3.0,4.0);
	//int z = Abc(2,3,4);
	//cout<<z<<" "<<y<<"";
	//so, I declare in this scope the data variable of the template function as well. 
	int result1;
	float result2;
	int result3;
	int x=5, y=6, c=7;
	int& w=x, v=y, d=c;
	result1 = Abcde<int>(x,y,c);
	result2 = Abcde<float>(5.1,3.2,2.1);
	result3 = Abcdef<int>(w,v,d);
	cout<<result1<<" "<<result2<<" "<<result3<<endl;
	return 0;
}




