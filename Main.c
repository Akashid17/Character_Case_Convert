
#include<stdio.h>

void CharacterConvert(char CValue)
{
	if(CValue >= 'A' && CValue <= 'Z')
	{
		printf("%c\n",CValue+32);
	}
	else if(CValue >= 'a' && CValue <= 'z')
	{
		printf("%c\n", CValue-32);
	}
    else
    {
        printf("Wrong Character Entered\n");
    }
}

int main()
{
	char cValue = '\0';

	printf("Enter Character\n");
	scanf("%c",&cValue);

	CharacterConvert(cValue);

	return 0;
}