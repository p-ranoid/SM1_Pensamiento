import math
from functools import reduce

def mcd_conjunto(nums):
    return reduce(math.gcd, nums)

print(mcd_conjunto([12, 18, 24]))