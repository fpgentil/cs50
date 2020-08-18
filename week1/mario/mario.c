# include <stdio.h>
# include <cs50.h>

const int MAX_HEIGHT = 8;
const int MIN_HEIGHT = 1;

void print_brick()
{
    printf("#");
}

void print_space()
{
    printf(" ");
}

void break_line()
{
    printf("\n");
}

void print_left(int height, int current_line)
{
    for (int j = height; j >= 1; j--)
    {
        if (j > current_line)
        {
            print_space();
        }
        else
        {
            print_brick();
        }
    }
}

void print_right(int current_line)
{
    for (int j = 1; j <= current_line; j++)
    {
        print_brick();
    }
}

bool is_between(value, min, max)
{
    return (value >= min && value <= max);
}

int main(void)
{
    int height;
    bool finished = false;

    while (!finished)
    {
        height = get_int("Height: ");
        if (is_between(height, MIN_HEIGHT, MAX_HEIGHT))
        {
            for (int i = 1; i <= height; i++)
            {
                int current_line = i;

                print_left(height, current_line);

                print_space();
                print_space();

                print_right(current_line);

                break_line();
            }
            finished = true;
        }
    }
}
