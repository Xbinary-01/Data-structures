#include <iostream>
#include <cstdio>
#define SIZE 100
using namespace std;
void enQueue(int);
void deQueue();
void display();
int queue[SIZE],front=-1,rear=-1;
int main()
{
    int value,choice;
    while(1)
    {   cout<<endl;
        cout<<"1.Insertaion"<<endl;
        cout<<"2.Deletion"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.exit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"enter the value"<<endl;
            cin >>value;
            enQueue(value);
            break;
            case 2: cout<<"Dequing"<<endl;
                    deQueue();
                    break;
            case 3:
                cout<<"displaying"<<endl;
                display();
                break;
            case 4:
                return 0;
            default:
                cout<<"Unknown selection try again"<<endl;
        }
    }
}
void enQueue(int value )
{
    if (rear==SIZE-1)
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        if(front==-1)
            front=0;
        rear++;
        queue[rear]=value;
        cout<<"Insertion success"<<endl;
    }
}
void deQueue()
{
    if(front==rear)
    {
        cout<<"Queue is empty"<<endl;
        front=rear=-1;
    }
    else
    {
        cout<<"deleted"<<queue[front]<<endl;
        front++;

    }
}
void display()
{
    if(rear== -1)
        cout<<"Queue is empty"<<endl;
    else{
        int i;
        cout<<"Queue elements are"<<endl;
        for(i=front;i<=rear;i++)
        {
            cout<<queue[i]<<" ";
        }
    }
}
