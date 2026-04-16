from distutils.core import setup
setup(name='DEUspendfrom',
      version='1.0',
      description='Command-line utility for deuteriumcoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@deuteriumcoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
