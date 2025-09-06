# include<iostream>
using namespace std;

double  Maximum(double No1, double No2, double No3)
{
   if((No1 > No2) && (No1 > No3))
   {
        return No1;
   }
   else if((No2 > No1) && (No2 > No3))
   {
        return No2;
   }
   else
   {
        return No3;
   }

}
int main()
{
    double Value1,Value2,Value3,Ret;
    
    cout<<"Enter first number : \n";
    cin>>Value1;

    cout<<"Enter second number : \n";
    cin>>Value2;
    
    cout<<"Enter second number : \n";
    cin>>Value3;

   Ret = Maximum(Value1,Value2,Value3);

   cout<<"Maximum number is : "<<Ret;
   




   


    return 0;
}

