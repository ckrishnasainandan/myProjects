#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void func(int [],int,int,int);
void main()
{
	clrscr();
	int ch=0,A[50]={1,5,9,13,17,21,25,29,33,37,41,45,49,53,57,61,65,69,73,77,81,85,89,93,97,101,105,109,113,117,121,125},B[50]={2,6,10,14,18,22,26,30,34,38,42,46,50,54,58,62,66,70,74,78,82,86,90,94,98,102,106,110,114,118,122,126},C[50]={3,7,11,15,19,23,27,31,35,39,43,47,51,55,59,63,67,71,75,79,83,87,91,95,99,103,107,111,115,119,123,127},D[50]={4,8,12,16,20,24,28,32,36,40,44,48,52,56,60,64,68,72,76,80,84,88,92,96,100,104,108,112,116,120,124,128},upp=128,low=1,n=32,i;

	for(i=0;i<32;i++)
	{
		if(i%8==0)
		{
			printf("\n");
		}
		printf("%d ",A[i]);
	}
	printf("Y/N");
	scanf("%d",&ch);
	if(ch==1)
	{
		func(A,low,upp,n);
	}
	else
	{
		clrscr();
		for(i=0;i<32;i++)
		{
			if(i%8==0)
			{
				printf("\n");
			}
			printf("%d ",B[i]);
		}
		printf("Y/N");
		scanf("%d",&ch);
		if(ch==1)
		{
			func(B,low,upp,n);
		}
		else
		{
			clrscr();
			for(i=0;i<32;i++)
			{
				if(i%8==0)
				{
					printf("\n");
				}
				printf("%d ",C[i]);
			}
			printf("Y/N");
			scanf("%d",&ch);
			if(ch==1)
			{
				func(C,low,upp,n);
			}
			else
			{
				func(D,low,upp,n);
			}

		}
	}
	getch();
}
void func(int A[],int low,int upp,int n)
{
	int c=0,E[32],F[32],i=0,j,k,num,l;
	for(j=0;j<32;j++)
	{
		if(j<n/2)
		{
			E[j]=A[i];
			i++;
		}
		else
		{
			back:num=(rand()%(upp-low+1))+low;
			for(int c=0;c<26;c++)
			{
				if(num==A[c])
					goto back;
			}
			F[j]=num;
		}
	}
	for(j=0;j<32;j++)
	{
		if(j<n/2)
		{
			F[j]=A[i];
			i++;
		}
		else
		{
			label:num=(rand()%(upp-low+1))+low;
			for(int b=0;b<26;b++)
			{
				if(num==A[b])
					goto label;
			}
			E[j]=num;
		}
	}
	clrscr();
	for( k=0;k<32;k++)
	{
		if(k%8==0)
			printf("\n");
		printf("%d ",E[k]);
	}
	printf("\n Y/N");
	scanf("%d",&c);
	if(c==1)
	{
		n=n/2;
		if(n>1)
			func(E,1,128,n);
		else
			printf("\n YOUR NUMBER IS %d ",E[0]);

	}
	else
	{
		printf("\n");
		n=n/2;
		if(n>1)
		{
			func(F,1,128,n);
		}
		else
			printf("\n YOUR NUMBER IS %d ",F[0]);
	}
}