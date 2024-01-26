// basics of priority queue
//*****************************//
// A priority queue is a type of queue that arranges elements based on their priority values.
//  Elements with higher priority values are typically retrieved before elements with lower priority values.
// In a priority queue, each element has a priority value associated with it. When you add an element to the queue, it is inserted in a position based on its priority value. For example, if you add an element with a high priority value to a priority queue, it may be inserted near the front of the queue, while an element with a low priority value may be inserted near the back.

#include<iostream>
using namespace std;
#include<queue>
#include<vector>
int main()
{
   priority_queue<int>q;//priority queue
   int n;
   cin>>n;//number of elements in array
   if(n==0)
   return 0;
   vector<int>a(n);
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   int k;//kth largest
   cin>>k;
   if(k>n)//if k is greater than number of elements in the array
   {
     cout<<"value of k should not be greater than number of elements"<<endl;
    return 0;
   }
   for (int i=0;i<n;i++)//push all elements in priority queue
   {
     q.push(a[i]);
   }
   for(int i=0;i<k-1;i++)//pop out k-1 large elements
   {
          q.pop();
   }
      cout<<q.top(); // largest element
}