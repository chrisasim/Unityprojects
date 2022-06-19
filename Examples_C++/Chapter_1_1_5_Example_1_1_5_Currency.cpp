#include<iostream>


using namespace std;


class Currency{
	public:
		enum sign{plus, minus};
		//constructor parameterized
		Currency(sign s, unsigned long d=0, unsigned int c=0);
		
		//desctructor without parameters
		Currency(){}
		bool Set(sign s, unsigned long d,  unsigned int c);
		bool Set(float a);
		sign Sign() const {return sgn;}
		unsigned long Dollars () const {return dollars;}
		unsigned int Cents() const {return cents;}
		
		Currency Add(const Currency& x) const;
		Currency& Increment (const Currency& x);
		void Output() const;
		
	private:
		sign sgn;
		unsigned long dollars;
		unsigned int cents;
};

int main()
{
	enum sign{plus, minus};
	Currency f = Currency(plus, 0, 0); 
	//g(plus, 4, 45), h(minus, 10);
	//Currency g(sign s=plus, 0, 0);
	//Currency *m = new Currency(plus, 8, 12);
	return 0;
}
