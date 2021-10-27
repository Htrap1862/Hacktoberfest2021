#if necessary install:
#pip install pillow
#pip install qrcode

import qrcode
# the link or text for the QR Code
raw_data = "https://github.com/Htrap1862/Hacktoberfest2021/tree/main/python"

#now make a QR Code
qr = qrcode.QRCode(
    version=1,
    box_size=10,
    border=5)
qr.add_data(raw_data)
qr.make(fit=True)
img = qr.make_image(fill='black', back_color='white')
img.save('QR_CODE.png')