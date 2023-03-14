height = float(input("Enter your height in meters: "))
weight = float(input("Enter your weight in kilograms: "))

bmi = weight / (height ** 2)

print("Your BMI is: {:.2f}".format(bmi))

if bmi < 18.5:
    print("You are underweight.")
elif 18.5 <= bmi < 25:
    print("Your weight is normal.")
elif 25 <= bmi < 30:
    print("You are overweight.")
else:
    print("You are obese.")
