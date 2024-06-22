#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

const int rows = 10;
const int cols = 20;

char maze[rows][cols];
bool hasKey = false;    
bool visited[rows][cols] = {false}; 


int playerX, playerY;


void initializeMaze() {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            maze[i][j] = '#';
            visited[i][j] = false;
        }
    }


    for (int i = 1; i < rows - 1; ++i) {
        for (int j = 1; j < cols - 1; ++j) {
            maze[i][j] = ' ';
        }
    }


    maze[1][0] = 'S';  
    maze[rows - 2][cols - 1] = 'E';  

   
    maze[1][3] = '#';
    maze[2][3] = '#';
    maze[3][3] = '#';
    maze[4][3] = '#';
    maze[5][3] = '#';
    maze[6][3] = '#';
    maze[7][3] = '#';
   
    maze[2][3] = '#';
    maze[2][4] = '#';
    maze[2][5] = '#';
    maze[2][6] = '#';
    maze[2][7] = '#';
   
    maze[4][5] = '#';
    maze[5][5] = '#';
    maze[6][5] = '#';
    maze[7][5] = '#';
    maze[8][5] = '#';
   
    maze[4][7] = '#';
    maze[5][7] = '#';
    maze[6][7] = '#';
    maze[7][7] = '#';
   
    maze[4][8] = '#';
   
    maze[1][9] = '#';
    maze[2][9] = '#';
    maze[3][9] = '#';
    maze[4][9] = '#';

    maze[6][9] = '#';
    maze[7][9] = '#';
    maze[8][9] = '#';

    maze[2][11] = '#';
    maze[3][11] = '#';
    maze[4][11] = '#';
    maze[5][11] = '#';
    maze[6][11] = '#';
    maze[7][11] = '#';
   
    maze[7][12] = '#';
    maze[7][13] = '#';
    maze[7][14] = '#';
    maze[7][15] = '#';
    maze[7][16] = '#';
    maze[7][17] = '#';
    maze[8][17] = '#';

    maze[1][13] = '#';
    maze[2][13] = '#';
    maze[3][13] = '#';
    maze[4][13] = '#';
    maze[5][13] = '#';
   

    maze[1][15] = '#';
    maze[2][15] = '#';
    maze[3][15] = '#';
    maze[4][15] = '#';
    maze[5][15] = '#';
   

    maze[2][17] = '#';
    maze[3][17] = '#';
    maze[4][17] = '#';
    maze[5][17] = '#';
    maze[6][17] = '#';
   
    
	 maze[1][4] = 'K';
     maze[8][16] = 'K';
     maze[1][14] = 'K'; // 'K' represents a key
     maze[8][7] = 'D';
     maze[6][13] = 'D';
     maze[1][17] = 'D'; // 'D' represents a door


    playerX = 1;
    playerY = 0;
}


void displayMaze() {
    // Clear the console by printing multiple newlines
    for (int i = 0; i < 50; ++i) {
        cout << endl;
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i == playerX && j == playerY) {
                cout << 'P' << ' ';  // 'P' represents the player
            } else if (visited[i][j]) {
                cout << '.' << ' '; // '.' represents a visited location
            } else {
                cout << maze[i][j] << ' ';
            }
        }
        cout << endl;
    }
    cout << "\nFree space around the player:\n";
    for (int i = playerX - 1; i <= playerX + 1; ++i) {
        for (int j = playerY - 1; j <= playerY + 1; ++j) {
            if (i >= 0 && i < rows && j >= 0 && j < cols && maze[i][j] == ' ') {
                cout << ' ' << ' ';
            } else if (maze[i][j] == 'P'){
                cout << 'P' << ' '; // 'P' represents player
            } else {
                cout << '#' << ' '; // '#' represents non-free space
            }
        }
        cout << endl;
    }
}


void movePlayer(char moveDirection) {
    switch (moveDirection) {
        case 'w':
            if (maze[playerX - 1][playerY] != '#') {
            	visited[playerX][playerY] = true;
                if (maze[playerX - 1][playerY] == 'K') {
                   
                    maze[playerX - 1][playerY] = ' ';
                    hasKey = true;
                } else if (maze[playerX - 1][playerY] == 'D' && !hasKey) {
                   
                    return;
                }
                maze[playerX][playerY] = ' ';
                --playerX;
            }
            break;
            
        case 's':
            if (maze[playerX + 1][playerY] != '#') {
            	visited[playerX][playerY] = true;
                if (maze[playerX + 1][playerY] == 'K') {
                    
                    maze[playerX + 1][playerY] = ' ';
                    hasKey = true;
                } else if (maze[playerX + 1][playerY] == 'D' && !hasKey) {
           
                    return;
                }
                maze[playerX][playerY] = ' ';
                ++playerX;
            }
            break;
        case 'a':
            if (maze[playerX][playerY - 1] != '#') {
            	visited[playerX][playerY] = true;
                if (maze[playerX][playerY - 1] == 'K') {
                 
                    maze[playerX][playerY - 1] = ' ';
                    hasKey = true;
                } else if (maze[playerX][playerY - 1] == 'D' && !hasKey) {
                   
                    return;
                }
                maze[playerX][playerY] = ' ';
                --playerY;
            }
            break;
        case 'd':
            if (maze[playerX][playerY + 1] != '#') {
            	visited[playerX][playerY] = true;
                if (maze[playerX][playerY + 1] == 'K') {
                   
                    maze[playerX][playerY + 1] = ' ';
                    hasKey = true;
                } else if (maze[playerX][playerY + 1] == 'D' && !hasKey) {
       
                    return;
                }
                maze[playerX][playerY] = ' ';
                ++playerY;
            }
            break;
    }
}

int main() {
    srand(time(0));  
    initializeMaze();

    int endX = rows - 2, endY = cols - 1;

    while (true) {
        displayMaze();

 
        char moveDirection;
        cout << "Enter movement (w/a/s/d): ";
        cin >> moveDirection;

       
        movePlayer(moveDirection);

   
        if (playerX == endX && playerY == endY) {
            cout << "Congratulations! You reached the end of the maze." << endl;
            break;
        }
    }

    return 0;
}
