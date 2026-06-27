#include<iostream>

int main()
{
    int a[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    int b[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int c[2][3];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            c[i][j] = 0;

            for(int k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    std::cout << "Result Matrix:\n";

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout << c[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}