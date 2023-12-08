#!/usr/bin/python3
def is_palindrome(n):
  s = str(n)
  r = s[::-1]
  return s == r

largest = 0

for i in range(999, 99, -1):
  for j in range(i, 99, -1):
    product = i * j
    if is_palindrome(product):
      if product > largest:
        largest = product

print(largest)
