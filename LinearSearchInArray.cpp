#include<iostream>
using namespace std;
int main()
{
  int arr[50], num, i, Size;

  cout<<"Enter number of elements in array\n";
  cin>>Size;

  cout<<"Enter integers: ";

  for (i = 0; i < Size; i++)
    cin>>arr[i];

  cout<<"Enter a number to search: ";
  cin>>num;

  for (i = 0; i < Size; i++)
  {
    if (arr[i] == num)
    {
      cout<<num<<" is present at location "<<i+1;
      break;
    }
  }
  if (i == Size)
    cout<<num<<" isn't present in the array.";

  return 0;
}
