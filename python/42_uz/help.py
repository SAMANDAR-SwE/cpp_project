import sys

# Kiritish/chiqarish tezligini oshirish
input = sys.stdin.read

def solve():
    data = input().split()
    if not data:
        return

    # Birinchi son N (xaritalar soni)
    try:
        N = int(data[0])
    except ValueError:
        return # Agar N berilmasa yoki noto'g'ri bo'lsa
    
    if N == 0:
        print(0)
        return

    # Qolgan ma'lumotlar xaritalar koordinatalari
    maps_raw = []
    # Data 1-indeksdan boshlanadi, har bir xarita 4 ta koordinatadan iborat
    for i in range(N):
        x1 = int(data[1 + i * 4])
        y1 = int(data[2 + i * 4])
        x2 = int(data[3 + i * 4])
        y2 = int(data[4 + i * 4])
        maps_raw.append((x1, y1, x2, y2))

    # Xaritalarni saqlash va normalizatsiya qilish (0-indeksdan boshlaymiz)
    maps = []
    for i, (x1, y1, x2, y2) in enumerate(maps_raw):
        # Normalizatsiya: x_min, x_max, y_min, y_max
        x_min = min(x1, x2)
        x_max = max(x1, x2)
        y_min = min(y1, y2)
        y_max = max(y1, y2)
        # (x_min, x_max, y_min, y_max, original_index)
        maps.append((x_min, x_max, y_min, y_max, i + 1))

    # --- Kesishishni tekshirish funksiyasi ---
    def overlaps(map1, map2):
        # map: (x_min, x_max, y_min, y_max, index)
        x1_min, x1_max, y1_min, y1_max, _ = map1
        x2_min, x2_max, y2_min, y2_max, _ = map2
        
        # X-o'qi bo'yicha kesishish
        x_overlap = x1_min < x2_max and x1_max > x2_min
        # Y-o'qi bo'yicha kesishish
        y_overlap = y1_min < y2_max and y1_max > y2_min
        
        return x_overlap and y_overlap

    # --- Ochko'z Bo'yash (Greedy Coloring) ---
    # Har bir sahifa xaritalar indekslari ro'yxatidan iborat
    pages = []

    for current_map in maps:
        current_map_index = current_map[4]
        
        placed = False
        # Mavjud sahifalardan biriga joylashtirishga urinish
        for page in pages:
            can_place = True
            
            # Sahifadagi har bir xarita bilan kesishishni tekshirish
            for existing_map_index in page:
                # 1-asosli indeksdan 0-asosli indeksga o'tkazish
                existing_map = maps[existing_map_index - 1]
                
                if overlaps(current_map, existing_map):
                    can_place = False
                    break
            
            if can_place:
                page.append(current_map_index)
                placed = True
                break
        
        # Agar mavjud sahifaga joylashtirishning iloji bo'lmasa, yangi sahifa ochish
        if not placed:
            pages.append([current_map_index])

    # --- Natijani chiqarish ---
    
    # 1. Sahifalar soni
    print(len(pages))
    
    # 2. Har bir sahifa uchun ma'lumotlar
    for page in pages:
        # Sahifaning umumiy qutisi (Bounding Box)
        page_x_min = float('inf')
        page_x_max = float('-inf')
        page_y_min = float('inf')
        page_y_max = float('-inf')
        
        for map_index in page:
            map_data = maps[map_index - 1] # 0-asosli indeks
            x_min, x_max, y_min, y_max, _ = map_data
            
            page_x_min = min(page_x_min, x_min)
            page_x_max = max(page_x_max, x_max)
            page_y_min = min(page_y_min, y_min)
            page_y_max = max(page_y_max, y_max)
            
        # Sahifa koordinatalari (x1 y1 x2 y2)
        print(f"{page_x_min} {page_y_min} {page_x_max} {page_y_max}")
        
        # Sahifadagi xaritalar indekslari
        print(*(page))

solve()