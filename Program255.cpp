# include<iostream>
using namespace std;

template <class T>

T  Maximum(T No1, T No2, T No3)
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
   cout<<Maximum(19,11,54)<<"\n";
   cout<<Maximum(19.44f,11.66f,54.90f)<<"\n";
   cout<<Maximum(19.33,11.55,54.66)<<"\n";  


    return 0;
}

