
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    // Инициализация переменных

//#define CHAR_BIT      8
//#define SCHAR_MIN   (-128)
//#define SCHAR_MAX     127
//#define UCHAR_MAX     0xff
//
//#ifndef _CHAR_UNSIGNED
//#define CHAR_MIN    SCHAR_MIN
//#define CHAR_MAX    SCHAR_MAX
//#else
//#define CHAR_MIN    0
//#define CHAR_MAX    UCHAR_MAX
//#endif
//
//#define MB_LEN_MAX    5
//#define SHRT_MIN    (-32768)
//#define SHRT_MAX      32767
//#define USHRT_MAX     0xffff
//#define INT_MIN     (-2147483647 - 1)
//#define INT_MAX       2147483647
//#define UINT_MAX      0xffffffff
//#define LONG_MIN    (-2147483647L - 1)
//#define LONG_MAX      2147483647L
//#define ULONG_MAX     0xffffffffUL
//#define LLONG_MAX     9223372036854775807i64
//#define LLONG_MIN   (-9223372036854775807i64 - 1)
//#define ULLONG_MAX    0xffffffffffffffffui64
//
//#define _I8_MIN     (-127i8 - 1)
//#define _I8_MAX       127i8
//#define _UI8_MAX      0xffui8
//
//#define _I16_MIN    (-32767i16 - 1)
//#define _I16_MAX      32767i16
//#define _UI16_MAX     0xffffui16
//
//#define _I32_MIN    (-2147483647i32 - 1)
//#define _I32_MAX      2147483647i32
//#define _UI32_MAX     0xffffffffui32
//
//#define _I64_MIN    (-9223372036854775807i64 - 1)
//#define _I64_MAX      9223372036854775807i64
//#define _UI64_MAX     0xffffffffffffffffui64

    short minValueShort = SHRT_MIN; // Минимальное значение типа short -32768
    short manValueShort = SHRT_MAX; // Максимальное значение типа short 32767

    int minValueInt = INT_MIN;  // Минимальное значение типа int -2147483648
    int maxValueInt = INT_MAX;  // Максимальное значение типа int 2147483647

    long myLong_min = LONG_MIN; // Минимальное значение: LONG_MIN
    long myLong_max = LONG_MAX; // Максимальное значение: LONG_MAX

    long long myLongLong_min = LLONG_MIN; // Минимальное значение: LLONG_MIN
    long long myLongLong_max = LLONG_MAX; // Максимальное значение: LLONG_MAX


    float minValueFloat = FLT_MIN;  // Минимальное значение типа float
    float maxValueFloat = FLT_MAX;  // Максимальное значение типа float

    double minValueDouble = DBL_MIN;  // Минимальное значение типа double
    double maxValueDouble = DBL_MAX;  // Максимальное значение типа double

    std::cout << minValueShort << "\n" << manValueShort << "\n" << minValueInt << "\n" << maxValueInt << "\n" << myLong_min << "\n" << myLong_max << "\n" << myLongLong_min 
    << "\n" << myLongLong_max << "\n" << minValueFloat << "\n" << maxValueFloat << "\n" << minValueDouble << "\n" << maxValueDouble << std::endl;



    // Инициализация переменных
    float area; // Площадь треугольника
    float height; // Высота треугольника
    float base; // Основание треугольника

    // Ввод значений площади и высоты
    std::cout << "Введите значение площади треугольника: ";
    std::cin >> area;
    while (area < 0)
    {
        std::cout << "Введите значение площади треугольника, оно не может быть меньше нуля: ";
        std::cin >> area;
    }

    std::cout << "Введите значение высоты треугольника, оно не может быть меньше нуля: ";
    std::cin >> height;

    while (height < 0)
    {
        std::cout << "Введите значение высоты треугольника, оно не может быть меньше нуля: ";
        std::cin >> height;
    }

	// Расчет значения основания
	base = (2 * area) / height;

	// Вывод результата
	std::cout << "Значение основания треугольника: " << base << std::endl;

	return 0;

}

