#include<iostream> 
using namespace std;

int main()
{
    int array[100];
    int i;
    int key;
    int n;
    bool found = false;

    cout << "Please enter the number of elements in the array: ";
    cin >> n;

    cout << "Please enter the array elements:\n";
    for(i = 0; i < n; ++i)
    {
        cin >> array[i];
    }

    cout << "Please enter the number you want to search for: ";
    cin >> key;

    // Search the key
    for(i = 0; i < n; ++i)
    {
        if(key == array[i])
        {
            cout << "Element found at position: " << i + 1 << "\n";
            found = true;
            break; // stop after first match
        }
    }

    if (!found)
    {
        cout << "Element not found in array.\n";
    }

    return 0;
}
    // for (i=0;i<n;++i)
   
    //   cin>>array[i];
    // cout<<"the elements of the array are \n";
    // for (i=0;i<n;++i)
    
    //  cout<<array[i]<<" ";
    //  cout<<"\n";
    // cout<<"please enter the number which you want to find in the inputted array \n";
    // cin>>key;
    // cout<<"the inputted no is at position \n";
    // for(i=0;i<n;++i)
    // {
      

    //   if(key==array[i]&&i<n)
        
    //     cout<<i+1<<"\n";
      
         
      }
}
