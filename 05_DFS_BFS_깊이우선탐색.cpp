// #include <bits/stdc++.h>

// using namespace std;

// bool visited[9]; // 8보다 하나 더 큰 크기
// vector<int> graph[9]; // 각 노드의 정보를 리스트 형태로 가지고 있기 위해

// void dfs(int x) {
//   visited[x] = true; // 현재 노드 방문 처리
//   cout << x << ' ';
//   for (int i = 0; i < graph[x].size(); i++) {
//     int y = graph[x][i];
//     if (!visited[y]) { // 재귀적 방문
//       dfs(y);
//     }
//   }
// }

// int main(void) {
//   // 노드 1에 연결된 노드 정보 저장 
//   graph[1].push_back(2);
//   graph[1].push_back(3);
//   graph[1].push_back(8);
  
//   // 노드 2에 연결된 노드 정보 저장 
//   graph[2].push_back(1);
//   graph[2].push_back(7);
  
//   // 노드 3에 연결된 노드 정보 저장 
//   graph[3].push_back(1);
//   graph[3].push_back(4);
//   graph[3].push_back(5);
  
//   // 노드 4에 연결된 노드 정보 저장 
//   graph[4].push_back(3);
//   graph[4].push_back(5);
  
//   // 노드 5에 연결된 노드 정보 저장 
//   graph[5].push_back(3);
//   graph[5].push_back(4);
  
//   // 노드 6에 연결된 노드 정보 저장 
//   graph[6].push_back(7);
  
//   // 노드 7에 연결된 노드 정보 저장 
//   graph[7].push_back(2);
//   graph[7].push_back(6);
//   graph[7].push_back(8);
  
//   // 노드 8에 연결된 노드 정보 저장 
//   graph[8].push_back(1);
//   graph[8].push_back(7);

//   dfs(1);
// }
// // 1 2 7 6 8 3 4 5