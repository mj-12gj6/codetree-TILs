#include <iostream>
#include <string>

using namespace std;

int main() {
    string binary_number;
    cin >> binary_number;

    // 이진수를 십진수로 변환
    int decimal_number = 0;
    int length = binary_number.length();

    for (int i = 0; i < length; ++i) {
        if (binary_number[length - 1 - i] == '1') {
            decimal_number += 1 << i;  // 2의 i승은 1을 i만큼 왼쪽으로 시프트
        }
    }

    // 결과 출력
    cout << decimal_number << endl;

    return 0;
}