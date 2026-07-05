import qrcode
url ="https://drive.google.com/uc?export=download&id=16ueWxN96pQKr4pPY9hRWPslCgKdAhfc5"
qr = qrcode.QRCode(
    version=1,
    error_correction=qrcode.constants.ERROR_CORRECT_L,
    box_size=10,
    border=4,
)
qr.add_data(url)
qr.make(fit=True)
img = qr.make_image(fill='black', back_color='white')
img.save("google_drive_qr_code.png")
img.show()
