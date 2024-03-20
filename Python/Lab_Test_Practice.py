intro = "Welcome to the Formula 1 Free Practice Lap Recorder"
print(intro)
print("=" * len(intro))

driver_num = int(input("Enter the number of driver(s): "))
lap_num = int(input("Enter the number of lap(s): "))
drivers = []
total_times = []

for i in range(driver_num):
    driver_name = input("Enter the name of Driver {}: ".format(i + 1))
    drivers.append(driver_name)
    lap_time = 0

    for lap in range(1, lap_num + 1):
        lap_time += float(input("Enter the lap time for {} (in seconds) for lap {}: ".format(driver_name, lap)))
    
    total_times.append(lap_time)

print("\nRace Results:")
print("No.\tName\t\tTotal Time")
for i in range(driver_num):
    print("{}\t{}\t\t{} seconds".format(i + 1, drivers[i], round(total_times[i], 2)))