#ifndef UNIONSET_H_INCLUDED
#define UNIONSET_H_INCLUDED

using namespace std;

class union_find {
    vector<int> p, rank;
    public:
        int q;
        union_find(int n){
            q = n;
            rank.assign(n, 1);
            p.assign(n, 1);
            for(int i = 1; i <= n; i++) p[i] = i;
        }

        int find_set(int i){
            return (p[i] == i) ? i : (p[i] = find_set(p[i]));
        }

        bool is_same_set(int i, int j){
            return find_set(i) == find_set(j);
        }

        void union_set(int i, int j){
            if(!is_same_set(i,j)){
                int x = find_set(i), y = find_set(j);
                if(rank[x] > rank[y]) p[y] = x;
                else{
                    p[x] = y;
                    if (rank[x] == rank[y]) rank[y]++;
                }
                q--;
            }
        }
};

#endif // UNIONSET_H_INCLUDED

#include <iostream>
#include <vector>
#include <algorithm>



