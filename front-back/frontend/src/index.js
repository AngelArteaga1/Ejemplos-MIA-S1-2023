import * as React from "react";
import * as ReactDOM from "react-dom/client";
import { createBrowserRouter, RouterProvider, Route } from "react-router-dom";
import "./index.css";
import Nav from './components/navbar';
import Card from './components/card';
import Reports_Card from './components/reports';
import No_Access from './components/no_access';
import Modal from './components/modal';
import 'bootstrap/dist/css/bootstrap.min.css'
import 'bootstrap/dist/js/bootstrap.bundle.min.js'

function Home() {
  return (
    <div>
      <Nav />
      <div className='container'>
        <Card />
      </div>
      <Modal />
    </div>
  );
}

function Reports() {
  if(true){
    return (
      <div>
        <Nav />
        <div className='container'>
          <Reports_Card />
        </div>
        <Modal />
      </div>
    );
  } else {
    return (
      <div>
        <Nav />
        <div className='container'>
          <No_Access />
        </div>
        <Modal />
      </div>
    );
  }
}

const router = createBrowserRouter([
  {
    path: "/",
    element:<Home/>,
  },
  {
    path: "/reports",
    element:<Reports/>,
  },
]);

ReactDOM.createRoot(document.getElementById("root")).render(
  <React.StrictMode>
    <RouterProvider router={router} />
  </React.StrictMode>
);

export default router;