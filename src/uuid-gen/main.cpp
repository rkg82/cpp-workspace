#include <iostream>
#include "uuid/v4/uuid.h"

int main()
{
  // Generate a UUID
  std::cout << "UUID Generator" << std::endl << uuid::v4::UUID::New().String() << std::endl;

  return 0;
}