# include<iostream>
using namespace std;

int main()
{
   int Size;

   cout<<"Enter the number of elements : "<<"\n";
   cin>>Size;

   int *ptr = new int[Size];


  //use

  delete[]ptr;
  
    return 0;
}

