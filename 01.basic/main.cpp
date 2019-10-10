int default_plus(int x, int y) {
    return x + y;
}

// ロケットが発射可能かどうかを返す関数
bool is_rocket_ready_to_launch() {
    // まだだよ
    return false;
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


    auto x = 0;
    {
        auto x = 1;
        {
            auto x = 2;
            // 2
            std::cout << x;
        }
        // 1
        std::cout << x;
        x = 42;
        // 42
        std::cout << x;
    }
    // 0
    std::cout << x;

    bool correct = true;
    bool wrong = false;

    // std::boolalphaを一度出力すると、それ移行の値が、true、falseで出るようになる.
    //　std::noboolalpha でもとに戻る.
    std::cout << std::boolalpha;
    std::cout << true << false;
    std::cout << std::noboolalpha;
    std::cout << true << false;

    // ロケットが発射可能ではないときに実行される
    if (!is_rocket_ready_to_launch()) {   // もうしばらくそのままでお待ちください
        std::cout << "Standby...\n";
    }

    auto boolA = []() {
        std::cout << "a\n"s;
        return false;
    };
    auto boolB = []() {
        std::cout << "b\n"s;
        return true;
    };

    // 短絡評価. aがfalseなのでbは実行されない.
    bool boolC = boolA() && boolB();
    std::cout << std::boolalpha << boolC << std::noboolalpha;

    auto xx = 1;

    // 代入式を()で囲むことで、意図的に代入を行ってると明示できる.
    if ((xx = 0))
        std::cout << "x is 123.\n"s;
    else
        std::cout << "x is NOT 123.\n"s;

    auto calcBmi = [](double height, double mass) {
        return mass / (height * height);
    };

    auto getBmiStatus = [](double bmi) {
        if (bmi < 18.5)
            return "Underweight.\n"s;
        else if (bmi < 25.0)
            return "Normal.\n"s;
        else if (bmi < 30.0)
            return "Overweight.\n"s;
        else
            return "Obese."s;
    };

    // 身長の入力
    double ownHeight{};
    std::cout << "height(m)>";
    std::cin >> height;

    // 体重の入力
    double ownMass{};
    std::cout << "mass(kg)>";
    std::cin >> mass;

    auto ownBmi = calcBmi(ownHeight, ownMass);

    std::cout << "BMI = " << ownBmi << "\n";
    std::cout << "Your Bmi is " << getBmiStatus(ownBmi) << "\n";

    // boolの標準入力は通常0 || not 0で行う
    //bool b{} ;
    //std::cin >> b ;

    // true, falseで行いたい場合、std::cinにstd::boolalphaを入力させる.
    //bool b{} ;
    //std::cin >> std::boolalpha >> b ;
    //std::cout << std::boolalpha << b ;
}