#include <iostream>
#include "accounts.h"
#include <algorithm>
using namespace std;

void printArray(int[], int);
void sortArrayAsc(int[],int);

int main()
{
  //Bubble sort ASC method per Task 2 of Unit 6 Assignment
  cout << "\nStart: "  << cpuTime() << endl;
  //Call the sort function
   sort(accountBalances, accountBalances+maxAccounts);
   printArray(accountBalances, maxAccounts);
   cout << "\nEnd: " << cpuTime() << endl;
   return 0;
}

void printArray(int arrayVals[], int size)
{
   cout << "\nPrintes values in array: " << endl;
   for(int i =0; i < size; i++)
   {
    cout << arrayVals[i] << ",";
   }  
}