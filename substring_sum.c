#include <stdio.h>
#include <stdlib.h>
static int total_nodes;
int comparator(const void *pLhs, const void *pRhs)
{
	int *lhs = (int *)pLhs;
	int *rhs = (int *)pRhs;

	return *lhs > *rhs;
}

void subset_sum(int s[], int t[],
				int s_size, int t_size,
				int sum, int ite,
				int const target_sum)
    {


	if( target_sum == sum )
	{
	    total_nodes++;
		if( ite + 1 < s_size && sum - s[ite] + s[ite+1] <= target_sum )
		{
			subset_sum(s, t, s_size, t_size-1, sum - s[ite], ite + 1, target_sum);
		}
	}
	else
	{

		if( ite < s_size && sum + s[ite] <= target_sum )
		{
            int i;
			for(  i = ite; i < s_size; i++ )
			{
				t[t_size] = s[i];

				if( sum + s[i] <= target_sum )
				{

					subset_sum(s, t, s_size, t_size + 1, sum + s[i], i + 1, target_sum);
				}
			}
		}
	}
}


void generateSubsets(int s[], int size, int target_sum)
{
	int *tuplet_vector = (int *)malloc(size * sizeof(int));

	int total = 0;

	qsort(s, size, sizeof(int), &comparator);
    int i;
	for(  i = 0; i < size; i++ )
	{
		total += s[i];
	}

	if( s[0] <= target_sum && total >= target_sum )
	{

		subset_sum(s, tuplet_vector, size, 0, 0, 0, target_sum);

	}

	free(tuplet_vector);
}

int main()
{
	int sum;
	scanf("%d",&sum);
	int size;
	int arr[50];
	scanf("%d",&size);
	int i;
	for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }



	generateSubsets(arr, size, sum);

	printf("%d", total_nodes);

	return 0;
}

