Plantilla para proyectos Open Hardware
=======================================================

Este repositorio tiene el objetivo de servir de plantilla
para facilitar la documentación de proyectos Open-Hardware.

Las carpetas propuestas en esta estructura están basados
en las recomendaciones de buenas prácticas de la OSHWA
traducidas al español que se encuentran disponibles en
http://www.openhardware.sv/acerca-de/buenas-practicas-para-el-hardware-de-fuente-abierta/

Puedes modificar este documento como mejor se ajuste a tus
necesidades sobreescribiendo los textos en cada párrafo y
agregando la información y archivos que consideres conveniente.

Inicia borrando esta sección incluyendo esta línea.


Nombre de tu proyecto
=====================

Escribe aquí una descripción breve de dos o tres párrafos
en donde expliques: ¿Qué es tu proyecto? ¿Para qué sirve? y ¿Cómo
hacerlo funcionar?

Procura no utilizar técnicismos o lenguaje complicado, recuerda
que las personas que leerán esta descripción puede que no tengan
tu mismo nivel de conocimiento o tu misma área de experiencia.

Explica brévemente el funcionamiento esperado de tu proyecto, no es
necesario que escribas todo en detalle, si el funcionamiento requiere
una explicación más detallada puedes hacer referencia a un sitio web
o a otro archivo de texto dentro de la carpeta "docs".

Es muy útil que indiques el nivel de desarrollo de este proyecto sea
"estable", "beta", "incompleto" o "a-penas-funciona".

También puedes agregar en esta sección los créditos correspondientes
si tu proyecto se deriva de otro, nombres o pseudónimos de las
personas que colaboraron, licencia y fecha de última actualización.

Últimas adiciones
=================

Coloca en esta sección los últimos cambios relevantes o correcciones
que hayas realizado a tu proyecto. Es importante que notifiques sobre
cambios que modifiquen el comportamiento de tu proyecto o las salidas
que este genera.

Ejemplo de cambios en la última versión 0.1alpha:

* Agregados textos de ejemplo
* Agregado números de versión

Correcciones:

* Corregidos errores de ortografía

No es necesario que coloques todo el historial de cambios, en vez de eso
puedes crear un archivo en esta carpeta llamado "changelog.txt" con el histórico
completo (preferiblemente en orden cronológico inverso):

> Puede revisar el historial de cambios completo en el archivo changelog.txt

Costo/Lista de Materiales
=========================

Si la lista de materiales de este proyecto es corta puedes incluírla aquí, en
caso contrario puedes crear un archivo llamado "bom.csv" o un archivo de hoja de
cálculo donde puedes detallar la lista de materiales y costos. Procura utilizar
formatos abiertos en la medida de lo posible, por ejemplo eligiendo ODS sobre
Excel.

Pre-requisitos/Requerimientos
=============================

Dedica esta sección a explicar en detalle ¿Qué se requiere para hacer funcionar
tu proyecto?. Debes colocar los requerimientos o pre-requisitos del software
para hacerlo funcionar y herramientas para construirlo.

Para el hardware puedes especificar herramientas o maquinaria específica que se
necesite para construir el proyecto.

Ejemplo:

Requerimientos de software:

* IDE Arduino.

Herramientas requeridas:

* Pinza cortadora de cable.


Construcción y uso
==================

Si el procedimiento de construcción es sencillo, puedes detallarlo en esta
sección, en caso contrario puedes crear un archivo "build.txt" donde detalles el
procedimiento a seguir.

De igual manera si el procedimiento de utilización del software asociado a tu
proyecto es sencillo puedes explicarlo aquí. En caso de que las instrucciones
sean muy extensas, puedes crear un archivo "usage.txt" y hacer referencia
al mismo en esta sección.

Carpetas
========
La estructura de carpetas es muy importante en un proyecto, te permitirá tener
tus proyectos organizados y permitirá a otros compartir fácilmente cambios o 
mejoras. Esta estructura no está escrita en piedra y puedes modificarla según
se adopte mejor a tus necesidades.

Recuerda que dentro de cada carpeta es muy recomendable que incluyas un archivo
llamado "readme.txt" donde detalles los contenidos de la misma.

En la estruuctura de directorios se recomienda incluir por al menos las
siguientes carpetas:

* *doc*: Utiliza esta carpeta para ingresar toda la documentación que consideres
necesaria para tu proyecto. De preferencia utiliza formatos libres como "ODF"
o simples archivos de texto, si puedes crear una página web en HTML recuerda
renombrar el archivo principal como "index.html" para que pueda ser accedido
fácilmente en caso de que alguien copie esta carpeta en un servidor web.
* *src*: Coloca en esta carpeta todos los archivos de código fuente del software
de control de tu proyecto Open Hardware. Si utilizas un IDE como Eclipse o Arduino
copia dentro de src la carpeta del proyecto.
* *dsn* / *diseño*: En esta carpeta coloca todos los archivos para el diseño de tu
proyecto.
  +  *main*: Coloca en esta carpeta los archivos de diseño original que pueden
incluir, pero no limitarse a: Dibujos 2D, diseños 3D, archivos CAD, bibliotecas
de componentes, dibujos técnicos adicionales.
  +  *aux*: Coloca en esta carpeta los archivos de diseño auxiliares que ayuden
a construir tu proyecto. Los archivos de diseño secundario pueden incluír diseños
2D o 3D en formato de intercambio, dibujos técnicos adicionales, formatos listos
para manufactura, artes gráficos adicionales.
* *extra*: Esta carpeta es libre, aquí puedes colocar otros archivos que se
puedan requerir para hacer funcionar o construir tu proyecto. Un ejemplo de ello
puede ser un driver controlador de un dispositivo específico o vínculos a software
relevante, fotografías o videos.

Excepción de responsabilidades
==============================

Es recomendable que incluyas un texto como el siguiente en tus proyectos:

> El presente proyecto se comparte "tal cual" con el único objetivo de que sea útil.
El/los creadores del presente hardware y su software asociado no pueden garantizar su
correcto funcionamiento bajo ninguna circunstancia. El/Los autor/es de este proyecto
no podrá/n hacerse responsable/s de cualquier pérdida de carácter material, personal o
económico a su persona o terceros derivados de la utilización del mismo. Este proyecto
no deberá ser utilizado bajo ninguna circustancia en sistemas de carácter crítico
o sistemas de los cuales dependan vidas de personas de manera directa o indirecta.


Licenciamiento
==============

Agrega aquí la licencia que utilizas en el código fuente de tu proyecto, adicionalmente
agradeceríamos si colocas la nota de atribución de la plantilla al final.

> La plantilla de este README.md ha sido desarrollada por la comunidad openhardware.sv
con el objetivo de facilitar la documentación de proyectos. Esta plantilla está protegida
bajo la licencia CC BY, puedes modificarla y redistribuirla manteniendo esta nota de
atribución del autor.
