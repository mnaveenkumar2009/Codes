    #include<bits/stdc++.h>
    int main()
    {
        int a,n,k;
        int i=0;
        scanf("%d%d%d",&a,&n,&k);
        while(i!=k)
        {
            printf("%d ",a%(n+1));
            a=a/(n+1);
            i++;
        }
    return 0;
    }   