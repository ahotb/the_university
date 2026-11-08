# print("Welcome to FizzBuzz!")

# def fizzbuzz(agr) -> int:
#     if agr % 3 == 0 and agr % 7 == 0:
#         return "FizzBuzz"
#     elif agr % 3 == 0:
#         return "Fizz"
#     elif agr % 7 == 0:
#         return "Buzz"
#     else:
#         return agr

# for i in range(1, 100 +1):
#     print(fizzbuzz(i))


def values(lst):
    # اكتب الكود هنا
    for i in range(len(lst)):
        print(lst[i])

my = [5, 9, 2, 10, 2]
values(my)