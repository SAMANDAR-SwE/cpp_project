import psycopg2
from psycopg2 import Error

try:
    # Bog'lanish
    connection = psycopg2.connect(
        dbname="test_db",
        user="postgres",
        password="SIZNING_PAROLINGIZ",   # ← Bu yerni o'zgartiring!
        host="localhost",
        port="5432"
    )

    print("✅ Muvaffaqiyatli ulandi!")

    # Jadval yaratish (faqat bir marta kerak)
    cursor = connection.cursor()
    cursor.execute("""
        CREATE TABLE IF NOT EXISTS users (
            id     SERIAL PRIMARY KEY,
            ism    VARCHAR(100) NOT NULL,
            yosh   INTEGER,
            shahar VARCHAR(100)
        );
    """)

    print("Users jadvali mavjud yoki yaratildi")

    # Test uchun ma'lumot qo'shish
    ism = input("Ism kiriting: ")
    yosh = int(input("Yosh kiriting: "))
    shahar = input("Shahar kiriting: ")

    cursor.execute(
        "INSERT INTO users (ism, yosh, shahar) VALUES (%s, %s, %s)",
        (ism, yosh, shahar)
    )

    connection.commit()
    print("Ma'lumot muvaffaqiyatli saqlandi! ✓")

except Error as e:
    print("Xatolik yuz berdi:")
    print(e)

finally:
    if connection:
        cursor.close()
        connection.close()
        print("Ulanish yopildi")