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


def reverseVowels(s: str) -> str:
    word = list(s)
    vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
    start_ptr = 0
    end_ptr = len(s) - 1
    while start_ptr < end_ptr:
        while start_ptr < end_ptr and word[start_ptr] not in vowels:
            start_ptr += 1
        while start_ptr < end_ptr and word[end_ptr] not in vowels:
            end_ptr -= 1
        word[start_ptr], word[end_ptr] = word[end_ptr], word[start_ptr]
        start_ptr += 1
        end_ptr -= 1
    return ''.join(word)


if __name__ == '__main__':
    s = "hello"
    print(reverseVowels(s))
