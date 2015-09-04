// RUN: %clang -### -c -malign-double %s -target i686-unknown-linux 2>&1 \
// RUN:   | FileCheck --check-prefix=CHECK-I686 %s

// CHECK-I686: -cc1
// CHECK-I686: +align-double
// CHECK-I686: "-mllvm" "-malign-double"

// RUN: %clang -### -c -malign-double %s -target x86-64-unknown-linux 2>&1 \
// RUN:   | FileCheck -check-prefix=CHECK-X86_64 %s

// CHECK-X86_64: -cc1
// CHECK-X86_64-NOT: +align-double
// CHECK-X86_64-NOT: "-mllvm" "-malign-double"
