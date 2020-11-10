//insert in front
#include <iostream>
#include <stdlib.h>
using namespace  std;
struct Node
{
	int data;
	struct Node *next;
};
struct Node *start;
struct Node *node;
void display()
{
	struct Node *temp = start;
	while(temp->next!=NULL)
	{
		cout<<temp->data<<" <--  ";
		temp = temp->next;
	}
	cout<<temp->data<<endl;
}
int Insert(int data)
{
	node = new Node;
	if (node==NULL)
	{
		cout<<"NO MEMORY...";
		return -1;
	}
	else
	{
		node->data = data;
		node->next = NULL;
		
		if (start==NULL) //NO NODE
		{	
			start=node;
		} 
		else if (start->next==NULL) //1 NODE
		{
			start->next=node;
		}
		else //MORE THAN 1 NODES
		{
			struct Node *temp;
			temp = start;
			while(temp->next!=NULL)
			{
				temp = temp->next;
			}
			temp->next = node;
		}
	}
	return 1;
}
int Delete()
{

	int data;
	if (start==NULL)
	{
		return -1;
	}
	if (start->next == NULL)
	{
		data =  start->data;
		delete start;
		start = NULL;
		return data;
	}
	else
	{
		struct Node *temp = start;
		data = temp->data;
		start=start->next;
		delete temp;	
	}
	return data;
}
int main()
{
	start=node=NULL;
	char c = 'y';
	while(c=='y' || c=='Y')
	{
		system("clear");
		int data, choice,result;
		cout<<"\n**********************************MENU**********************************\n";
		cout<<"\n\t\t\t1.) INSERT";
		cout<<"\n\t\t\t2.) DELETE";
		cout<<"\n\t\t\t3.) DISPLAY";
		cout<<"\n\t\t\t4.) EXIT";
		cout<<"\n\tEnter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1 : 	
					cout<<"Enter A Node data : ";
					cin>>data;
					result = Insert(data);
					if (result==1)
					{
						cout<<"\nNode Inserted successfully!";
					}
					else
					{	
						cout<<"\nNode not  Inserted!";
					}
					break;
			case 2 : 
					data = Delete();
					if (data == -1)
					{
						cout<<"\nUNDERFLOW...";
					}
					else
						cout<<"\nDELETED DATA IS : "<<data<<endl;
					break;
			case 3 : 
					display();
					break;
			case 4 : 
					return 1;
		}
		cout<<"\nMore Operations ?\n";
		cin>>c;
	}
	display();
}