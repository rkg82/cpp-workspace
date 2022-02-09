# UUID V4

A Version 4 UUID is a universally unique identifier that is generated using random numbers, for example `0065e7d7-418c-4da4-b4d6-b54b6cf7466a`.

This is a header only V4 UUID generator using random numbers

Usage

```cpp
#include <iostream>
#include "uuid/v4/uuid.h"

void main()
{
  auto new_uuid = uuid::v4::UUID::New();
  
  std::cout << "UUID: " << new_uuid.String() << std::endl;
}

```

Build & Run app in `eclipse-che`
-------------------------------

1. Create a bin folder in the root folder
2. Open `Terminal in specific container` option from `Terminal` menu
3. Select `cpp-dev` container and enter `make`

```bash
make
```
4. After build completion, run by

```bash
./bin/uuid-gen
```
