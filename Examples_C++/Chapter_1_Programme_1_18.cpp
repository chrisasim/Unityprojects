Currency Currency::Add(const Currency& x) const
{
		//Add x and *this. 
		long a1, a2, a3;
		Currency ans;
		//convert invoking object to signed  integers
		a1 = dollars * 100 + cents;
		if (sgn == minus) a1 = -a1;
		//convert x to signed integer
		a2 = x.dollars * 100 + x.cents;
		if (x.sgn == minus) a2 = -a2;
		a3 = a1 + a2;
		//convert to currency representation
		if (a3<0)
		{
			ans.sgn = minus; a3 = -a3;
		}
		else
		{
			ans.sgn = plus;
			ans.dollars = a3/100;
			ans.cents = a3 - ans.dollars * 100 ;
		}
		
		return ans;
}
