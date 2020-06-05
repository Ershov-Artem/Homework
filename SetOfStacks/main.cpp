    #include <iostream>
    #include<vector>
    using namespace std;

    template<typename T> class SetofStack{
        public:
        SetofStack(int msize){
            vector<T> A;
            stacks.push_back(A);
            max_size = msize;
        }
        void push( T value){
            if(stacks[stacks.size()-1].size() < max_size)
            stacks[stacks.size()-1].push_back(value);
            else{
                vector<T> A;
                A.push_back(value);
                stacks.push_back(A);
            }

        }
        T pop(){
            T val;
            if(stacks[stacks.size()-1].size > 1){
                val = stacks[stacks.size()-1][stacks[stacks.size()-1].size()-1];
                stacks[stacks.size()-1].pop_back();
            }
            else{
                val = stacks[stacks.size()-1][0];
                stacks.pop_back();
            }
        return val;
        }
        T popAT(int index){
            T val = stacks[index][stacks[index].size()-1];
            stacks[index].pop_back();
            return val;
        }
        private:
        vector<vector<T> > stacks;
        int max_size;
};

    int main() {
    // your code goes here
    return 0;
    }
