#include <iostream>
using namespace std;
int main (){
//Program To Find The second largest number.
   int n1,n2,n3;
   cout<<"Enter 3 nmubers"<<endl;
   cin>>n1>>n2>>n3;

   if((n1<n2 && n1>n3 )(n1>n2 && n1<n3)){
    cout<<" The Second largest number is --> "<<n1<<endl;
    }
    else if ((n2<n1 && n2>n3 )(n2>n1 && n2<n3))
    {
      cout<<" The Second largest number is --> "<<n2<<endl;
    }
    else if ((n3<n2 && n3>n1 )||(n3>n2 && n3<n1))
    {
      cout<<" The Second largest number is --> "<<n3<<endl;
    }
   
cout<<"next............................................................\n";


int arr[5]={1,2,3,4,5};
   int larg=arr[0];
   int slarg=arr[0];
   for(int i=0;i<5;i++){
      if(arr[i]>larg){
        slarg=larg;
        larg=arr[i];
        
      }
      
     if(arr[i]<larg &&arr[i]>slarg){
      slarg=arr[i];
     }
   }
   cout<<" The Second largest number is --> "<<slarg<<endl;


cout<<"next............................................................\n";

 int A[10],max,i,j,n;
    cout <<"Enter size of array : ";
    cin>>n;
    cout <<"Enter elements of array :"<<endl;
    for(i=0;i<n;i++)
    cin>>A[i];


   for ( i = 0;i<n;i++)
   {
    for ( j=0; j<n;j++)//i+1//j=i same.
       {
          if(A[i]>A[j])//find first max
           {   
             max=A[i];//first max put in max
             A[i]=A[j];//update to  the new second max. 
             A[j]=max; //the new max is found it .
       
            }
       }
   }

  cout<<"The Second max is :"<<A[1]<<endl;


    return 0;
}