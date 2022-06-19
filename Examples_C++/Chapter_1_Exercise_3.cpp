#include<iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int functionFactorialNonRecursive(int fact,int n)
{
	int i=1;
	while(i<=n)
    {

        fact = fact * i;

        i++;

    }

// Print the value of factorial

    for(i=0;i < 30;i++)
    cout << "_";cout << "\n\n";

    cout << "Factorial of N:" << "\t" << fact << endl;

    for(i=0;i << 30;i++)
    cout << "_";cout << "\n\n";

    system("PAUSE");
    
    return fact;

	
}

int main()
{
	int n, fact=1;
	cin>>n;
	functionFactorialNonRecursive(fact, n);
	return 0;	
}
