#include<stdio.h>

int demx(int a[], int n, int x)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
	{
        if(a[i] == x)
		{
            dem+=1;
        }
    }
    
    return dem;
}
void demchan(int a[], int n){
    int dem = 0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            dem+=1;
            printf("\nCac so chan trong mang la: %5d", a[i]);
        }    
    }
    printf("\nCo %d so chan trong mang", dem);
}

void demle(int a[], int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
	{
        if(a[i] % 2 != 0)
		{
            dem += 1;
            printf("\nCac so le trong mang la: %5d", a[i]);
        }
    }
    printf("\nCo %d so le trong mang", dem);
}

int main(){
    int n, dem = 0;
    char lenh;
    printf("nhap so phan tu cua mang: "); scanf("%d", &n);
    int a[n];
    
    for(int i = 0; i < n; i++)
	{
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    int x;
    printf("\nNhap so can dem: "); scanf("%d", &x);
    dem = demx(a, n, x);
    
    
    printf("\nSo lan xuat hien cua %d la: %d", x, dem);
    printf("\nNhap lenh tiep theo: "); scanf(" %c", &lenh);
    
    if (lenh == 'c')
	{
        demchan(a, n);
    }
    
    if(lenh == 'l')
	{
       demle(a, n);
    }
}
