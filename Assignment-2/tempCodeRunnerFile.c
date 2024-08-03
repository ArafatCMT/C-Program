 if (pos<=0 || pos>n)
    {
        printf("Invalid Position\n");
    }
    else
    {
        for(i=pos; i<n; i++)
        {
            ar[i-1]=ar[i];
        }
        n--;
        for(i=0; i<n; i++)
        {
            printf("%d ",ar[i]);
        }
    }