# Домашнее задание по теме «Простой ввод-вывод»

## Вариант 23: Расчет объема переданных данных

### УСЛОВИЯ:
По заданной скорости передачи данных и продолжительности соединения вычислить объём переданных данных.
- **Исходные данные:** запрашиваются у пользователя и считываются с клавиатуры.
- **Единицы измерения в ответе:** Мбит и Мбайт.

---

### АЛГОРИТМ И БЛОК-СХЕМА:
Алгоритм решения задачи спроектирован в виде блок-схемы. Вы можете открыть и посмотреть её на сайте:

 **[ОТКРЫТЬ БЛОК-СХЕМУ В DRAW.IO](https://app.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=Diogram.drawio.png&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%221U7ujweiJSOcBIWxsv0i%22%3E1VdNj5swEP01SG0PFR%2BBwBEI2V4qVcqh7anygjdYa3BknE3SX9%2BxsQFvsu3uFm3ay8R%2B4%2FHHezPGcYK8Od5wtKs%2FswpTx3eroxOsHN%2F3Ft4CfiRy6pGln%2FTAlpNKDxqBDfmJNehqdE8q3FkDBWNUkJ0NlqxtcSksDHHODvawO0btVXdoi8%2BATYnoOfqVVKLu0dhfjvgnTLa1WdmL9PkaZAbrk3Q1qthhAgWFE%2BScMdG3mmOOqSTP8NLHrZ%2FwDhvjuBXPCfDPA%2FQcnTiZ40IIMAud7FATgTc7VErPAcQFrBYNhZ4HzTtCac4o4youKLxVWCwB7wRn93jiSaJlkEYygrVio1eSM%2FRrPyC612s7K9dJVsq60qbLsZ1kyhY6CHOBj5Mz6BPfYNZgwU8wpJ6IEmkFDqOA3kJjepbAqKTT1LiRTp%2FtMPPIMDQ0yZcJD55DOGTFTjZhFKIUU7blqAF2dpgTWBHzx74vo%2BPPGh2xKanXaXZZI2Wz3hbKQpGDTJ4Te6oBSKqsUi1zJ%2BNjg8BgX9lA2R7JnCB1%2FAi2APUPG7tnnHXC8XO5C46bE5otARI7AfwktBLAmyMDFs%2FJAM72bYVlhPvisluv136eX5JwFWVReFFCdnvCzY%2FmlgiplYTcgWf3w4ToQQYTgU5jiD0LEOK78VzaDFem0Sa2i3OW6gz%2F8epcpUW8vihtlMdFtv5ddapKerJG%2B3IMlV2aEuyLFdq5Kc1pmQ6T%2BHaBWlnwTi2fq3GeKXYZ%2F%2F7JXDoP6TeXDIEzZZT3OKPsag%2FmyKjov%2FjApvpDOn5sVSak0Zt9WufgWj%2B%2FcHX2ejsnn%2B15ia030FSPtkrlMxF6JUVdR0pbBnwk4pu8mz%2BGuvfdeFrY88Qlu9%2F1Ld4vIxDfYmE9BqZqXCSXY4oEebBP9TdMxa9jKrgaU4trMZW8jqnF1ZgKr8WUuU1fSlV4NaqiN6IKuuM%2FOuWb%2FC8Oil8%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)**

---

### КОНТРОЛЬНЫЕ ПРИМЕРЫ ДЛЯ ПРОВЕРКИ ПРОГРАММЫ:

Для подтверждения корректности работы кода используются следующие тест-кейсы:

1. **Тест №1 (Пример из задания):**
   - Входные данные: Скорость = 20.00 Мбит/с, Время = 60.00 с
   - Ожидаемый результат: 1200.00 Мбит / 150.00 Мбайт

2. **Теft №2 (Ровный перевод в байты):**
   - Входные данные: Скорость = 100.00 Мбит/с, Время = 8.00 с
   - Ожидаемый результат: 800.00 Мбит / 100.00 Мбайт

3. **Тест №3 (Минимальные значения):**
   - Входные данные: Скорость = 1.00 Мбит/с, Время = 16.00 с
   - Ожидаемый результат: 16.00 Мбит / 2.00 Мбайт
