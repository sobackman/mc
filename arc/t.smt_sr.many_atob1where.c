${ws}${te_set.module}${te_set.clear}( ${te_select_related.result_var} );
${ws}{${te_lnk.te_classGeneratedName} * selected = ${te_lnk.left}->${te_lnk.linkage};
${ws}if ( ( 0 != selected ) && ( ${te_select_related.where_clause} ) ) {
${ws}  ${te_set.module}${te_set.insert_element}( (${te_set.scope}${te_set.base_class} *) ${te_select_related.result_var}, selected );
${ws}}}
