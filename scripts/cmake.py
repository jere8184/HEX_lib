import subprocess
import os

this_dir = os.path.dirname(os.path.abspath(__file__))

def find_cmake_path():
    path_env = os.environ["PATH"]
    path_env_tokens = path_env.split(";")
    for token in path_env_tokens:
        if token.find("CMake") != -1:
            return token


def main():
    path_to_cmakelist = os.path.join(this_dir, "..\\.")
    path_to_build = os.path.join(this_dir, "..\\build\\")
    subprocess.run(['cmake', path_to_cmakelist, '-B', path_to_build], check=True)

#run
main()

