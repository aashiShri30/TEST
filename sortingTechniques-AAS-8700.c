#include<stdio.h>
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
    
    for(i=0;i<n;i++)
    {printf("%d ",*(arr+i));
    
}
}
void selection_sort(int *arr,int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
          if(*(arr+i)>*(arr+j))
          {t=*(arr+j);
            *(arr+j)=*(arr+i);
            *(arr+i)=t;}
        }
    }
    
    for(i=0;i<n;i++)
    {printf("%d ",*(arr+i));
    
}
}

void insertion_sort(int *arr,int n)
{
    int i,j,t;
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
    }
    
            
        
     for(i=0;i<n;i++)
    {printf("%d ",*(arr+i));
    
}
}


void merge_sort(int *arr,int f,int l)
{
    int mid;
    mid=(f+l)/2;
    if(l-f==1)
    {
        if(*(arr+l)>*(arr+f))
        {int t;
            t=*(arr+f);
         *(arr+f)=*(arr+l);
         *(arr+l)=t;
        }}
        
        else{
            merge_sort(arr,f,mid);
             merge_sort(arr,mid+1,l);
            
        }
    
    
    int i, n=l-f+1;
     for(i=0;i<n;i++)
    {printf("%d ",*(arr+i));
    
}
}
int main()
{//int i,j,t,n=6;
    int arr[]={1,2,7,3,6,4};
    merge_sort(arr,0,5);
    /*
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
    
    for(i=0;i<n;i++)
    {printf("%d ",*(arr+i));
    
}*/return 0;
}
