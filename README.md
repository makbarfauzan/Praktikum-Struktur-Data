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
1. List linier (Linked List) Senarai dan variasinya
2. Multilist
3. Stack (Tumpukan)
4. Queue (Antrian)
5. Tree (Pohon)
6. Graph (Graf )

## JS 02 Array, Pointer dan Struct

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
 
## JS 03 Single Linked List

1. Simpul/Nodes
   
   Sebuah simpul/node berisi alamat dan kumpulan data, dalam sebuah simpul/node keduanya dibungkus menjadi sebuah objek berupa struct.

2. Penggunakan Alokasi Memory

   Ketika kita mempelajari tipe data array, nampak kelemahan tipe data ini adalah sifatnya yang statis. Artinya ketika kita mendeklarasikan sebuah variable dengan tipe data    array maka data yang kita deklarasikan disimpan pada memori harus dalam kondisi terurut. Selain itu selama program berjalan ukuran dari array bersifat tetap atau kita       tidak dapat merubahnya. Adakalanya dalam pemrograman ukuran sebuah obyek belum dapat kita tentukan sampai program kita jalankan. Alokasi memori menyediakan fasilitas        untuk membuat ukuran buffer dan array secara dinamik. Dinamik artinya bahwa ruang dalam memori akan dialokasikan ketika program dieksekusi (run time). Fasilitas ini         memungkinkan user untuk membuat tipe data dan struktur dengan ukuran dan panjang berapapun yang disesuaikan dengan kebutuhan di dalam program.

      a. Perintah sizeof()

   Perintah ini digunakan untuk
   
   • Untuk mendapatkan ukuran dari berbagai tipe data, variabel ataupun struktur.
   
   • Return value : ukuran dari obyek yang bersangkutan dalam byte.
   
   • Parameter dari sizeof() : sebuah obyek atau sebuah tipe data

      b. Perintah malloc()

   Fungsi standar dalam C yang digunakan untuk mengalokasikan memori adalah malloc(). Prototype dari fungsi ini adalah sebagai berikut:
   void *malloc(int jml_byte) Banyaknya byte yang akan dipesan dinyatakan sebagai parameter fungsi. Return value dari fungsi ini adalah sebuah pointer yang tak bertipe         (pointer to void) yang menunjuk ke buffer yang dialokasikan. Pointer tersebut haruslah dikonversi kepada tipe yang sesuai (dengan menggunakan type cast) agar bisa           mengakses data yang disimpandalam buffer. Jika proses alokasi gagal dilakukan, fungsi ini akan memberikan return value berupa sebuah pointer NULL.

3. Single Link List
   
   Di dalam game Treasure Hunt, anda mulai menjelajahinya dengan mencari clue pertama. Di saat anda menemukannya, anda tidak menEmukan harta karunnya
   tapi menemukan clue berikutnya dan begitu seterusnya sampai anda menemukan harta karun.
   Sebuah linked list sama halnya dengan logika di atas, merupakan sebuah data yang berupa simpul atau node beralamat yang saling bertaut. Setiap simpul bisa menyimpan data    yang mana isinya bisa char, int, string atau tipe data lainnya.

   Link list sederhana/ Single Linked List, untuk memulainya harus membuat sebuat sebuah simpul special yang hanya memiliki alamat/pointer simpul ini dinamakan HEAD.           Kemudian pada akhir simpul/node diberi alamat kosong yang tidak menuju kemanapun yang disebut simpul TAIL. 



## JS 04 Doubly Linked List

Doubly Linked List (DLL) berisi pointer tambahan, biasanya disebut pointer sebelumnya, bersama dengan pointer berikutnya dan data yang ada dalam daftar tertaut tunggal
Sama halnya dengan single linked list sebuah dobly link list memiliki head dan tail, perbedaannya doubly link list memiliki 2 arah data yani next dan previous

Kelebihan Doubly link list dibandingkan dengan Single link list
1. DLL bisa berjalan dalam 2 arah ke depan dan kebelakang
2. Operasi penghapusan atau deletion() lebih efisien dan simple menggunakan pointer yang menunjuk ke simpul yang akan dihapus
3. Dapat melakukan proses insert() simpul lebih efisien

Dalam single link list penghapusan simpul, pointer simpul data sebelumnya diperlukan dan untuk
mendapatkannya terkadang list data diulang dari awal. Berbeda dengan doubly link list kita langsung
dapat pointer simpul data sebelumnya menggunakan pointer previous.

Kelemahan Dobly link list
1. Setiap simpul DLL membutuhkan ruang memory tambahan untuk pointer 2 pointer
2. Setiap operasi yang dilakukan harus mencantumkan pointer simpul sebelumnya.

Jenis proses Insertion()
1. Penambahan simpul di depan
2. Penambahan setelah simpul yang ditentukan
3. Di simpul yang paling akhir
4. Penambahan sebelum simpul yang ditentukan

## JS 05 Circular Linked List

1. Double Linked List
   
   Double linked list Elemen-elemen dihubungkan dengan dua pointer dalam satu node. Struktur ini menyebabkan list melintas baik ke depan (next) maupun ke belakang (prev)       atau (back).
   Masing-masing elemen pada double linked list terdiri dari tiga bagian, disamping data (info) dan pointer next, masing-masing elemen dilengkapi dengan pointer prev atau      back yang menunjuk ke elemen sebelumnya. Untuk menunjukkan head dari double linked list, maka pointer prev dari elemen pertama menunjuk NULL. Untuk menunjukkan tail dari    double linked list tersebut, maka pointer next dari elemen terakhir menunjuk NULL.
   Untuk melintas kembali melalui double linked list, dapat digunakan pointer prev dari elemen yang berurutan pada arah tail ke head. Double linked list mempunyai              fleksibilitas yang lebih tinggi daripada single linked list dalam perpindahan pada list.

2. Circular Linked List
   
   Circular list adalah bentuk lain dari linked list yang memberikan fleksibilitas dalam melewatkan elemen.
   Circular list bisa berupa single linked list atau double linked list, tetapi tidak mempunyai tail. Pada circular list, pointer next dari elemen terakhir menunjuk ke         elemen pertama dan bukan menunjuk NULL. Pada double linked circular list, pointer prev dari elemen pertama menunjuk ke elemen terakhir.

   
## JS 06 Stack

A. Stack

Stack adalah sebuah kumpulan data dimana data yang diletakkan di atas data yang lain. Dengan demikian stack adalah struktur data yang menggunakan konsep LIFO. Dengan demikian, elemen terakhir yang disimpan dalam stack menjadi elemen pertama yang diambil. Dalam proses komputasi, untuk meletakkan sebuah elemen pada bagian atas dari stack, disebut push. Dan untuk memindahkan dari tempat yang atas tersebut, disebut pop.
LIFO : "terakhir masuk sebagai yang pertama keluar" (Last In First Out)

B. Stack dengan Array

Bentuk penyajian stack bisa menggunakan tipe data array, tetapi sebenarnya penyajian stack menggunakan array adalah kurang tepat karena banyaknya elemen dalam array adalah statis, sedangkan dalam stack banyaknya elemen sangat bervariasi atau dinamis. Meskipun demikian, array bisa digunakan untuk penyajian stack, tetapi dengan anggapan bahwa banyaknya elemen maksimal dari suatu stack tidak melebihi batas maksimum banyaknya elemen array. Pada suatu saat, ukuran stack akan sama dengan ukuran array. Bila diteruskan menambah data, maka akan terjadi overflow. Oleh karena itu, perlu ditambahkan data untuk mencatat posisi ujung stack. Ada dua macam penyajian stack menggunakan array, yaitu Single stack dan Double stack.
Pada saat ukuran stack sudah terpenuhi sebanyak MAX, kalau diteruskan menambah data melebihi batas maksimum maka akan terjadi overflow. Dengan demikian perlu data tambahan untuk mencatat posisi ujung stack.

C. Operasi pada Stack

1) Push digunakan untuk menambahkan elemen atau data baru dalam tumpukan.
   Elemen baru tersebut pasti akan menjadi elemen yang paling atas dalam tumpukan setiap kali ditambahkan. Sebelum menambahkan elemen baru kita harus memastikan tumpukan       belum penuh.
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

Queue dengan Array

Pada implementasi antrian dengan array, digunakan sejumlah array MAX untuk menyimpan data. Untuk menunjuk bagian depan dan bagian belakang digunakan variable Front dan Rear. Bila antrian kosong, nilainya diset -1. Untuk operasi penambahan dan penghapusan diimplementasikan dua fungsi yaitu Tambah() dan Hapus(). 
Pada saat menambah elemen baru pada antrian, pertama kali dicek apakah penambahan tersebut dimungkinkan atau tidak. Karena indeks array dimulai dengan 0 maka maksimum data yang dapat disimpan pada antrian adalah MAX-1. Jika semua elemen menempati ruang array maka antrian dalam kondisi penuh. Apabila data masih dapat ditambahkan pada antrian maka variable Rear dinaikkan satu dan data baru disimpan pada array. Apabila data baru ditambahkan ke antrian untuk pertama kali (dimana variable Front bernilai -1) maka variable Front diset 0 yang menandakan antrian tidak lagi kosong. 
Sebelum menghapus elemen dari antrian harus dipastikan apakah elemen tersedia untuk penghapusan. Jika tidak maka antrian dalam kondisi kosong. Sebaliknya bila tersedia data pada array maka dapat dilakukan penghapusan dan variable Front dinaikkan. Apabila nilai variable Front dan Rear sama (yang berarti antrian dalam keadaan kosong) maka Front dan Rear direset -1.
Misalnya akan dilakukan penambahan data pada antrian sampai semua array terisi. Pada kondisi ini nilai Rear menjadi MAX-1. Misalnya dilakukan penghapusan 5 elemen, maka antrian dikatakan dalam kondisi penuh meskipun 5 array pertama kosong. Untuk mengatasi kondisi ini maka diimplmentasikan antrian sebagai antrian sirkular (circular queue). Sehingga selama penambahan, jika sudah mencapai akhir array dan Jika awal array kosong (sebagai akibat dari penghapusan) maka elemen baru ditambahkan pada awal array

Queue dengan Linked List

Array yang digunakan untuk mengimplementasikan antrian dideklarasikan mempunyai ukuran MAX. Ukuran ini ditentukan pada saat menulis program, tidak dapat diubah pada saat program berjalan. Sehingga pada saat menulis program, harus ditentukan ukuran memori maksimum yang diperlukan untuk membangun array. Hal ini berhugungan dengan deklarasi ruang memori yang tersedia. Jika jumlah elemen yang dapat disimpan dalam antrian kecil, maka banyak ruang memori yang tidak digunakan. Sebaliknya, jika jumlah elemen yang akan disimpan pada antrian terlalu banyak, maka menyebabkan overflow. Untuk menghindari hal tersebut terjadi dan keterbatasan memory maka digunakan struktur data yang disebut linked list.


## JS 08 Bubble and Insertion Sort

1. Pengertian Pengurutan Data
   
   Pengurutan data adalah salah satu proses yang banyak dijumpai dalam aplikasi dengan menggunakan computer. Pengurutan membuat data disusun dalam keadaan urut menurut         aturan tertentu; missal dari nilai kecil menuju ke nilai terbesar untuk bilangan atau dari A ke Z untuk string.

2. Teknik Pengurutan Data

   a. Bubble Sort
   
      Bubble Sort adalah salah satu algoritma untuk sorting data, atau kata lainnya mengurutkan data dari yang terbesar ke yang terkecil atau sebaliknya (Ascending atau           Descending). Bubble sort (metode gelembung) adalah metode/algoritma pengurutan dengan dengan cara melakukan penukaran data dengan tepat disebelahnya secara terus            menerus sampai bisa dipastikan dalam satu iterasi tertentu tidak ada lagi perubahan. Jika tidak ada perubahan berarti data sudah terurut.

      Disebut pengurutan gelembung karena masing-masing kunci akan dengan lambat menggelembung ke posisinya yang tepat.
   
   b. Insertion Sort
   
      Insertion sort bekerja sama halnya dengan saat kita bermain mengurutkan kartu di tangan. Menggunakan asumsi bahwa kartu pertama telah diurutkan kemudian pilih sebuah        kartu acak yang belum diurutkan. Jika kartu tersebut lebih besar daripada kartu yang di tangan, maka kartu diletakkan di sebelah kanan, sebaliknya jika kartu yang           diambil kecil diletakkan sebelah kiri. Cara yang sama dilakukan untuk pengambilan kartu berikutnya.
   
      Pendekatan yang sama digunakan dalam Insertion sort
   
      Insertion sort adalah sebuah algoritma yang meletakkan sebuah data/elemen yang belum urut pada tempat yang cocok pada setiap siklus pengurutan.

   
## JS 09 Selection and Merge Sort

## JS 10 Shell and Quick Sort

## JS 11 Linear and Binary Search

## JS 12 Tree

## JS 13 Graphs

