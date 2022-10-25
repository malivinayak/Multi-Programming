class FloydWarshall
{

	static final int V = 4;
	static final int INF = 99999;
	static boolean negCyclefloydWarshall(int graph[][])
	{
		int dist[][] = new int[V][V], i, j, k;
		for (i = 0; i < V; i++)
			for (j = 0; j < V; j++)
				dist[i][j] = graph[i][j];
		for (k = 0; k < V; k++)
		{
			
			// Pick all vertices as source one by one
			for (i = 0; i < V; i++)
			{
				
				// Pick all vertices as destination for the
				// above picked source
				for (j = 0; j < V; j++)
				{
					
					// If vertex k is on the shortest path from
					// i to j, then update the value of dist[i][j]
					if (dist[i][k] + dist[k][j] < dist[i][j])
							dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	
		// If distance of any vertex from itself
		// becomes negative, then there is a negative
		// weight cycle.
		for (i = 0; i < V; i++)
			if (dist[i][i] < 0)
				return true;

		return false;
	}
		
	// Driver code
	public static void main (String[] args)
	{
			
		int graph[][] = { {0, 1, INF, INF},
						{INF, 0, -1, INF},
						{INF, INF, 0, -1},
						{-1, INF, INF, 0}};
		
		if (negCyclefloydWarshall(graph))
			System.out.print("Yes");
		else
			System.out.print("No");
	}
}
