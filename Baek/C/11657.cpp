#include <iostream>
#include <algorithm>
#include <vector>

#define INF 999999999
#define MAX 500

using namespace std;

int dist[MAX + 1];
vector<pair<int, int>> v[MAX + 1];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    bool cycle = false;

    for (int i=0; i<m; i++){
        int node1, node2, d;
        cin >> node1 >> node2 >> d;

        v[node1].push_back(make_pair(node2, d));
    }

    fill(dist, dist + MAX + 1, INF);

    dist[1] = 0;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            for (auto &N : v[j]){
                if (dist[j] != INF && dist[N.first] > N.second + dist[j] && j != N.first){
                    dist[N.first] = N.second + dist[j];
                    if (i == n)
                        cycle = true;
                }
            }
        }
    }

    if (cycle)
        cout << "-1\n";
    else{
        for (int i=2; i<=n; i++)
            if (dist[i] == INF)
                cout << "-1\n";
            else
                cout << dist[i] << "\n";
    }
}

/* 되는 코드

#include <iostream>
#include <vector>
#define INF 99999999
using namespace std;
int N, M;
vector<pair<int, int>> v[502];
long long dist[501] = { INF, };
int main(void) 
{
	int a, b, c;
	bool cycle = false;
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N >> M;
	while (M--) {
		cin >> a >> b >> c;
		v[a].push_back(make_pair(b, c));
	}

	for (int i = 1; i <= N; i++) {
		dist[i] = INF;
	}
	dist[1] = 0;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			for (int k = 0; k < v[j].size(); k++) {
				int cur = v[j][k].first;
				int cost = v[j][k].second;
                
				if (dist[j] != INF && j != cur && dist[cur] > cost + dist[j]) {
					dist[cur] = cost + dist[j]; //최소값으로 갱신
					if (i == N) cycle = true;
				}
			}
		}
	}

	if (cycle) cout << -1 << endl;
	else
	{
		for (int i = 2; i <= N; i++)
		{
			if (dist[i] == INF) cout << -1 << endl;
			else cout << dist[i] << endl;
		}

	}
	return 0;
}
*/