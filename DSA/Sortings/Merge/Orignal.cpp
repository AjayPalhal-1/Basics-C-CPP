#include<iostream>
using namespace std;

void divide( int *  , int , int );
void merge (int* ,int   , int  ,int   );


int main ()
{
    int size =3;

    int arr [size]={25,12,85};
    int start= 0;
    int end =size-1;

    divide( arr , start , end);



    for(int i=0; i<size; i++)
    {
        cout <<arr[i]<<' ';
    }
            cout <<endl <<endl;

}

void divide(int* arr , int  start , int  end)
{
    if(start ==end )
    return;

    int mid = (start + end )/2;

    divide( arr , start , mid); // Left vala
    divide( arr , mid+1 , end  );// Right Vala 
    merge (arr, start , mid , end );
}

 void    merge (int* arr,int  start , int mid ,int  end )
    {
        int merged [(end-start )+1];

        int i= start ;
        int j = mid +1;
        int k =0 ;

        while(i<=mid && j<= end )
        {
            if(arr[i]<arr[j])
            {
                merged[k++]=arr[i++];

            }
            else {
                merged[k++]=arr[j++];

            }
                       
        }
        while (i<=mid)
        {
            merged[k++]=arr[i++];
        }
        while (j<=end)
        {
            merged[k++]=arr[j++];
        }
        int x=0;
        int y = start ;
        while(x<k)
        {
            arr[y++]= merged[x++];
        }

    }

    
