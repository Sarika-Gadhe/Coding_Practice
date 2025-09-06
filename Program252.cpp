# include<iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;

}
int main()
{
    cout<<Addition(10,11)<<"\n";
    cout<<Addition(10.90f,11.70f)<<"\n";
    cout<<Addition(10.77,11.99)<<"\n";



    return 0;
}






