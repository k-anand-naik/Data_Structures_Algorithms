#include <iostream>
#include <algorithm> // Include for std::max, std::min, and std::minmax
using namespace std;

// 1. Using if-else Statements
void min_max(int a, int b, int c) {
    int maximum, minimum;
    if (a >= b && a >= c) {
        maximum = a;
    } else if (b >= a && b >= c) {
        maximum = b;
    } else {
        maximum = c;
    }

    if (a <= b && a <= c) {
        minimum = a;
    } else if (b <= a && b <= c) {
        minimum = b;
    } else {
        minimum = c;
    }
    cout << "Maximum: " << maximum << endl;
    cout << "Minimum: " << minimum << endl;
}

// 2. Using Ternary Operator
void min_max_ternary(int a, int b, int c) {
    int maximum, minimum;

    maximum = (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c;
    minimum = (a <= b && a <= c) ? a : (b <= a && b <= c) ? b : c;

    cout << "Maximum: " << maximum << endl;
    cout << "Minimum: " << minimum << endl;
}

// 3. Using Built-in std::max and std::min Functions
void min_max_std(int a, int b, int c) {
    int maximum = max({a, b, c});
    int minimum = min({a, b, c});

    cout << "Maximum: " << maximum << endl;
    cout << "Minimum: " << minimum << endl;
}

// 4. Using Arrays and Sorting
void min_max_array_sorting(int array[3]) {
    sort(array, array + 3);
    cout << "Maximum: " << array[2] << endl;
    cout << "Minimum: " << array[0] << endl;
}

// 5. Using a Loop (Generalized for More than 3 Numbers)
void min_max_for_loop(int array[], int n) {
    int maximum = array[0];
    int minimum = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] > maximum) {
            maximum = array[i];
        }
        if (array[i] < minimum) {
            minimum = array[i];
        }
    }

    cout << "Maximum: " << maximum << endl;
    cout << "Minimum: " << minimum << endl;
}

// // 6. Using std::tie with std::minmax (C++11 and Above)
// void min_max_stdTie_std_minmax(int a, int b, int c) {
//     auto [minimum, maximum] = minmax({a, b, c});
//     cout << "Maximum: " << maximum << endl;
//     cout << "Minimum: " << minimum << endl;
// }
void min_max_stdTie_std_minmax(int a, int b, int c) {
    pair<int, int> result = minmax({a, b, c}); // Correct usage of std::minmax
    int minimum = result.first;
    int maximum = result.second;

    cout << "Maximum: " << maximum << endl;
    cout << "Minimum: " << minimum << endl;
}

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    cout << "\nUsing If-Else Statements:\n";
    min_max(a, b, c);

    cout << "\nUsing Ternary Operator:\n";
    min_max_ternary(a, b, c);

    cout << "\nUsing std::max and std::min:\n";
    min_max_std(a, b, c);

    cout << "\nUsing Array Sorting:\n";
    int array[3] = {a, b, c};
    min_max_array_sorting(array);

    cout << "\nUsing Loop for Multiple Numbers:\n";
    min_max_for_loop(array, 3);

    cout << "\nUsing std::tie with std::minmax:\n";
    min_max_stdTie_std_minmax(a, b, c);

    return 0;
}
