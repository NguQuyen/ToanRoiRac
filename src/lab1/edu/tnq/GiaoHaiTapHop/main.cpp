#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> intersection(const vector<int>& list1, const vector<int>& list2) {
    set<int> set1(list1.begin(), list1.end());
    set<int> set2(list2.begin(), list2.end());
    vector<int> result;

    for (int num : set1) {
        if (set2.count(num)) {
            result.push_back(num);
        }
    }

    sort(result.begin(), result.end());
    return result;
}

int main() {
    int a_size, b_size;

    // Đọc input cho tập hợp A
    cin >> a_size;
    vector<int> a_list(a_size);
    for (int i = 0; i < a_size; i++) {
        cin >> a_list[i];
    }

    // Đọc input cho tập hợp B
    cin >> b_size;
    vector<int> b_list(b_size);
    for (int i = 0; i < b_size; i++) {
        cin >> b_list[i];
    }

    // Tính giao và in kết quả
    vector<int> result = intersection(a_list, b_list);
    if (!result.empty()) {
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "none" << endl;
    }

    return 0;
}
