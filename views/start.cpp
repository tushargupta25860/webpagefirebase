 #include <bits/stdc++.h>
 #define mod 1000000007
 #define test int t; cin>>t; while(t--)
 #define init(arr,val) memset(arr,val,sizeof(arr))
 #define loop(i,a,b) for(int i=a;i<b;i++)
 #define loopr(i,a,b) for(int i=a;i>=b;i--)
 #define loops(i,a,b,step) for(int i=a;i<b;i+=step)
 #define looprs(i,a,b,step) for(int i=a;i>=b;i-=step)
 #define ull unsigned long long int
 #define int long long int
 #define P pair
 #define PLL pair<long long, long long>
 #define PII pair<int, int>
 #define PUU pair<unsigned long long int, unsigned long long int>
 #define L list
 #define V vector
 #define D deque
 #define ST set
 #define MS multiset
 #define M map
 #define UM unordered_map
 #define mp make_pair
 #define pb push_back
 #define pf push_front
 #define MM multimap
 #define F first
 #define array(n,arr) vector<int>arr; for(int i = 0; i<n; i++) {int num; cin>>num; arr.push_back(num);}
 #define S second
 #define IT iterator
 #define mem(a,val) memset(a,val,sizeof(a))
 #define RIT reverse_iterator
 #define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
 #define FILE_READ_IN freopen("input.txt","r",stdin);
 #define FILE_READ_OUT freopen("output.txt","w",stdout);
 #define all(a) a.begin(),a.end()
 #define ld long double
 using namespace std;
 
 void solve()
 {
    int n;
    cin>>n;
    array(n , arr);
    vector<int>att = arr;
    int i = 0, j = n-1;
    while(j>=0){
        att[i] = max(arr[i], arr[j]);
        i++,j--;
    }
    int cnt = 0;
    for(int i =0; i<n; i++){
        if(att[i])
    }
 }
 
 int32_t main()
 {
   FAST;
   int n=1;
   cin>>n;
   while(n--)
   {
     solve();
   }
 return 0;
 }
 
 
 
 //palindrome:- checks whether the given range is palindrome or not in an string
 //stronglyconnectedcomponents:- finds out all the strongly connected components in the directed graph
 //lca_tree :- find out the longest common ancestor of two nodes in an tree
 //DSU :- Disjoint union set
 //kth_largest_sum_of_subsequence : finds the kth largest sum of subsequences in an array
 // gcd_extended : - extendend euclid algorithm
 // segtree :- segment tree
 // mod_binary_exponentiation :- modular binary exponentiation
 // iterative_binary_exponentiation :- iterative binary exponentiation
 //recursive_binary_exponentiation :- recursive binary exponentiation
 // LIS :- longest increasing subsequence
 // nextgreaterelement :- to find next greater element in an array
 // sparse_table :- sparse table
 // trie :- trie data structure
 // tushar :- basic code template