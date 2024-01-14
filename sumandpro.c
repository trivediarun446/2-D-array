// write a c programe to do sum of and product of even and odd
#include <stdio.h>
int main(){
    int n ,k ,count=0,flag=0,sum=0,pro=1;
    printf("enter the number of rows and colume:");
    scanf("%d %d",&n,&k);
    int arr[n][k];
    printf("enter the element in an array:-");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("arr[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if(arr[i][j]%2==0){
             count++;
             sum=sum+arr[i][j];
            }
            else{
              flag++;
              pro=pro*arr[i][j];
            }
        }
        
    }
    printf("number of even is %d\n",count);
    printf("number of odd is %d\n",flag);
    printf("sum of even num is %d\n",sum);
    printf("product of odd num is %d",pro);

}