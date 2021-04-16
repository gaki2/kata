for (int i = 1; i <= V; i++)
{
	Dist[i] = MAP[Start][i];
}
Dist[Start] = 0;
Select[Start] = true;

int Find_shortest_node()
{
	int Min_Dist, Min_Idx;
	Min_Dist = INF;
	Min_Idx = -1;
	
	for (int i = 1; i <= V; i++)
	{
		if (Visit[i] == true) continue;
		if (Dist[i] < Min_Dist)
		{
			Min_Dist = Dist[i];
			Min_Idx = i;
		}
	}
	return Min_Idx;
}


