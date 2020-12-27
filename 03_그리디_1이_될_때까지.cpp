// #include <bits/stdc++.h>

// using namespace std;
/*****************my method*************/
// int n,k;

// int main() {
//   int cnt = 0;
//   cin >> n >> k;
  
//   while(true) {
//     if (n%k == 0) {
//       n /= k;
//       cnt++;
//       if (n == 1) {
//         break;
//       }
//     }
//     else {
//       n -= 1;
//       cnt++;
//       if (n == 1) {
//         break;
//       }
//     }
//   }
//   cout << cnt << endl;
// }

/*************** other metohd **************/
// int n, k;
// int result;

// int main() {
//   cin >> n >> k;

//   while(true) {
//     int target = (n / k) * k;
//     result += (n - target);
//     n = target;

//     if(n < k) break;

//     result += 1;
//     n /= k;
//   }

//   result += (n -1);
//   cout << result << endl;
// }