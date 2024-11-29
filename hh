import streamlit as st

# Başlık
st.title("Döviz Çevirici")

# Kullanıcıdan döviz miktarını ve birimi alıyoruz
miktar = st.number_input("Döviz Miktarını Girin:", min_value=0.0, format="%.2f")
birim = st.selectbox("Birim Seçin:", ["USD", "EUR", "GBP"])

# Sabit kurlar
kurlar = {"USD": 28.00, "EUR": 30.00, "GBP": 35.00}

# Hesaplama
if st.button("Hesapla"):
    if birim in kurlar:
        sonuc = miktar * kurlar[birim]
        st.success(f"{miktar} {birim} = {sonuc:.2f} TRY")
    else:
        st.error("Geçersiz birim!")

