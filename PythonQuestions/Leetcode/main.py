# Problem 650 LeetCode
def can_place_flowers(flowerbed: list[int], n: int) -> bool:
    if n == 0:
        return True
    if len(flowerbed) == 1:
        return True if flowerbed[0] == (n - 1) else False
    for i in range(len(flowerbed)):
        if flowerbed[i] == 0:
            if i == 0:
                if flowerbed[i + 1] == 0:
                    flowerbed[i] = 1
                    n -= 1
            elif i == len(flowerbed) - 1:
                if flowerbed[i - 1] == 0:
                    flowerbed[i] = 1
                    n -= 1
            else:
                if flowerbed[i + 1] == 0 and flowerbed[i - 1] == 0:
                    flowerbed[i] = 1
                    n -= 1
            if n == 0:
                return True
    return False


if __name__ == '__main__':
    n = [1, 0, 0, 0, 0, 1]
    print(can_place_flowers(flowerbed=n, n=2))
