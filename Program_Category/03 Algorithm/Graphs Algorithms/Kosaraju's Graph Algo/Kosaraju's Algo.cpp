

class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	void dfs(vector<int> adj[], stack<int>&stk,int i,vector<int>&vis){

	    vis[i]=1;
	    for(auto a: adj[i]){
	        if(!vis[a]){
	            dfs(adj,stk,a,vis);
	        }
	    }
	    	    stk.push(i);

	}
		void dffs(vector<int> adj[],int i,vector<int>&vis){

	    vis[i]=1;
	    for(auto a: adj[i]){
	        if(!vis[a]){
	            dffs(adj,a,vis);
	        }
	    }

	}
    int kosaraju(int n, vector<int> adj[])
    {
        //code here

        stack<int>stk;
        vector<int>vis(n,0);

    for(int i=0; i<n; i++){
        if(!vis[i]){

            dfs(adj,stk,i,vis);
        }
    }
    vector<int> tran[n];
    for(int i=0; i<n; i++){
        vis[i]=0;
        for(auto a:adj[i]){
            tran[a].push_back(i);
        }

    }
    int c=0;
     while(stk.size()){
         int i=stk.top();stk.pop();
        if(!vis[i]){
            // cout<<i;
            c++;
            dffs(tran,i,vis);
        }
    }
    return c;

    }
};
