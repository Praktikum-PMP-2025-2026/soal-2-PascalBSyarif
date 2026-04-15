#include <stdio.h>

int main(){
    int T;
    int n;
    int count;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n);
        count = 0;
        while (n > 1)
        {
            if (n%2 == 0)
            {
                n = n/2;
            }
            else if ((n%2 != 0)&&(n>1))
            {
                n = 3*n + 1;
            }

            count = count + 1;
        }
        printf("LANGKAH %d\n", count);
    }
}
