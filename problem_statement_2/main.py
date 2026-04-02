encoded = "ngr%htqqfgtwfyj%nhy"
message = ""
result = []

for ch in encoded:
    # decode character
    decoded = chr(ord(ch) - 5)

    # check if alphabet
    if decoded.isalpha():
        decoded = decoded.upper()

        if 'A' <= decoded <= 'F':
            result.append("UP")
        elif 'G' <= decoded <= 'L':
            result.append("DOWN")
        elif 'M' <= decoded <= 'R':
            result.append("LEFT")
        elif 'S' <= decoded <= 'Z':
            result.append("RIGHT")
    
    message += decoded

print(message)
print(" ".join(result))