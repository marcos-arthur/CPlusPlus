// Famílias de Troia //

#include <iostream>
#include <vector>
#include <algorithm>
#include "unionSet.h"

using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    union_find a(N);
    int b, c;
    for(int i = 0; i < M ; i++){
        //cout << i << endl;
        cin >> b >> c;
        a.union_set(b, c);
    }

    cout << a.q;

    return 0;
}
