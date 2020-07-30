#include<stdio.h>
#include<stdlib.h>
void buble_sort(int *arr,int n)
{int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
          if(*(arr+j)>*(arr+j+1))
          {t=*(arr+j);
            *(arr+j)=*(arr+j+1);
            *(arr+j+1)=t;}
        }
    }
    
}
int selection_sort(int *arr,int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
          if(*(arr+i)>*(arr+j))
          {t=*(arr+j);
            *(arr+j)=*(arr+i);
            *(arr+i)=t;}
        }
    }
   
}

void insertion_sort(int *arr,int n)
{
    int i, k, j; 
    for (i = 1; i < n; i++) { 
        k = arr[i]; 
        j = i - 1; 
         while (j >= 0 && arr[j] > k) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = k; 
    } 
} 
  
    /*int i,j,t;
    for(i=1;i<n;i++)
    {
        for(j=0;j>i;j++)
        {
            if(*(arr+j)>*(arr+i))
            {
                t=*(arr+j);
                *(arr+j)=*(arr+i);
                *(arr+i)=t;
            }
        }
    }*/
    
void print(int *arr,int n)
{
    int i;
    for(i=0;i<6;i++)
    {printf("%d ",*(arr+i));
    
}
}
      



int merge_sort(int *arr,int f,int l)
{
    int mid;
    mid=(f+l)/2;
    if(l-f<=1)
    {
        if(*(arr+l)>*(arr+f))
        {int t;
            t=*(arr+f);
         *(arr+f)=*(arr+l);
         *(arr+l)=t;
        
        }
         return 0;
    }
        
        else{
            merge_sort(arr,f,mid);
             merge_sort(arr,mid+1,l);
             int i,j;
             for(i=0;i<=l;i++)
            {for(j=0;j<l-i;j++)
            {if(*(arr+j)>*(arr+j+1))
            { int t;
            t=*(arr+j);
            *(arr+j)=*(arr+j+1);
            *(arr+j+1)=t;
        }}
        }}
}
    
    
  

int main()
{
    int arr[]={1,9,66,7,67,2};
    int il,n,f;
   
    n=6;
    f=0;
    l=5;
    printf("\n BUBBLE SORT \n");
    buble_sort(arr,n);
    print(arr,n);
    printf("\n Selection SORT\n");
    
    selection_sort(arr,n);
    print(arr,n);
    printf("\n insertion_sort \n");
 insertion_sort(arr,n);
    print(arr,n);
    printf("\n MERGE SORT\n");
    merge_sort(arr,f,l);
    print(arr,n);
    return 0;
    
}
