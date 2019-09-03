#Windows installer
# setup.py bdist_wininst --target-version 2.5
import distutils.sysconfig
from distutils.core import setup
import sys
import os

if len(sys.argv) == 1:
    cmd = "setup.py bdist_wininst --target-version %s" % distutils.sysconfig.get_python_version()
    print cmd
    os.system(cmd)
    sys.exit(0)

setup(name='fitkit',
      version='0.2.7',
      description='Python libkitclient-0.2.7 wrapper allows communication with the FITkit devices',
      license='GNU',
      platforms="Windows",
      author='Zdenek Vasicek, Marek Vavrusa',
      author_email='vasicek@fit.vutbr.cz, xvavru00@stud.fit.vutbr.cz',
      maintainer="Zdenek Vasicek",
      maintainer_email="vasicek@fit.vutbr.cz",
      url='http://merlin.fit.vutbr.cz/FITkit/',
      url="http://www.py2exe.org/",
      packages=['fitkit'],
      package_data={'fitkit': ['*.pyd']},
     )

