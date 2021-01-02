// #include <bits/stdc++.h>

// using namespace std;

// string inputData;

// int dx[] = {-2, -2, 2, 2, 1, -1, 1, -1};
// int dy[] = {1, -1, 1, -1, -2, -2, 2, 2};

// int main(void) {
//   cin >> inputData;
//   int row = inputData[1] - '0';
//   int column = inputData[0] - 'a' + 1;
//   cout << " column : " << column << "row : " << row <<  endl;

//   int result = 0;
//   for (int i = 0; i < 8; i++) {
//     int nextRow = row + dx[i];
//     int nextColumn = column + dy[i];

//     if (nextRow >= 1 && nextRow <= 8 && nextColumn >= 1 && nextColumn <= 8) {
//       result += 1;
//     }
//   }

//   cout << result << endl;
//   return 0;
// }