#include <iostream>
using namespace std;

class ADT_Array
{
    private:
    int *arr;
    int size;

    public:

// Class For ADT_Array.........................................
    ADT_Array()
    {
        cout <<"Enter the size of the Array :-";
        cin >>size;

        arr = new int[size];
    }

    ~ADT_Array()
    {
        delete []arr;
    }

    void InsertArray()
    {
        cout<<"Enter the "<<size<<" element of array ="<<endl;
        for (int i=0; i<size; i++)
        {
            cin>>arr[i];
        }
    }

    void PrintArray()
    {
        cout<<"Array =";
        for (int i=0; i<size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

   
    int SearchArray()
    {
        int num; 
        cout<<"Enter the number for the search :-";
        cin>>num;

        for (int i=0; i<size; i++)
        {
            if (arr[i] == num)
                return 1;
        }  
    }

    void ReverseArrary()
    {
        int temp[size] ,j=size-1;
        for (int i=0; i<size; i++)
        {
            temp[i]=arr[j];
            j--;
        }

        cout<<"The Reversed Array =";
        for (int i =0; i<size; i++)
        {
            cout<<temp[i]<<" ";
        }
        cout<<endl;
    }

    void ShortArray()
    {
        int i, j;

        cout<<"The Shoted Array = ";
        for (i=0; i<size; i++)
        {
            for (j=i; j<size; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp;

                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void SizeArray()
    {
        cout <<"The Size Of the Array :-"<<size<<endl;
    }
};

// Class For Dynmaic Array .................................
class DynamicArray
{
    private:
    int *array;
    int size;
    int capacity;

    public:
    DynamicArray()
    {
        array= new int[1];
        size=0;
        capacity=1;
    }

    ~DynamicArray()
    {
        delete []array;
        size=0;
        capacity=0;
    }

    void resize()
    {
        if (size == capacity)
        {
            int *temp = new int[2*capacity];

            for (int i=0; i<size; i++)
            {
                temp[i]=array[i];
            }

            delete []array;
            array = temp;

            capacity = 2*capacity;
        }

    }

    void Insert(int index, int value)
    {
        if (size == capacity)
            resize();

        if (size >= capacity)
            cout <<"Memory does not exist ."<<endl;    

        array[index]=value;
        size++;    
    }

    void PrintArray ()
    {
        cout << "Array :- ";
        for (int i =0; i<size; i++)  
        {
            cout <<array[i]<<" ";
        }
        cout <<endl;
    }

    int getSize()
    {
        return size;
    }
    int getCapacity()
    {
        return capacity;
    }

    void Search_Array()
    {
        int i ,num;
        cout<<"Enter the number for search :-";
        cin >>num;
        for(i=0; i<size; i++)
        {
            if (array[i]==num)
            {
                cout<<"The number= "<<num<<" Found at index= "<<i+1<<endl;
                return;
            }
        }
        cout<<"The Number is not Found ."<<endl;
    }

    void Reverse_Arrary()
    {
        int temp[size] ,j=size-1;
        for (int i=0; i<size; i++)
        {
            temp[i]=array[j];
            j--;
        }

        cout<<"The Reversed Array =";
        for (int i =0; i<size; i++)
        {
            cout<<temp[i]<<" ";
        }
        cout<<endl;
    }

    void Short_Array()
    {
        int i, j;

        cout<<"The Shoted Array = ";
        for (i=0; i<size; i++)
        {
            for (j=i; j<size; j++)
            {
                if (array[i] > array[j])
                {
                    int temp;

                    temp = array[i];
                    array[i] = array[j];
                    array[j]=temp;
                }
                
            }
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }

};

int main ()
{
// 1. Create an ADT array without using STL.

        ADT_Array a;

        a.InsertArray();
        a.PrintArray();

// 2. Create an array and implement a search function in the array.

        if (a.SearchArray() == 1)
            cout <<"The number is found ."<<endl;
        else
            cout<<"Number not Found ."<<endl;

// 3. Create a function in Array to reverse an array.

        a.ReverseArrary();

// 4. Create a function in Array to sort the given array

        a.ShortArray();

// 5. Create a function in Array to check the size of an array.

        a.SizeArray();

// 6. Create a Dynamic array without using STL.

        DynamicArray d;
        d.Insert(0,10);
        d.Insert(1,5);
        d.Insert(2,30);
        d.Insert(3,75);
        d.Insert(4,25);
        d.PrintArray();  

// 7. Create a function in a dynamic array to return the size of the array.

        cout<<"The Size of the Array = "<<d.getSize()<<endl;

// 8. Create a function in a dynamic array to return the capacity of the array.

        cout<<"The Capacity of the Array = "<<d.getCapacity()<<endl;

// 9. Create an array and implement a search function in the array.

        d.Search_Array();

// 10. Create a function in Array to reverse an array.

        d.Reverse_Arrary(); 

// 11. Create a function in Array to sort the given array.

        d.Short_Array();

return 0;
}
