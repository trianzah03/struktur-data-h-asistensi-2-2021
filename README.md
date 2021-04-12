# struktur-data-h-asistensi-2-2021
## Problem
membuat program traversal tree dengan pre-order, post-order,in-order
## Penjelasan Program
_Binary Tree_ adalah sebuah tree dengan syarat bahwa tiap node hanya boleh memiliki maksimal 2 _subtree_ yang disebut sebagai _right subtree_ dan _left subtree_ atau dengan kata lain tiap node dalam _binary tree_ hanya boleh memiliki paling banyak 2 child.

_Traversal_ adalah proses kunjungan dalam pohon, dengan setiap node hanya dikunjungi tepat satu kali.

Jadi, _Binary Tree Traversal_ adalah proses mengunjungi node tepat satu kali dan tiap node hanya boleh memiliki maksimal 2 _subtree_ yang disebut sebagai _right subtree_ dan _left subtree._

Pertama, kita membuat struct tree nya, lalu didalam struct tree dibuat function berupa `preorderTraversal`, `postorderTraversal`, dan `inorderTraversal` ketiga function ini sebenarnya sama tetapi, yang membedakan yaitu letak proses programnya pada rekursi. Sebagai contoh jika ada angka 5,4,6,3,2.
## Pre-order
Pre-order: root,left,right
Root pertama 5, ke left 4, punya left->left 3. Setelah itu left->right 2, ke right 6. Jadi akan muncul data: 5,4,3,2,6
##Post-order
Post-order: left,right,root
Pertama left 4, left->right 2, rootnya 4 tapi jadi left,right 6 dan rootnya 5. Jadi akan muncul data: 3,2,4,6,5
## In-order
In-order: left,root,right
Left->left 3, naik ke root 6, ke left->right 2, karena sudah tidak ada di kiri, balik ke root 5 dan right 6. Jadi akan muncul data: 3,4,2,5,6
