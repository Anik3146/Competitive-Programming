#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int n;
    long long int c;
	cin >> n;
	vector<long int> v;
	make_heap(v.begin(), v.end(),greater<long long int>());
	for (int i = 0; i < n; i++) {
		cin >> c;
        if ( c == 1 ) {
            // add
           cin >> c;
           v.push_back(c); push_heap(v.begin(), v.end(), greater<long long int>());
        } else if ( c == 3) {
            // print min
            printf ("%ld\n",v.front());
        } else if ( c == 2 ) {
            // delete
            cin >> c;
            vector<long int>::iterator i ;
            for ( i = v.begin() ; i != v.end(); i++ ){
                if (*i == c) {
                    v.erase(i);
                    break ;
                }
            }
             make_heap(i, v.end(),greater<long long int>());
        }
    }
    return 0;
}
