#include <iostream>
#include ""

void main(void)
{
	Currency g, h(plus, 3, 50), i, j;
	g.Set(minus, 2, 25);
	i.Set(-6.45);
	j = h.Add(g);
	j.Output();  cout<<endl;
	i.Increment(h);
	i.Output(); cout<<endl;
	j = i.Increament(g).Add(h);-
	j.Ouput(); cout<< endl;
	i.Output(); cout<<endl;
}
