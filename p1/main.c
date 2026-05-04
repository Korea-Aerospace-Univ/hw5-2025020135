#include <stdio.h>

int main(void)
{
    int N;
    int found = 0;
    scanf("%d",&N);
    for(int i=1;i*900<N; i++) {
        for(int j=1; j*750<N; j++) {
            for(int k=1; k*200<N; k++) {
                if (i*900 + j*750 + k*200 == N) {
                    if (j%2==0) {
                        if (k<i || k<j){
                            printf("%d %d %d\n",i,j,k);
                            found = 1;
                        }
                    }
                }
                
            }
        }
    }
    if (found == 0) {
        printf("none");
    }
    return 0;
}
