<?php
require ('Mahasiswa.php');

$mahasiswa1 = new Mahasiswa('Alyaa', '2006412', 'Ilmu Komputer', 'FPMIPA');
echo 'Nama : ' . $mahasiswa1->getName() . '<hr>';
echo 'NIM : ' . $mahasiswa1->getNIM() . '<hr>';
echo 'Program Studi : ' . $mahasiswa1->getProdigy() . '<hr>';
echo 'Fakultas : ' . $mahasiswa1->getFaculty() . '<hr>';

?>