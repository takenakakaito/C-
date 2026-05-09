#include <stdio.h>
#include <conio.h> 

int main()
{
	int money;
	printf("金額を入力してください");
	scanf_s(" % d",&money);
	bool finish = false;
	while (!finish)
	{
		if (money == 0)
		{
			printf("両替できません");
			finish = true;
		}
		int Chenge1 = money / 500;
		int botti1 = money % 500;
		printf("");
	}


	return 0;
}
