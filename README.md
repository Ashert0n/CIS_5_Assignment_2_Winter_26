# CIS_5 Assignment 2 (Winter 2026)

A small C++ program that collects user information, calculates BMI (Body Mass Index), and converts a numeric test score into a letter grade.

## What the program does

1. Asks the user for basic information:
   - Name
   - Age
   - Height (in meters)
   - Weight (in kilograms)

2. Calculates BMI and tells the user their weight category.
3. Asks for a test score (0–100) and converts it to a letter grade.
4. Prints a personalized summary message.

## Inputs and types

- Name: `std::string`
- Age: `int`
- Height (meters): `double`
- Weight (kilograms): `double`
- Test score (0–100): `int`

## BMI calculation

Formula:
bmi = weight / (height \* height)

Categories:

- BMI < 18.5 → Underweight
- BMI 18.5 – 24.9 → Normal weight
- BMI 25 – 29.9 → Overweight
- BMI ≥ 30 → Obese

(Recommend printing BMI to 1–2 decimal places for reaBdability.)

## Grade calculation

Convert the numeric score to a letter grade:

- 90 – 100 → A
- 80 – 89 → B
- 70 – 79 → C
- 60 – 69 → D
- Below 60 → F

## Final output

Print a personalized message using the user's name, for example:

"Hey Alex, you're 20 years old with a BMI of 22.45 (Normal weight) and you got a grade A! Keep it up! 🚀"

## Example interaction

(Example user input shown after prompts)

```
Enter your name: Alex
Enter your age: 20
Enter your height (meters): 1.75
Enter your weight (kg): 68
Enter your test score (0-100): 92

Hey Alex, you're 20 years old with a BMI of 22.20 (Normal weight) and you got a grade A! Keep it up! 🚀
```

## Implementation notes / tips

- Use `std::string` for the name and `int` / `double` for numeric inputs.
- Use `std::fixed` and `std::setprecision(2)` (from `<iomanip>`) to format the BMI output.
- Validate inputs where appropriate (e.g., non-negative height/weight, score between 0 and 100).
- Keep the program interactive with clear prompts.

## Summery of work

Here I made a program which collects the user's data, calculate their BMI and calculate their letter grade.

https://drive.google.com/file/d/14vyM_S_vJduCHOj7KhrhzEN42Nh_e6cZ/view?usp=sharing
