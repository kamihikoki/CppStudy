int default_plus(int x, int y) {
    return x + y;
}

int main() {
    std::cout << "one"s;
    std::cout << "two"s;
    std::cout << "three"s << "four"s << "five";

    // sつきと無しは違う.
    std::cout << "hello"s;
    std::cout << "hello";

    // エスケープシーケンスも扱える.
    std::cout << "aaa\nbbb\nccc"s;

    std::cout
            << "Integer: "s << 42 << "\n"s
            << "Floating Point: "s << 3.14;

    std::cout
            << 3 + 5 << " "s << 3 - 5 << " "s
            << 3 * 5 << " "s << 3 / 5 << " "s
            << 3 % 5;

    std::cout << 1 + 0.1;

    // エラーになる.
    //std::cout << 1 + "234"s ;

    // エラーにならない.
    std::cout << 1 + "234";

    auto answer = 42;
    std::cout << answer << "\n"s;

    auto pi = 3.14;
    std::cout << pi << "\n"s;

    auto question = "Life, The Universe, and Everything."s;
    std::cout << question;

    // これでもいい.
    auto a = 1;
    auto b(2);
    auto c{3};

    std::cout << a << "\n"s;

    a = 22;

    std::cout << a << "\n"s;

    // これはエラー.
    //a = "hello"s;

    // 型を明示.
    int i = 22;
    double d = 1.23;
    std::string s = "123"s;

    // 浮動小数点数型を整数型に変換（切り捨て）
    int ii = 3.14;
    // 3
    std::cout << ii << "\n"s;

    // 整数型を浮動小数点数型に変換
    double dd = 123;
    // 123
    std::cout << dd;

    /**
     * [] ラムダ式導入部
     * () 引数
     * {} 本体
     */

    // これは変数に代入されたラムダ式！
    auto print = [](auto x) {
        std::cout << x << "\n"s;
    };

    print(123);
    print(3.14);
    print("hello"s);

    auto twice = [](auto x) {
        std::cout << x << " "s << x << "\n"s;
    };

    twice(5);

    auto print_two = [](auto x, auto y) {
        std::cout << x << " "s << y << "\n"s;
    };

    print_two(1, 2);
    print_two("Pi is", 3.14);

    auto no_args = []() {
        std::cout << "Nothing.\n";
    };

    no_args();

    // () は C++ではoperator.

    auto plus = [](auto x, auto y) { return x + y; };

    std::cout
            << plus(1, 2) << "\n"s
            << plus(1.5, 0.5) << "\n"s
            << plus("123"s, "456"s);


    std::cout << default_plus(1, 2) << "\n"s;


    auto x = 0 ;
    {
        auto x = 1 ;
        {
            auto x = 2 ;
            // 2
            std::cout << x ;
        }
        // 1
        std::cout << x ;
        x = 42 ;
        // 42
        std::cout << x ;
    }
    // 0
    std::cout << x ;
}