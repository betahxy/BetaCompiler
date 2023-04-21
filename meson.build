project('betacompiler', 'cpp', meson_version: '>=1.1.0', version: '0.0.1')

project_source_root = meson.current_source_dir()
project_build_root = meson.current_build_dir()
project_conf = configuration_data()

cc = meson.get_compiler('cpp')

global_inc = include_directories(
	'.',
)

cppflags=['-Wall']
ldflags=[]

subdir('src')
