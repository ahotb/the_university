def reverse(lst):
   result = []
   for unm in range(len(lst) - 1, -1, -1):
      result.append(lst[unm])
   return result

im = [1,2,3]
print(reverse(im))