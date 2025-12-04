def lesserThanT(A, B, t):
    return A if len(list(filter(lambda x: x < t, A))) > len(list(filter(lambda x: x < t, B))) else B



t = int(input())

A, B = [], []

for i in range(5):
    A.append(int(input()))
for i in range(5):
    B.append(int(input()))

for i in lesserThanT(A, B, t):
    print(i)



