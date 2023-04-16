#include <iostream>
using namespace std;

const int N = 8;
int board[N][N] = { 0 };

bool check(int, int);
bool solve(int);
void printSolution();

int main() 
{
    cout << "Problem 065 - To Vinh Tien - 22521474" << endl;
    if (solve(0) == true) 
    {
        cout << "\nSolution exists (with '1's indicate the locations of the Queen):" << endl;
        printSolution();
    }
    else 
    {
        cout << "\nSolution does not exist." << endl;
    }
    return 1;
}

bool check(int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (board[row][i] == true)
            return false;
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == true)
            return false;
    }
    for (int i = row, j = col; i < N && j >= 0; i++, j--)
    {
        if (board[i][j] == true)
            return false;
    }

    return true;
}

bool solve(int col)
{
    if (col >= N)
        return true;
    for (int row = 0; row < N; row++)
    {
        if (check(row, col) == true)
        {
            board[row][col] = 1;
            if (solve(col + 1) == true)
                return true;
            board[row][col] = 0;
        }
    }
    return false;
}

void printSolution()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
