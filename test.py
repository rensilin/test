from PIL import Image
im=Image.open("/media/kkke/文件/photo/IMG_20161013_002437_HDR.jpg")
print(im.format,im.size,im.mode)
im.thumbnail((2000,1000))
im.save('thum.jpg','JPEG')
