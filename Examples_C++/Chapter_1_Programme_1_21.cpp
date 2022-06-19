Currency& Currency::Increment(const Currency& x)
{
	//Increment by x.
	*this = Add(x);
	return *this;
}

void Currency::Output() const
{
	//Output currency value.
	if (sgn == minus)cou<< '-';
	cout<<'$'<<dollars<<'.';
	if (cents<10) cout<<"0";
	cout<<cents;
}
