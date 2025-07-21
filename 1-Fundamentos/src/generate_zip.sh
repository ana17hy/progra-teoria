#!/usr/bin/env bash

project_name='prog3_fundamentos_task_1_v2025_01'
source_code='
  vector_3d.h vector_3d.cpp
  polynomial.h polynomial.cpp
  point.h point.cpp
  logger.h logger.cpp
  system_log.h system_log.cpp
  product.h product.cpp
  fraction.h fraction.cpp
  bag.h bag.cpp
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}