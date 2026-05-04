#include <stdio.h> 

int main(void)
{
    int N;
    bool found = false;
    scanf("%d",&N);
    for(int i=1;i*900<N; i++) {
        for(int j=2; j*750<N; j+=2) {
            for(int k=1; k*200<N; k++) {
                if ((i*900 + j*750 + k*200 == N)&&(k<i || k<j)) {
                    printf("%d %d %d\n",i,j,k);
                    found = true;
                }
            }
        }
    }
    if (!found) {
        printf("none");
    }
    return 0;
}
