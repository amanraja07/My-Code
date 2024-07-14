#include<bits\stdc++.h>
#define long long int
using namespace std;


int main (){ 
//1. Declare a vector with Initialization and print the elements.

    vector <int> v1={1,2,3,4,5};
    for(int i=0; i<v1.size(); i++){
        cout<<v1.at(i)<<" ";
    }cout<<"\n";

//2. Declare a vector without initialization, insert some elements and print.

    vector <int> v2;

    v2.push_back(10);
    v2.push_back(15);
    v2.push_back(20);
    v2.push_back(30);
    v2.push_back(35);
    

    for(int i=0; i<v2.size(); i++){
        cout<<v2.at(i)<<" ";
    }cout<<"\n";
    
//3. Write a function to print the element of a vector and take input from the user.

    vector <int> v3;

    int num;
    cout<<"Enter the number of the element you want to enter :-";
    cin>>num;

    cout<<"Enter the "<<num<<" element of the vector:-"<<endl;
    for(int i=0; i<num; i++){
        int x;
        cin>>x;
        v3.push_back(x);
    }

    for(auto i=v3.begin(); i<v3.end(); i++){
        cout<<*i<<" ";
    }cout<<"\n";

//4. Write a program to Copy one vector’s elements to another vector.

    v1.swap(v2);

    cout<<"\nAfter the swap the v1 and v2 the v1 is : -"<<endl;
    for(auto i=v1.begin(); i<v1.end(); i++){
        cout<<*i<<" ";
    }cout<<"\n";

//5. Find largest and smallest elements in a vector

    sort(v3.begin(),v3.end());

    cout<<"The Largest number is :- "<<*v3.rbegin()<<endl;
    cout<<"The Smallest number is :- "<<*v3.begin()<<endl;

//6. Write a program to reverse vector elements.

    cout<<"The v1 Print in the reversed order :-"<<endl;
    for(auto i=v1.rbegin(); i<v1.rend(); i++){
        cout<<*i<<" ";
    }cout<<"\n";

//7. Write a program to find sum of vector elements

    int sum =0;

    for(auto i=v1.rbegin(); i<v1.rend(); i++){
        sum += *i;
    }cout<<"The sum of v1 = "<<sum<<"\n";

//8. Write a program to find common elements between two vectors.

    vector <int> v4 = {20,5,65,30,55,44,35,75};

    cout<<"\nThe Common element in v1 and v4 are :-"<<endl;
    for(auto i=v1.begin(); i<v1.end(); i++){
        for(auto j=v4.begin(); j<v4.end(); j++){
            if(*i == *j){
                cout<<*i<<" ";
            } 
        }
    }
    cout<<"\n";
    
//9. Write a program to Push and print elements in a float vector

    vector <float> v5;
    v5.push_back(15.4);
    v5.push_back(10.87);
    v5.push_back(90.54);
    v5.push_back(105.87);
    v5.push_back(55.4);
    v5.push_back(00.87);

    for(auto i=v5.begin(); i<v5.end(); i++){
        cout<<*i<<"  ";
    }cout<<"\n";

//10. Write a program to check whether an element exists in a vector or not.

    float n;
    cout<<"Enter the float element to check in the vector v5:- ";
    cin>>n;

     for(auto i=v5.begin(); i<v5.end(); i++){
        if (*i == n){
            cout<<"Element found";
            return 0;
        }
    }cout<<"Element not Found"<<"\n";

return 0;
}