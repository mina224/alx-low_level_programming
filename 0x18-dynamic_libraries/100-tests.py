import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
n = random.randint(-111, 111)
m = random.randint(-111, 111)
print("{} + {} = {}".format(n, m, cops.add(n, m)))
print("{} - {} = {}".format(n, m, cops.sub(n, m)))
print("{} x {} = {}".format(n, m, cops.mul(n, m)))
print("{} / {} = {}".format(n, m, cops.div(n, m)))
print("{} % {} = {}".format(n, m, cops.mod(n, m)))
