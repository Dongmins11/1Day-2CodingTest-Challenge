#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Vertex
{
public:
	Vertex(string _str) : value(_str) {}
	~Vertex() {}

public :
	void addAdjancentVertext (Vertex* vertex)
	{
		adjacent_vertices.push_back(vertex);
	}

	void removeAdjacentVertex (Vertex* vertex)
	{
		auto iter = find(adjacent_vertices.begin(), adjacent_vertices.end(), vertex);
		if(iter != adjacent_vertices.end())
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

int main(void)
{
	Vertex jake("jake");
	Vertex ben("ben");
	Vertex joy("joy");
	Vertex ivy("ivy");
	Vertex elin("elin");
	Vertex anna("anna");
	Vertex david("david");


	jake.addAdjancentVertext(&ben);
	ben.addAdjancentVertext(&jake);
	joy.addAdjancentVertext(&ben);
	joy.addAdjancentVertext(&ivy);
	ivy.addAdjancentVertext(&joy);
	ivy.addAdjancentVertext(&ben);

	elin.addAdjancentVertext(&ivy);
	elin.addAdjancentVertext(&anna);

	anna.addAdjancentVertext(&ben);
	anna.addAdjancentVertext(&david);

	david.addAdjancentVertext(&anna);

	anna.print();
	anna.removeAdjacentVertex(&david);
	cout << '\n';
	anna.print();

	return 0;
}