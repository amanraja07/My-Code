#include <bits/stdc++.h>
using namespace std;


signed main ()
{
// 1. Write a c++ code, to demonstrate the forward list.

        forward_list <int> fL1={10,30,20,10,15,40,40,40,50,20,15}; 

// 2. Write a c++ code, in which create a forward list and assign values to it at the time of
// initialization and print it on the console screen.

        forward_list <int> :: iterator it;
        for(it = fL1.begin(); it!=fL1.end(); it++){
                cout<<*it<<" ";
        }cout<<endl;

// 3. Create a forward list insert elements from 1 to 10 and find the sum of elements.

        forward_list <int> fL2({1,2,3,4,5,6,7,8,9,10});
        int sum=0;
        for(it = fL1.begin(); it!=fL1.end(); it++){
                sum += *it;
        }
        cout<<"The sum of forward list_2 = "<<sum<<endl;

// 4. Write a program to reverse forward list elements.

        fL1.reverse();
        cout<<"The fL1 After the reversed :- "<<endl;
        for(it = fL1.begin(); it!=fL1.end(); it++){
                cout<<*it<<" ";
        }cout<<endl;

// 5. Write a program remove all consecutive duplicate elements from the forward list.

        fL1.unique();
        cout<<"The fL1 After the remove the consecutive duplicate element only :- "<<endl;
        for(it = fL1.begin(); it!=fL1.end(); it++){
                cout<<*it<<" ";
        }cout<<endl;

// 6. Create two forward lists of int type, and merge them.

        fL1.merge(fL2);
        cout<<"Merge the fL1 And fL2 forward list."<<endl;

        for(it = fL1.begin(); it != fL1.end(); it++){
                cout<<*it<<" ";
        }cout<<endl;

// 7. Below are two forward lists, first sort them and then merge them.
// forwardlist1={3,2,9}
// forwardlist2={8,1,2}

        forward_list<int> F_list1 = {3,2,9};
        forward_list<int> F_list2 = {8,1,2};
        
        F_list1.sort();
        F_list2.sort();
        F_list1.merge(F_list2);

        for(it = F_list1.begin(); it != F_list1.end(); it++){
                cout<<*it<<" ";
        }cout<<endl;


// 8. Create two forward lists of int type, and swap the elements of both forward lists with
// each other.

        forward_list<int> F_list3 = {3,2,9};
        forward_list<int> F_list4 = {8,1,2,5,7,10};

        F_list3.swap(F_list4);

        for(it = F_list3.begin(); it != F_list3.end(); it++){
                cout<<*it<<" ";
        }cout<<endl;

        for(it = F_list4.begin(); it != F_list4.end(); it++){
                cout<<*it<<" ";
        }cout<<endl;

// 9. Write a C++ code to demonstrate working of splice_after() in forward list.

        forward_list<int> F_list5 = {3,2,9};
        forward_list<int> F_list6 = {10,20,30,40};

        F_list5.splice_after(F_list5.before_begin(),F_list6);

        for(it = F_list5.begin(); it != F_list5.end(); it++){
                cout<<*it<<" ";
        }cout<<endl;

        for(it = F_list6.begin(); it != F_list6.end(); it++){
                cout<<*it<<" ";
        }cout<<endl;

// 10. Write a program to assign values in forward_list using the values of another list

        forward_list<int> F_list7;
        forward_list<int> F_list8 = {0,100,200,300,400};

        F_list7.assign(F_list8.begin(),F_list8.end());
        for(it = F_list7.begin(); it != F_list7.end(); it++){
                cout<<*it<<" ";
        }cout<<endl;


return 0;
}