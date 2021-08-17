half pyramid
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }


    full pyramid: formula = 2n - 1
    for ( i = 0; i < row; i++)
    {
        for ( j = i + 1; j < row; j++ )
        {
            printf("  ");
        }
        for ( j = 0; j < (2*i) - 1; j++)
        {
            printf(" *");
        }
        printf("\n");    
    }