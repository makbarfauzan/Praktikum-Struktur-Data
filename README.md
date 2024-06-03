# 💫 About Me:
🔭 I am a student at Padang State University<br>🌱 I’m currently learning c, python


# 💻 Tech Stack:
![C](https://img.shields.io/badge/c-%2300599C.svg?style=flat&logo=c&logoColor=white) ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=flat&logo=c%2B%2B&logoColor=white) ![Python](https://img.shields.io/badge/python-3670A0?style=flat&logo=python&logoColor=ffdd54) ![Canva](https://img.shields.io/badge/Canva-%2300C4CC.svg?style=flat&logo=Canva&logoColor=white)
# 📊 GitHub Stats:
![](https://github-readme-stats.vercel.app/api?username=makbarfauzan&theme=material-palenight&hide_border=true&include_all_commits=false&count_private=false)<br/>
![](https://github-readme-streak-stats.herokuapp.com/?user=makbarfauzan&theme=material-palenight&hide_border=true)<br/>
![](https://github-readme-stats.vercel.app/api/top-langs/?username=makbarfauzan&theme=material-palenight&hide_border=true&include_all_commits=false&count_private=false&layout=compact)


<!-- Proudly created with GPRM ( https://gprm.itsvg.in ) -->

# Laporan Praktikum-Struktur-Data
**JS 01 Pengenalan struktur Data**

Struktur data adalah cara penyimpanan, penyusunan dan pengaturan data di dalam media penyimpanan komputer sehingga data tersebut dapat digunakan secara efisien.Sedangkan Data
adalah representasi dari fakta dunia nyata. Fakta atau keterangan tentang kenyataan yang disimpan, direkam atau direpresentasikan dalam bentuk tulisan, suara, gambar, sinyal atau simbol. Konstanta digunakan untuk menyatakan nilai tetap sedangkan variable digunakan dalam program untuk menyatakan nilai yang dapat berubah-ubah selang eksekusi berlangsung.

Ada empat istilah data, yaitu :
1. Tipe data adalah jenis atau macam data di dalam suatu variable dalam bahasa pemrograman.
2. Objek data mengacu kumpulan elemen, penyimpanan data yang unik ke dalam satu jenis objek yang utuh
3. Struktur data biasa dipakai untuk mengelompokan beberapa informasi yang terkait menjadi sebuah kesatuan.

Dalam teknik pemrograman, struktur data berarti tata letak data yang berisi kolom-kolom data, baik itu kolom yang tampak oleh pengguna (user) atau pun kolom yang hanya digunakan untuk keperluan pemrograman yang tidak tampak oleh pengguna.Setiap baris dari kumpulan kolom-kolom tersebut dinamakan catatan (record). Lebar kolom untuk data dapat berubah dan bervariasi. Ada kolom yang lebarnya berubah secara dinamis sesuai masukan dari pengguna, dan juga ada kolom yang lebarnya tetap.

Secara garis besar type data dapat dikategorikan menjadi :
Type data sederhana.
1. Type data sederhana tunggal, misalnya Integer, real, boolean dan karakter.
2. Type data sederhana majemuk, misalnyaString (kumpulan data char)
   
Struktur Data, meliputi:
1. Struktur data sederhana, misalnya array dan record.
2. Struktur data majemuk, yang terdiri dari:
   1. Linier : Stack, Queue, sertaList dan Multilist
   2. Non Linier : Pohon Biner dan Graph
   
Pemakaian struktur data yang tepat didalam proses pemrograman akan menghasilkan algoritma yang lebih jelas dan tepat, sehingga menjadikan program secara keseluruhan lebih efisien dan sederhana.

Struktur data yang standar yang biasanya digunakan dibidang informatika adalah:
1.List linier (Linked List) Senarai dan variasinya
2. Multilist
3. Stack (Tumpukan)
4. Queue (Antrian)
5. Tree (Pohon)
6. Graph (Graf )

**JS 02 Array, Pointer dan Struct**

1. Array
Array adalah suatu kumpulan nilai yang bertipe data sama. Masing-masing elemen array diakses menggunakan indeks, dan elemen aarray dapat diakses langsung (acak)

2. Pointer
Pointer adalah variable yang berisi alamat memory sebagai nilainya dan berbeda dengan variable biasa yang berisi nilai tertentu. Dengan kata lain, pointer berisi
alamat dari variable yang mempunyai nilai tertentu.
• Suatu pointer bukan berisi dengan suatu nilai data seperti halnya pada variabel biasa, variabel pointer berisi dengan suatu alamat.
• Untuk mendeklarasikan variabel pointer gunakan tanda asterisk atau bintang (*) didepan variabel yang di deklarasikan pada tipe data tertentu.
• Tanda ini juga dapat dipakai untuk mengakses nilai dari variabel yang telah ditunjuk.
• Untuk mendapatkan alamat dari variabel pointer gunakan tanda

Deklarasi variabel pointer seperti halnya deklarasi variabel lainnya hanya
ditambahkan tanda * pada depan nama variabel.
int *b, d;
char c ;
b= &c; //error
b= &d;//bisa

Untuk mendapatkan alamat memori pointer (address of) maka perintah yang digunakan adalah menambahkan tanda & didepan variabel.
&b

Untuk mendapatan isi atau nilai dari variabel pointer maka perintah yang digunakan cukup nama variabelnya saja.
b

Untuk mendapatkan isi atau nilai dari alamat yang terdapat pada isi pointer (value pointed by) maka perintah yang digunakan adalah menambahkan tanda * didepan variabel.
*b

3. Structure (Struct)
Dalam bahasa pemograman C sebuah Struct adalah kumpulan variable (berisi variable yang memiliki tipe-tipe yang berbeda) bernaung dalam satu nama objek yang serumpun. Sebelum membuat sebuah Struct anda perlu menentukan tipe tipe data apa saja di dalamnya. Untuk menamai struct kata kunci Struct digunakan.
Di saat sebuat struct dideklarasikan, tidak ada alokasi memory yang dilakukan. Untuk mengalokasikan memory menggunakan struct , harus dibuat variable baru dari struct tersebut

Mengakses anggota struct
Ada 2 tipe operator digunakan untuk mengakses sebuah Struct
1. ‘.’ - Member operator
2. ‘->’ – operator digunakan untuk pointer

4. ADT (Abstract Data Type) atau Tipe Data Bentukan
ADT adalah koleksi data dan operasi yang dapat digunakan untuk memanipulasi data, tipe data tertentu yang didefinisikan oleh pemrogram untuk kemudahan pemrograman serta untuk mengakomodasi tipe-tipe data yang tidak secara spesifik diakomodasi oleh bahasa pemrograman yang digunakan. Bahasa C memiliki tipe data numerik dan karakter (seperti int, float, char dan lain-lain). Disamping itu juga memiliki tipe data enumerasi dan structure.

Bagaimana jika kita ingin membuat tipe data baru
• Untuk pembuatan tipe data baru digunakan keyword typedef
• C. Bentuk umum:
 typedef <tipe_data_lama> <nama_tipe_data_baru>
 
**JS 03 Single Linked List**

**JS 04 Doubly Linked List**

**JS 05 Circular Linked List**

**JS 06 Stack**

**JS 07 Queue**

**JS 08 Bubble and Insertion Sort**

**JS 09 Selection and Merge Sort**

**JS 10 Shell and Quick Sort**

**JS 11 Linear and Binary Search**

**JS 12 Tree**

**JS 13 Graphs**

