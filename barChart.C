/*Tyler Allen
CS111
Assignment 6 Program 1
This program will display a bar graph comparing the sales of 5 stores*/

#include <iostream>
using namespace std;

void getSales(int ar[], int size);
void showBarGraph(const int ar[],int size);
//prototypes
int main(){
  const int SIZE = 5;
  int ar[SIZE];//initialize array
  getSales(ar, SIZE);
  showBarGraph(ar, SIZE);
  return 0;
}

void getSales(int ar[], int size)
{
  for(int i=0; i<size;i++)
    {//assign input to array
      cout<<"Enter today's sales for store "<<i+1<<" :";
      cin>>ar[i];
    }
}
void showBarGraph(const int ar[], int size)
{
  for(int l=0;l<size;l++)
   {
     for(int i=ar[l]/100;i>0;i--)
       {//print * for every $100 of sales
	cout<<"*";
      }
     cout<<endl;
   }
}
