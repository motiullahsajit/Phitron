#include<stdio.h>
#include<stdbool.h>

int isWin(int a[][4],int n){

    for(int i=1; i<=n; i++){
        if(a[i][1] == a[i][2] && a[i][2] == a[i][3] && a[i][1] != -1){
            return a[i][1];
        }
    }
    for(int j=1; j<=n; j++){
        if(a[1][j] == a[2][j] && a[2][j] == a[3][j] && a[1][j] != -1){
            return a[1][j];
        }
    }

    if(a[1][1] == a[2][2] && a[2][2] == a[3][3] && a[1][1] != -1){
        return a[1][1];
    }
    
    if(a[1][3] == a[2][2] && a[2][2] == a[3][1] && a[1][3] != -1){
        return a[1][3];
    }

    return -1;

}


void printCell(int a[][4],int n){
    printf("\n");
    for(int i=1; i <=n; i++){
        for(int j=1; j <=n; j++){
            if(a[i][j] == -1) printf(" ");
            if(a[i][j] == 1) printf("X");
            if(a[i][j] == 2) printf("0");
            if(j<n) printf("\t|\t");
        }
        printf("\n");
        if(i<n) printf("_____________________________________");
        printf("\n\n");
    } 
}

// int check(int a[][4],int n){
//     if(n == 1){
//         int count = 0;
//         int count2 = 0;
//         for(int i=1; i<=3;i++){
//             for(int j=1; j<=n; j++){
//                 if(a[i][j] == 1)
//                     count++;
//                 if(a[j][i] == 1)
//                     count2++;
//             }
//             if(count == 3) return 1;
//             if(count2 == 3) return 1;
//         }

//         if(a[1][1] + a[2][2] + a[3][3] == 3)
//             return 1;
//         if(a[1][3] + a[2][2] + a[3][1] == 3)
//             return 1;

//         return 0;
//     }
//     if(n == 2){
//         int count = 0;
//         int count2 = 0;
//         for(int i=1; i<=3;i++){
//             for(int j=1; j<=n; j++){
//                 if(a[i][j] == 2)
//                     count++;
//                 if(a[j][i] == 2)
//                     count2++;
//             }
//             if(count == 3) return 1;
//             if(count2 == 3) return 1;
//         }

//         if(a[1][1] + a[2][2] + a[3][3] == 6)
//             return 1;
//         if(a[1][3] + a[2][2] + a[3][1] == 6)
//             return 1;

//         return 0;
//     }
// }


int main(){
    int n=3,inputCount=0;
    int a[4][4];

    for(int i=1; i <=n; i++){
        for(int j=1; j <=n; j++){
            a[i][j]=-1;
        }
    }

    bool player1 = true;
    bool player2 = false;

    while (true)
    {
        system("cls");
        printCell(a,n);
        int r,c;
        if(player1){
            Flag:
            printf("Player 1's Turn (X), Enter row and column: ");
            scanf("%d %d",&r,&c);
            if(a[r][c] != -1){
                printf("Invalid input\n");
                goto Flag;
            }
            a[r][c] = 1;
            player1 = false;
            player2 = true;
        }else{
            Flag2:
            printf("Player 2's Turn (0), Enter row and column: ");
            scanf("%d %d",&r,&c);
            if(a[r][c] != -1){
                printf("Invalid input\n");
                goto Flag2;
            }
            a[r][c] = 2;
            player1 = true;
            player2 = false;
        }


        if(isWin(a,n) == 1){
            system("cls");
            printCell(a,n);
            printf("Player 1 has won\n");
            break;
        }else if(isWin(a,n) == 2){
            system("cls");
            printCell(a,n);
            printf("Player 2 has won\n");
            break;
        }

        inputCount++;
        if(inputCount == 9){
            system("cls");
            printCell(a,n);
            printf("Noone has won the game, Its a draw\n");
            break;
        }

    }

}