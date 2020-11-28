#include<stdio.h>
#include<string.h>
void main()
{
	int n,k,i,j,l,tot=0,no_substring=0,consec=0;
	printf(">$task2\n");
	scanf("%d %d",&n,&k);
	char substr[n];
	char output[100];
	char s[n];
	char characters[k];
	memset(substr,0,n);
	memset(output,0,100);
	memset(s,0,n);
	memset(characters,0,k);
	int indices[n];
	scanf("%s",s);
	for (i=0;i<k;i++)
	{
		scanf(" %c",&characters[i]);
		characters[i+1]=0;
	}
	for(i=0;i<n;i++)
	{
		for (j=0;j<k;j++)
		{
			if (s[i]==characters[j])
			{
				indices[tot]=i;
				tot++;
				break;
			}
		}
	}
	for(i=0;i<tot;i++)
	{
		if(i==0)
		{
			consec=0;
		}
		else if (indices[i]-indices[i-1]>1)
		{
			consec=0;
		}
		else
		{
			consec++;
		}
		for(j=indices[i];j>=indices[i]-consec;j--)
		{
			no_substring++;
			for (l=j;l<=indices[i];l++)
			{
				substr[l-j]=s[l];
			}	
			strcat(output," ");
			strcat(output,substr);
			memset(substr,0,strlen(substr));
		}
	}
	printf("%d // %s\n",no_substring,output);
}
