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
## JS 01 Pengenalan struktur Data

Struktur data adalah cara penyimpanan, penyusunan dan pengaturan data di dalam media penyimpanan komputer sehingga data tersebut dapat digunakan secara efisien.Sedangkan Data adalah representasi dari fakta dunia nyata. Fakta atau keterangan tentang kenyataan yang disimpan, direkam atau direpresentasikan dalam bentuk tulisan, suara, gambar, sinyal atau simbol. Konstanta digunakan untuk menyatakan nilai tetap sedangkan variable digunakan dalam program untuk menyatakan nilai yang dapat berubah-ubah selang eksekusi berlangsung.

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
1. List linier (Linked List) Senarai dan variasinya
2. Multilist
3. Stack (Tumpukan)
4. Queue (Antrian)
5. Tree (Pohon)
6. Graph (Graf )

## JS 02 Array, Pointer dan Struct

1. Array
   
   Array adalah suatu kumpulan nilai yang bertipe data sama. Masing-masing elemen array diakses menggunakan indeks, dan elemen aarray dapat diakses langsung (acak)


    ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/e241fc12-5dc6-4c55-95cc-1975bfc04751)


3. Pointer
   
   Pointer adalah variable yang berisi alamat memory sebagai nilainya dan berbeda dengan variable biasa yang berisi nilai tertentu. Dengan kata lain, pointer berisi alamat     dari variable yang mempunyai nilai tertentu.

   • Suatu pointer bukan berisi dengan suatu nilai data seperti halnya pada variabel biasa, variabel pointer berisi dengan suatu alamat.
   
   • Untuk mendeklarasikan variabel pointer gunakan tanda asterisk atau bintang (*) didepan variabel yang di deklarasikan pada tipe data tertentu.
   
   • Tanda ini juga dapat dipakai untuk mengakses nilai dari variabel yang telah ditunjuk.
   
   • Untuk mendapatkan alamat dari variabel pointer gunakan tanda

   Deklarasi variabel pointer seperti halnya deklarasi variabel lainnya hanya ditambahkan tanda * pada depan nama variabel.

   _int *b, d;_
   

   char c ;

   _b= &c; //error_

   _b= &d;//bisa_
   

   Untuk mendapatkan alamat memori pointer (address of) maka perintah yang digunakan adalah menambahkan tanda & didepan variabel.

   _&b_
   

   Untuk mendapatan isi atau nilai dari variabel pointer maka perintah yang digunakan cukup nama variabelnya saja.

   _b_
   

   Untuk mendapatkan isi atau nilai dari alamat yang terdapat pada isi pointer (value pointed by) maka perintah yang digunakan adalah menambahkan tanda * didepan variabel.

   _*b_
   

5. Structure (Struct)
   
   Dalam bahasa pemograman C sebuah Struct adalah kumpulan variable (berisi variable yang memiliki tipe-tipe yang berbeda) bernaung dalam satu nama objek yang serumpun. Sebelum membuat sebuah Struct anda perlu menentukan tipe tipe data apa saja di dalamnya. Untuk menamai struct kata kunci Struct digunakan.
   Di saat sebuat struct dideklarasikan, tidak ada alokasi memory yang dilakukan. Untuk mengalokasikan memory menggunakan struct , harus dibuat variable baru dari struct tersebut

   Mengakses anggota struct
   
   Ada 2 tipe operator digunakan untuk mengakses sebuah Struct
   
      1. ‘.’ - Member operator
         
      3. ‘->’ – operator digunakan untuk pointer

6. ADT (Abstract Data Type) atau Tipe Data Bentukan
   
   ADT adalah koleksi data dan operasi yang dapat digunakan untuk memanipulasi data, tipe data tertentu yang didefinisikan oleh pemrogram untuk kemudahan pemrograman serta untuk mengakomodasi tipe-tipe data yang tidak secara spesifik diakomodasi oleh bahasa pemrograman yang digunakan. Bahasa C memiliki tipe data numerik dan karakter (seperti int, float, char dan lain-lain). Disamping itu juga memiliki tipe data enumerasi dan structure.

   Bagaimana jika kita ingin membuat tipe data baru

   • Untuk pembuatan tipe data baru digunakan keyword typedef

   • C. Bentuk umum:

      typedef <tipe_data_lama> <nama_tipe_data_baru>
 
## JS 03 Single Linked List

1. Simpul/Nodes
   
   Sebuah simpul/node berisi alamat dan kumpulan data, dalam sebuah simpul/node keduanya dibungkus menjadi sebuah objek berupa struct.

2. Penggunakan Alokasi Memory

   Ketika kita mempelajari tipe data array, nampak kelemahan tipe data ini adalah sifatnya yang statis. Artinya ketika kita mendeklarasikan sebuah variable dengan tipe data array maka data yang kita deklarasikan disimpan pada memori harus dalam kondisi terurut. Selain itu selama program berjalan ukuran dari array bersifat tetap atau kita tidak dapat merubahnya. Adakalanya dalam pemrograman ukuran sebuah obyek belum dapat kita tentukan sampai program kita jalankan. Alokasi memori menyediakan fasilitas untuk membuat ukuran buffer dan array secara dinamik. Dinamik artinya bahwa ruang dalam memori akan dialokasikan ketika program dieksekusi (run time). Fasilitas ini memungkinkan user untuk membuat tipe data dan struktur dengan ukuran dan panjang berapapun yang disesuaikan dengan kebutuhan di dalam program.

      a. Perintah sizeof
   
   Perintah ini digunakan untuk
         
   1. Untuk mendapatkan ukuran dari berbagai tipe data, variabel ataupun struktur.
            
   2. Return value : ukuran dari obyek yang bersangkutan dalam byte.
            
   3. Parameter dari sizeof() : sebuah obyek atau sebuah tipe data

      b. Perintah malloc
      
   Fungsi standar dalam C yang digunakan untuk mengalokasikan memori adalah malloc(). Prototype dari fungsi ini adalah sebagai berikut: void *malloc(int jml_byte). Banyaknya byte yang akan dipesan dinyatakan sebagai parameter fungsi. Return value dari fungsi ini adalah sebuah pointer yang tak bertipe (pointer to void) yang menunjuk ke buffer yang dialokasikan. Pointer tersebut haruslah dikonversi kepada tipe yang sesuai (dengan menggunakan type cast) agar bisa mengakses data yang disimpandalam buffer. Jika proses alokasi gagal dilakukan, fungsi ini akan memberikan return value berupa sebuah pointer NULL.

4. Single Link List
   
   Di dalam game Treasure Hunt, anda mulai menjelajahinya dengan mencari clue pertama. Di saat anda menemukannya, anda tidak menEmukan harta karunnya tapi menemukan clue berikutnya dan begitu seterusnya sampai anda menemukan harta karun.

   Sebuah linked list sama halnya dengan logika di atas, merupakan sebuah data yang berupa simpul atau node beralamat yang saling bertaut. Setiap simpul bisa menyimpan data yang mana isinya bisa char, int, string atau tipe data lainnya.

![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/6cce6928-54e1-4464-98fa-cf9cf9802792)

   Link list sederhana/ Single Linked List, untuk memulainya harus membuat sebuat sebuah simpul special yang hanya memiliki alamat/pointer simpul ini dinamakan HEAD. Kemudian pada akhir simpul/node diberi alamat kosong yang tidak menuju kemanapun yang disebut simpul TAIL. 

![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/22de2832-4a3c-43f6-8455-78f244ec7513)


## JS 04 Doubly Linked List

Doubly Linked List (DLL) berisi pointer tambahan, biasanya disebut pointer sebelumnya, bersama dengan pointer berikutnya dan data yang ada dalam daftar tertaut tunggal

![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/cec1bdd1-6239-442f-9aab-96d4f2948c68)

Sama halnya dengan single linked list sebuah dobly link list memiliki head dan tail, perbedaannya doubly link list memiliki 2 arah data yani next dan previous

Kelebihan Doubly link list dibandingkan dengan Single link list
1. DLL bisa berjalan dalam 2 arah ke depan dan kebelakang
2. Operasi penghapusan atau deletion() lebih efisien dan simple menggunakan pointer yang menunjuk ke simpul yang akan dihapus
3. Dapat melakukan proses insert() simpul lebih efisien

Dalam single link list penghapusan simpul, pointer simpul data sebelumnya diperlukan dan untuk
mendapatkannya terkadang list data diulang dari awal. Berbeda dengan doubly link list kita langsung
dapat pointer simpul data sebelumnya menggunakan pointer previous.

Kelemahan Doubly link list
1. Setiap simpul DLL membutuhkan ruang memory tambahan untuk pointer 2 pointer
2. Setiap operasi yang dilakukan harus mencantumkan pointer simpul sebelumnya.

Jenis proses Insertion()
1. Penambahan simpul di depan
2. Penambahan setelah simpul yang ditentukan
3. Di simpul yang paling akhir
4. Penambahan sebelum simpul yang ditentukan

## JS 05 Circular Linked List

1. Double Linked List
   
   Double linked list Elemen-elemen dihubungkan dengan dua pointer dalam satu node. Struktur ini menyebabkan list melintas baik ke depan (next) maupun ke belakang (prev) atau (back).
   Masing-masing elemen pada double linked list terdiri dari tiga bagian, disamping data (info) dan pointer next, masing-masing elemen dilengkapi dengan pointer prev atau back yang menunjuk ke elemen sebelumnya. Untuk menunjukkan head dari double linked list, maka pointer prev dari elemen pertama menunjuk NULL. Untuk menunjukkan tail dari    double linked list tersebut, maka pointer next dari elemen terakhir menunjuk NULL.
   Untuk melintas kembali melalui double linked list, dapat digunakan pointer prev dari elemen yang berurutan pada arah tail ke head. Double linked list mempunyai fleksibilitas yang lebih tinggi daripada single linked list dalam perpindahan pada list.

   ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/bf0e7957-d4c3-42a7-8f22-b4e934628534)

3. Circular Linked List
   
   Circular list adalah bentuk lain dari linked list yang memberikan fleksibilitas dalam melewatkan elemen. Circular list bisa berupa single linked list atau double linked list, tetapi tidak mempunyai tail. Pada circular list, pointer next dari elemen terakhir menunjuk ke elemen pertama dan bukan menunjuk NULL. Pada double linked circular list, pointer prev dari elemen pertama menunjuk ke elemen terakhir.

   ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/21a8074a-b4c9-4603-a951-cb25eb1da2d9)
   
## JS 06 Stack

A. Stack

   Stack adalah sebuah kumpulan data dimana data yang diletakkan di atas data yang lain. Dengan demikian stack adalah struktur data yang menggunakan konsep LIFO. Dengan demikian, elemen terakhir yang disimpan dalam stack menjadi elemen pertama yang diambil. Dalam proses komputasi, untuk meletakkan sebuah elemen pada bagian atas dari stack, disebut push. Dan untuk memindahkan dari tempat yang atas tersebut, disebut pop.

   ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/a40e8d87-21fb-446a-ae01-eed333babe93)
   
LIFO : "terakhir masuk sebagai yang pertama keluar" (Last In First Out)

B. Stack dengan Array

   Bentuk penyajian stack bisa menggunakan tipe data array, tetapi sebenarnya penyajian stack menggunakan array adalah kurang tepat karena banyaknya elemen dalam array adalah statis, sedangkan dalam stack banyaknya elemen sangat bervariasi atau dinamis. Meskipun demikian, array bisa digunakan untuk penyajian stack, tetapi dengan anggapan bahwa banyaknya elemen maksimal dari suatu stack tidak melebihi batas maksimum banyaknya elemen array. Pada suatu saat, ukuran stack akan sama dengan ukuran array. Bila diteruskan menambah data, maka akan terjadi overflow. Oleh karena itu, perlu ditambahkan data untuk mencatat posisi ujung stack. Ada dua macam penyajian stack menggunakan array, yaitu Single stack dan Double stack.
Pada saat ukuran stack sudah terpenuhi sebanyak MAX, kalau diteruskan menambah data melebihi batas maksimum maka akan terjadi overflow. Dengan demikian perlu data tambahan untuk mencatat posisi ujung stack.

C. Operasi pada Stack

1) Push digunakan untuk menambahkan elemen atau data baru dalam tumpukan.
   Elemen baru tersebut pasti akan menjadi elemen yang paling atas dalam tumpukan setiap kali ditambahkan. Sebelum menambahkan elemen baru kita harus memastikan tumpukan belum penuh.
3) Pop digunakan untuk menghapus elemen yang berada pada posisi paling atas dari stack.
4) Peek digunakan untuk mengecek elemen atau data paling atas tanpa menghapusnya dari stack.
5) isFull digunakan untuk memeriksa apakah kondisi stack sudah penuh.
   
   Dengan cara:
   
   a. Menambah satu (increment) nilai TOP of STACK setiap ada penambahan elemen stack selama stack masih belum penuh.
   
   b. Isikan nilai baru ke stack berdasarkan indeks TOP of STACK setelah ditambah satu (increment).
   
6) isEmpty digunakan untuk memeriksa apakah stack masih dalam kondisi kosong.
   
   Dengan cara: memeriksa TOP of STACK. Jika TOP masih = -1 maka berarti stack masih kosong.
7) Clear digunakan untuk mengosongkan stack.

## JS 07 Queue

A. Konsep Queue

   Sebuah antrian sangat berguna pada pemograman struktur data. Hal ini sama dengan membeli tiket pergi nonton ke bioskop. Dimana orang pertama yang memasuki antrian adalah yang pertama mendapat tiket masuk. Antrian menggunakan prinsip FIFO First in First Out. Item yang mendapatkan giliran pertama adalah item yang pertama keluar.

   ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/21ed1388-7d5c-46c1-a8a2-091761ea47df)
   
Pada gambar di atas, terdapat item dengan no 1 berada pada antrian sebelum item no 2, hal demikian menjadi yang pertama yang akan diambil dari antrian menurut prinsip FIFO. Dalam istilah pemograman, meletakkan sebuah item ke dalam antrian disebut “enqueue” dan menghapusnya disebut “dequeue”.
Kita dapat mengimplementasikan antrian di bahasa pemograman apapun seperti C, C++, Java, Phyton atau C#, tapi spesifikasinya tetap.

B. Spesifikasi Queue

   Sebuah antrian dinamakan juga dengan sebuah objek atau lebih spesifiknya ADT yang memiliki operasi
sebagai berikut :

• Enqueue: Add element to end of queue

• Dequeue: Remove element from front of queue

• IsEmpty: Check if queue is empty

• IsFull: Check if queue is full

• Peek: Get the value of the front of queue without removing it

C. Cara kerja 

   Sebuah antrian memiliki proses sebagai berikut :
   1. Dua pointer yang disebut FRONT dan REAR digunakan untuk melacak elemen pertama dan terakhir dalam antrian.
   2. Saat menginisialisasi antrian, kami menetapkan nilai FRONT dan REAR ke -1.
   3. Pada enqueing elemen, kita meningkatkan nilai indeks REAR dan menempatkan elemen baru di posisi yang ditunjuk oleh REAR.
   4. Pada dequeueing suatu elemen, kita mengembalikan nilai yang ditunjuk oleh FRONT dan meningkatkan indeks FRONT.
   5. Sebelum enqueing, kami memeriksa apakah antrian sudah penuh.
   6. Sebelum dequeuing, kami memeriksa apakah antrian sudah kosong.
   7. Saat membuat elemen pertama, kami menetapkan nilai FRONT ke 0.
   8. Saat mendekor elemen terakhir, kita mereset nilai FRONT dan REAR ke -1.

## JS 08 Bubble and Insertion Sort

1. Pengertian Pengurutan Data
   
   Pengurutan data adalah salah satu proses yang banyak dijumpai dalam aplikasi dengan menggunakan computer. Pengurutan membuat data disusun dalam keadaan urut menurut         aturan tertentu; missal dari nilai kecil menuju ke nilai terbesar untuk bilangan atau dari A ke Z untuk string.

2. Teknik Pengurutan Data

   a. Bubble Sort
   
      Bubble Sort adalah salah satu algoritma untuk sorting data, atau kata lainnya mengurutkan data dari yang terbesar ke yang terkecil atau sebaliknya (Ascending atau Descending). Bubble sort (metode gelembung) adalah metode/algoritma pengurutan dengan dengan cara melakukan penukaran data dengan tepat disebelahnya secara terus menerus sampai bisa dipastikan dalam satu iterasi tertentu tidak ada lagi perubahan. Jika tidak ada perubahan berarti data sudah terurut.

      Disebut pengurutan gelembung karena masing-masing kunci akan dengan lambat menggelembung ke posisinya yang tepat.

   ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/43348ec7-2f1d-49ac-ae2e-ab7eb2b85994)
   
   b. Insertion Sort
   
      Insertion sort bekerja sama halnya dengan saat kita bermain mengurutkan kartu di tangan. Menggunakan asumsi bahwa kartu pertama telah diurutkan kemudian pilih sebuah kartu acak yang belum diurutkan. Jika kartu tersebut lebih besar daripada kartu yang di tangan, maka kartu diletakkan di sebelah kanan, sebaliknya jika kartu yang diambil kecil diletakkan sebelah kiri. Cara yang sama dilakukan untuk pengambilan kartu berikutnya.
   
      Pendekatan yang sama digunakan dalam Insertion sort
   
      Insertion sort adalah sebuah algoritma yang meletakkan sebuah data/elemen yang belum urut pada tempat yang cocok pada setiap siklus pengurutan.

      ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/a72d7485-f046-4aa5-9e88-a150df07b387)

      ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/f73c4bbd-f901-4b59-9aff-01bea90305bb)

      ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/14f89670-e313-419f-b565-c7516268f48f)

   
## JS 09 Selection and Merge Sort

1. Selection Sort

   Selection sort adalah sebuah algoritma yang digunakan untuk mencari dna memilih element/data terkecil dalam sebuah list yang belum tersusun dalam setiap iterasi dan menempatkan elemen terkecil di urutan paling depan dari urutan list data.

   ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/0998b0a3-3a6c-4eb3-b881-dea917c0c024)
   ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/f332f2fc-83ce-4f57-82c4-0b46691191ed)
   ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/14a1360b-3b2d-4904-ba93-5289cc6a1649)
   ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/0c507477-4576-487b-9956-44dfb5eb792b)


3. Merge Sort
   
   Merge sort adalah sebuah teknik pengurutan berdasarkan teknik membagi dan menggabungkan (divide and conquer). Menggunakan merge sort hal pertama yang dilakukan adalah membagi sama banyak data kemudian menggabungkannya dalam list data yang terurut.

   ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/9c41148d-4d81-43d0-9fa0-50793a8ed112)

   Divide and Conquer Strategy
   
   Menggunakan teknik Divide and Conquer, langkah pertama bagi sebuah permasalahan menjadi sub bagian kecil permasalahan. Di saat sub permasalahan telah diselesaikan dan siap, gabungkan hasil dari sub permasalahan untuk mememcahkan masalah utama. 
   
## JS 10 Shell and Quick Sort

1. Shell Sort
   
   Shell sort adalah sebuah algoritma dengan pengurutan elemen pertama memiliki jarak interval dengan elemen yang akan dibandingkan. Pada prinsipnya sama dengan Insertion sort pada pokok bahasan sebelumnya.
   
   Dalam pengurutan Shell Sort, elemen/data diurutkan dengan interval yang terukur. Jarak interval diantara elemen semakin lama semakin mengecil berdasarkan berapa kali pengulangan pengurutan dilakukan. Kemampuan dari shell sort ini tergantung pada tipe dari tipe ururtan yang digunakan dalam sebuah array yang disediakan.

   ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/4386bd01-783d-4c68-9ead-1ed783c6fe30)

3. Quick Sort
   
   Seperti halnya Merge sort, Quick sort menggunakan algoritma divide dan conquer. Algoritma ini mengambil sebuah elemen sebagai pivot dan memisahkan array yang ada disekitar pivot. Terdapat banyak versi dari Quick sort yang mengambil pivot dengan cara yang berbeda-beda. Diantaranya :
   1. Selalu mengambil elemen pertama sebagai pivot.
   2. Selalu mengambil eleme terakhir sebagai pivot
   3. Elemen acak sebagai pivot
   4. Elemen yang di tengah sebagai pivot
      
   Kunci dari proses quick sort adalah partisi(). Target dari partisi adalah array sebuah array dan sebuah elemen x dari array sebagai pivot, letakkan x pada posisi yang benar dalam array yang terurut dan letakkan semua elemen yang lebih kecil (lebih kecil dari x) sebelum elemen x, dan tempatkan semua elemen yang lebih besar dari x setelah x. Semua proses ini seharusnya selesai dalam waktu yang sama.

   ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/0de8207a-fb64-40bd-84fc-e5877a7c438b)
   
## JS 11 Linear and Binary Search

Algoritma pencarian (searching algorithm) adalah algoritma yang menerima sebuah argumen kunci dan dengan langkah-langkah tertentu akan mencari rekaman dengan kunci tersebut. Setelah proses pencarian dilaksanakan, akan diperoleh salah satu dari dua kemungkinan, yaitu data yang dicari ditemukan (successful) atau tidak ditemukan (unsuccessful).

Ada dua macam teknik pencarian yaitu pencarian sekuensial (linear search) dan pencarian biner (binary search). Perbedaan dari dua teknik ini terletak pada keadaan data. Pencarian sekuensial digunakan apabila data dalam keadaan acak atau tidak terurut. Sebaliknya, pencarian biner digunakan pada data yang sudah dalam keadaan urut.

A. Linear Search

   Algoritma pencarian dapat dijelaskan sebagai berikut: pencarian dimulai dari data paling awal, kemudian ditelusuri dengan menaikkan indeks data, apabila data sama dengan kunci pencarian dihentikan dan diberikan nilai pengembalian true, apabila sampai indeks terakhir data tidak ditemukan maka diberikan nilai pengembalian false.

   ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/a4419c15-4029-4a76-9f01-9248d24b3a25)


   Algoritma pencarian berurutan dapat dituliskan sebagai berikut:
   
   1. i ← 0
   2. ketemu ← false
   3. Selama (tidak ketemu) dan (i <= N) kerjakan baris 4
   4. Jika (Data[i] = x) maka ketemu ← true, jika tidak i ← i + 1
   5. Jika (ketemu) maka i adalah indeks dari data yang dicari, jika tidak data tidak ditemukan
   
B. Binary Search

   Salah satu syarat agar pencarian biner dapat dilakukan adalah data sudah dalam keadaan urut. Dengan kata lain, apabila data belum dalam keadaan urut, pencarian biner tidak dapat dilakukan.

   ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/344b723e-3d76-4357-83d3-eda62e27a046)

   Algoritma binary search:
   
   1. Data diambil dari posisi 1 sampai posisi akhir N
   2. Kemudian cari posisi data tengah dengan rumus: (posisi awal + posisi akhir) / 2
   3. Kemudian data yang dicari dibandingkan dengan data yang di tengah, apakah sama atau lebih kecil, atau lebih besar.
   4. Jika lebih besar, maka proses pencarian dicari dengan posisi awal adalah posisi tengah + 1
   5. Jika lebih kecil, maka proses pencarian dicari dengan posisi akhir adalah posisi tengah – 1
   6. Jika data sama, berarti ketemu.
      
## JS 12 Tree
Tree Traversal

   Traverse atau Melintasi sebuah pohon data/tree artinya mengunjungi semua simpul yang ada pada pohon tersebut. Ada beberapa hal yang dapat dilakukan contoh jika ingin menambah nilai semua data pada pohon tersebut atau mencari nilai tertinggi diantaranya. Untuk operasi-operasi tersebut, harus dilakukan mengunjungi setiap simpul dari pohon data.
   
   Struktur data linear seperti array, stacks/tumpukan, queues/antrian dan LinkedList hanya memiliki satu jalan untuk membaca sebuah data. Berbeda dengan struktur data yang bentuknya hirakki seperti tree/pohon dapat dijelajahi dengan berbagai cara.

   ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/26a55219-e65f-41bc-bdea-4be1fa3e22db)

   Tujuan mengunjungi dan mendata setiap simpul/node, yang harus dilakukan adalah mengunjungi semua node/simpul di dalam subtree, mengunjungi root node atau node paling atas dan mengunjungi node yang ada di kanan subtree.

   Berdasarkan urutan yang akan dilakukan, terdapat 3 cara melintasi tree tersebut :
   1. Inorder Traversal,
      
      langkah-langkahnya :
      1) Kunjungi semua nodes/simpul di sebelah kiri subtree.
      2) Kemudian kunjungi root node/simpul paling atas
      3) Kunjungi semua simpul yang ada di kanan subtree

   2. Preorder traversal
      
      1) Visit root node
      2) Visit all the nodes in the left subtree
      3) Visit all the nodes in the right subtree

   3. Postorder Traversal
      
      1) Visit all the nodes in the left subtree
      2) Visit all the nodes in the right subtree
      3) Visit the root node

## JS 13 Graphs
Depth First Search/Traversal

   Traversal artinya mengunjungi semua simpul/node dari sebuah graph. DFS atau DFT adalah sebuah algoritma pencarian rekursif untuk mencari semua titik yang ada pada sebuah graph atau pohon simpul.
   
   Algoritma DFS
   
   Implementasi sederhana dari sebuah DFS adalah membagi setiap titik pada sebuah graph atau tree menjadi 2 kategori :
   1. Visited
   2. Not Visited

   Tujuan dari algoritma ini adalah untuk menandai setiap titik/vertex yang telah dikunjungi sambil menghidari titik yang telah dikunjungi.
   Cara kerja algoritma DFS :
   1. Dimulai dengan meletakkan salah satu dari titik graph di atas sebuah tumpukan.
   2. Ambil item paling atas dari tumpukan dan tambahkan dalam daftar titik yang telah dikunjungi.
   3. Buatlah sebuah daftar dari titik yang segaris lurus dengannya. Tambahkan satu yang mana belum dikunjungi pada tumpukan paling atas.
   4. Ulangi langkah ke 2 dan 3 sampai dengan tumpukan menjadi kosong.

      ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/1222bb64-d6f4-4aac-805e-11786c11dde8)
      ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/3e16804d-e767-474a-869c-28c2f2493f72)
      ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/6e116c45-f464-4801-8e5c-ecbccf6b8d3f)
      ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/356e3e2c-e447-4ce6-baa4-619a18e1be95)
      ![image](https://github.com/makbarfauzan/Praktikum-Struktur-Data/assets/144658778/af2ef071-50b8-4e2c-89f8-84c485801628)
