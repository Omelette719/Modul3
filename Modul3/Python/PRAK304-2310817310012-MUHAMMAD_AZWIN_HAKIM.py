i = 1

while i <= 5:
    a = int(input())
    
    if 20 <= a <= 99 or a == 10:
        print("Puluhan")
    elif 11 <= a <= 19:
        print("Belasan")
    elif 1 <= a <= 9:
        print("Satuan")
    elif a >= 100 or a < 0:
        print("Anda Menginput Melebihi Limit Bilangan")
    else:
        print("Nol")
    
    i += 1
