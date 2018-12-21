#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>

int main()
{
    int color, gender;
    char topLeft = 201;
    char boxHorizontal = 205;
    char boxTopRight = 187;
    char boxVertical = 186;
    char boxBottomLeft = 200;
    char boxBottomRight = 188;
    char graphic = 176;
    char primeira = 166;
    char tenth = 167;
    char name[10];
    char tilde = 131;
    int collumns = 59;

    printf("Insert your name please: \n");
    scanf("%s", &name);

    system("cls");

    printf("Insert your gender please:\n");
    printf("1-Male\n");
    printf("2-Female\n");
    scanf("%d", &gender);

    system("cls");

    printf("What color do you want for your christmas card? \n");
    printf("Available colors:\n");
    printf("1-Red and white\n");
    printf("2-Green and white\n");
    printf("3-Blue and white\n");
    printf("4-White and red\n");
    printf("5-White and black\n");
    scanf(" %d", &color);

    switch (color)
    {
    case 1:
        system("color 4F");
        break;

    case 2:
        system("color 2F");
        break;

    case 3:
        system("color 1F");
        break;

    case 4:
        system("color F4");
        break;

    case 5:
        system("color F0");
        break;
    }

    system("cls");

    if (gender == 1)
    {
        printf("Para o Senhor %s...\n", name);
    }
    else if (gender == 2)
    {
        printf("Para a Senhora %s...\n", name);
    }

    printf("%c", topLeft);

    for (int i = 0; i < collumns; ++i)
    {
        printf("%c", boxHorizontal);
    }

    printf("%c", boxTopRight);
    printf("\n");
    for (int row = 0; row < 2; ++row)
    {
        printf("%c", boxVertical);
        for (int i = 0; i < collumns; ++i)
        {
            printf("%c", graphic);
        }
        printf("%c\n", boxVertical);
    }

    printf("\7%c%c%c%c%c%c%c%c*%c%c%c%c", boxVertical, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic);
    for (int row = 0; row < 1; ++row)
    {
        for (int column = 0; column < 16; ++column)
        {
            printf("%c", graphic);
        }
        printf("O Ruben e o Jo%co da turma%c%c%c%c%c%c%c\n", tilde, graphic, graphic, graphic, graphic, graphic, graphic, boxVertical);
    }

    printf("%c%c%c%c%c%c%c***%c%c%c", boxVertical, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic);
    for (int row = 0; row < 1; ++row)
    {
        for (int column = 0; column < 21; ++column)
        {
            printf("%c", graphic);
        }
        printf("%c%c%c%c%c 10%c11%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", graphic, graphic, graphic, graphic, graphic, tenth, primeira, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, boxVertical);
    }

    printf("%c%c%c%c%c%c*****%c%c", boxVertical, graphic, graphic, graphic, graphic, graphic, graphic, graphic);
    for (int row = 0; row < 1; ++row)
    {
        for (int column = 0; column < 21; ++column)
        {
            printf("%c", graphic);
        }
        printf("desejam-lhe um%c%c%c%c%c%c%c%c%c%c%c%c%", graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic);
        printf("%c", boxVertical);
    }

    printf("\n%c%c%c%c%c*******%c", boxVertical, graphic, graphic, graphic, graphic, graphic);
    for (int row = 0; row < 1; ++row)
    {
        for (int column = 0; column < 22; ++column)
        {
            printf("%c", graphic);
        }
        printf("FELIZ NATAL%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, graphic, boxVertical);
    }

    printf("%c%c%c%c*********", boxVertical, graphic, graphic, graphic);
    for (int row = 0; row < 1; ++row)
    {
        for (int column = 0; column < 47; ++column)
        {
            printf("%c", graphic);
        }
        printf("%c\n", boxVertical);
    }

    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", boxVertical, graphic, graphic, graphic, graphic, graphic, graphic, graphic, boxVertical, graphic, graphic, graphic, graphic);
    for (int row = 0; row < 1; ++row)
    {
        for (int column = 0; column < 47; ++column)
        {
            printf("%c", graphic);
        }
        printf("%c\n", boxVertical);
    }

    printf("%c", boxBottomLeft);
    for (int column = 0; column < 59; ++column)
    {
        printf("%c", boxHorizontal);
    }
    printf("%c", boxBottomRight);
    printf("\n");
}
