#include <stdio.h>

int main()
{
  int a[3][3], n, i, j, found = 0;

  printf("Enter elements:\n");

  for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }

    printf("Enter element to search: ");
    scanf("%d",&n);

    for(i=0;i<3;i++)
    {
     	for(j=0;j<3;j++)
        {
           if(a[i][j]==n)
            {
              printf("Element found at %d %d",i,j);
              found=1;
            }
           }
          }
  
    
    if(found==0)
        printf("Element not found");

    return 0;
}
