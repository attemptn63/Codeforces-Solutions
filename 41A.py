#tried python
def reverse(x):
    return x[::-1]
ans = reverse(input())
compare = input()
if ans == compare:
    print("YES")
else: print("NO")
