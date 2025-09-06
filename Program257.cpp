# include<iostream>
using namespace std;

int main()
{
   int iCnt = 0;
   int Size;

   cout<<"Enter the number of elements : "<<"\n";
   cin>>Size;

   int *ptr = new int[Size];


  cout<<"Enter the elements : "<<"\n";
  for(iCnt = 0; iCnt < Size; iCnt++)
  {
      cin>>ptr[iCnt];
  }

  cout<<"Elements of the Array are : "<<"\n";
  for(iCnt = 0; iCnt < Size; iCnt++)
  {
    cout<<ptr[iCnt]<<"\n";
  }


  delete[]ptr;


    return 0;
}

