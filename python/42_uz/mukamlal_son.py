import math
import sys

# Kiritilgan ma'lumotlarni o'qish (n va m)
# sys.stdin.read() orqali barcha ma'lumotni o'qish tezroq ishlashini ta'minlaydi.
try:
    data = sys.stdin.read().split()
    if not data:
        n = 0
        m = 0
    else:
        n = int(data[0])
        m = int(data[1])
except Exception:
    # Kiritish xatosi bo'lsa, nol natija qaytarish
    n = 0
    m = 0

def distribute_promo_codes(n, m):
    """
    Promo kodlarni taqsimlash jarayonini simulyatsiya qiladi.

    :param n: Promo kodlarning boshlang'ich soni (1 <= n <= 10^9)
    :param m: Taklif qilingan do'stlarning soni (1 <= m <= 50)
    :return: Kamida bitta kod olgan do'stlarning soni
    """
    
    # Kichik n (10^9 gacha) va kichik m (50 gacha) tufayli to'g'ridan-to'g'ri simulyatsiya samarali.
    
    current_codes = n
    friends_received = 0
    
    # m marta takrorlash (har bir do'st uchun)
    for _ in range(m):
        
        # Agar kodlar tugagan bo'lsa, jarayonni to'xtatish
        if current_codes == 0:
            break
            
        # Do'st olgan kodlar soni: Qolgan kodlarning yarmi (yuqoriga qarab yaxlitlangan)
        # math.ceil(a / b) ni butun sonlar bilan (a + b - 1) // b formulasi bilan ham topish mumkin
        received_codes = math.ceil(current_codes / 2)
        
        # Qolgan kodlarni yangilash
        current_codes -= received_codes
        
        # Kod olgan do'stlar sonini oshirish
        friends_received += 1
        
    return friends_received

# Natijani chiqarish
print(distribute_promo_codes(n, m))