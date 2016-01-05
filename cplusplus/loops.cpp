#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    string color = "red";
    cout << "Some text" << endl;
    cout << "Another line" << '\n';

    vector<int> nums = {2, 3, 6, 8, 12, 14};
    cout << "Size of nums: " << nums.size() << '\n';
    /*
     * +1 for ++i, see https://stackoverflow.com/questions/7443222/how-do-i-deal-with-signed-unsigned-mismatch-warnings-c4018/7443225#comment39057490_7443225
     *  it doesn't matter at all for primitives where the return value isn't being used. However, for custom types (where the operator is overloaded), post increment is almost always less efficient (since it has to make a copy of the object before it was incremented). Compilers can't (necessarily) optimize for custom types. So the only advantage is consistency (of primitives vs custom types).
     */
    for (size_t i = 0, ilen =  nums.size(); i < ilen; ++i) {
        cout << i << ':' << nums[i] << ' ' << color << '\n';
    }

    int age;
    cout << "enter age as int: " << '\n';
    cin >> age;
    cout << "So, you have " << age << '\n';

}
