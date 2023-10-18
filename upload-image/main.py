import subprocess
import boto3

# Nombre del archivo fuente .dot y archivo de salida .jpg
archivo_dot = "reporte.dot"
archivo_jpg = "reporte.jpg"
bucket_name = "ejemplo-mia-usac-2023"
# Define las credenciales directamente en el código
aws_access_key_id = 'AKIA3KMALLUYTSUZKROZ'
aws_secret_access_key = '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'

# Comando para ejecutar Graphviz
comando = ["dot", "-Tjpg", archivo_dot, "-o", archivo_jpg]

# Ejecutar el comando
subprocess.run(comando, check=True)

print(f"Se ha creado el archivo {archivo_jpg}")

# Crea un cliente de S3
s3 = boto3.client('s3', aws_access_key_id=aws_access_key_id, aws_secret_access_key=aws_secret_access_key)

# Sube el archivo al bucket
s3.upload_file(archivo_jpg, bucket_name, archivo_jpg)

print(f"Se ha subido {archivo_jpg} a {bucket_name}")
