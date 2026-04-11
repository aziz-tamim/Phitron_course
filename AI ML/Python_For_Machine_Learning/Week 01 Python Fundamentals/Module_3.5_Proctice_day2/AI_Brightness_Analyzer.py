inp = input()
arr = list(map(int, inp.split()))

avarage = sum(arr) / len(arr)

if avarage < 85:
    print("Dark Image")
elif avarage <= 170:
    print("Normal Image")
else:
    print("Bright Image")