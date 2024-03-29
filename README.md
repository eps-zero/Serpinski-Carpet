# Serpinski Carpet

This is a C program that generates a Serpinski Carpet and saves it as a PPM image.

## Description

The Serpinski Carpet is a fractal pattern composed of filled and unfilled squares. This program generates a Serpinski Carpet using the provided C code and saves it as a PPM image file.

## Requirements

- C compiler
- `math.h` library

## Usage

1. Clone the repository:
```
git clone https://github.com/your-username/serpinski-carpet.git
```
2. Compile the code:
```
gcc serp_carpet.c -o serp_carpet -lm
```
3. Run the program:
```
./serp_carpet
```

4. After execution, the program will generate a file named `serp_carpet.ppm` which contains the Serpinski Carpet image.

## Convert to png

Compile the code:
```
convert serp_carpet.ppm serp_carpet.png
```
## Example Output

Below is an example of a Serpinski Carpet generated by the program:

![Serpinski Carpet](serp_carpet.png)

## Parameters

The program uses the `ITER` constant to control the number of iterations for generating the Serpinski Carpet. Modify this value in the `serp_carpet.c` header file to adjust the level of detail in the generated image.

## Contributing

Feel free to contribute to this project by creating pull requests. Any enhancements or bug fixes are welcome.

