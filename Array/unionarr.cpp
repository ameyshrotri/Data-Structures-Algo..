#include<iostream>
#include<vector>
#include<set>

using namespace std;

vector<int> findUnion(const vector<int>& arr1, const vector<int>& arr2) {
    set<int>unionset;

    for(int num : arr1){
        unionset.insert(num);
    } 
    
    for(int num : arr2){
        unionset.insert(num);
    }

    vector<int> unionArray(unionset.begin(), unionset.end());

    return unionArray;

}
int main(){
        vector<int> arr1 = {1, 2, 2, 3, 4};
    vector<int> arr2 = {2, 3, 5, 6};

    vector<int> result = findUnion(arr1, arr2);

    cout << "Union of the two sorted arrays is: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;


    return 0;
}