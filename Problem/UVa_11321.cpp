#include<stdio.h>
#include<stdlib.h>


typedef struct List{
    int num;
    int mod;
    int Even_Odd;
}List;


void swap(List *a, List *b){
    List temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


int main(){


    int N, M;
    int i, j, k, temp;
    int Odd_start, Even_start, count;


    while(scanf("%d %d", &N, &M)){


        printf("%d %d\n", N, M);


        if(N == 0 && M == 0){
            break;
        }
        else{


            List list[10000] = {0};
            List sorted[10000] = {0};


            for(i = 0; i < N; i++){
                scanf("%d", &list[i].num);
                list[i].mod = list[i].num % M;
                list[i].Even_Odd = abs(list[i].num % 2);
            }


            // ascending (remainder)
            for(i = 0; i < N - 1; i++){
                for(j = i + 1; j < N; j++){
                    if(list[i].mod > list[j].mod){
                        swap(&list[i], &list[j]);
                    }
                }
            }


            Odd_start = 0;
            for(i = 0; i < N; i++){
                if(list[i].mod != list[i + 1].mod || i == N - 1){
                    // count the number of odd
                    count = 0;
                    for(j = Odd_start; j <= i; j++){
                        if(list[j].Even_Odd == 1){
                            count++;
                        }
                    }


                    // odd → even
                    Even_start = count;
                    temp = Odd_start;
                    for(j = Odd_start; j <= i; j++){
                        if(list[j].Even_Odd == 1){
                            sorted[temp] = list[j];
                            temp++;
                        }
                        else{
                            sorted[Odd_start + Even_start] = list[j];
                            Even_start++;
                        }
                    }


                    // odd ascending & even descending
                    for(j = Odd_start; j < Odd_start + count - 1; j++){
                        for(k = j + 1; k < Odd_start + count; k++){
                            if(sorted[j].num < sorted[k].num){
                                swap(&sorted[j], &sorted[k]);
                            }
                        }
                    }
                    for(j = Odd_start + count; j < i; j++){
                        for(k = j + 1; k <= i; k++){
                            if(sorted[j].num > sorted[k].num){
                                swap(&sorted[j], &sorted[k]);
                            }
                        }
                    }


                    Odd_start = i + 1;
                }
            }


            for(i = 0; i < N; i++){
                printf("%d\n", sorted[i].num);
            }
        }
    }


    return 0;
}
