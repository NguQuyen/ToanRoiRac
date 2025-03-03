# Ham tinh giai thua
def tinh_giai_thua(n):
  # Tính giai thừa của một số nguyên n
  if n == 0:
    return 1
  else:
    giai_thua = 1
    for i in range(1, n + 1):
      giai_thua *= i
    return giai_thua

n = int(input())
print(tinh_giai_thua(n))

