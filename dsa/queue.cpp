#include<iostream>
#include<bits/stdc++.h>
#include"linkedList.h"

using namespace std;

class Queue 
{
   public:
   LinkedList list;

   void push(int value)
   {
      list.insertLast(value);
   }

   void pop()
   {
     list.popLeft();
   }

   int front()
   {
      if(list.empty())
      return -1;

      else
      return list.head->data;
   }

   int back()
   {
     if(list.empty())
     return -1;

     else
     return list.tail->data;
   }

   int size()
   {
      return list.size();
   }

   bool empty()
   {
     return list.empty();
   }

   void print()
   {
    list.print();
   }
};

int main()
{   cout<<"starting"<<endl;
    Queue q;
    cout<<"starting"<<endl;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<"starting"<<endl;

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.print();

    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;

    q.pop();

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;

    return 0;




}




