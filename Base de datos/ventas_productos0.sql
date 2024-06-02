-- MySQL dump 10.13  Distrib 8.0.36, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: ventas
-- ------------------------------------------------------
-- Server version	8.0.37

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `productos`
--

DROP TABLE IF EXISTS `productos`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `productos` (
  `ID_PRODUCTO` int NOT NULL AUTO_INCREMENT,
  `PRODUCTO` varchar(50) DEFAULT NULL,
  `ID_MARCA` smallint DEFAULT NULL,
  `DESCRIPCION` varchar(200) DEFAULT NULL,
  `IMAGEN` varchar(30) DEFAULT NULL,
  `PRECIO_COSTO` decimal(8,2) DEFAULT NULL,
  `PRECIO_VENTA` decimal(8,2) DEFAULT NULL,
  `EXISTENCIA` int DEFAULT NULL,
  `FECHA_INGRESO` datetime DEFAULT NULL,
  PRIMARY KEY (`ID_PRODUCTO`),
  KEY `ID_MARCA_idx` (`ID_MARCA`),
  CONSTRAINT `ID_MARCA` FOREIGN KEY (`ID_MARCA`) REFERENCES `marcas` (`ID_MARCA`) ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=34 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `productos`
--

LOCK TABLES `productos` WRITE;
/*!40000 ALTER TABLE `productos` DISABLE KEYS */;
INSERT INTO `productos` VALUES (1,'Toyota Corolla',1,'Sedan compacto confiable y eficiente','1',18000.00,20000.00,10,'2023-01-10 00:00:00'),(2,'Ford Mustang',2,'Coupe deportivo con gran potencia','1',25000.00,28000.00,5,'2023-02-15 00:00:00'),(3,'Chevrolet Silverado',3,'Camioneta robusta y duradera','1',27000.00,30000.00,7,'2023-03-20 00:00:00'),(4,'Honda Civic',4,'Sedan compacto con excelente economia de combustible','1',19000.00,21000.00,12,'2023-04-18 00:00:00'),(5,'Nissan Altima',5,'Sedan mediano con tecnologia avanzada','1',22000.00,24000.00,8,'2023-05-22 00:00:00'),(6,'BMW 3 Series',6,'Sedan deportivo de lujo','1',35000.00,38000.00,4,'2023-06-30 00:00:00'),(7,'Mercedes-Benz C-Class',7,'Sedan de lujo con alto rendimiento','1',36000.00,39000.00,3,'2023-07-05 00:00:00'),(8,'Volkswagen Golf',8,'Hatchback compacto con gran manejo','1',20000.00,22000.00,9,'2023-08-15 00:00:00'),(9,'Audi A4',9,'Sedan de lujo con caracteristicas tecnologicas avanzadas','1',34000.00,37000.00,5,'2023-09-25 00:00:00'),(10,'Hyundai Elantra',10,'Sedan compacto con estilo moderno','1',18000.00,20000.00,10,'2023-10-30 00:00:00'),(11,'Kia Sorento',11,'SUV mediano con amplio espacio interior','1',28000.00,31000.00,6,'2023-11-20 00:00:00'),(12,'Subaru Outback',12,'Crossover con traccion en las cuatro ruedas','1',27000.00,29000.00,7,'2023-12-15 00:00:00'),(13,'Mazda CX-5',13,'SUV compacto con manejo agil','1',25000.00,27000.00,8,'2024-01-10 00:00:00'),(14,'Lexus RX',14,'SUV de lujo con interiores lujosos','1',42000.00,45000.00,3,'2024-02-05 00:00:00'),(15,'Jeep Wrangler',15,'SUV todoterreno con capacidades extremas','1',35000.00,38000.00,4,'2024-03-01 00:00:00'),(16,'Dodge Charger',16,'Sedan deportivo con motor potente','1',30000.00,33000.00,5,'2024-04-12 00:00:00'),(17,'Ram 1500',17,'Camioneta pickup con gran capacidad de carga','1',32000.00,35000.00,6,'2024-05-24 00:00:00'),(18,'Cadillac Escalade',18,'SUV de lujo con gran presencia','1',75000.00,80000.00,2,'2023-06-18 00:00:00'),(19,'Buick Enclave',19,'SUV mediano con caracteristicas premium','1',40000.00,43000.00,3,'2023-07-23 00:00:00'),(20,'Chrysler Pacifica',20,'Minivan con gran espacio y tecnologia','1',35000.00,38000.00,4,'2023-08-28 00:00:00'),(21,'Volvo XC90',21,'SUV de lujo con caracteristicas de seguridad avanzadas','1',50000.00,53000.00,2,'2023-09-30 00:00:00'),(22,'Land Rover Discovery',22,'SUV todoterreno con lujo y confort','1',60000.00,65000.00,1,'2023-10-15 00:00:00'),(23,'Jaguar XF',23,'Sedan de lujo con rendimiento deportivo','1',45000.00,48000.00,3,'2023-11-20 00:00:00'),(24,'Porsche 911',24,'Coupe deportivo de alto rendimiento','1',90000.00,95000.00,2,'2023-12-25 00:00:00'),(25,'Mini Cooper',25,'Hatchback compacto con gran estilo','1',25000.00,27000.00,5,'2023-01-05 00:00:00'),(26,'Mitsubishi Outlander',26,'SUV mediano con caracteristicas familiares','1',26000.00,28000.00,7,'2023-02-10 00:00:00'),(27,'Tesla Model S',27,'Sedan electrico de lujo con gran autonomia','1',80000.00,85000.00,3,'2023-03-15 00:00:00'),(28,'Acura MDX',28,'SUV de lujo con tecnologia avanzada','1',45000.00,48000.00,4,'2023-04-20 00:00:00'),(29,'Infiniti QX60',29,'SUV mediano de lujo con gran confort','1',46000.00,49000.00,3,'2023-05-25 00:00:00'),(30,'Lincoln Navigator',30,'SUV de lujo con gran capacidad y confort','1',75000.00,80000.00,2,'2023-06-30 00:00:00'),(31,NULL,NULL,NULL,'',NULL,NULL,NULL,NULL);
/*!40000 ALTER TABLE `productos` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2024-06-01 15:53:39
