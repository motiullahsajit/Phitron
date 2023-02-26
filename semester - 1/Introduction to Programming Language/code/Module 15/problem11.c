#include <stdio.h>
#include <stdbool.h>

# define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))

int main()
{
	int square[3][3];
	int i = 0, j = 0;
	int isMagicSquare = 1;

	for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &square[i][j]);
        }
	}


    int n = my_sizeof(square)/my_sizeof(square[0]);


	int sumd1 = 0, sumd2=0;
	for (i = 0; i < n; i++)
	{
		sumd1 += square[i][i];
		sumd2 += square[i][n-1-i];
	}

	if(sumd1!=sumd2)
		isMagicSquare = 0;

	for (i = 0; i < n; i++) {

		int rowSum = 0, colSum = 0;
		for (j = 0; j < n; j++)
		{
			rowSum += square[i][j];
			colSum += square[j][i];
		}
		if (rowSum != colSum || colSum != sumd1)
			isMagicSquare = 0;;
	}

	if (isMagicSquare)
		printf("YES");
	else
		printf("NO");

	return 0;
}

