#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

class LinkList
{
	private:
		node *start;
    public:
        node* create_node(int);
        void addAtBegin(int);
        void addAtEnd(int); 
        void addAtPos(int, int);
        void removeAtBegin();
        void removeAtEnd();
        void removeAtPos(int);
        void print();
        LinkList() 
        {
            start=NULL;
        }
};

node *LinkList::create_node(int value)
{
    node *temp=new node(); 

    temp->data=value;
    temp->next=NULL;     
    return temp;
}

void LinkList::addAtBegin(int element) 
{
    node *temp, *p;
    temp=create_node(element);
    if (start==NULL)
    {
        start=temp;         
    } 
    else
    {
        p=start;
        start=temp;
        start->next=p;
    }
}

void LinkList::addAtEnd(int element)
{
    node *temp, *s;
    temp=create_node(element);
    s=start;
    if(s==NULL)
    {
    	start=temp;
	}
    while (s->next!=NULL)
    {         
        s=s->next;        
    }
    s->next=temp; 
}
 
void LinkList::addAtPos(int element, int pos)
{
    int counter=0; 
    node *temp, *s, *p;
    temp=create_node(element);
    s=start;
    while (s!=NULL)
    {
        s=s->next;
        counter++;
    }
    if (pos==1)
    {
		addAtBegin(element);
    }
    else if (pos>1 && pos<=counter)
    {
        s=start;
        for (int i=1; i<pos; i++)
        {
            p=s;
            s=s->next;
        }
        p->next=temp;
        temp->next=s;
    }
    else
    {
        cout<<"No can do"<<endl;
    }
}

void LinkList::removeAtBegin()
{
	node *temp;
	if (start==NULL)
    {
        cout<<"Empty list"<<endl;
        return;
    }
    else
    {
    	temp=start;
    	start=start->next;
    	delete(temp);
	}
}

void LinkList::removeAtEnd()
{
	if (start==NULL)
    {
        cout<<"Empty list"<<endl;
        return;
    }
    else
    {
    	node *s, *temp, *p;
		s=start;
		if(s->next==NULL)
		{
			removeAtBegin();
		}
		else
		{
			while(s->next!=NULL)
			{
				p=s;
				s=s->next;
			}
		temp=s->next;
		p->next=NULL;
		delete(temp);
		}
	}
}

void LinkList::removeAtPos(int pos)
{
    int i,counter=0;
    if (start==NULL)
    {
        cout<<"Empty list"<<endl;
        return;
    }
    node *s, *p;
    s=start;
    if (pos==1)
    {
        removeAtBegin();
    }
    else
    {
        while (s!=NULL)
        {
            s=s->next;
            counter++;  
        }
        if (pos>0 && pos<=counter)
        {
            s=start;
            for (i=1; i<pos; i++)
            {
                p=s;
                s=s->next;
            }
            node*temp=s;
            p->next=s->next;
            delete(temp);
        }
        else
        {
            cout<<"Position out of range"<<endl;
        }
    }
}

void LinkList::print()
{
	node *s;
	s=start;
	cout<<"The linked list is: ";
	if (s==NULL)
    {
        cout<<"EMPTY"<<endl;
        return;
    }
	else 
	{
		while (s!=NULL)
		{
			cout<<s->data<<" ";
			s=s->next;
		}
	}
	cout<<endl;	
} 

int main()
{
	int element, pos, option;
	char choice;
	LinkList sl1;
	do
	{
		cout<<"Menu: \n1. Insert an element at the beginning \n2. Insert at the end \n3. To insert at a position \n4. To delete the first element \n5. To delete the last element \n6. To delete at a position"<<endl;
		cin>>option;
		switch(option)
		{
			case 1: cout<<"Enter the element to insert"<<endl;
					cin>>element;
					sl1.addAtBegin(element); 
					cout<<"Entered "<<element<<" at the beginning of linked list"<<endl; 
					sl1.print();
					break;
			case 2: cout<<"Enter the element to insert"<<endl;
					cin>>element;
					sl1.addAtEnd(element);
					cout<<"Entered "<<element<<" at the end of linked list"<<endl; 
					sl1.print();
					break;
			case 3: cout<<"Enter the element to insert"<<endl;
					cin>>element;
					cout<<"Enter the position to insert"<<endl;
					cin>>pos;
					sl1.addAtPos(element, pos); 
					cout<<"Entered "<<element<<" at the "<<pos<< "position of linked list"<<endl;
					sl1.print(); 
					break;
			case 4:	sl1.removeAtBegin();
					cout<<"Deleted element at the beginning of linked list"<<endl; 
					sl1.print();
					break;
			case 5:	sl1.removeAtEnd();
					cout<<"Deleted element at the end of linked list"<<endl;
					sl1.print();
					break;
			case 6: cout<<"Enter the position to delete"<<endl;
					cin>>pos;
					sl1.removeAtPos(pos);
					cout<<"Deleted element at "<<pos<<" position of linked list"<<endl;
					sl1.print();
					break;
		}
		cout<<"Do you want to do another operation? If yes, press Y"<<endl;
	    cin>>choice;
	}while (choice=='y' || choice=='Y');	
}
