// /************Try again*********/

// include <bits/stdc++.h>

// using namespace std;

// int n, m;
// int x, y, dir;

// int dx[] = {-1, 0, 1, 0};
// int dy[] = {0, 1, 0, -1};
// int position[50][50];
// int map[50][50];

// void turn_left() {
//   dir -= 1;
//   if (dir == -1) {
//     dir = 3;
//   }
// }

// int main(void) {
//   cin >> n >> m;
//   cin >> x >> y >> dir;
//   position[x][y] = 1;

  
//   for ( int i = 0; i < n; i ++) {
//     for ( int j = 0; j < m; j++) {
//       cin >> x;
//       map[i][j] = x;
//     }
//   }

//   int cnt = 1;
//   int turn_time = 0;
//   while(true) {
//     turn_left();
//     int nx = x + dx[dir];
//     int ny = y + dy[dir];

//     if (position[nx][ny] == 0 && map[nx][ny] == 0) {
//       position[nx][ny] = 1;
//       x = nx;
//       y = ny;
//       cnt += 1;
//       turn_time = 0;
//       continue;
//     }
//     else {
//       turn_time += 1;
//     }
//     if (turn_time == 4) {
//       nx = x - dx[dir];
//       ny = y - dy[dir];
//       if (map[nx][ny] == 0) {
//         x = nx;
//         y = ny;
//       }
//       else {
//         break;
//       }
//       turn_time = 0;
//     }
//   }

//   cout << cnt << endl;

//   return 0;
// }