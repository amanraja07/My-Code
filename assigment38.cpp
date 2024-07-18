#include <bits/stdc++.h>
using namespace std;

int main ()
{
//1. List functions in C++ STL (Standard Template Library)

        list<int> l1;
        list<int> l2;

// 2. Assign the elements to the list (different methods) - Example of list::assign() | C++
// STL

        l1.assign({1,2,3,4,5});

// 3. Iterate a list C++ STL

        list <int> ::iterator it;

        for(it = l1.begin(); it != l1.end(); it++){
            cout<<*it<<" ";
        }cout<<endl;

// 4. Iterate a list in reverse order C++ STL

        l1.reverse();

        cout<<"After Reversed the l1 list "<<endl;
        for(it = l1.begin(); it != l1.end(); it++){
            cout<<*it<<" ";
        }cout<<endl;

// 5. Input and add elements to a list C++ STL.

        int n;
        cout<<"Enter the number of element :- ";
        cin>>n;

        for(int i=0; i<n; i++){
            int x;
            cout<<"Enter the "<<i+1<<" element :- ";
            cin>>x;
            l2.push_back(x);
        }

        for(it = l2.begin(); it != l2.end(); it++){
            cout<<*it<<" ";
        }cout<<endl;

// 6. Get the first and last element of the list C++ STL.

        cout<<"First Element :- "<<l2.front()<<endl;
        cout<<"Last Element :- "<<l2.back()<<endl;

// 7. Insert the element at beginning and end of the list | C++ STL.

        l1.push_front(10);
        l1.push_back(50);

        cout<<"Push back and Push front in l1"<<endl;
        for(it = l1.begin(); it != l1.end(); it++){
            cout<<*it<<" ";
        }cout<<endl;

// 8. Remove all occurrences of an element and remove set of some specific from the list
// C++ STL

        int a;
        cout<<"Enter the element you want to remove in l1:-";
        cin>>a;

        l1.remove(a);
        for(it = l1.begin(); it != l1.end(); it++){
            cout<<*it<<" ";
        }cout<<endl;

// 9. Remove all consecutive duplicate elements from the list | C++ STL

        list <int> l3;
        l3.assign({10,10,15,15,80,60,60,60,15,5});

        l3.unique();
        cout<<"Remove the duplicate element only :-"<<endl;

        for(it = l3.begin(); it != l3.end(); it++){
            cout<<*it<<" ";
        }cout<<endl;

// 10. Merge two lists C++ STL.

        list <int> l6;
        list <int> l7;

        l6.assign({1,2,3});
        l7.assign({10,20,30,40,50});

        l6.merge(l7);

        cout<<"Marge the l7 into l6 list :- "<<endl;
        for(auto i = l6.begin(); i != l6.end(); i++){
            cout<<*i<<" ";
        }cout<<"\n";

// 11. Creating a list by assigning the all elements of another list C++ STL

        list <int> l4 ;
        list <int> l5 = {11,22,33,44,55};

        l4.assign(l5.begin(),l5.end());

        for(auto i = l4.begin(); i != l4.end(); i++){
            cout<<*i<<" ";
        }cout<<endl;

// 12. Assign a list with array elements C++ STL.

        array <int,5> arr = {10,20,30,40,50};
        list <int> l8;

        l8.assign(arr.begin(),arr.end());

        cout<<"Assign array into the list :-"<<endl;
        for(auto i = l8.begin(); i != l8.end(); i++){
            cout<<*i<<" ";
        }cout<<endl;

// 13. Push characters in a list and print them separated by space in C++ STL.

        list <char> l9;
        l9.push_back('A');
        l9.push_back('m');
        l9.push_back('n');
        l9.push_back('a');
        l9.push_back('R');
        l9.push_back('a');
        l9.push_back('j');
        l9.push_back('a');

// 14. Access elements of a characters list using const_iterator in C++ STL

        list<char> :: iterator itc;

        for(itc = l9.begin(); itc != l9.end(); itc++){
            cout<<*itc<<" ";
        }cout<<endl;

return 0;
}