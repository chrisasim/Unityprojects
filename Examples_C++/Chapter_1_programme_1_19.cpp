 Currency::Currency(sign s, unsigned long d, unsigned int c)
 {	
 	// Create a Currency object
	if (c>99)
	{
		{
			//too mamny cents0
			cerr<< "Cents should be < 100 " << endl;
			exit(1);
		}
		sgn = s; dollars = d; cents = c;
	}
 }
 bool Currency::Set(sign s, unsigned long d, unsigned int c) 
 {
 	//Reset value
 	if (c>99) return false;
 	sgn = s; dollars = d; cents = c;
 	return true;
 }
 
 bool Currency::Set(float a)
 {
 	//Reset a Value. 
 	if (a<0) {sgn = minus; a = -a;}
 	else {
 		sgn = plus;
 		dollars = a; //extract integer part. 
 		//get two decimal digits
 		cents = (a + 0.001 - dollars) * 100 ;
 		return true;
	 }
} 
