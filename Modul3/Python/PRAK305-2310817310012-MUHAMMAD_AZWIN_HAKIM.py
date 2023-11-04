i = 1

while i <= 5:
    d = int(input())

    jam = d // 3600
    sisadetik = d % 3600

    menit = sisadetik // 60
    detik = sisadetik % 60

    if 0 < jam <= 24:
        print(f"{jam:02d}:{menit:02d}:{detik:02d}")
    elif jam == 0 and menit > 0:
        print(f"{jam:02d}:{menit:02d}:{detik:02d}")
    elif jam > 24:
        hari = jam // 24
        jam = jam % 24
        print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")

    i += 1
