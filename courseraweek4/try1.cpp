// A base class Pair contains a single constructor Pair(a,b) that initializes the pair with the two integer arguments a and b. A derived class sumPair inherits the base class Pair, and specializes it with a new constructor sumPair(a,b) and a new variable sum.

// Both of these classes have already been defined.

// Implement the new constructor sumPair(a,b), which was declared already in class sumPair. The new constructor sumPair(a,b) should initialize the inherited class Pair with integer values a,b and set the member variable "sum"  to the sum of a and b.




 
int main() {
  sumPair sp(15,16);
  std::cout << "sp(15,16).sum =" << sp.sum << std::endl;
  return 0;
}