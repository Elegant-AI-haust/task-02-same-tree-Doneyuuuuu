//自动化-232-蒋一璠-231404010211
#include <stdio.h>
void judgement(int x[], int y[]);
int main()
{
	int p[3] = { 0 };
	int q[3] = { 0 };
	int i = 0;
	printf("依次对p赋值\n");
	for (i = 0;i < 3;i++)
	{
		scanf_s("%d", &p[i]);

	}
	printf("依次对q赋值\n");
	for (i = 0;i < 3;i++)
	{
		scanf_s("%d", &q[i]);

	}
	judgement(p, q);
	return 0;
}

void judgement(int x[], int y[])
{
	int a1 = 0, a2 = 0;
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		a1 = x[i];
		a2 = y[i];

		if (a1 != a2)
		{
			printf("false");
			break;
		}


		else
		{
			if (i == 2 && a1 == a2)
			{
				printf("ture");
				break;
			}

		}


	}

}
