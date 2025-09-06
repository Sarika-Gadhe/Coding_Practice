# include<iostream>
using namespace std;

template <class T>

T Addition(T Arr[],int iLength)
{
  int iCnt = 0;
  int iSum = 0;
 
  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    iSum = iSum + Arr[iCnt];
  }

  return iSum;

}
int main()
{
   int Size;
   int iCnt = 0,iRet = 0;

   cout<<"Enter the number of elements : "<<"\n";
   cin>>Size;

   int *ptr = new int[Size];


  cout<<"Enter the elements : "<<"\n";
  for(iCnt = 0; iCnt < Size; iCnt++)
  {
      cin>>ptr[iCnt];
  }

  iRet = Addition(ptr,Size);

  cout<<"Addition is : "<<iRet<<"\n";

  delete[]ptr;


    return 0;
}

