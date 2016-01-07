    #include<stdio.h>
    #define Get getchar_unlocked()
    int getInt() { int a=0,s=1; char c=0; while(c<33) c=Get; if(c=='-') {s=-1; c=Get;} while(c>33) {a=(a<<3)+(a<<1)+c-'0'; c=Get;} return a*s; }
     
    #define maxL 50004
    char G[maxL],visit[maxL]; int R,C;
     
    int DFS(int i,int j) {
    	if(!(i>=0 && i<R && j>=0 && j<C)) return 0;
    	int p=i*C+j;
    	if(G[p]=='#'||visit[p]) return 0;
    	visit[p]=1;
    	return 1+DFS(i,j-1)+DFS(i,j+1)+DFS(i-1,j)+DFS(i+1,j);
    }
     
    void solve() {
    	memset(visit,0,sizeof(visit));
    	double expect=1.0;
    	int i,j,p=0,actualPath=-1;
    	for(i=0;i<R;i++) for(j=0;j<C;j++,p++)
    		if(G[p]=='o' && !visit[p]) {
    			int size=DFS(i,j);
    			if(actualPath==-1) actualPath=size;
    			else expect+=(double)(size)/(size+actualPath);
    		}
    	printf("%.10f\n",expect);
    }
     
    int main()
    {
    	int T=getInt();
    	while(T--) {
    		R=getInt(); C=getInt();
    		int i=0,rc=R*C; char c;
    		while(i<rc) { c=Get; if(c=='#'||c=='o') G[i++]=c; }
    		solve();
    	}
    	return 0;
    } 