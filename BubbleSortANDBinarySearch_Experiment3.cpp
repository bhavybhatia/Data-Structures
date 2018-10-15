#include<iostream>
using namespace std;
int main()
{
    int Size,i,j,temp;
    cout<<"Enter the size: ";
    cin>>Size;
    cout<<"Enter elements: ";
    int arr[Size];

    for(i=0;i<Size;i++)
    {
        cin>>arr[i];
    }

    for(i=1;i<Size;i++)
    {
        for(j=0;j<(Size-i);j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Array after sorting:\n";
    for(i=0;i<Size;++i)
    {
        cout<<arr[i]<<"\n";
    }
    int num;
    cout<<"Enter value to find: ";
    cin>>num;
    int first = 0;
    int last = Size - 1;
    int middle = (first+last)/2;

    while (first <= last)
    {
      if (arr[middle] < num)
      {
          first = middle + 1;
      }
      else if (arr[middle] == num)
      {
         cout<<num<<" found at location "<<(middle+1);
         break;
      }
      else
      {
          last = middle - 1;
      }
      middle = (first + last)/2;
   }
   if (first > last)
   {
      cout<<"Not found!"<<num<<" isn't present in the list";
   }
    return 0;
}
