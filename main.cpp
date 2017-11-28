#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(int, vector<int>&);
vector<int> A={3,4,4,6,1,4,4};


void print_vec(const vector<int> &A);
vector<int> max_op(unsigned int&, int);
void inc_a(vector<int>&, int, unsigned int &);

int main() {

    int N = 5;
//     Counter;
//    std::cout << "Hello, World!" << std::endl;
//    print_vec(A);
    vector<int> Counter = solution(N, A);
    cout << "\n Counter is: ";
    print_vec(Counter);
    return 0;
}


vector<int> solution(int N, vector<int> &A){

    unsigned int Max=0;
    int s = A.size();
    vector<int> Counters (N, 0);
    for (int i = 0; i < s; ++i) {

//        cout << "/i: " << Counters[i];
        if (A[i]<N+1){
            inc_a(Counters, i, Max);
        } else if(A[i]==N+1){
            Counters = max_op(Max, N);
        }
//        print_vec(Counters);
    }
    return Counters;
};

void print_vec(const vector<int> &A){
    int s = A.size();
    cout << "The Vector is: ";
    for (int i = 0; i < s; ++i) {
        cout << A[i] << " " ;
    }

    cout << endl;
};

vector<int> max_op(unsigned int &MAX, int size_A){
//    cout << "Max is " <<MAX ;
    vector<int> A (size_A, MAX);
//    cout << " max op happened";
    return A;
}

void inc_a(vector<int> &Counter, int idx, unsigned int &MAX){
    Counter[A[idx]] +=1;
//    cout << " inc happened: " << idx << "| \n";
    MAX = (MAX < A[idx]) ? Counter[A[idx]] : MAX;

}