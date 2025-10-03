
#include<stdio.h>
int linearSearch(int nums[],int l,int target)
{
    for(int i=0; i<l; i++)
    {
        if(nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int nums[] = {10,20,30,40,50,60};
    int target = 50;
    int len = sizeof(nums)/sizeof(nums[0]);

    int index = linearSearch(nums,len,target);

    printf("Index is: %d\n",index);

}
