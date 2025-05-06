#!/usr/bin/python3
for i in range(0, 26):
    print("{:c}".format(122 - i if i % 2 == 0 else 67 if i == 25 else 90 - i), end="")
