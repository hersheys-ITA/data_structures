#include<iostream>
using namespace std;


//#define Size 5

class Stack{
	 static const int CAP =5;
	    int arr[CAP];
					int top;
public:
     Stack(){top = -1;}  
     bool isEmpty(){
     	return top == -1;
					}
					bool isFull(){
						return top == CAP-1;																		
					}					
					
					void push(int x){
						if(isFull())		{
							cout<<"stack overflow!!"<<endl;	
							return;																																						
						}	
						
						arr[++top]	=x;
						cout<<x<<" -pushed to stack."<<endl;																																																
						
																	
					}		
					void pop(){
						if(isEmpty()){
							cout<<"stack underflow!!"<<endl;		
							return;																																																																																	
						}				
						cout<<arr[top--]<<" -popped from stack"<<endl;														
					}	
					
					void peek(){
						if(isEmpty()){
							cout<<"stack is empty"<<endl;	
							return;																																																																																																																	
						}
						cout<<"top element -"<<arr[top]<<endl;																																
					}	
					void display(){
						if(isEmpty()){
							cout<<"stack is empty"<<endl;
							return;																																																																																																																											
						}
						cout<<"stack elements: ";
										
						for(int i=0;i<top;i++){
							cout<<arr[i]<<" ";
							cout<<endl;																																																																																																																																				
						}																																																																																																																						
					}				
					  
};


int main()
{Stack s;
int choice,value;

do{
	cout<<"1.push 2.pop 3.peek 4.display 5.exit"<<endl;
	cout<<"enter choice: ";
	cin>>choice;
	switch (choice){
		case 1:
			cout<<"enter values to push: ";
		 cin>>value;
		 s.push(value);
		 break;					
		case 2:
		  s.pop();		
				break;
		case 3:
		  s.peek();
				break;	
		case 4:
		   s.display();
					break;
		case 5:
		   cout<<"exiting .....";
					break;
		default:
		   cout<<"invalid choice, try again"<<endl;
				}
													
											
	}while(choice!=5);

 	

return 0;
}
