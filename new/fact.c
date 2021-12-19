#include<stdio.h>
#include<conio.h>
int main(){
	int n,fact=1,i;
	printf("enter the number: ");
	scanf("%d", &n);
	while(i<=n)
	{
		fact = fact*i;
		i++;	
		}	
    printf("\nThe factorial is :%d", fact);
	
}
