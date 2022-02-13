#include <bits/stdc++.h>

// #define int long long
#define endl '\n'

using namespace std;

#define rep(i,r,l) for(auto i = r;i<l;i++)

  using Graph = vector<vector<int>>;
signed main(void){
  int h,w;
  cin >> h;
  cin >> w;
  vector<vector<int>> map(h+10, vector<int>(w+10,-1));
  char buf;
  rep(i,0,h){
    rep(j,0,w){
      cin >> buf;
      if(buf == '#') map[i][j] = 1;
      else if(buf == '.') map[i][j] = 0;
    }
  }

  Graph g(h*w);
  rep(i,0,h){
    rep(j,0,w){
      if(map[i][j] != map[i][j+1] && map[i][j+1] != -1){
		//   cout << h*(j) + (i) + 1 << endl;
        g[h*(j) + (i)].push_back(h*(j+1) + (i));
        g[h*(j+1) + (i)].push_back(h*(j) + (i));
      }




      if(map[i][j] != map[i+1][j] && map[i+1][j] != -1){
		//   cout << h*(j) + (i) + 1 << endl;
        g[h*(j) + (i)].push_back(h*j + (i+1));
        g[h*(j) + (i+1)].push_back(h*(j) + (i));
      }
    }
  }


  vector<int> dist(h*w, -1); // 全頂点を「未訪問」に初期化
  queue<int> que;

  // 初期条件 (頂点 0 を初期ノードとする)
  dist[0] = 0;
  que.push(0); // 0 を橙色頂点にする

  // BFS 開始 (キューが空になるまで探索を行う)
  while (!que.empty()) {
    int v = que.front(); // キューから先頭頂点を取り出す
    que.pop();

    // v から辿れる頂点をすべて調べる
    for (int nv : g[v]) {
      if (dist[nv] != -1) continue; // すでに発見済みの頂点は探索しない

      // 新たな白色頂点 nv について距離情報を更新してキューに追加する
      dist[nv] = dist[v] + 1;
      que.push(nv);
    }
  }
  cout << dist[h*w-1];

  return 0;

}