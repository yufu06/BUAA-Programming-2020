#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char review[1100];
int n,movie_list_count;
char trash_list[110][20];
struct movie
{
	char name[20];
	int cnt;	
} movie_list[110];
int main()
{
	gets(review);
	review[strlen(review)]=' ';
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s",trash_list[i]);
	}
	char temp_movie[20];
	memset(temp_movie,0,sizeof(temp_movie));
	for(i=0;i<strlen(review);i++)
	{
		if((review[i]<'a'||review[i]>'z')&&(review[i]<'A'||review[i]>'Z'))
		{
			if(strlen(temp_movie)!=0)
			{
				int flag=0;
				int j;
				for(j=0;j<movie_list_count;j++)
				{
					if(strcmp(movie_list[j].name,temp_movie)==0)
					{
						movie_list[j].cnt++;
						flag=1;
						break;
					}
				}
				if(!flag)
				{
					int whether_trash=0;
					int j;
					for(j=0;j<n;j++)
					{
						if(strcmp(trash_list[j],temp_movie)==0)
						{
							whether_trash=1;
							break;
						}
					}
					if(!whether_trash)
					{
						movie_list[movie_list_count].cnt=1;
						strcpy(movie_list[movie_list_count].name,temp_movie);
						movie_list_count++;
					}
				}
				memset(temp_movie,0,sizeof(temp_movie));
			}
		}
		else
		{
			temp_movie[strlen(temp_movie)]=tolower(review[i]);
		}
	}
	int max_count=0;
	int max_index;
	for(i=0;i<movie_list_count;i++)
	{
		if(movie_list[i].cnt>max_count)
		{
			max_count=movie_list[i].cnt;
			max_index=i;
		}
	}
	printf("%s",movie_list[max_index].name);
	
	return 0;
}

