# include<iostream>
using namespace std;


float Addition(float Arr[],int iLength)
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
   int iCnt = 0;
   float iRet = 0.0f;

   cout<<"Enter the number of elements : "<<"\n";
   cin>>Size;

   float *ptr = new float[Size];

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

