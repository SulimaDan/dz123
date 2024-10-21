#include <iostream>
#include <vector>

using namespace std;
//
//const int N = 6;
//int board[N][N];
//
//
//int moveX[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
//int moveY[] = { 1, 2, 2, 1, -1, -2, -2, -1 };
//
//bool isSafe(int x, int y) {
//    return (x >= 0 && x < N && y >= 0 && y < N && board[x][y] == -1);
//}
//
//void printBoard() {
//    for (int x = 0; x < N; x++) {
//        for (int y = 0; y < N; y++)
//            cout << board[x][y] << "\t";
//        cout << endl;
//    }
//}
//
//bool solveKTUtil(int x, int y, int movei) {
//    if (movei == N * N)
//        return true;
//
//    for (int k = 0; k < 8; k++) {
//        int nextX = x + moveX[k];
//        int nextY = y + moveY[k];
//        if (isSafe(nextX, nextY)) {
//            board[nextX][nextY] = movei;
//            if (solveKTUtil(nextX, nextY, movei + 1))
//                return true;
//            else
//                board[nextX][nextY] = -1;  
//        }
//    }
//    return false;
//}
//
//bool solveKnightTour(int startX, int startY) {
//
//    for (int x = 0; x < N; x++)
//        for (int y = 0; y < N; y++)
//            board[x][y] = -1;
//
//    board[startX][startY] = 0;
//
//    if (!solveKTUtil(startX, startY, 1)) {
//        cout << "Немає розв'язку." << endl;
//        return false;
//    }
//    else
//        printBoard();
//
//    return true;
//}
//
//int main() {
//    int startX, startY;
//    cout << "Введіть початкові координати коня (x y): ";
//    cin >> startX >> startY;
//
//    solveKnightTour(startX, startY);
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//#include <cstdlib>
//#include <ctime>
//
//
//
//const int SIZE = 4;
//int puzzle[SIZE][SIZE];
//int emptyX = SIZE - 1, emptyY = SIZE - 1;
//
//void initializePuzzle() {
//    int num = 1;
//    for (int i = 0; i < SIZE; ++i) {
//        for (int j = 0; j < SIZE; ++j) {
//            if (i == SIZE - 1 && j == SIZE - 1) {
//                puzzle[i][j] = 0;  
//            }
//            else {
//                puzzle[i][j] = num++;
//            }
//        }
//    }
//}
//
//void printPuzzle() {
//    for (int i = 0; i < SIZE; ++i) {
//        for (int j = 0; j < SIZE; ++j) {
//            if (puzzle[i][j] == 0)
//                cout << "   ";
//            else
//                cout << puzzle[i][j] << "  ";
//        }
//        cout << endl;
//    }
//}
//
//bool move(int dx, int dy) {
//    int newX = emptyX + dx;
//    int newY = emptyY + dy;
//
//    if (newX >= 0 && newX < SIZE && newY >= 0 && newY < SIZE) {
//        swap(puzzle[emptyX][emptyY], puzzle[newX][newY]);
//        emptyX = newX;
//        emptyY = newY;
//        return true;
//    }
//
//    return false;
//}
//
//int main() {
//    initializePuzzle();
//    char command;
//
//    while (true) {
//        printPuzzle();
//        cout << "Введіть команду (w/a/s/d для руху): ";
//        cin >> command;
//
//        if (command == 'w') move(-1, 0);
//        else if (command == 'a') move(0, -1);
//        else if (command == 's') move(1, 0);
//        else if (command == 'd') move(0, 1);
//    }
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//const int SIZE = 3;
//char board[SIZE][SIZE];
//
//void initializeBoard() {
//    for (int i = 0; i < SIZE; i++)
//        for (int j = 0; j < SIZE; j++)
//            board[i][j] = ' ';
//}
//
//void printBoard() {
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            cout << board[i][j];
//            if (j < SIZE - 1) cout << "|";
//        }
//        cout << endl;
//        if (i < SIZE - 1) cout << "-----" << endl;
//    }
//}
//
//bool checkWin(char player) {
//    for (int i = 0; i < SIZE; i++) {
//        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
//            return true;
//        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
//            return true;
//    }
//    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
//        return true;
//    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
//        return true;
//    return false;
//}
//
//bool isBoardFull() {
//    for (int i = 0; i < SIZE; i++)
//        for (int j = 0; j < SIZE; j++)
//            if (board[i][j] == ' ') return false;
//    return true;
//}
//
//int main() {
//    initializeBoard();
//    char currentPlayer = 'X';
//    int x, y;
//
//    while (true) {
//        printBoard();
//        cout << "Гравець " << currentPlayer << ", введіть координати (x y): ";
//        cin >> x >> y;
//
//        if (board[x][y] == ' ') {
//            board[x][y] = currentPlayer;
//            if (checkWin(currentPlayer)) {
//                printBoard();
//                cout << "Гравець " << currentPlayer << " виграв!" << endl;
//                break;
//            }
//            else if (isBoardFull()) {
//                printBoard();
//                cout << "Нічия!" << endl;
//                break;
//            }
//            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
//        }
//        else {
//            cout << "Клітинка зайнята, спробуйте ще раз." << endl;
//        }
//    }
//
//    return 0;
//}
//
//
//
//#include <iostream>
//using namespace std;
//
//char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };  
//
//void printBoard() {
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << board[i][j];
//            if (j < 2) cout << "|";
//        }
//        if (i < 2) cout << "\n-----\n";
//    }
//    cout << endl;
//}
//
//bool checkWin() {
//    for (int i = 0; i < 3; i++) {
//        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true;  
//        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true;  
//    }
//    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true;      
//    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true;      
//    return false;
//}
//
//int main() {
//    char currentPlayer = 'X';
//    int move;
//
//    for (int turn = 0; turn < 9; turn++) {
//        printBoard();
//        cout << "Гравець " << currentPlayer << ", введіть номер клітинки (1-9): ";
//        cin >> move;
//
//        int row = (move - 1) / 3;
//        int col = (move - 1) % 3;
//
//        if (board[row][col] != 'X' && board[row][col] != 'O') {
//            board[row][col] = currentPlayer;
//
//            if (checkWin()) {
//                printBoard();
//                cout << "Гравець " << currentPlayer << " виграв!" << endl;
//                return 0;
//            }
//
//            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';  
//        }
//        else {
//            cout << "Клітинка зайнята! Спробуйте ще раз." << endl;
//            turn--;  
//        }
//    }
//
//    printBoard();
//    cout << "Нічия!" << endl;
//    return 0;
//}



//int main() {
//    const int SIZE = 5;
//    int source[SIZE] = { 1, 2, 3, 4, 5 };
//    int destination[SIZE];
//
//    int* ptrSrc = source;        
//    int* ptrDest = destination; 
//
//    for (int i = 0; i < SIZE; i++) {
//        *(ptrDest + i) = *(ptrSrc + i);  
//    }
//
//    cout << "Копія масиву: ";
//    for (int i = 0; i < SIZE; i++) {
//        cout << destination[i] << " ";
//    }
//
//    return 0;
//}









//int main() {
//    const int SIZE = 5;
//    int arr[SIZE] = { 1, 2, 3, 4, 5 };
//
//    int* start = arr;          
//    int* end = arr + SIZE - 1; 
//
//
//    while (start < end) {
//        int temp = *start;
//        *start = *end;
//        *end = temp;
//        start++;
//        end--;
//    }
//
//
//    cout << "Масив у зворотному порядку: ";
//    for (int i = 0; i < SIZE; i++) {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}






#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int source[SIZE] = { 1, 2, 3, 4, 5 };
    int destination[SIZE];

    int* ptrSrc = source;       
    int* ptrDest = destination + SIZE - 1;  


    for (int i = 0; i < SIZE; i++) {
        *(ptrDest - i) = *(ptrSrc + i);  
    }

    cout << "Скопійований масив у зворотному порядку: ";
    for (int i = 0; i < SIZE; i++) {
        cout << destination[i] << " ";
    }

    return 0;
}
