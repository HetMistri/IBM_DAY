# FIRST OF ALL, IMPORT THE NUMBERS FILE:

with open("problem_statement_1/numbers.txt") as file:
    # READ THE CONTENT OF THE FILE, SPLIT
    numbers = file.read().split()

    # FILTER ONLY 6 DIGIT NUMBERS
    #CHECK USING LEN OF STRING REPRESENTATION OF THE NUMBER
    six_digit_numbers = []
    for number in numbers:
        if len(number) == 6:
            six_digit_numbers.append(number)

    # CHECK FOR PATTERN OOOEEO
    pattern_numbers = []
    for number in six_digit_numbers:
        #SINCE WE CAN USE STRING INDEXING TO ACCESS EACH DIGIT, WE CAN CHECK THE PATTERN DIRECTLY
        #WE CONVERT THE CHARACTER TO INTEGER TO PERFORM MODULO OPERATION
        if (int(number[0]) % 2 != 0 and   # O 
            int(number[1]) % 2 != 0 and   # O 
            int(number[2]) % 2 != 0 and   # O
            int(number[3]) % 2 == 0 and   # E
            int(number[4]) % 2 == 0 and   # E
            int(number[5]) % 2 != 0):     # O
            pattern_numbers.append(number)
    
    # NOW CHECK IF NUMBER IS DIVISIBLE BY 13
    divisible_by_13 = []
    for number in pattern_numbers:
        if int(number) % 13 == 0:
            divisible_by_13.append(number)

    print(divisible_by_13)