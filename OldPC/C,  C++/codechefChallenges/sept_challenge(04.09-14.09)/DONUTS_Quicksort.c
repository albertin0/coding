#include<stdio.h>
#include<stdlib.h> 
int a[20000];

//quick Sort function to Sort Integer array list
void quicksort(int array[], int firstIndex, int lastIndex)
{
    //declaaring index variables
    int pivotIndex, temp, index1, index2;

    if(firstIndex < lastIndex)
    {
        //assigninh first element index as pivot element
        pivotIndex = firstIndex;
        index1 = firstIndex;
        index2 = lastIndex;

        //Sorting in Ascending order with quick sort
        while(index1 < index2)
        {
            while(array[index1] <= array[pivotIndex] && index1 < lastIndex)
            {
                index1++;
            }
            while(array[index2]>array[pivotIndex])
            {
                index2--;
            }

            if(index1<index2)
            {
                //Swapping opertation
                temp = array[index1];
                array[index1] = array[index2];
                array[index2] = temp;
            }
        }

        //At the end of first iteration, swap pivot element with index2 element
        temp = array[pivotIndex];
        array[pivotIndex] = array[index2];
        array[index2] = temp;

        //Recursive call for quick sort, with partiontioning
        quicksort(array, firstIndex, index2-1);
        quicksort(array, index2+1, lastIndex);
    }
}




int main()
{
	int t,n,m,i,cuts,temp,m2,count;
	scanf("%d",&t);
	while(t--)
	{		
		scanf("%d %d", &n, &m);	
		count=0;	
		for(i =0; i<m; i++)
		{
			scanf("%d", &a[i]);
			if(a[i]==1)
				count++;
		}
		if(count<m)
		quicksort(a,0,m-1);
    	//printf("\n\n  %d %d %d %d",a[0],a[1],a[2],a[3]);
		i=0; m2=m;
		cuts =0;
		while(i<m && m2>1)
		{
			if(a[i]+2<=m2)
			{
				cuts += a[i];
				m2 -= a[i]+1;
		//		printf("\nif(des<=m2)  cuts:%d  m2:%d",cuts,m2);
			}
			else
			{
				cuts += m2-1;
				m2 =1;
		//		printf("\nelse:  cuts:%d  m2:%d",cuts,m2);
			}
			i++;
		}
		printf("\n%d", cuts);
	}
	return 0;
}
