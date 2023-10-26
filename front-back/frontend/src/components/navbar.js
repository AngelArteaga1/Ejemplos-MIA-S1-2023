import React from 'react';


function Navbar() {
  return (
    <nav class="navbar navbar-expand-lg navbar-light bg-light">
        <a class="navbar-brand ms-3" href="#">Proyecto 2 MIA</a>
        <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarNavDropdown" aria-controls="navbarNavDropdown" aria-expanded="false" aria-label="Toggle navigation">
            <span class="navbar-toggler-icon"></span>
        </button>
        <div class="collapse navbar-collapse" id="navbarNavDropdown">
            <ul class="navbar-nav">
                <li class="nav-item active">
                    <a class="nav-link" href="/">Home</a>
                </li>
                <li class="nav-item">
                    <a class="nav-link" href="/reports">Reportes</a>
                </li>
                <li class="nav-item">
                    <button class="nav-link" href="#" data-bs-toggle="modal" data-bs-target="#exampleModal">Iniciar Sesión</button>
                </li>
            </ul>
        </div>
    </nav>
  );
}

export default Navbar;