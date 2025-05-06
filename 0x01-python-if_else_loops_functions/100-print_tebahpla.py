#!/usr/bin/python3
for i in range(25, -1, -1):
    print("{:c}".format(122 - (i % 2) * 32 if i % 2 == 0 else 89 + i // 2), end="")
