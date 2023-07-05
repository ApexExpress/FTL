import math

def calculate_magnetic_field(magnetic_moment, position, observation_point):
    # Constants
    mu0 = 4 * math.pi * 10**-7  # Permeability of free space

    # Calculate the distance between the dipole and the observation point
    r = math.sqrt(sum([(pos - obs)**2 for pos, obs in zip(position, observation_point)]))

    # Calculate the magnetic field strength
    magnitude = (mu0 / (4 * math.pi)) * (3 * (magnetic_moment.dot(observation_point - position)) *
                                        (observation_point - position) / r**5 - magnetic_moment / r**3)

    return magnitude

# Example usage
if __name__ == '__main__':
    # Magnetic moment of the dipole
    magnetic_moment = np.array([0, 0, 1])  # Assuming a magnetic moment along the z-axis

    # Position of the dipole
    position = np.array([0, 0, 0])  # Assuming the dipole is located at the origin

    # Observation point
    observation_point = np.array([1, 0, 0])  # Observing the field at a point (1, 0, 0)

    # Calculate the magnetic field at the observation point
    magnetic_field = calculate_magnetic_field(magnetic_moment, position, observation_point)
    print(f"Magnetic field at the observation point: {magnetic_field}")
