def fibonacci_modulo(n, mod):
    if n <= 1:
        return n
    a = 0
    b = 1
    for _ in range(2, n + 1):
        c = (a + b) % mod
        a = b
        b = c
    return b

n = int(input())
mod = 10**9 + 7
result = fibonacci_modulo(n, mod)
print(result)