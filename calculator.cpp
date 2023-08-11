# include <iostream>
using namespace std;

int main() {

  char op;
  float n1, n2;

  cout << "Please Enter Your operator: +, -, *, /: ";
  cin >> op;

  cout << "Please Enter your operands: ";
  cin >> n1 >> n2;

  switch(op) {

    case '+':
      cout << n1 << " + " << n2 << " = " << n1 + n2;
      break;

    case '-':
      cout << n1 << " - " << n2 << " = " << n1 - n2;
      break;

    case '*':
      cout << n1 << " * " << n2 << " = " << n1 * n2;
      break;

    case '/':
      cout << n1 << " / " << n2 << " = " << n1 / n2;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! Please Enter Your Operator is right";
      break;
  }

  return 0;
}
