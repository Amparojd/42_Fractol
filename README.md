<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <div class="container">
        <p align = "center">
         <img src=./fractal_gif.gif width="800"/></p>
        <p align = "center">Proyecto de 42 Madrid</p>
        <h2>Índice</h2>
            <ul>
                <li><a href="#intro">Introducción</a></li>
                <li><a href="#instalacion">Instalación</a></li>
                <li><a href="#tester">Documéntate</a></li>
                <!-- Agrega más enlaces a otras secciones si es necesario -->
            </ul>
        <h2 id="intro">Introducción</h2>
        <p>Fract-ol es un proyecto que consiste en desarrollar un programa interactivo en C que permite visualizar fractales en tiempo real. Los fractales más comunes a representar son el conjunto de Mandelbrot y el conjunto de Julia. Como parte del bonus he añadido también el fractal "Burning ship". </p>
        <p>Para poder entender el funcionamiento de los fractales, es bastante necesario tener claro qué son los números complejos, números reales y números imaginarios</p>
    <p>El programa debe ofrecer una interfaz gráfica que permita al usuario explorar y manipular estos fractales, pudiendo ajustar parámetros como la posición en el plano complejo, el zoom, el esquema de colores, entre otros.</p>
        <br>
        <h2 id="instalacion">Instalación</h2>
        <p>Clona el repositorio:</p>
        <pre><code>git@github.com:Amparojd/42_Fractol.git</code></pre>
        <br>
        <p>Una vez clonado, accede al nuevo directorio y compila</p>
        <pre><code>make</code></pre>
        <p>Se debió crear un ejecutable llamado <code>fractol</code>, por lo que, puedes añadir otro argumento más para poder iniciar cualquier fractal disponible</p>
        <pre><code>./fractol julia_1</code></pre>
        <pre><code>./fractol julia_2</code></pre>
        <pre><code>./fractol julia_3</code></pre>
        <pre><code>./fractol mandelbrot</code></pre>
        <pre><code>./fractol burning_ship</code></pre>
        <br>
        <h3>¡A disfrutar!</h3>
        <h2 id="testet">Documéntate</h2>
        <p>Fract-ol es un proyecto muy bonito y colorido, pero no es nada sencillo. Deberás entender qué son los números complejos, los reales y los imaginarios</p>
 </div>
</body>
</html>
