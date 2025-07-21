#!/usr/bin/env bash

project_name='prog3_fundamentos_task_2_v2025_01'
source_code='
  sum_variadic.h
  all_true.h
  max_static.h
  apply_to_all.h
  invoke_multiple.h
  static_array.h
  tuple_printer.h
  comparator.h
  dimensions.h
  printer_specialized.h
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}