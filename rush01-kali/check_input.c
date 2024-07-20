#include <unistd.h>
#include <stdio.h>

char	*check_input(char *numbers, char *input)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (input[i] != '\0')
	{
		if (j < 16 && (input[i] >= '1' && input[i] <= '4')) //Check if the index of numbers(j) is less than 16 characters
		{
			numbers[j++] = input[i]; // copy the value of input into numbers and increase j by 1
		}
		else if (input[i] == ' ') // check if input is a space
		{
			while (input[i] == ' ')
			{
				i++; // first increase input
				if (j < 16 && (input[i] >= '1' && input[i] <= '4')) // then do the copy loop again
				{
					numbers[j++] = input[i];
				}
			}
		}
		i++;
	}
	numbers[j] = '\0'; //close string
	return (numbers); //return numbers
}
/*int main()
{
    char str1[] = "1 2  a 3 4 1  7 2 3 4 1 2 3 4 1 2 3 4 1 1 1 1 1";
    char str2[20];
    char *input = str1;
    char *numbers = str2;
    check_input(numbers, input);
    printf("%s", numbers);
    return (0);
}*/
