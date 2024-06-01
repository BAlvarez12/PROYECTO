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
-- Table structure for table `proveedores`
--

DROP TABLE IF EXISTS `proveedores`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `proveedores` (
  `ID_PROVEEDOR` int NOT NULL AUTO_INCREMENT,
  `PROVEEDOR` varchar(60) DEFAULT NULL,
  `NIT` varchar(12) DEFAULT NULL,
  `DIRECCION` varchar(80) DEFAULT NULL,
  `TELEFONO` varchar(25) DEFAULT NULL,
  PRIMARY KEY (`ID_PROVEEDOR`)
) ENGINE=InnoDB AUTO_INCREMENT=26 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `proveedores`
--

LOCK TABLES `proveedores` WRITE;
/*!40000 ALTER TABLE `proveedores` DISABLE KEYS */;
INSERT INTO `proveedores` VALUES (1,'Proveedor Alfa','123456789','Ciudad A','12345678'),(2,'Proveedor Beta','234567890','Ciudad B','23456789'),(3,'Proveedor Gamma','345678901','Ciudad C','34567890'),(4,'Proveedor Delta','456789012','Ciudad D','45678901'),(5,'Proveedor Epsilon','567890123','Ciudad E','56789012'),(6,'Proveedor Zeta','678901234','Ciudad F','67890123'),(7,'Proveedor Eta','789012345','Ciudad G','78901234'),(8,'Proveedor Theta','890123456','Ciudad H','89012345'),(9,'Proveedor Iota','901234567','Ciudad I','90123456'),(10,'Proveedor Kappa','012345678','Ciudad J','01234567'),(11,'Proveedor Lambda','112345678','Ciudad K','11234567'),(12,'Proveedor Mu','212345678','Ciudad L','21234567'),(13,'Proveedor Nu','312345678','Ciudad M','31234567'),(14,'Proveedor Xi','412345678','Ciudad N','41234567'),(15,'Proveedor Omicron','512345678','Ciudad O','51234567'),(16,'Proveedor Pi','612345678','Ciudad P','61234567'),(17,'Proveedor Rho','712345678','Ciudad Q','71234567'),(18,'Proveedor Sigma','812345678','Ciudad R','81234567'),(19,'Proveedor Tau','912345678','Ciudad S','91234567'),(20,'Proveedor Upsilon','019283746','Ciudad T','01928374'),(21,'','12236554','','2356897'),(22,'','89562321','','32568987'),(23,'Bryanaaa','56236589','','3265564'),(24,'bryann','56325632','','32563265'),(25,'ahoasd','98652356','asdasdasd','32563256');
/*!40000 ALTER TABLE `proveedores` ENABLE KEYS */;
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
