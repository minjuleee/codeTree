const fs = require("fs");
const input = fs.readFileSync(0).toString().trim().split('\n');

const [n, m] = input[0].split(' ').map(Number);

const graph = Array.from(Array(n+1), () => Array(n+1).fill(0));

const visited = Array(n+1).fill(false);
let vertexCnt = 0;

function dfs(vertex){
    for(let currV = 1; currV <= n; currV++){
        if(graph[vertex][currV] && !visited[currV]){
            visited[currV] = true;
            vertexCnt += 1;
            dfs(currV);
        }
    }
}

for(let i=1; i<=m; i++){
    const [v1, v2] = input[i].split(' ').map(Number);

    graph[v1][v2] = 1;
    graph[v2][v1] = 1;
}

visited[1] = true;
dfs(1);

console.log(vertexCnt);