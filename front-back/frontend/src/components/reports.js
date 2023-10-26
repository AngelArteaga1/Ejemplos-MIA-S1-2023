import React, { useState, useEffect } from 'react';

function Reports_Card() {

  return (
    <div className="card mt-4">
      <h5 className="card-header">
        <div className='d-flex justify-content-between'>
            <p>Manejo de Archivos</p>
        </div>
      </h5>
      <div className="card-body">
        <center>
            <img src="https://ejemplo-clase-mia-2023.s3.us-east-2.amazonaws.com//images/reporte.png" class="img-fluid" alt="..."></img>
        </center>
      </div>
    </div>
  );
}

export default Reports_Card;
