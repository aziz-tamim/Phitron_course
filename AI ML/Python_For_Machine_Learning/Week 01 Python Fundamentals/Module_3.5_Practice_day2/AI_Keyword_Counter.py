inp = input()
s = ["ai","data","model","learn","train","neural"]
sp = inp.split()
cnt = 0
for i in sp:
    if i in s:
        cnt += 1
if cnt >= 2:
    print("AI Detected")
else:
    print("Not AI Related")