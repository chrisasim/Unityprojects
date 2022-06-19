#include<iostream>
using namespace std;


class Queue
{
	int front;
	int rear;
	int arr[5];
	
	public:
		Queue()
		{
			front = -1;
			rear = -1;
			for (int i=0; i<5; i++)
			{
				arr[i]=0;
			}
		}
		bool isEmpty()
		{
			if (front==-1 && rear==-1)
				return true;
			else
				return false;
		}
		
		bool isFull()
		{
			if (rear==4)
			return true;
			else
			return false;
		}
		
		void enqueue(int val)
		{
			if (isFull())
			{
				cout<<"Queue is FULL"<<endl;
				return;
				//the real index is 0 and 1 with the correesponding values. 
				//and the corresponding address RAM memory
			}
			else if(isEmpty())
			{
				rear=0;
				front=0;
				arr[rear]=val;
			}
			else
			{
				rear++;
				arr[rear]=val;
			}
		}
		
		int dequeue()
		{
			int x;
			if(isEmpty())
			{
				cout<<"Queue is FULL"<<endl;
				return x;
				//the real index is 0 and 1 with the correesponding values. 
				//and the corresponding address RAM memory
			}
			else if (front == rear)
			{
				//next location into the RAM memory 
				x = arr[front];
				arr[front] = 0;
				//since the queue is empty we set the rear and front equal to -1. 
				rear = -1;
				front = -1;
				return x; 
			}
			else
			{
				x = arr[front];
				arr[front]=0;
				front++;
				return x;
			}
		}
		
		//the variables have already declared at the top fron of the program so 
		//that is why there are no arguments into the queue.
		//Also, there are no typical and real parameters for this purpose.
		//int count()
		//{
		//	return [rear-front+1];
		//}
};


int main()
{
	int option=-1;
	do
	{
		cout<<"\n\nWhat operation do you want to perform ? Select Option number. Enter 0 to exit."<<endl;
		cout<<"1. Enqueue()"<<endl;
		cout<<"2. Queue()"<<endl;
		int val=5;
		Queue q1;
		q1.enqueue(val);
		cin>>option;
		switch(option)
		{
			case 0:
				cout<<"Enqueuq operation \n Enter an item to Enqueue in the Queue"<<endl;
				break;
			case 1:
				
				break;
			
			case 2:
				
				break;
				
				
			default:
				
				break;
		}
	}while(option!=0);
	return 0;
}
