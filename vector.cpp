

/*

 2015/Mar/10

 Basic vector usage.
*/


#include <iostream>
#include <vector>

using namespace std;


int main(){


    vector<int> student_mark(20);

    for(vector<int>::size_type i = 0; i < 20; i++){
            cout << "Enter marks #" << i+1 << ": " << flush;

    cin >> student_mark[i];

    }

    return 0;


}
