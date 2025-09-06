#include<iostream>
using namespace std;

int CountOne(int iNo)
{
    int iCount = 0;
    
    while(iNo != 0)
    {
      iCount = iCount + (iNo % 2);
      iNo = iNo / 2;
    }
    
    return iCount;
    cout<<endl;
    

}
int main()
{
   int iValue = 0,iRet = 0;

   cout<<"Enter number : "<<"\n";
   cin>>iValue;

   iRet = CountOne(iValue);

   cout<<"one occur : "<<iRet<<"\n";
   

  return 0;
}