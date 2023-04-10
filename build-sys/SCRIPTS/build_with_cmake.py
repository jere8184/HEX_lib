import subprocess
import os

this_dir = os.path.dirname(os.path.abspath(__file__))

def find_cmake_path():
    path_env = os.environ["PATH"]
    path_env_tokens = path_env.split(";")
    for token in path_env_tokens:
        if token.find("CMake") != -1:
            return token

#$ conan install . --output-folder=build --build=missing

def main():
    path_to_src_root = os.path.join(this_dir, "..\\..\\.")
    path_to_build = os.path.join(this_dir, "..\\..\\build\\")
    path_to_conanfile = os.path.join(this_dir, "..\\CONAN\\")

    subprocess.run(["conan", "install", path_to_conanfile, "--output-folder=build", "--build=missing"], check=True)
    subprocess.run(['cmake', path_to_src_root, '-G', 'Visual Studio 17 2022' , '-B', path_to_build, '-DCMAKE_TOOLCHAIN_FILE=.\\build\\conan_toolchain.cmake'], check=True)
    subprocess.run(['cmake', '--build', path_to_build], check=True)

#run
main()