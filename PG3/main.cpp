#include <stdio.h>
#include"iostream"
using namespace std;

//複数のテンプレートを定義する

template <typename Type1, typename Type2>


//比べるクラス(小さい値を出力）

class Compare {
public:
    Compare(Type1 numA, Type2 numB) {
        if (numA < numB)
            cout << static_cast<Type1>(numA) << endl;
        else
            cout << static_cast<Type2>(numB) << endl;
    }
};


int main() {

    //int型と他の二つ型を比べる

    Compare<int, float>Min1(6, 3.14f);
    Compare<int, double>Min2(60, 44.5);

    //float型と他の二つ型を比べる

    Compare<float, int>Min3(12.57f, 43);
    Compare<float, double>Min4(77.7f, 12.9);

    //double型と他の二つ型を比べる

    Compare<double, int>Min5(19.8, 27);
    Compare<double, float>Min6(60.2, 100.01f);


    return 0;
}