import psycopg2

# Bazaga ulanish funksiyasi
def connect_db():
    return psycopg2.connect(
        dbname="students_db",
        user="postgres",
        password="yourpassword",
        host="localhost",
        port="5432"
    )

# 1) Talaba qo'shish
def add_student():
    conn = connect_db()
    cursor = conn.cursor()

    name = input("Talaba ismi: ")
    group_name = input("Guruhi: ")
    faculty = input("Fakulteti: ")

    cursor.execute("""
        INSERT INTO students (name, group_name, faculty)
        VALUES (%s, %s, %s)
    """, (name, group_name, faculty))

    conn.commit()
    cursor.close()
    conn.close()

    print("✅ Talaba bazaga qo'shildi!\n")

# 2) Barcha talabalarni ko'rish
def show_students():
    conn = connect_db()
    cursor = conn.cursor()

    cursor.execute("SELECT * FROM students")
    rows = cursor.fetchall()

    print("\n📋 Talabalar ro'yxati:")
    for row in rows:
        print(f"ID: {row[0]}, Ismi: {row[1]}, Guruh: {row[2]}, Fakultet: {row[3]}")

    print()
    cursor.close()
    conn.close()

# 🔹 Asosiy menyu
while True:
    print("====== TALABA BAZASI ======")
    print("1. Talaba qo'shish")
    print("2. Barcha talabalarni ko'rish")
    print("3. Chiqish")

    choice = input("Tanlang (1-3): ")

    if choice == "1":
        add_student()
    elif choice == "2":
        show_students()
    elif choice == "3":
        print("✅ Dastur tugadi.")
        break
    else:
        print("❌ Noto‘g‘ri tanlov!\n")
