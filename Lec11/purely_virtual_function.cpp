#include<bits/stdc++.h>
using namespace std;

class MacD{
    public:
    virtual void original_clown() = 0;
    void original_fries(){}
};

class MacFranchise : public MacD{
    public:
    void duplicate_clown(){}
    void duplicate_fries(){}
    void original_clown(){}
};

int main(){
    // MacD d;
    MacFranchise m;

    return 0;
}