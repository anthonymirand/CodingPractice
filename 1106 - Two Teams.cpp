#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node {
  int member;
  bool visited;
  bool team;
  vector<int> next;

  Node(int member, bool visited, bool team, vector<int> next)
    : member(member), visited(visited), team(team), next(next) {};
};

void bfs(vector<Node> &graph, int member) {
  queue<Node> bfs;
  graph[member].visited = true;
  bfs.push(graph[member]);

  while (!bfs.empty())
  {
    Node current = bfs.front(); bfs.pop();

    for (int i = 0; i < current.next.size(); i++)
    {
      int adjacent = current.next[i] - 1;

      if (graph[adjacent].visited)
        continue;
      if (graph[current.member - 1].team)
        graph[adjacent].team = false;
      else
        graph[adjacent].team = true;

      graph[adjacent].visited = true;
      bfs.push(graph[adjacent]);
    }
  }
}

int main() {
  int N, member;
  vector<Node> graph;

  cin >> N;

  for (int i = 0; i < N; i++)
    graph.push_back(Node(i + 1, false, false, {}));

  for (int i = 0; i < N; i++)
    while(cin >> member && member != 0)
      graph[i].next.push_back(member);

  for (int i = 0; i < N; i++)
    if (!graph[i].visited)
      bfs(graph, i);

  int teamCount = 0;
  for (int i = 0; i < N; i++)
    if (!graph[i].team)
      teamCount++;
  cout << teamCount << endl;

  for (int i = 0; i < N; i++)
    if (!graph[i].team)
      cout << graph[i].member << " ";
  cout << endl;

  return 0;
}
