#include<iostream>
using namespace std;

int arr[50];
int Size,pos,val,i,key;
void Insert();
void Delete();
void Find();
void Display();

int main()
{
    cout<<"Enter Size of Array";
    cin>>Size;
    cout<<"Insert Elements in the array : \n";
    for(i=0;i<Size;i++)
    {
        cin>>arr[i];
    }
    int ch;
    do
    {
        cout<<"\n\n--------Choice-----------\n";
        cout<<"1.Insert\n";
        cout<<"2.Delete\n";
        cout<<"3.Find\n";
        cout<<"4.Display\n";
        cout<<"0. Exit()";
        cout<<"-----------------------";
        cout<<"\nEnter your choice:\t";
        cin>>ch;

        switch(ch)
        {
            case 1:
                Insert();
                break;
            case 2:
                Delete();
                break;
            case 3:
                Find();
                break;
            case 4:
                Display();
                break;
            default :
                cout<<"Invalid Choice ";
                break;
        }
    }
    while(ch!=0);
return 0;
}

void Insert()
{
    cout<<"\nEnter the position : ";
    cin>>pos;
    cout<<"\nEnter the element to be inserted : ";
    cin>>val;
    for(i=Size-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=val;
    Size=Size+1;
}

void Delete()
{
    cout<<"\nEnter the position of the element to be deleted:\t";
    cin>>pos;
    val=arr[pos];
    for(i=pos;i<Size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    Size=Size-1;
    cout<<"\nThe deleted element is : "<<val;
}

void Find()
{
    cout<<"\nEnter the element to be searched:\t";
    cin>>key;
    for(i=0;i<Size;i++)
    {
        if(arr[i]==key)
        {
            cout<<"\nThe element is present at position : "<< i;
            break;
        }
    }
    if(i==Size)
    {
            cout<<"\nThe search is unsuccessful";
    }
}

void Display()
{
    for(i=0;i<Size;i++)
    {
        cout<<arr[i];
    }
}
