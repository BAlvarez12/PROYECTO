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
-- Table structure for table `clientes`
--

DROP TABLE IF EXISTS `clientes`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `clientes` (
  `ID_CLIENTE` int NOT NULL AUTO_INCREMENT,
  `NOMBRES` varchar(60) DEFAULT NULL,
  `APELLIDOS` varchar(60) DEFAULT NULL,
  `NIT` varchar(12) DEFAULT NULL,
  `GENERO` char(1) DEFAULT NULL,
  `TELEFONO` varchar(25) DEFAULT NULL,
  `CORREO_ELECTRONICO` varchar(45) DEFAULT NULL,
  `FECHA_INGRESO` datetime DEFAULT NULL,
  PRIMARY KEY (`ID_CLIENTE`)
) ENGINE=InnoDB AUTO_INCREMENT=32 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `clientes`
--

LOCK TABLES `clientes` WRITE;
/*!40000 ALTER TABLE `clientes` DISABLE KEYS */;
INSERT INTO `clientes` VALUES (1,'Juan','Perez','123456789012','M','12345678','juan.perez@example.com','2023-07-10 00:00:00'),(2,'Maria','Garcia','234567890123','F','23456789','maria.garcia@example.com','2023-08-15 00:00:00'),(3,'Carlos','Lopez','345678901234','M','34567890','carlos.lopez@example.com','2023-09-12 00:00:00'),(4,'Ana','Rodriguez','456789012345','F','45678901','ana.rodriguez@example.com','2023-10-20 00:00:00'),(5,'Luis','Martinez','567890123456','M','56789012','luis.martinez@example.com','2023-11-05 00:00:00'),(6,'Laura','Hernandez','678901234567','F','67890123','laura.hernandez@example.com','2023-12-22 00:00:00'),(7,'Pedro','Gonzalez','789012345678','M','78901234','pedro.gonzalez@example.com','2024-01-30 00:00:00'),(8,'Marta','Sanchez','890123456789','F','89012345','marta.sanchez@example.com','2024-02-14 00:00:00'),(9,'Miguel','Ramirez','901234567890','M','90123456','miguel.ramirez@example.com','2024-03-05 00:00:00'),(10,'Lucia','Torres','012345678901','F','01234567','lucia.torres@example.com','2024-04-18 00:00:00'),(11,'Fernando','Flores','112345678901','M','11234567','fernando.flores@example.com','2024-05-27 00:00:00'),(12,'Elena','Rivera','212345678902','F','21234567','elena.rivera@example.com','2023-06-10 00:00:00'),(13,'Javier','Gomez','312345678903','M','31234567','javier.gomez@example.com','2023-07-15 00:00:00'),(14,'Sofia','Diaz','412345678904','F','41234567','sofia.diaz@example.com','2023-08-20 00:00:00'),(15,'David','Morales','512345678905','M','51234567','david.morales@example.com','2023-09-25 00:00:00'),(16,'Carmen','Cruz','612345678906','F','61234567','carmen.cruz@example.com','2023-10-30 00:00:00'),(17,'Alberto','Ortiz','712345678907','M','71234567','alberto.ortiz@example.com','2023-11-20 00:00:00'),(18,'Raquel','Gutierrez','812345678908','F','81234567','raquel.gutierrez@example.com','2023-12-15 00:00:00'),(19,'Diego','Castro','912345678909','M','91234567','diego.castro@example.com','2024-01-10 00:00:00'),(20,'Patricia','Ramos','012345678900','F','01234568','patricia.ramos@example.com','2024-02-05 00:00:00'),(21,'Sergio','Vega','112345678901','M','11234568','sergio.vega@example.com','2024-03-01 00:00:00'),(22,'Veronica','Fernando','212345678902','F','21234568','veronica.fernandez@example.com','2024-04-12 00:00:00'),(23,'Andres','Ruiz','312345678903','M','31234568','andres.ruiz@example.com','2024-05-24 00:00:00'),(24,'Natalia','Mendoza','412345678904','F','41234568','natalia.mendoza@example.com','2023-06-18 00:00:00'),(25,'Ricardo','Silva','512345678905','M','51234568','ricardo.silva@example.com','2023-07-23 00:00:00'),(26,'Valeria','Romero','612345678906','F','61234568','valeria.romero@example.com','2023-08-28 00:00:00'),(27,'Hugo','Soto','712345678907','M','71234568','hugo.soto@example.com','2023-09-30 00:00:00'),(28,'Claudia','Suarez','812345678908','F','81234568','claudia.suarez@example.com','2023-10-15 00:00:00'),(29,'Victor','Luna','912345678909','M','91234568','victor.luna@example.com','2023-11-20 00:00:00'),(30,'Rosa','Aguilar','012345678910','F','01234569','rosa.aguilar@example.com','2023-12-25 00:00:00');
/*!40000 ALTER TABLE `clientes` ENABLE KEYS */;
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
