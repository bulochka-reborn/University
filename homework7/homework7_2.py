def notInAInBGreaterThanZero(A, B):
    return set(filter(lambda x: x > 0, B)) - A


A = set(map(int, input().split()))
B = set(map(int, input().split()))

print(*notInAInBGreaterThanZero(A, B))