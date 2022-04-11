#include <stdio.h>
#include <string.h>
    int match(char *p, char *t)
    {
        int n = strlen(t), i = 0;
        int m = strlen(p), j = 0;
        while(j < m && i < n)
            {
                if(t[i] == p[j]){i++;j++;}
            else
            {
                i -= j - 1;
                j = 0;
            }
            }
            return i - j;

    }
    int match2(char *p, char *t)
    {
        int n = strlen(t), i = 0;
        int m = strlen(p), j = 0;
        for(i = 0; i < n - m + 1; i++)
        {
            for(j = 0; j < m; j++)
            {
                if(t[i + j] != p[j])
                    break;
            }
            if (m <= j)
                break;
        }
        return i;
    }
    int main ()
{
    char a[3] = "ass";
    char b[100] = "sssasadassass";
    int i;
    i = match(a, b);
    printf("%d", i);
    return 0;
}
