# MCGGH

A parton-level Monte Carlo generator for Higgs production through gluon fusion process at hadron collider.

## Requirements

* C++ compiler supporting C++14 features ([Clang](http://clang.llvm.org/cxx_status.html) > 3.4, [GCC](https://gcc.gnu.org/projects/cxx-status.html) > 4.9),

* [LHAPDF 6](http://lhapdf.hepforge.org/) and the `NNPDF23_lo_as_0130_qed` PDF data. The `NNPDF23_lo_as_0130_qed` data can be installed by

``` shell
lhapdf install NNPDF23_lo_as_0130_qed
```

* [LoopTools](http://www.feynarts.de/looptools/). Check that `f++` is in `$PATH`.

## References

* [arXiv:hep-ph/9504378](https://arxiv.org/abs/hep-ph/9504378) (pp --> h),
* [arXiv:hep-ph/9603205](https://arxiv.org/abs/hep-ph/9603205) (pp --> hh),
* [arXiv:1405.7040](https://arxiv.org/abs/1405.7040) (pp --> hh).
