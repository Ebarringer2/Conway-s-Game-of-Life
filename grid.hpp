#include <iostream>
#include <stdio.h>
#include <Vector>
#include <random>
using namespace std;

class Grid {
    public:
        vector<vector<int>> grid;
        int rows;
        int cols;
        Grid(int rows, int cols) {
            this->rows = rows;
            this->cols = cols;
        }
        void fillRand() {
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<int> distribution(0, 1);
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    this->grid[i][j] = distribution(gen);
                }
            }
        }
        void displayGrid() {
            for (const auto& row : this->grid) {
                for (int value : row) {
                    cout << value << ' ';
                }
                cout << '\n';
            }
        }
        void checkBirth() {

        }
};