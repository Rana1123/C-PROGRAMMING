#include<stdio.h>
int main()
{
    int a[] = {6,8,5,9,1,4,3,-2,0,11,2,11},n=12,i=0;
    printf("Before Sorting:\n");
    for(; i<n; i++)
        printf("%d  ",a[i]);
    mergeSort(a,0,n-1);
    printf("\nAfter Sorting:\n");
    for(i=0; i<n; i++)
        printf("%d  ",a[i]);
}
void mergeSort(int a[],int l, int r)
{
    if(l<r)
    {
        int m = (l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }

}
void merge(int a[], int l, int m, int r)
{
    int i,j,k;
    int n1 = m-l+1;
    int n2 = r-m;
    int L[n1], R[n2];
    for(i=0; i<n1; i++)
        L[i] = a[l+i];
    for(j=0; j<n2; j++)
        R[j] = a[m+1+j];
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
            a[k++] = L[i++];
        else
            a[k++] = R[j++];
    }
    while(i<n1)
        a[k++] = L[i++];
    while(j<n2)
        a[k++] = R[j++];
}










