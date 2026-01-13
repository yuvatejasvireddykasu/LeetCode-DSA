class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
    double totalArea = 0.0;
double minY = 2e9;
double maxY = 0.0;

for (auto& square : squares) {
    double bottomY = square[1];
    double side = square[2];

    totalArea += side * side;
    minY = min(minY, bottomY);
    maxY = max(maxY, bottomY + side);
}

double halfArea = totalArea / 2.0;

for (int iter = 0; iter < 100; ++iter) {
    double midY = minY + (maxY - minY) / 2.0;
    double areaBelow = 0.0;

    for (auto& square : squares) {
        double bottomY = square[1];
        double side = square[2];

        double heightBelow =
            max(0.0, min(side, midY - bottomY));

        areaBelow += heightBelow * side;
    }

    if (areaBelow < halfArea) {
        minY = midY;
    } else {
        maxY = midY;
    }
}

return maxY;

    }
};