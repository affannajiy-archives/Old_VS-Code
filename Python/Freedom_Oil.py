def refinery_system(crude_oil_list):
  percent_crude_oil = []
  total_crude_oil = sum(crude_oil_list)

  for i in crude_oil_list:
    percent_crude_oil.append(i / total_crude_oil * 100)
  
  gasoline = 0.45 * total_crude_oil
  diesel = 0.35 * total_crude_oil
  jet_fuel = 0.2 * total_crude_oil

  return total_crude_oil, percent_crude_oil, gasoline, diesel, jet_fuel

num = int(input("Please enter total number of refinery units: "))
crude_oil_list = []

for j in range(num):
  unit = eval(input("Please enter the amount of crude oil in unit " + str(i+1) +":"))
  crude_oil_list.append(unit)