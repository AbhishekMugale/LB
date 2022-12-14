#include<iostream>
using namespace std;

class ArrayX
{
   public:
      int *Arr;
      int iSize;
      
      ArrayX(int i)
      {
         cout<<"Allocating the memory for resources..."<<endl;
         iSize = i;
         Arr = new int[iSize];//Arr = (int*)malloc(iSize*sizeof(int));
      }
      ~ArrayX()
      {
         cout<<"Deallocating the memory of resources..."<<endl;
         delete []Arr;  // free(Arr);
      }
      
      void Accept()
      {
         cout<<"Enter the elements of array : "<<"\n";
        
         for(int iCnt=0;iCnt<iSize;iCnt++)
         {
           cin>>Arr[iCnt];   // scanf("%d",&Arr[iCnt]);
         }      
      }
      void Display()
      {
         cout<<"elements of array : "<<"\n";
        
         for(int iCnt=0;iCnt<iSize;iCnt++)
         {
           cout<<Arr[iCnt]<<"\t";   // printf("%d",Arr[iCnt]);
         }      
         cout<<"\n";
      }
      
      

};

class MarvellousLB : public ArrayX
{
    public:
      
       MarvellousLB(int i) : ArrayX(i)
       {  }
       
       void Function_name()
       {
          // Logic
       }

};

int main()
{

   int iLength = 0;
   int iRet = 0;
   cout<<"Enter the size of array : "<<"\n";
   cin>>iLength;
   
   MarvellousLB * obj = new MarvellousLB(iLength);
   
   obj->Accept();
   obj->Display();
   
   obj->Function_name();
   
    

   delete obj;
   
   return 0;
}