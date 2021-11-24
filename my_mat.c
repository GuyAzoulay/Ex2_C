#include <stdio.h>
#include <math.h>
#define N 10
int Mat[N][N];
void Floyd_Warshall(int Mat[N][N]);
int find_minimum(int,int);

//this func's aim is to fill the matrix with values from the //user and than
// check all the necessary things we asked to implement

void fill_Mat(int Mat[10][10]){
int val;
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            scanf("%d", &val);
		 Mat[i][j]=val;
        }
        
    }
    Floyd_Warshall(Mat);
}
//this is the Floyd_Warshall algo
void Floyd_Warshall(int Mat[10][10]){   //Mat[i][j]-i row //Mat[i][j]- j colomn
    for (int k = 0; k <= 9; k++){
        for (int i = 0; i <= 9 ; i++){
            for (int j = 0; j <= 9; j++){
            if(Mat[i][j] != 0 && Mat[i][k] != 0 && Mat[k][j] != 0){
                    Mat[i][j] =  find_minimum(Mat[i][j], Mat[i][k]+Mat[k][j]);
                }
                if (Mat[i][j]==0 && i != j && Mat[i][k] != 0 && Mat[k][j] != 0){
                    Mat[i][j]= Mat[i][k] + Mat[k][j];
                }
                
            }
            
        }
        
    }

}
//this function checks if there is a path between 2 vertis, if // there is return 1
// if there is not return 0
void containPath( int Mat[10][10],int i, int j){
    if (Mat[i][j] == 0){
        return "False";
    }
    else{
        return "True";
    }
}
//this function check the weight between 2 vertix
// if there is no weight between the 2 vertis return 0
void weight(int Mat[N][N], int i, int j){
    int connect= containPath(Mat , i , j);
    if (connect==0)
    {
        printf("-1");
    }
    else{
        printf("%d",Mat[i][j]);
    }
    
}
//finding the minimun between 2 integers
int find_minimum(int a , int b){
    return (a > b ) ? b: a;
    
}
