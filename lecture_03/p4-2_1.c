// Assuming x is 15.0 and y is 25.0, what are the values of the followong conditions?

int main(void) {
    float x = 15.0, y = 25.0;

    x != y;
    // (15.0 != 25.0)
    // Result: True

    x < x;
    // (15.0 < 15.0)
    // Result: False

    x >= y - x;
    // (15.0 >= 25.0 - 15.0) == (15.0 >= 10.0)
    // Result: True

    x == y + x - y;
    // (15.0 == 25.0 + 15.0 - 25.0) == (15.0 == 15.0)
    // Result: True
}