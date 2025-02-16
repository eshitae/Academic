#include <iostream>
#include <queue>
using namespace std;

void BFS(int BFS_Graph[][100], int number_of_vertices, int searching_vertex, int starting_vertex)
{
    queue<int> Queue;
    Queue.push(starting_vertex);

    bool visited_nodes[100] = {false};
    cout << "Visiting sequence: ";
    while (!Queue.empty())
    {
        int v = Queue.front();
        Queue.pop();

        if (!visited_nodes[v])
        {
            visited_nodes[v] = true;
            cout << v << " ";

            if (v == searching_vertex)
            {
                cout << endl << "Found" << endl;
                return;
            }

            for (int i = 0; i < number_of_vertices; i++)
            {
                if (BFS_Graph[v][i] && !visited_nodes[i])
                {
                    Queue.push(i);
                }
            }
        }
    }
    cout << endl << "Not Found" << endl;
}

int main()
{
    int BFS_Graph[100][100], number_of_vertices, i, j;

    cout << "Number of vertices? ";
    cin >> number_of_vertices;

    cout << "Adjacency matrix: " << endl;
    for (i = 0; i < number_of_vertices; i++)
    {
        for (j = 0; j < number_of_vertices; j++)
        {
            cin >> BFS_Graph[i][j];
        }
    }

    cout << "Searching vertex? ";
    int searching_vertex;
    cin >> searching_vertex;

    cout << "Starting vertex? ";
    int starting_vertex;
    cin >> starting_vertex;

    BFS(BFS_Graph, number_of_vertices, searching_vertex, starting_vertex);

    return 0;
}