def find_occurrences(text, pattern):
    # found = False
    count = 0
    positions = []
    for i in range(len(text)):
        position = text[i : i + len(pattern)]
        if position == pattern:
            # found = True
            count += 1
            positions.append(i)
        # else:
        #     continue
    return (len(positions) > 0, count, positions)


# print(find_occurrences("abababab", "aba"))