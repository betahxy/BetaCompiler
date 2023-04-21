includes = []

includes += global_inc

includes += include_directories(
				'.',
				'include'
			      )

sources = files(
		'main.cc',
		'lex.cc'
	       )

install_dir = project_build_root
deps = []

executable('betacompiler',
	    sources,
	    c_args: cppflags,
	    link_args: ldflags,
	    dependencies : deps,
	    include_directories : includes,
	    install : true,
	    install_dir : install_dir
	  )
