#include <stdio.h>

struct  address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];

};

void print_list(struct address* lp);

int main(void)
{
	struct address list[5] = {
		{"홍길동", 23, "111-1111", "울릉도 독도"},
		{ "이순신", 23, "222-2222", "서울 건천동" },
		{ "장보고", 23, "333-3333", "완도 청해진" },
		{ "유관순", 23, "444-4444", "충남 천안" },
		{ "안중근", 23, "555-5555", "황해도 해주" },
	};
	printf_list(list);

	return 0;
}

void print_list(struct address* lp)
{
	int i;

	for (i = 0; i < 5; i++)

	{
		printf("%10s%5d%15s%20s\n",
			(lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
	}
}