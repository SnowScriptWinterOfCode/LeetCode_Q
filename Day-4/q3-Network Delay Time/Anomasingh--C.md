Solution in C++ ->

class Solution {
    struct node{
        int dst;
        int wt;
    };
    struct qnode{
        int vertex;
        int dist;
    };
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        unordered_map<int,vector<node *>> adj;
        for(int i=0;i<times.size();++i)
        {
            node *newnode = new node;
            newnode->dst = times[i][1];
            newnode->wt = times[i][2];
            adj[times[i][0]].push_back(newnode);
        }
        
        qnode *qn = new qnode;
        qn->vertex = K;    //Here initial vertex is K
        qn->dist = 0;       //Here source distance is 0
        queue<qnode *> q;
        q.push(qn);
        
        vector<int> distance(N+1,INT_MAX);
        distance[K] = 0;
        int time = 0;
        
        while(!q.empty())   //applying BFS
        {
            qnode *curr = q.front();
            q.pop();
            
            for(auto it: adj[curr->vertex])
            {
                qnode *temp_qn = new qnode;
                temp_qn->vertex = it->dst;
                temp_qn->dist = it->wt + curr->dist;
                if(distance[temp_qn->vertex] > temp_qn->dist)
                {
                    q.push(temp_qn);
                    distance[temp_qn->vertex] = it->wt + curr->dist;
                }
            }
        }
        //Now we will find the max distance node (If all the nodes are traversed)
        for(int i=1;i<=N;++i)
        {
            if(distance[i]==INT_MAX)
                return -1;
            time = max(time,distance[i]);
        }
        return time;
    }
};