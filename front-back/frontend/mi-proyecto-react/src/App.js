import React from 'react';
import './App.css';
import Nav from './components/navbar';
import Card from './components/card';

function App() {
  return (
    <div>
      <Nav />
      <div className='container'>
        <Card />
      </div>
    </div>
  );
}

export default App;
