#include<iostream>
#include<stdlib.h>

using namespace std;

//synarthsh protypo

template <class T>
void ChangeSize1D(T ** &a, int ToSize)
{
	
	//the code line below is the following one:
	//If we delete a specific element in a dynamic memory allocated array,
	// then the total number of elements is reduced so we can reduce the
	// total size of this array. This will involve:

	//a = (int *)realloc(a, sizeof(int) * (ToSize-1));
	
	//The first step is to increase the size of the array a
	 

	
	
	
}




int main()
{
	
	int *array_integer;
	int total_user_entries=0;
	int loop_count = 0;
	int temporary[25];
	int flag=0;
	cout << "\nEnter item entries: \n(Enter -1 to terminate input)\n";
	while (flag==0)
	{
		cout<<"\nEnter item"<<loop_count+1<<":";
		cin>>temporary[loop_count];
		if(temporary[loop_count]==-1)
		{
			flag=1;
		}
		loop_count++;
	}
	total_user_entries = loop_count -1;
	array_integer = new int[total_user_entries];
	
	for (loop_count=0; loop_count< total_user_entries; loop_count++)
	{
		*(array_integer+loop_count) = temporary[loop_count];
	}
	  cout << "\n--Entered Items--";
    for(loop_count = 0; loop_count < total_user_entries; loop_count++){
        cout << "\nItem " << loop_count+1 << ":  "<< *(array_integer+loop_count);     
    }
    cout<<"\n\n";
    delete []array_integer;
//	//Change array size dynamically in C++ is an efficient method for memory usage.
//	//You come across such situations multiple times while programming where the size of the array depends on what the user enters at the time of execution. This technique makes the program flexible to act as per the requirement at runtime without any changes in the code. Using this technique will certainly be highly beneficial for programmers out there to write a clean and efficient code. I have provided step wise information later in the post. Feel free to leave a comment below.
//	int ToSize;
//	cin>>ToSize;
//	int *a = (int*)malloc(ToSize*sizeof(int));
//	//we cannot inrease the size of the same arry. So , instead, we create a bigger size array, 
//	//includeing the elements but chaning its size
//	for (int i =0; i<ToSize; i++)
//	{
//		cin>>a[i];
//	}
//	int *q = (int*)malloc(ToSize*sizeof(int));
//	for (int i=0;i<ToSize;i++)
//	{
//		q[i]=a[i];
//		
//	}
//	delete []a;
//	//free(a);
//	a=q;
//	q=NULL;
//	for (int i=0; i<ToSize; i++)
//	{
//		cout<<a[i];
//	}
//	
////	for (int i =0; i<ToSize; i++)
////	{
////		cin>>a[i];
////	}
//	//very simply, if the usr keeps inserting elements into tha array then 
//	//allocate more memory into the array in order to vhange the size of the array
//	//dynamically
//	//or if the number of elements inserted is less than declared reduce the size of the array
//	//ChangeSize1D(a, ToSize);
	return 0;
}
