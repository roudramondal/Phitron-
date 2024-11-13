#include <stdio.h>

int main() 
{
    int N, M;

    scanf("%d %d", &N, &M);

    
    if (N < 0 || N >= 24 || M < 0 || M >= 24)
    {
      return 1;
    }

    
    if (N <= M) {
        
        for (int i = N; i <= M; i++) {
            printf("%d ", i);
        }
    } else {
        
        for (int i = N; i < 24; i++) {
            printf("%d ", i);
        }
        for (int i = 0; i <= M; i++) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
