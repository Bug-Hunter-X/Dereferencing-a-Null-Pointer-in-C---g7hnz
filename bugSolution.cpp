int main() {
  int* ptr = nullptr; 
  if (ptr != nullptr) { 
    *ptr = 10; // Dereferencing only if ptr is not null
  } else {
    //Handle the case where ptr is null appropriately. For instance, you might allocate memory or display an error message.
      std::cerr << "Error: Null pointer detected!\n";
  }
  return 0; 
}