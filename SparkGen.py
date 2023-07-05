import random
import time

def generate_sparks(num_sparks, duration):
    for _ in range(num_sparks):
        x = random.uniform(-1, 1)
        y = random.uniform(-1, 1)
        z = random.uniform(-1, 1)

        print(f"Spark generated at coordinates: ({x}, {y}, {z})")

        time.sleep(duration)

# Example usage
if __name__ == '__main__':
    num_sparks = 10
    spark_duration = 0.5  # Time duration between each spark in seconds

    generate_sparks(num_sparks, spark_duration)
