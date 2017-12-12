// Function templates are functions that are parameterized so that they
// represent a family of functions.

// T: template parameter
// The keyword 'typename' introduces a type parameter.

// Due to historical reasons, template<class T> is also valid.

template<typename T>
T max (T a, T b) {
    // if b < a then yield a else yield b
    return b < a ? a : b;
}
