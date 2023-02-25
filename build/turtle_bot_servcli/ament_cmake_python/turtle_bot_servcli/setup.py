from setuptools import find_packages
from setuptools import setup

setup(
    name='turtle_bot_servcli',
    version='0.0.0',
    packages=find_packages(
        include=('turtle_bot_servcli', 'turtle_bot_servcli.*')),
)
