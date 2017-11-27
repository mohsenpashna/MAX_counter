#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(int, vector<int>);
vector<int> A={3,4,4,6,1,4,4};

void print_vec(const vector<int> &A);
vector<int> max_op(int, int);
void inc_a(vector<int>, int);

int main() {
    int N = 6;
    std::cout << "Hello, World!" << std::endl;
    vector<int> Counter = solution(N, A);
    print_vec(Counter);
    return 0;
}


vector<int> solution(int N, vector<int> &A, vector<int> &Counter){
 int s = A.size();
    vector<int> Counters (N, 0);
    for (int i = 0; i < s; ++i) {
        if (A[i]<N+1){
            inc_a(Counters, i);
        } else if(A[i]==N+1){
            Counters = max_op(MAX, N);
        }
    }
    return Counters;
};

void print_vec(const vector<int> &A){
    int s = A.size();
    cout << "The Vector is: ";
    for (int i = 0; i < s; ++i) {
        cout << A[i] << " " << endl;
    }

    cout << endl;
};

vector<int> max_op(int MAX, int size_A){
    vector<int> A (size_A, MAX);
    return A;
}

void inc_a(vector<int> &A, int idx){
    A[idx] +=1;
}