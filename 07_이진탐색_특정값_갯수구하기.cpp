// #include <bits/stdc++.h>

// using namespace std;

// int countByRange(vector<int>& v, int leftvalue, int rightvalue) {
//   vector<int>::iterator rightIndex = upper_bound(v.begin(), v.end(), rightvalue);
//   vector<int>::iterator leftIndex = lower_bound(v.begin(), v.end(), leftvalue);
//   return rightIndex - leftIndex;
// }

// int n, x;
// vector<int> v;

// int main() {
//   cin >> n >> x;

//   for (int i = 0; i < n; i++) {
//     int temp;
//     cin >> temp;
//     v.push_back(temp);
//   }

//   int cnt = countByRange(v, x, x);

//   if (cnt == 0) {
//     cout << -1 << endl;
//   }
//   else {
//     cout << cnt << endl;
//   }
//   return 0;
// }