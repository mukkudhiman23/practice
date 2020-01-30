#include <stdio.h>

int main()
{
    int num[] = {2, 1, 3, 8};
    int i, j, k, l;

    for (i = 0; i <= 3; i++)
    {
        // First digit of hours can be from the range [0, 2]
        if (!(num[i] >= 0 && num[i] <= 2))
        {
            continue;
        }

        for (j = 0; j <= 3; j++)
        {
            // If first digit of hours was chosen as 2 then
            // the second digit of hours can be
            // from the range [0, 3]
            if (num[i] == 2)
            {
                if (!(num[j] >= 0 && num[j] <= 3 && i != j))
                {
                    continue;
                }
            }
            // Else it can be from the range [0, 9]
            else
            {
                if (!(num[j] >= 0 && num[j] <= 9 && i != j))
                {
                    continue;
                }
            }

            for (k = 0; k <= 3; k++)
            {
                // First digit of minutes can be from the range [0, 5]
                if (!(num[k] >= 0 && num[k] <= 5 && k != i && k != j))
                {
                    continue;
                }

                for (l = 0; l <= 3; l++)
                {
                    // Second digit of minutes can be from the range [0, 9]
                    if (!(num[l] >= 0 && num[l] <= 9 && l != k && l != j && l != i))
                    {
                        continue;
                    }

                    printf("%d%d:%d%d\n", num[i], num[j], num[k], num[l]);
                }
            }
        }
    }
}