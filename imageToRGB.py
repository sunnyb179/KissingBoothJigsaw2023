# Import image class of matplotlib
import matplotlib.image as img

# Open a file for writing
with open('rgb_values.txt', 'w') as file:
    # Read batman image and print dimensions
    image = img.imread('batman.jpg')
    height, width, channels = image.shape
    file.write(f"{width} {height}\n")

    # Iterate through each pixel and write the RGB values to the file
    for row in image:
        for temp_r, temp_g, temp_b in row:
            file.write(f"{temp_r} {temp_g} {temp_b}\n")
