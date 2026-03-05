Por lo que estuve viendo, las buenas practicas de github cuando trabajas con C es subir solamente los arhcivos .c, y librerias entonces tenes que recompilar los archivos si los queres probar.

Cuando queres hacer un commit lo que suele hacerse es lo siguiente. En linea de comandos:
git add . \\(Esto agrega todos los archivos que fueron actualizados, tambien podes escribir el nombre del archivo que queres subir)
git commit -m "Este es un commit" \\(Armas la data del commit, pones que actualizaste, etc)
git push \\Ahi lo subis

Para meterte en una rama ya existente haces:
git checkout Nombredelarama
... Empezas a trabajar, haces lo de los pasos arriba

Otros comandos (crear rama, mergear, etc) te recomiendo buscarlos en internet.