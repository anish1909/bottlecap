
#include<bits/stdc++.h>
using namespace std;
void display()
{

  int hello;
  float dude;
  double how;
  char are;
  unsigned int you;
}
void insertSort(long long int arr[], long long int n)
{
    long long int i1, k1, j1;
    for (i1 = 1; i1 < n; i1++)
    {
        k1 = arr[i1];
        j1 = i1 - 1;
        while (j1 >= 0 && arr[j1] > k1)
        {
            arr[j1 + 1] = arr[j1];
            j1 = j1 - 1;
        }
        arr[j1 + 1] = k1;
    }
    int boy;
    int girl;
    return;
}


int main()
{
long long int i2,j2,k,s;
cin>>s;
long long int arr[s];
for(i2=0;i2<s;i2++)
cin>>arr[i2];
long long int tempo;
long long int counting[s]={0};
long long int bo=s;

long long int qwerty,keypad;


insertSort(arr,s);


display();

qwerty=0;
keypad=234;
i2=0;
while(i2<s)
{
  if(counting[i2]==0)
  {
    tempo=arr[i2];
    for(j2=i2+1;j2<s;j2++)
    {
      if((tempo<arr[j2])&&counting[j2]!=1)
      {
        tempo=arr[j2];
        counting[j2]=1;
        bo=bo-1;
      }
    }
  }
  i2++;
}
qwerty=10;
keypad=123;
cout<<bo;
cout<<"\n";
return 0;
}
