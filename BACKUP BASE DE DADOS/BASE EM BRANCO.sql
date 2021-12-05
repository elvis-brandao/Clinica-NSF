CREATE DATABASE  IF NOT EXISTS `base_nsf` /*!40100 DEFAULT CHARACTER SET latin1 */;
USE `base_nsf`;
-- MySQL dump 10.13  Distrib 5.7.12, for Win32 (AMD64)
--
-- Host: localhost    Database: base_nsf
-- ------------------------------------------------------
-- Server version	5.7.28-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `ficha_fisio`
--

DROP TABLE IF EXISTS `ficha_fisio`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `ficha_fisio` (
  `cod_ficha_fisio` int(11) NOT NULL AUTO_INCREMENT,
  `cod_paciente_ficha` int(11) NOT NULL,
  `patologia_fisio` varchar(250) DEFAULT NULL,
  `data_avaliacao_fisio` date NOT NULL,
  `data_alta_fisio` date NOT NULL,
  `data_inicio_tratamento_fisio` date NOT NULL,
  `hda_fisio` varchar(500) DEFAULT NULL,
  `exames_realizados_fisio` varchar(250) DEFAULT NULL,
  `conduta_fisio` varchar(500) DEFAULT NULL,
  `sessoes_realizadas_fisio` int(11) DEFAULT NULL,
  `observacoes_fisio` varchar(500) DEFAULT NULL,
  PRIMARY KEY (`cod_ficha_fisio`),
  KEY `cod_paciente_ficha_idx` (`cod_paciente_ficha`),
  CONSTRAINT `cod_paciente_ficha` FOREIGN KEY (`cod_paciente_ficha`) REFERENCES `paciente` (`cod_paciente`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ficha_fisio`
--

LOCK TABLES `ficha_fisio` WRITE;
/*!40000 ALTER TABLE `ficha_fisio` DISABLE KEYS */;
/*!40000 ALTER TABLE `ficha_fisio` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `ficha_hidro`
--

DROP TABLE IF EXISTS `ficha_hidro`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `ficha_hidro` (
  `cod_ficha_hidro` int(11) NOT NULL AUTO_INCREMENT,
  `cod_pacinte_ficha_hidro` int(11) NOT NULL,
  `frequencia_hidro` varchar(45) DEFAULT NULL,
  `dias_hidro` varchar(45) DEFAULT NULL,
  `horario_hidro` varchar(45) DEFAULT NULL,
  `data_inicio_hidro` date DEFAULT NULL,
  `grupo_mmss_hidro` varchar(45) DEFAULT NULL,
  `grupo_mmii_hidro` varchar(45) DEFAULT NULL,
  `restricoes_hidro` varchar(45) DEFAULT NULL,
  `alteracoes_hidro` varchar(45) DEFAULT NULL,
  `prat_ativ_fis_hidro` varchar(100) DEFAULT NULL,
  `tabagismo_hidro` varchar(45) DEFAULT NULL,
  `prob_resp_hidro` varchar(45) DEFAULT NULL,
  `alergia_hidro` varchar(100) DEFAULT NULL,
  `medicamentos_hidro` varchar(100) DEFAULT NULL,
  `ferimento_hidro` varchar(45) DEFAULT NULL,
  `insuficiencia_uri_hidro` varchar(45) DEFAULT NULL,
  `peso_hidro` double DEFAULT NULL,
  `altura_hidro` double DEFAULT NULL,
  `imc_hidro` double DEFAULT NULL,
  `labirintite_hidro` varchar(45) DEFAULT NULL,
  `cirurgia_hidro` varchar(45) DEFAULT NULL,
  `inflamacao_hidro` varchar(45) DEFAULT NULL,
  `doencas_hered_hidro` varchar(100) DEFAULT NULL,
  `hipertensao_hidro` varchar(45) DEFAULT NULL,
  `PA_hidro` varchar(45) DEFAULT NULL,
  `diabetes_hidro` varchar(45) DEFAULT NULL,
  `saturacao_hidro` varchar(45) DEFAULT NULL,
  `bicipital_hidro` varchar(45) DEFAULT NULL,
  `patelar_hidro` varchar(45) DEFAULT NULL,
  `aquileu_hidro` varchar(45) DEFAULT NULL,
  `equilibrio_hidro` varchar(45) DEFAULT NULL,
  `romberg_hidro` varchar(45) DEFAULT NULL,
  `dedo_nariz_hidro` varchar(45) DEFAULT NULL,
  `calcanhar_hidro` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`cod_ficha_hidro`),
  KEY `cod_pacinte_ficha_hidro_idx` (`cod_pacinte_ficha_hidro`),
  CONSTRAINT `cod_pacinte_ficha_hidro` FOREIGN KEY (`cod_pacinte_ficha_hidro`) REFERENCES `paciente` (`cod_paciente`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ficha_hidro`
--

LOCK TABLES `ficha_hidro` WRITE;
/*!40000 ALTER TABLE `ficha_hidro` DISABLE KEYS */;
/*!40000 ALTER TABLE `ficha_hidro` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `ficha_pilates`
--

DROP TABLE IF EXISTS `ficha_pilates`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `ficha_pilates` (
  `cod_ficha_pilates` int(11) NOT NULL AUTO_INCREMENT,
  `cod_paciente_ficha_pil` int(11) NOT NULL,
  `frequencia_pilates` varchar(45) DEFAULT NULL,
  `dias_pilates` varchar(100) DEFAULT NULL,
  `horario_pilates` varchar(45) DEFAULT NULL,
  `data_inicio_pilates` date DEFAULT NULL,
  `atividade_fisica_pilates` int(11) DEFAULT NULL,
  `tempo_parado_pilates` varchar(45) DEFAULT NULL,
  `tabagismo_pilates` varchar(45) DEFAULT NULL,
  `labirintite_pilates` varchar(45) DEFAULT NULL,
  `restricoes_pilates` varchar(45) DEFAULT NULL,
  `alteracao_cardio_pilates` varchar(45) DEFAULT NULL,
  `alteracao_metab_pilates` varchar(45) DEFAULT NULL,
  `medicamentos_pilates` varchar(100) DEFAULT NULL,
  `dores_pilates` varchar(45) DEFAULT NULL,
  `desvio_pilates` varchar(45) DEFAULT NULL,
  `alergia_pilates` varchar(100) DEFAULT NULL,
  `lesao_pilates` varchar(45) DEFAULT NULL,
  `pratica_pilates` varchar(45) DEFAULT NULL,
  `cirurgia_pilates` varchar(45) DEFAULT NULL,
  `ult_atividade_pilates` varchar(45) DEFAULT NULL,
  `doencas_hered_pilates` varchar(100) DEFAULT NULL,
  `indicacoes_med_pilates` varchar(150) DEFAULT NULL,
  `exame_fis_pilates` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`cod_ficha_pilates`),
  KEY `cod_paciente_ficha_pil_idx` (`cod_paciente_ficha_pil`),
  CONSTRAINT `cod_paciente_ficha_pil` FOREIGN KEY (`cod_paciente_ficha_pil`) REFERENCES `paciente` (`cod_paciente`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ficha_pilates`
--

LOCK TABLES `ficha_pilates` WRITE;
/*!40000 ALTER TABLE `ficha_pilates` DISABLE KEYS */;
/*!40000 ALTER TABLE `ficha_pilates` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `paciente`
--

DROP TABLE IF EXISTS `paciente`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `paciente` (
  `cod_paciente` int(11) NOT NULL AUTO_INCREMENT,
  `cpf_paciente` varchar(14) NOT NULL,
  `data_nascimento_paciente` date DEFAULT NULL,
  `idade_paciente` int(11) DEFAULT NULL,
  `telefone_paciente` varchar(15) DEFAULT NULL,
  `nome_paciente` varchar(75) NOT NULL,
  `endereco_paciente` varchar(100) DEFAULT NULL,
  `apelido_paciente` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`cod_paciente`),
  UNIQUE KEY `cpf_paciente_UNIQUE` (`cpf_paciente`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `paciente`
--

LOCK TABLES `paciente` WRITE;
/*!40000 ALTER TABLE `paciente` DISABLE KEYS */;
/*!40000 ALTER TABLE `paciente` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `palmilhas`
--

DROP TABLE IF EXISTS `palmilhas`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `palmilhas` (
  `cod_ficha_palmilhas` int(11) NOT NULL AUTO_INCREMENT,
  `cod_cliente_palmilhas` int(11) NOT NULL,
  `num_calcado_palmilhas` varchar(100) DEFAULT NULL,
  `qtde_calcados_palmilhas` int(11) DEFAULT NULL,
  `altura_palmilha` int(11) DEFAULT NULL,
  `data_chegada_calcados_palmilha` date DEFAULT NULL,
  `data_chegada_palmilha` date DEFAULT NULL,
  `data_entrega_palmilha` date DEFAULT NULL,
  `valor_palmilha` varchar(45) DEFAULT NULL,
  `pago_palmilha` int(11) DEFAULT NULL,
  `descricao_calcados_palmilhas` varchar(250) DEFAULT NULL,
  PRIMARY KEY (`cod_ficha_palmilhas`),
  KEY `cod_cliente_palmilhas_idx` (`cod_cliente_palmilhas`),
  CONSTRAINT `cod_cliente_palmilhas` FOREIGN KEY (`cod_cliente_palmilhas`) REFERENCES `paciente` (`cod_paciente`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `palmilhas`
--

LOCK TABLES `palmilhas` WRITE;
/*!40000 ALTER TABLE `palmilhas` DISABLE KEYS */;
/*!40000 ALTER TABLE `palmilhas` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `parcelas_ficha_fisio`
--

DROP TABLE IF EXISTS `parcelas_ficha_fisio`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `parcelas_ficha_fisio` (
  `cod_parcela_ficha_fisio` int(11) NOT NULL AUTO_INCREMENT,
  `cod_cliente_parcela_ficha_fisio` int(11) NOT NULL,
  `cod_ficha_parcela_fisio` int(11) NOT NULL,
  `valor_parcela_ficha_fisio` varchar(10) DEFAULT NULL,
  `data_venc_parcela_ficha_fisio` date DEFAULT NULL,
  `data_pag_parcela_ficha_fisio` date DEFAULT NULL,
  PRIMARY KEY (`cod_parcela_ficha_fisio`),
  KEY `cod_cliente_parcela_ficha_fisio_idx` (`cod_cliente_parcela_ficha_fisio`),
  KEY `cod_ficha_parcela_fisio_idx` (`cod_ficha_parcela_fisio`),
  CONSTRAINT `cod_cliente_parcela_ficha_fisio` FOREIGN KEY (`cod_cliente_parcela_ficha_fisio`) REFERENCES `paciente` (`cod_paciente`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `cod_ficha_parcela_fisio` FOREIGN KEY (`cod_ficha_parcela_fisio`) REFERENCES `ficha_fisio` (`cod_ficha_fisio`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `parcelas_ficha_fisio`
--

LOCK TABLES `parcelas_ficha_fisio` WRITE;
/*!40000 ALTER TABLE `parcelas_ficha_fisio` DISABLE KEYS */;
/*!40000 ALTER TABLE `parcelas_ficha_fisio` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `parcelas_ficha_hidro`
--

DROP TABLE IF EXISTS `parcelas_ficha_hidro`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `parcelas_ficha_hidro` (
  `cod_parcela_ficha_hidro` int(11) NOT NULL AUTO_INCREMENT,
  `cod_cliente_parcela_ficha_hidro` int(11) NOT NULL,
  `cod_ficha_parcela_hidro` int(11) NOT NULL,
  `valor_parcela_ficha_hidro` varchar(10) DEFAULT NULL,
  `data_venc_parcela_ficha_hidro` date DEFAULT NULL,
  `data_pag_parcela_ficha_hidro` date DEFAULT NULL,
  PRIMARY KEY (`cod_parcela_ficha_hidro`),
  KEY `cod_cliente_parcela_ficha_hidro_idx` (`cod_cliente_parcela_ficha_hidro`),
  KEY `cod_ficha_parcela_pil_idx` (`cod_ficha_parcela_hidro`),
  CONSTRAINT `cod_cliente_parcela_ficha_hidro` FOREIGN KEY (`cod_cliente_parcela_ficha_hidro`) REFERENCES `paciente` (`cod_paciente`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `cod_ficha_parcela_hidro` FOREIGN KEY (`cod_ficha_parcela_hidro`) REFERENCES `ficha_hidro` (`cod_ficha_hidro`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `parcelas_ficha_hidro`
--

LOCK TABLES `parcelas_ficha_hidro` WRITE;
/*!40000 ALTER TABLE `parcelas_ficha_hidro` DISABLE KEYS */;
/*!40000 ALTER TABLE `parcelas_ficha_hidro` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `parcelas_ficha_pil`
--

DROP TABLE IF EXISTS `parcelas_ficha_pil`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `parcelas_ficha_pil` (
  `cod_parcela_ficha_pil` int(11) NOT NULL AUTO_INCREMENT,
  `cod_cliente_parcela_ficha_pil` int(11) NOT NULL,
  `cod_ficha_parcela_pil` int(11) NOT NULL,
  `valor_parcela_ficha_pil` varchar(10) DEFAULT NULL,
  `data_venc_parcela_ficha_pil` date DEFAULT NULL,
  `data_pag_parcela_ficha_pil` date DEFAULT NULL,
  PRIMARY KEY (`cod_parcela_ficha_pil`),
  KEY `cod_cliente_parcela_ficha_pil_idx` (`cod_cliente_parcela_ficha_pil`),
  KEY `cod_ficha_parcela_pil_idx` (`cod_ficha_parcela_pil`),
  CONSTRAINT `cod_cliente_parcela_ficha_pil` FOREIGN KEY (`cod_cliente_parcela_ficha_pil`) REFERENCES `paciente` (`cod_paciente`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `cod_ficha_parcela_pil` FOREIGN KEY (`cod_ficha_parcela_pil`) REFERENCES `ficha_pilates` (`cod_ficha_pilates`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `parcelas_ficha_pil`
--

LOCK TABLES `parcelas_ficha_pil` WRITE;
/*!40000 ALTER TABLE `parcelas_ficha_pil` DISABLE KEYS */;
/*!40000 ALTER TABLE `parcelas_ficha_pil` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Dumping events for database 'base_nsf'
--

--
-- Dumping routines for database 'base_nsf'
--
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2020-05-02 10:01:51
