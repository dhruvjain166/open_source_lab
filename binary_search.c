#include<stdio.h>
#include<conio.h>

int binary_search(int a[],int x,int n){
   int low=0;
   int high=n-1;

   while(low<=high){
        int mid=(high+low)/2;

        if(a[mid]==x)
            return mid;
        else if(a[mid]>x)
            {
            high=mid-1;
           }
           else
           low=mid+1;

        }
    return -1;
}

int main(){

    int n=10,x,result;
    int a[20]={1,2,3,4,5,6,7,8,9,10};
    printf("enter element to be searched ");
    scanf("%d",&x);
    result=binary_search(a,x,n);
    if(result==-1){
        printf("element not found");
    }
    else
        printf("element found at index is %d ",result);

}
