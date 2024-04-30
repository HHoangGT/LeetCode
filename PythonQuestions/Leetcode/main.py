import numpy as np
import sys


class Solution:
    # Problem 650 LeetCode
    def can_place_flowers(self, flowerbed: list[int], n: int) -> bool:
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

    # Problem 345 LeetCode
    def reverseVowels(self, s: str) -> str:
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

    # Problem 151 LeetCode
    def reverseWords(self, s: str) -> str:
        words = s.split()
        words.reverse()
        return " ".join(map(str, words))

    # Problem 238 LeetCode
    def product_with_reduce(self, lst: list[int]) -> int:
        return np.prod(lst)

    def remove_list_element(self, lst: list[int], index: int) -> list[int]:
        return lst[:index] + lst[index + 1:]

    def productExceptSelf(self, nums: list[int]) -> list[int]:
        # first method
        # return [product_with_reduce(remove_list_element(nums, index=i)) for i in range(len(nums))]

        # second method
        prod = 1
        zero_count = 0

        for num in nums:
            if num == 0:
                zero_count += 1
            else:
                prod *= num

        if zero_count == 0:
            return [int(prod / num) for num in nums]
        elif zero_count == 1:
            return [0 if num != 0 else prod for num in nums]
        else:
            return [0 for num in nums]

    # Problem 334 LeetCode
    def increasingTriplet(self, nums: list[int]) -> bool:
        n = len(nums)
        if n < 3:
            return False
        else:
            left = sys.maxsize
            mid = sys.maxsize
            for num in nums:
                if num > mid:
                    return True
                elif num > left and num < mid:
                    mid = num
                elif num < left:
                    left = num
        return False

    # Problem 443 LeetCode
    def compress(self, chars: list[str]) -> int:
        res = ""
        count = 0
        index = 0
        if len(chars) == 1:
            return 1
        while index < len(chars):
            if index == 0:
                count += 1
                index += 1
                continue
            else:
                if chars[index] == chars[index - 1]:
                    count += 1
                    index += 1
                    if (index == len(chars)):
                        res += chars[index - 1]
                        if count != 1:
                            res += str(count)
                    continue
                else:
                    res += chars[index - 1]
                    if count != 1:
                        res += str(count)
                    count = 1
                    index += 1
                    if (index == len(chars)):
                        res += chars[index - 1]
                        if count != 1:
                            res += str(count)
        chars[:] = list(res)
        return len(chars)

    # Problem 283 LeetCode
    def moveZeros(self, nums: list[int]) -> None:
        lst2 = [num for num in nums if num != 0]
        zero_count = nums.count(0)
        lst2.extend([0] * zero_count)
        nums[:] = lst2


if __name__ == '__main__':
    solution = Solution()
    nums = [0, 1, 0, 3, 12]
    solution.moveZeros(nums)
    print(nums)
