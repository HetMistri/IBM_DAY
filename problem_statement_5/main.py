def main():
    start = 37
    rotations = ["R18", "L42", "R77", "L15", "R64"]

    current = start
    stopped_numbers = []

    for move in rotations:
        direction = move[0]
        steps = int(move[1:])

        if direction == "R":
            current = (current + steps) % 100
        else:
            current = (current - steps) % 100

        stopped_numbers.append(current)

    final_sum = sum(stopped_numbers)
    print(final_sum)


if __name__ == "__main__":
    main()
