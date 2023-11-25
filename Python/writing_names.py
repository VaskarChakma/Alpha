import turtle

# Set up the turtle
t = turtle.Turtle()
t.speed(1)
t.color("blue")

# Function to draw each character
def draw_character(char, font_size):
    t.write(char, font=("Times New Roman", font_size, "normal"))
    t.forward(font_size)

# Function to draw the text "VASKAR CHAKMA"
def draw_text():
    # Set the initial position
    t.penup()
    t.goto(-200, 0)
    t.pendown()

    # Set the font size
    font_size = 20
    t.pensize(2)

    # Draw each character one by one
    for char in "VASKAR CHAKMA":
        draw_character(char, font_size)

# Draw the text
draw_text()

# Close the turtle graphics window when clicked
turtle.done()
