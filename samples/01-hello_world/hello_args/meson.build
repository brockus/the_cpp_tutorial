project('Hello Args!', 'cpp',
    default_options: ['werror=true', 'layout=flat', 'cpp_std=c++17'])

exe = executable('hello', files('main.cc'))

test('test the hello prog no args', exe)
test('use say hello command send to', exe, args : ['say-hello', '--to', 'Michael Brockus'])
test('use say-hello command with classic hello', exe, args : ['say-hello', '--classic'])
test('use say-hello command with help', exe, args : ['say-hello', '--help'])
test('use say-hello command no args', exe, args : ['say-hello'])
test('use get version', exe, args : ['--version'])
test('use get help', exe, args : ['--help'])
