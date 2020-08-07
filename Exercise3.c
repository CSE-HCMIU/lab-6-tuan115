/*
3. Input a string and find the smallest and largest word.
Ex:
 __________________________________________________________
| Input: "this is a string with smallest and largest word" |
| Output: "a" "smallest"                                   |
|__________________________________________________________|
*/
#include <stdio.h>
#include <stdlib.h>

int ex3(char *str){
	char string[100], word[20], max[20], min[20], c;
	int i = 0, j = 0, flag = 0;
    do
    {
        fflush(stdin);
        c = getchar();
        string[i++] = c;

    } while (c != '\n');
    string[i - 1] = '\0';
    for (i = 0; i < strlen(string); i++)
    {
        while (i < strlen(string) && !isspace(string[i]) && isalnum(string[i]))
        {
            word[j++] = string[i++];
        }
        if (j != 0)
        {
            word[j] = '\0';
            if (!flag)
            {
                flag = !flag;
                strcpy(max, word);
                strcpy(min, word);
            }
            if (strlen(word) > strlen(max))
            {
                strcpy(max, word);
            }
            if (strlen(word) < strlen(min))
            {
                strcpy(min, word);
            }
            j = 0;
        }
    }
}
}

int main(int argc, char *argv[]) {
	char max[20], min[20], string[20];
	char* str = "This is a string";
        printf("Enter string: ");
        printf("The largest word is '%s' and smallest word is '%s' in '%s'.\n", max, min, string);
	ex3(str);
	return 0;
}
