#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<
    int,
    null_type,
    less<int>,
    rb_tree_tag,
    tree_order_statistics_node_update>
    ordered_set;

int main()
{
    ordered_set x;
    x.insert(1);
    x.insert(2);
    x.insert(4);
    x.insert(8);
    x.insert(16);

    cout<<*x.find_by_order(2)<<'\n';//4
    cout<<x.order_of_key(1)<<'\n';//0
    cout<<x.order_of_key(400)<<'\n';//5
    return 0;
}
