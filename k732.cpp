#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    int x;
    int y;
    int value;
};

bool comparePoints(const Point& p1, const Point& p2) {
    if (p1.value != p2.value) {
        return p1.value < p2.value;
    } else if (p1.x != p2.x) {
        return p1.x < p2.x;
    } else {
        return p1.y < p2.y;
    }
}

int calculateManhattanDistance(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}

int countSpecialPositions(std::vector<std::vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    std::vector<Point> specialPositions;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int currentValue = matrix[i][j];
            int sum = 0;

            for (int x = 0; x < rows; x++) {
                for (int y = 0; y < cols; y++) {
                    if (calculateManhattanDistance(i, j, x, y) <= target) {
                        sum += matrix[x][y];
                    }
                }
            }

            if (sum % 10 == target) {
                specialPositions.push_back({ i, j, currentValue });
            }
        }
    }

    std::sort(specialPositions.begin(), specialPositions.end(), comparePoints);

    for (const Point& p : specialPositions) {
        std::cout << p.x << " " << p.y << std::endl;
    }

    return specialPositions.size();
}

int main() {
    int rows, cols;
    std::cin >> rows >> cols;

    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }

    int target;
    std::cin >> target;

    int count = countSpecialPositions(matrix, target);
    std::cout << count << std::endl;

    return 0;
}
