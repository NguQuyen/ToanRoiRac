def tinh_giai_thua(n):
    if n == 0 or n == 1:  # Điều kiện dừng
        return 1
    return n * tinh_giai_thua(n - 1)  # Gọi đệ quy

n = int(input())
print(tinh_giai_thua(n))
