from setuptools import setup

package_name = 'turtle_bot_15'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Lider - Grupo 15',
    maintainer_email='n.rincon4@uniandes.edu.co',
    description='Paquete asociado al robot teleoperado del punto 1 del Taller 1 de Robotica (2023-10)',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
                'turtle_bot_teleop = turtle_bot_15.turtle_bot_teleop:main',
                'turtle_bot_interface = turtle_bot_15.turtle_bot_interface:main',
        ],
    },
)