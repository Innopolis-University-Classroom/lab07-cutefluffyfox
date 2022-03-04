//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body

template <typename T = int>
public class Calculator {
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    T add() { return n1 + n2; }
    T subtract() { return n1 - n2; }
    T multiply() { return n1 * n2; }
    T divide() { return n1 / n2; }
};















