#include <stdio.h>

int main() {
    int n;
    char Elev, Per;

    do {
        printf("Digite a quantidade de moradores do predio: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Valor incorreto, tente novamente\n");
        }
    } while (n <= 0);

    int Elev_A = 0, Elev_B = 0, Elev_C = 0;
    int Per_M = 0, Per_T = 0, Per_N = 0;

    int ElevA_PerM = 0, ElevA_PerT = 0, ElevA_PerN = 0;
    int ElevB_PerM = 0, ElevB_PerT = 0, ElevB_PerN = 0;
    int ElevC_PerM = 0, ElevC_PerT = 0, ElevC_PerN = 0;

    for (int i = 0; i < n; i++) {
        printf("Digite qual elevador o morador mais usou: ");
        scanf(" %c", &Elev);
        printf("Digite qual periodo o morador usou o elevador: ");
        scanf(" %c", &Per);

        if (Elev == 'A' || Elev == 'a') {
                Elev_A++;

            if (Per == 'M' || Per == 'm'){
                ElevA_PerM++;
            } 
            else if (Per == 'T' || Per == 't'){
                ElevA_PerT++;
            }
            else if (Per == 'N' || Per == 'n'){
                ElevA_PerN++;
            }
        } else if (Elev == 'B' || Elev == 'b') {
                Elev_B++;

            if (Per == 'M' || Per == 'm'){
                ElevB_PerM++;
            }
            else if (Per == 'T' || Per == 't'){
                ElevB_PerT++;
            }
            else if (Per == 'N' || Per == 'n'){
                ElevB_PerN++;
            }
        } else if (Elev == 'C' || Elev == 'c') {
                Elev_C++;

            if (Per == 'M' || Per == 'm'){
                ElevC_PerM++;
            }
            else if (Per == 'T' || Per == 't'){
                ElevC_PerT++;
            }
            else if (Per == 'N' || Per == 'n'){
                ElevC_PerN++;
            }
        }

        if (Per == 'M' || Per == 'm'){
            Per_M++;
        }
        else if (Per == 'T' || Per == 't'){
            Per_T++;
        }
        else if (Per == 'N' || Per == 'n'){
            Per_N++;
        }
    }

    int Total_Elev = Elev_A;
    printf("\n");

    if (Elev_B > Total_Elev){
        Total_Elev = Elev_B;
    } 
    if (Elev_C > Total_Elev){
        Total_Elev = Elev_C;
    } 

    if (Elev_A == Total_Elev){
        printf("A %d\n", Elev_A);
    }
    if (Elev_B == Total_Elev){
        printf("B %d\n", Elev_B);
    }
    if (Elev_C == Total_Elev){
        printf("C %d\n", Elev_C);
    }

    int Total_Per = Per_M;
    printf("\n");

    if (Per_T > Total_Per){
        Total_Per = Per_T;
    } 
    if (Per_N > Total_Per){
        Total_Per = Per_N;
    }

    if (Per_M == Total_Per){
        printf("M %d\n", Per_M); 
        } 
    if (Per_T == Total_Per){
        printf("T %d\n", Per_T);
    } 
    if (Per_N == Total_Per){
        printf("N %d\n", Per_N);
    } 

    int Elev_Per_Comb = ElevA_PerM;
    printf("\n");

    if (ElevA_PerT > Elev_Per_Comb){
        Elev_Per_Comb = ElevA_PerT;
    } 
    if (ElevA_PerN > Elev_Per_Comb){
        Elev_Per_Comb = ElevA_PerN;
    } 
    if (ElevB_PerM > Elev_Per_Comb){
        Elev_Per_Comb = ElevB_PerM;
    } 
    if (ElevB_PerT > Elev_Per_Comb){
        Elev_Per_Comb = ElevB_PerT;
    } 
    if (ElevB_PerN > Elev_Per_Comb){
        Elev_Per_Comb = ElevB_PerN;
    } 
    if (ElevC_PerM > Elev_Per_Comb){
        Elev_Per_Comb = ElevC_PerM;
    } 
    if (ElevC_PerT > Elev_Per_Comb){
        Elev_Per_Comb = ElevC_PerT;
    } 
    if (ElevC_PerN > Elev_Per_Comb){
        Elev_Per_Comb = ElevC_PerN;
    } 

    if (ElevA_PerM == Elev_Per_Comb){
        printf("A M %d\n", ElevA_PerM);
    } 
    if (ElevA_PerT == Elev_Per_Comb){
        printf("A T %d\n", ElevA_PerT);
    } 
    if (ElevA_PerN == Elev_Per_Comb){
        printf("A N %d\n", ElevA_PerN);
    } 
    if (ElevB_PerM == Elev_Per_Comb){
        printf("B M %d\n", ElevB_PerM);
    } 
    if (ElevB_PerT == Elev_Per_Comb){
        printf("B T %d\n", ElevB_PerT);
    } 
    if (ElevB_PerN == Elev_Per_Comb){
        printf("B N %d\n", ElevB_PerN);
    } 
    if (ElevC_PerM == Elev_Per_Comb){
        printf("C M %d\n", ElevC_PerM);
    } 
    if (ElevC_PerT == Elev_Per_Comb){
        printf("C T %d\n", ElevC_PerT);
    } 
    if (ElevC_PerN == Elev_Per_Comb){
        printf("C N %d\n", ElevC_PerN);
    }
}