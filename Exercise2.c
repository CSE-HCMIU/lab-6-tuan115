/*
2. Input n strings from keyboard and sort them ascendingly.
Ex:
 _________________________________________
| Input: n = 3, strings: "one two three"  |
| Output: "one three two"                 |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

int ex2(int n, char *str[]){
		int i, j;
	char temp;
	for (i = 0; str[i]; i++)
	{
		for (j = i + 1; str[j]; j++)
		{
			if (str[j] < str[i])
			{
				temp = str[j];
				str[j] = str[i];
				str[i] = &temp;
			}
		}
	}
}


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int n = atoi(argv[1]);
	char *str[n];
	int i;
	for(i=0; i<n; i++){
		str[i] = argv[i+2];
	}

	ex2(n, str);
	printf("enter a string:");
	gets(str);
	printf("%s in ascending order is:", str);
	printf("%s\n", str);
	getch();
		
	return 0;
}
