#include <iostream>

using namespace std;

/*按顺序输出数组元素*/
void trace(int A[], int N)
{
    int i;
    for (i = 0; i < N; i++) {
        if(i>0){
            cout << A[i];
        }
        cout << A[i];
    }
}

/* 插入排序(0起点数组) */

void insertionSort(int A[],int N)
{
    int j,i,v;
    for (i = 0; i < N; i++) {
        v = A[i];
        j = i - 1;
        while (j>=0 && A[j] > v)
        {
            A[j+i] = A[j];
            j--;
        }
        A[j+1] = v;
        trace(A,N);
    }
}

int main()
{
    int N,i,j;
    int A[100];

    cin >> N;
    for (i = 0; i < N ; i++)
    {
        cout << A[i] << endl;
    }

    trace(A,N);
    insertionSort(A,N);
    return 0;
}