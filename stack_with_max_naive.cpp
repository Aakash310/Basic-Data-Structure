#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long int num_queries = 0;
    cin >> num_queries;

    string query;
    long long int value;

    vector<long long int> stack;

    for (int i = 0; i < num_queries; ++i) {
        cin >> query;
        if (query == "push") {
            cin >> value;
            stack.push_back(value);
        }
        else if (query == "pop") {
            stack.pop_back();
        }
        else if (query == "max") {
        	if(stack.empty()){
            	return 0;
			}
            cout << *max_element(stack.begin(),stack.end())<< "\n";
        }
    }
    return 0;
}
