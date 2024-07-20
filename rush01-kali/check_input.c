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

char	*save_up(char *up, const char *numbers)
{
		int i;
		int j;

		i = 0;
		j = 0;
		while (i < 4 && numbers[i] != '\0') //while my index count 4 characters
		{
			up[j++] = numbers[i]; // copy and increase the destination(up) index
			if(i < 3 && numbers[i + 1] != '\0') // if my index i not the last character and if the next character is not null
			{
				up[j++] = ' '; // add space
			}
			i++;
		}
	up[j] = '\0'; //  close string and return destination(up)
	return (up);
}

char	*save_down(char *down, const char *numbers)
{
		int i;
		int j;

		i = 4;
		j = 0;
		while (i < 8 && numbers[i] != '\0')
		{
			down[j++] = numbers[i];
			if(i < 7 && numbers[i + 1] != '\0')
			{
				down[j++] = ' ';
			}
			i++;
		}
	down[j] = '\0';
	return (down);
}

char	*save_left(char *left, const char *numbers)
{
		int i;
		int j;

		i = 8;
		j = 0;
		while (i < 12 && numbers[i] != '\0')
		{
			left[j++] = numbers[i];
			if(i < 11 && numbers[i + 1] != '\0')
			{
				left[j++] = ' ';
			}
			i++;
		}
	left[j] = '\0';
	return (left);
}

char	*save_right(char *right, const char *numbers)
{
		int i;
		int j;

		i = 12;
		j = 0;
		while (i < 16 && numbers[i] != '\0')
		{
			right[j++] = numbers[i];
			if(i < 15 && numbers[i + 1] != '\0')
			{
				right[j++] = ' ';
			}
			i++;
		}
	right[j] = '\0';
	return (right);
}

int main()
{
    char str1[] = "1 2  a 3 4 2  7 3 4 1 3 4 1 2 4 3 2 1 1 1 1 1 1";
    char str2[20];
	char result1[9];
	char result2[9];
	char result3[9];
	char result4[9];
    char *input = str1;
    char *numbers = str2;

    check_input(numbers, input);
    printf("clean numbers: %s\n", numbers);

	save_up(result1, numbers);
	printf("%s\n", result1);

	save_down(result2, numbers);
	printf("%s\n", result2);

	save_left(result3, numbers);
	printf("%s\n", result3);

	save_right(result4, numbers);
	printf("%s\n", result4);

    return (0);
}
