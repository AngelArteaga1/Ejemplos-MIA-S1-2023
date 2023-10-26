import React, { useState, useRef } from 'react';

function No_Access() {

  return (
    <div className="card mt-4">
      <h5 className="card-header">
        <div className='d-flex justify-content-between'>
            <p>Manejo de Archivos</p>
        </div>
      </h5>
      <div className="card-body">
        <center>
            <h1>SIN ACCESO</h1>
        </center>
      </div>
    </div>
  );
}

export default No_Access;
