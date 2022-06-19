#include <iostream>
#include <stdlib>


using namespace std;


#The functions which their implementations is not given in a class declaration they have to be defined out of it using th analysis field operator 
# so that it :: defines that the function we set is a member of the class Currency. So that the Currency::currency syntax declares the construction methods,
#whereas Currency::Output declares the function output of this class. Programme 1.16 rpovides the construction method for this particular class. 

Currency& Currency::Increment(const Currenc& x)
{
	//Increment by x.
	*this = Add(x);
	return *this;
}

void Currency::Output() const
{
	//Output currency value
	if (sgn==minus)
	{
		cout<<'-';
	}
	if (cents<10) cout<< "0";
	{
		cout<<cents;
	}
}

void main(void)
{
	Currency g, h(plus, 3, 50), i, j;
	g.Set(minus, 2, 25);
	i.Set(-6.45);
	j = h.Add(g);
	j.Output(); cout<<endl;
}
