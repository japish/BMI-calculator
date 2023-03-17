weight = float(input("Enter your weight in kilograms: "))
height = float(input("Enter your height in meters: "))

bmi = calculate_bmi(weight, height)
bmi_category = get_bmi_category(bmi)

print("Your BMI is {:.1f}, which is considered {}".format(bmi, bmi_category))
