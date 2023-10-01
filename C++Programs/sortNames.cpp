#include<iostream>
#include<string.h>
using namespace std;

void sortFruitnames(char fruit[][60],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_idx=i;
        for(int j=i+1;j<n;j++)
        {
            if((fruit[j]<fruit[min_idx]))
                min_idx=j;
        }
        if(i!=min_idx)
        {
            swap(fruit[i],fruit[min_idx]);
        }
    }    
}

int main()
{
    char fruit[][60]={"apple","kiwi","mango","watermelon","orange"};
    int n=sizeof(fruit)/sizeof(fruit[0]);
    sortFruitnames(fruit,n);
    cout<<"Arrays in lexicographic order:  ";
    for(int i=0;i<n;i++)
        cout<<fruit[i]<<" ";
}