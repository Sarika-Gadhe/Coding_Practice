#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class DoublyLinearLL
{
    private:
        PNODE first;
        int iCount;

    public:
        DoublyLinearLL()
        {
            this->first = NULL;
            this->iCount = 0;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL;
            
            newn = new NODE;

            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            if(first == NULL)
            {
                first = newn;
            }
            else
            {
                newn->next = first;
                first->prev = newn;

                first = newn;
            }
            iCount++;
        }

        void InsertLast(int no)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;

            newn = new NODE;

            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            if(first == NULL)
            {
                first = newn;
            }
            else
            {
                temp = first;

                while(temp->next != NULL)
                {
                    temp = temp->next;
                }
                
                newn->prev = temp;
                temp->next = newn;
            }
            iCount++;
        }

        void DeleteFirst()
        {
            if(first == NULL)
            {
                return;
            }
            else if(first->next == NULL)
            {
                delete first;

                first = NULL;
            }
            else
            {
                first = first->next;
                delete first->prev;
                first->prev = NULL;  
            }
            iCount--;
        }

        void DeleteLast()
        {
            PNODE temp = NULL;

            if(first == NULL)
            {
                return;
            }
            else if(first->next == NULL)
            {
                delete first;

                first = NULL;
            }
            else
            {
                temp = first;

                while(temp->next->next != NULL)
                {
                    temp = temp->next;
                }

                delete temp->next;
                temp->next = NULL;
            }
            iCount--;
        }

        void Display()
        {
            PNODE temp;

            temp = first;

            cout<<"NULL <=> ";
            while(temp != NULL)
            {
                cout<<"| "<<temp->data<<" | <=> ";
                temp = temp->next;
            }

            cout<<"NULL"<<"\n";
            
        }

        int Count()
        {
            return iCount;
        }

        void InsertAtPos(int no, int pos)
        {
            PNODE temp = NULL;
            PNODE newn = NULL;

            int i = 0;

            if(pos < 1 || pos > iCount +1)
            {
                cout<<"Position is invalid"<<"\n";
                return;
            }

            if(pos == 1)
            {
                InsertFirst(no);
            }
            else if(pos == iCount + 1)
            {
                InsertLast(no);
            }
            else
            {
                newn = new NODE;

                newn->data = no;
                newn->next = NULL;
                newn->prev = NULL;

                temp = first;

                for(i = 1; i < pos-1; i++)
                {
                    temp = temp->next;
                }
                newn->next = temp->next;
                temp->next->prev = newn;
                newn->prev = temp;
                temp->next = newn;

                iCount++;
            }
        }

        void DeleteAtPos(int pos)
        {
            PNODE temp = NULL;
            PNODE target = NULL;

            int i = 0;

            if(pos < 1 || pos > iCount)
            {
                cout<<"Position is invalid"<<"\n";
                return;
            }

            if(pos == 1)
            {
                DeleteFirst();
            }
            else if(pos == iCount)
            {
                DeleteLast();
            }
            else
            {
                temp = first;

                for(i = 1; i < pos-1; i++)
                {
                    temp = temp->next;
                }
               target = temp->next;

               temp->next = target->next;
               target->next->prev = temp;

               delete target;

                iCount--;
            }

        }
};


int main()
{
    DoublyLinearLL sobj;
     
    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);
    
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);
    
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    //  sobj.DeleteFirst();

    // sobj.Display();
    // iRet = sobj.Count();
    // cout<<"Number of elements are : "<<iRet<<"\n";

    // sobj.DeleteLast();

    // sobj.Display();
    // iRet = sobj.Count();
    // cout<<"Number of elements are : "<<iRet<<"\n";

    sobj.InsertAtPos(151,4);
        
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";
    
    sobj.DeleteAtPos(4);
        
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

   return 0;
}