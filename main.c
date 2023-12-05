int reverse(int num) {
    int result = 0;

    while (num != 0) {
        int digit = num % 10;
        num /= 10;

        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
            return 0; 
        }
        if (result < INT_MIN / 10 || (result == INT_MIN / 10 && digit < -8)) {
            return 0; 
        }

        result = result * 10 + digit;
    }

    return result;
}
