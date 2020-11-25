#include<iostream>
using namespace std;
   int main()
    {
     int array[5],i;
     int *p=array;
     cout << " Enter the five numbers" << endl;
         for (int counter = 0; counter < 5; counter++) {
             cin >> *(p + counter);
         }
         cout << "\n" << endl;

     cout<<"Your numbers are:\n";
     for(i=0;i<5;i++)
        cout<<array[i]<<endl;

     return 0;

    }