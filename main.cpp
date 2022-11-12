#include <iostream>
int main() {
    int const n=5;
    int M[n][n] = {};
    int x = 1;
    for (int c=0; c<n/2; c++){
        for (int i=c; i<n-c; i++) M[i][c]=x++; //левая граница вниз
        for (int i=c+1; i<n-c; i++) M[n-1-c][i]=x++; //нижняя граница вправо
        for (int i=n-2-c; i>=c;i--) M[i][n-1-c]=x++; //левая граница вверх
        for (int i=n-2-c; i>=c+1; i--) M[c][i]=x++; //верхняя влево
    }
    if (M[n/2][n/2]==0) M[n/2][n/2] = n*n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << M[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}
