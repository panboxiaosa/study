#include <iostream>
#include <vector>

using namespace std;

typedef pair<int,int> ward;

int pack(vector<ward> use, asset){
    int* result = new int[use.size()];
    int ans;
    for(int i = 1; i < asset; i++){

    }

    delete[] result;
    return ans;
}

int main()
{
    int num;
    int total;
    cin>>num>>total;
    vector<ward> all;
    for(int i = 0; i < num; i++){
        int pay, value;
        cin>>pay>>value;
        all.push_back(ward(pay, value));
    }
    cout<<pack(all, total);
    return 0;
}
