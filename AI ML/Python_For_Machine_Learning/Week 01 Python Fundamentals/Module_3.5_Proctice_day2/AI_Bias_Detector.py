inp = input().split()
cntA = 0
cntB = 0
for i in inp:
    if i == "A":
        cntA += 1
    else:
        cntB += 1
ans = len(inp)

perA = (cntA/ans)*100
perB = (cntB/ans)*100

if perA>70 or perB>70:
    print("Biased Model")
else:
    print("Fair Model")