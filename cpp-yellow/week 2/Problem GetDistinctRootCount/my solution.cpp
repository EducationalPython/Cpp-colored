#include <sstream>
#include <exception>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
ostream& operator << (ostream& os, const set<T>& s) {
    os << "{";
    bool first = true;
    for (const auto& x : s) {
        if (!first) {
            os << ", ";
        }
        first = false;
        os << x;
    }
    return os << "}";
}

template <class K, class V>
ostream& operator << (ostream& os, const map<K, V>& m) {
    os << "{";
    bool first = true;
    for (const auto& kv : m) {
        if (!first) {
            os << ", ";
        }
        first = false;
        os << kv.first << ": " << kv.second;
    }
    return os << "}";
}

template<class T, class U>
void AssertEqual(const T& t, const U& u,
    const string& hint)
{
    if (t != u) {
        ostringstream os;
        os << "Assertion failed: " << t << " != " << u
            << " hint: " << hint;
        throw runtime_error(os.str());
    }
}

inline void Assert(bool b, const string& hint) {
    AssertEqual(b, true, hint);
}

class TestRunner {
public:
    template <class TestFunc>
    void RunTest(TestFunc func, const string& test_name) {
        try {
            func();
            cerr << test_name << " OK" << endl;
        }
        catch (runtime_error& e) {
            ++fail_count;
            cerr << test_name << " fail: " << e.what() << endl;
        }
    }

    ~TestRunner() {
        if (fail_count > 0) {
            cerr << fail_count << " unit tests failed. Terminate" << endl;
            exit(1);
        }
    }

private:
    int fail_count = 0;
};

int GetDistinctRealRootCount(double a, double b, double c) {
    // Вы можете вставлять сюда различные реализации функции,
    // чтобы проверить, что ваши тесты пропускают корректный код
    // и ловят некорректный
    return 2;
}

void TestTwoRoots() {
    AssertEqual(GetDistinctRealRootCount(1, 4, 3), 2, "x^2 + 4x + 3 = 0 has 2 roots");
    AssertEqual(GetDistinctRealRootCount(1, -4, 3), 2, "x^2 - 4x + 3 = 0 has 2 roots");
    AssertEqual(GetDistinctRealRootCount(1, 0, -9), 2, "x^2 - 9 = 0 has 2 roots");
    AssertEqual(GetDistinctRealRootCount(4, 0, -9), 2, "x^2 - 9 = 0 has 2 roots");
}

void TestOneRoot() {
    // Two identical roots:
    AssertEqual(GetDistinctRealRootCount(1, 2, 1), 1, "x^2 + 2x + 1 = 0 has 1 root");
    AssertEqual(GetDistinctRealRootCount(1, -2, 1), 1, "x^2 - 2x + 1 = 0 has 1 root");
    AssertEqual(GetDistinctRealRootCount(4, -4, 1), 1, "4x^2 - 4x + 1 = 0 has 1 root");
    AssertEqual(GetDistinctRealRootCount(4, 0, 0), 1, "4x^2 = 0 has 1 root");
    AssertEqual(GetDistinctRealRootCount(-3, 0, 0), 1, "-3x^2 = 0 has 1 root");

    // Linear equation
    AssertEqual(GetDistinctRealRootCount(0, 1, 0), 1, "x = 0 has 1 root");
    AssertEqual(GetDistinctRealRootCount(0, 2, 1), 1, "2x + 1 = 0 has 1 root");
    AssertEqual(GetDistinctRealRootCount(0, 2, -1), 1, "2x - 1 = 0 has 1 root");
}

void TestZeroRoots() {
    // 0x+c = 0
    AssertEqual(GetDistinctRealRootCount(0, 0, 1), 0, "0x + 1 = 0 has no roots");
    AssertEqual(GetDistinctRealRootCount(0, 0, -5), 0, "0x -5 = 0 has no roots");
    
    // Discriminant less than 0
    AssertEqual(GetDistinctRealRootCount(1, 1, 1), 0, "x^2 + x + 1 = 0 has no roots");
    AssertEqual(GetDistinctRealRootCount(1, -1, 1), 0, "x^2 - x + 1 = 0 has no roots");
    AssertEqual(GetDistinctRealRootCount(4, -1, 9), 0, "4x^2 - x + 9 = 0 has no roots");
    AssertEqual(GetDistinctRealRootCount(4, 0, 9), 0, "4x^2 + 9 = 0 has no roots");
}

void TestAll() {
    TestRunner tr;
    tr.RunTest(TestTwoRoots, "TestTwoRoots");
    tr.RunTest(TestOneRoot, "TestOneRoot");
    tr.RunTest(TestZeroRoots, "TestZeroRoots");
}

int main() {
    TestAll();
    return 0;
}