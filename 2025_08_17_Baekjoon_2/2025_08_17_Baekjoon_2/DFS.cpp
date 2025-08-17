#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Vertex
{
public:
	Vertex(string _str) : value(_str) {}
	~Vertex() {}

public:
	void addAdjancentVertext(Vertex* vertex)
	{
		adjacent_vertices.push_back(vertex);
	}

	void removeAdjacentVertex(Vertex* vertex)
	{
		auto iter = find(adjacent_vertices.begin(), adjacent_vertices.end(), vertex);
		if (iter != adjacent_vertices.end())
			adjacent_vertices.erase(iter);
	}

	void print()
	{
		for (const auto& iter : adjacent_vertices)
			cout << iter->value << '\n';
	}

public:
	string value;
	vector<Vertex*> adjacent_vertices;
};

static unordered_set<string> visited{};

//1. 현재 정점을 해시테이블에 저장
//2. 현재 정점의 인접 정점들을 순회 (방문했다면 순회 x)
//3. 방문하지 않았던 정점이면 그 정점에 대해서 재귀적으로 깊이 우선 탐색 수행!

void DFS(Vertex* vertex)
{
	visited.insert(vertex->value); //(1)

	cout << "정점 : " << vertex->value << '\n';

	for (const auto& iter : vertex->adjacent_vertices) //(2)
	{
		if (!iter) continue;//(2)
		if (visited.find(iter->value) != visited.end()) continue; //(2)

		DFS(iter);//(3)
	}
}

int main(void)
{
	Vertex ben("ben");
	Vertex ivy("ivy");
	Vertex jake("jake");
	Vertex joy("joy");

	Vertex anna("anna");

	Vertex david("david");
	Vertex elin("elin");
	Vertex owen("Owen");

	ben.addAdjancentVertext(&ivy);
	ben.addAdjancentVertext(&jake);
	ben.addAdjancentVertext(&anna);
	ben.addAdjancentVertext(&david);

	ivy.addAdjancentVertext(&ben);
	ivy.addAdjancentVertext(&joy);

	jake.addAdjancentVertext(&joy);
	jake.addAdjancentVertext(&ben);

	anna.addAdjancentVertext(&ben);

	david.addAdjancentVertext(&elin);
	david.addAdjancentVertext(&ben);

	elin.addAdjancentVertext(&david);
	elin.addAdjancentVertext(&owen);

	elin.addAdjancentVertext(&elin);

	DFS(&ben);

	return 0;
}