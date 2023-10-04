from flask import Flask, jsonify

app = Flask(__name__)

# Datos de ejemplo en forma de lista de diccionarios
productos = [
    {'id': 1, 'nombre': 'Producto 1', 'precio': 10.0},
    {'id': 2, 'nombre': 'Producto 2', 'precio': 20.0},
    {'id': 3, 'nombre': 'Producto 3', 'precio': 30.0},
]

# Ruta para obtener la lista de productos
@app.route('/productos', methods=['GET'])
def obtener_productos():
    return jsonify({'productos': productos})

# Ruta para obtener un producto por ID
@app.route('/producto/<int:producto_id>', methods=['GET'])
def obtener_producto(producto_id):
    producto = next((p for p in productos if p['id'] == producto_id), None)
    if producto:
        return jsonify({'producto': producto})
    else:
        return jsonify({'mensaje': 'Producto no encontrado'}), 404

if __name__ == '__main__':
    app.run(debug=True)
