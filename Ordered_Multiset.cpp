#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<
    pair<int,int>,
    null_type,
    less<pair<int,int> >,
    rb_tree_tag,
    tree_order_statistics_node_update>
    ordered_multiset;

int main()
{
    ordered_multiset x;
    x.insert(make_pair(12, 1012));
    x.insert(make_pair(505, 1505));
    x.insert(make_pair(30, 1030));
    cout<<x.find_by_order(2)->first<<'\n';//505
    cout<<x.order_of_key({30,1030});//1
    return 0;
}

