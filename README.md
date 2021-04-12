# struktur-data-h-asistensi-2-2021
## Problem
membuat program traversal tree dengan pre-order, post-order,in-order
## Penjelasan Program
_Binary Tree_ adalah sebuah tree dengan syarat bahwa tiap node hanya boleh memiliki maksimal 2 _subtree_ yang disebut sebagai _right subtree_ dan _left subtree_ atau dengan kata lain tiap node dalam _binary tree_ hanya boleh memiliki paling banyak 2 child.

_Traversal_ adalah proses kunjungan dalam pohon, dengan setiap node hanya dikunjungi tepat satu kali.

Jadi, _Binary Tree Traversal_ adalah proses mengunjungi node tepat satu kali dan tiap node hanya boleh memiliki maksimal 2 _subtree_ yang disebut sebagai _right subtree_ dan _left subtree._

Pertama, kita membuat struct tree nya, lalu didalam struct tree dibuat function berupa `preorderTraversal`, `postorderTraversal`, dan `inorderTraversal` ketiga function ini sebenarnya sama tetapi, yang membedakan yaitu letak proses programnya pada rekursi.
