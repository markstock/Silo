!cccccccccccccccccccccccccccccccccccccccccccccccccccccccc -*- fortran -*-
! 
!      SILO include file for Fortan applications.
! 
!  WARNING WARNING WARNING WARNING WARNING WARNING WARNING WARNING WARNING
!     This file is generated automatically from C header files in the
!     SILO distribution.  Do not make changes to this file manually,
!     as those changes will disappear.
!  WARNING WARNING WARNING WARNING WARNING WARNING WARNING WARNING WARNING
! 
!  This file was generated by the following commands...
!        mv silo.inc silo.inc~
!        cat silo.h silo_f.h | mkinc --f90 > silo.inc
! 
! cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc


!...Functions.
      integer, external :: dbaddcaopt
      integer, external :: dbaddccmp
      integer, external :: dbaddcopt
      integer, external :: dbadddopt
      integer, external :: dbaddiaopt
      integer, external :: dbaddicmp
      integer, external :: dbaddiopt
      integer, external :: dbaddrcmp
      integer, external :: dbaddregion
      integer, external :: dbaddregiona
      integer, external :: dbaddropt
      integer, external :: dbcalcfl
      integer, external :: dbclose
      integer, external :: dbcreate
      integer, external :: dberrlvl
      integer, external :: dberrno
      integer, external :: dbfgetca
      integer, external :: dbfreemrgtree
      integer, external :: dbfreeobject
      integer, external :: dbfreeoptlist
      integer, external :: dbget2dstrlen
      integer, external :: dbgetca
      integer, external :: dbgetcksums
      integer, external :: dbgetcompress
      integer, external :: dbgetcurve
      integer, external :: dbgetdepwarn
      integer, external :: dbgetemptyok
      integer, external :: dbgethdfnms
      integer, external :: dbgetovrwrt
      integer, external :: dbgetqv1
      integer, external :: dbinqblen
      integer, external :: dbinqca
      integer, external :: dbinqdtyp
      integer, external :: dbinqfile
      integer, external :: dbinqlen
      integer, external :: dbinqmtyp
      integer, external :: dbinqvtyp
      integer, external :: dbmkdir
      integer, external :: dbmkmrgtree
      integer, external :: dbmkobject
      integer, external :: dbmkoptlist
      integer, external :: dbmkptr
      integer, external :: dbopen
      integer, external :: dbpmrgv
      integer, external :: dbputca
      integer, external :: dbputcsgm
      integer, external :: dbputcsgv
      integer, external :: dbputcsgzl
      integer, external :: dbputcurve
      integer, external :: dbputdefvars
      integer, external :: dbputfl
      integer, external :: dbputgrplmap
      integer, external :: dbputmat
      integer, external :: dbputmmat
      integer, external :: dbputmmesh
      integer, external :: dbputmrgtree
      integer, external :: dbputmsp
      integer, external :: dbputmvar
      integer, external :: dbputpm
      integer, external :: dbputpv1
      integer, external :: dbputqm
      integer, external :: dbputqv
      integer, external :: dbputqv1
      integer, external :: dbputum
      integer, external :: dbputuv1
      integer, external :: dbputzl
      integer, external :: dbputzl2
      integer, external :: dbrdvar
      integer, external :: dbrdvarslice
      integer, external :: dbregfopts
      integer, external :: dbrmptr
      integer, external :: dbset2dstrlen
      integer, external :: dbsetcksums
      integer, external :: dbsetcompress
      integer, external :: dbsetcwr
      integer, external :: dbsetdepwarn
      integer, external :: dbsetdir
      integer, external :: dbsetemptyok
      integer, external :: dbsethdfnms
      integer, external :: dbsetovrwrt
      integer, external :: dbshowerrors
      integer, external :: dbunregafopts
      integer, external :: dbunregfopts
      integer, external :: dbwrite
      integer, external :: dbwriteslice
      integer, external :: dbwrtfl


!...Parameters.
      integer, parameter :: SILO_VERS_MAJ = 4
      integer, parameter :: SILO_VERS_MIN = 10
      integer, parameter :: SILO_VERS_PAT = 4
      integer, parameter :: SILO_VERS_PRE = 0
      integer, parameter :: DB_NETCDF = 0
      integer, parameter :: DB_PDB = 2
      integer, parameter :: DB_TAURUS = 3
      integer, parameter :: DB_UNKNOWN = 5
      integer, parameter :: DB_DEBUG = 6
      integer, parameter :: DB_HDF5X = 7
      integer, parameter :: DB_PDBP = 1
      integer, parameter :: DB_HDF5_SEC2_OBSOLETE = 256
      integer, parameter :: DB_HDF5_STDIO_OBSOLETE = 512
      integer, parameter :: DB_HDF5_CORE_OBSOLETE = 768
      integer, parameter :: DB_HDF5_MPIO_OBSOLETE = 1024
      integer, parameter :: DB_HDF5_MPIOP_OBSOLETE = 1280
      integer, parameter :: DB_H5VFD_DEFAULT = 0
      integer, parameter :: DB_H5VFD_SEC2 = 1
      integer, parameter :: DB_H5VFD_STDIO = 2
      integer, parameter :: DB_H5VFD_CORE = 3
      integer, parameter :: DB_H5VFD_LOG = 4
      integer, parameter :: DB_H5VFD_SPLIT = 5
      integer, parameter :: DB_H5VFD_DIRECT = 6
      integer, parameter :: DB_H5VFD_FAMILY = 7
      integer, parameter :: DB_H5VFD_MPIO = 8
      integer, parameter :: DB_H5VFD_MPIP = 9
      integer, parameter :: DB_H5VFD_SILO = 10
      integer, parameter :: DB_H5VFD_FIC = 11
      integer, parameter :: DB_FILE_OPTS_H5_DEFAULT_DEFAULT = 0
      integer, parameter :: DB_FILE_OPTS_H5_DEFAULT_SEC2 = 1
      integer, parameter :: DB_FILE_OPTS_H5_DEFAULT_STDIO = 2
      integer, parameter :: DB_FILE_OPTS_H5_DEFAULT_CORE = 3
      integer, parameter :: DB_FILE_OPTS_H5_DEFAULT_LOG = 4
      integer, parameter :: DB_FILE_OPTS_H5_DEFAULT_SPLIT = 5
      integer, parameter :: DB_FILE_OPTS_H5_DEFAULT_DIRECT = 6
      integer, parameter :: DB_FILE_OPTS_H5_DEFAULT_FAMILY = 7
      integer, parameter :: DB_FILE_OPTS_H5_DEFAULT_MPIO = 8
      integer, parameter :: DB_FILE_OPTS_H5_DEFAULT_MPIP = 9
      integer, parameter :: DB_FILE_OPTS_H5_DEFAULT_SILO = 10
      integer, parameter :: DB_FILE_OPTS_LAST = 10
      integer, parameter :: DB_HDF5 = 7
      integer, parameter :: DB_HDF5_SEC2 = 2055
      integer, parameter :: DB_HDF5_STDIO = 4103
      integer, parameter :: DB_HDF5_CORE = 6151
      integer, parameter :: DB_HDF5_LOG = 8199
      integer, parameter :: DB_HDF5_SPLIT = 10247
      integer, parameter :: DB_HDF5_DIRECT = 12295
      integer, parameter :: DB_HDF5_FAMILY = 14343
      integer, parameter :: DB_HDF5_MPIO = 16391
      integer, parameter :: DB_HDF5_MPIOP = 18439
      integer, parameter :: DB_HDF5_MPIP = 18439
      integer, parameter :: DB_HDF5_SILO = 20487
      integer, parameter :: DB_NFILES = 256
      integer, parameter :: DB_NFILTERS = 32
      integer, parameter :: DB_COLLINEAR = 130
      integer, parameter :: DB_NONCOLLINEAR = 131
      integer, parameter :: DB_QUAD_RECT = 130
      integer, parameter :: DB_QUAD_CURV = 131
      integer, parameter :: DB_INVALID_OBJECT = -1
      integer, parameter :: DB_QUADRECT = 130
      integer, parameter :: DB_QUADCURV = 131
      integer, parameter :: DB_QUADMESH = 500
      integer, parameter :: DB_QUADVAR = 501
      integer, parameter :: DB_UCDMESH = 510
      integer, parameter :: DB_UCDVAR = 511
      integer, parameter :: DB_MULTIMESH = 520
      integer, parameter :: DB_MULTIVAR = 521
      integer, parameter :: DB_MULTIMAT = 522
      integer, parameter :: DB_MULTIMATSPECIES = 523
      integer, parameter :: DB_MULTIBLOCKMESH = 520
      integer, parameter :: DB_MULTIBLOCKVAR = 521
      integer, parameter :: DB_MULTIMESHADJ = 524
      integer, parameter :: DB_MATERIAL = 530
      integer, parameter :: DB_MATSPECIES = 531
      integer, parameter :: DB_FACELIST = 550
      integer, parameter :: DB_ZONELIST = 551
      integer, parameter :: DB_EDGELIST = 552
      integer, parameter :: DB_PHZONELIST = 553
      integer, parameter :: DB_CSGZONELIST = 554
      integer, parameter :: DB_CSGMESH = 555
      integer, parameter :: DB_CSGVAR = 556
      integer, parameter :: DB_CURVE = 560
      integer, parameter :: DB_DEFVARS = 565
      integer, parameter :: DB_POINTMESH = 570
      integer, parameter :: DB_POINTVAR = 571
      integer, parameter :: DB_ARRAY = 580
      integer, parameter :: DB_DIR = 600
      integer, parameter :: DB_VARIABLE = 610
      integer, parameter :: DB_MRGTREE = 611
      integer, parameter :: DB_GROUPELMAP = 612
      integer, parameter :: DB_MRGVAR = 613
      integer, parameter :: DB_USERDEF = 700
      integer, parameter :: DB_INT = 16
      integer, parameter :: DB_SHORT = 17
      integer, parameter :: DB_LONG = 18
      integer, parameter :: DB_FLOAT = 19
      integer, parameter :: DB_DOUBLE = 20
      integer, parameter :: DB_CHAR = 21
      integer, parameter :: DB_LONG_LONG = 22
      integer, parameter :: DB_NOTYPE = 25
      integer, parameter :: DB_CLOBBER = 0
      integer, parameter :: DB_NOCLOBBER = 1
      integer, parameter :: DB_READ = 1
      integer, parameter :: DB_APPEND = 2
      integer, parameter :: DB_LOCAL = 0
      integer, parameter :: DB_SUN3 = 10
      integer, parameter :: DB_SUN4 = 11
      integer, parameter :: DB_SGI = 12
      integer, parameter :: DB_RS6000 = 13
      integer, parameter :: DB_CRAY = 14
      integer, parameter :: DB_INTEL = 15
      integer, parameter :: DBOPT_FIRST = 260
      integer, parameter :: DBOPT_ALIGN = 260
      integer, parameter :: DBOPT_COORDSYS = 262
      integer, parameter :: DBOPT_CYCLE = 263
      integer, parameter :: DBOPT_FACETYPE = 264
      integer, parameter :: DBOPT_HI_OFFSET = 265
      integer, parameter :: DBOPT_LO_OFFSET = 266
      integer, parameter :: DBOPT_LABEL = 267
      integer, parameter :: DBOPT_XLABEL = 268
      integer, parameter :: DBOPT_YLABEL = 269
      integer, parameter :: DBOPT_ZLABEL = 270
      integer, parameter :: DBOPT_MAJORORDER = 271
      integer, parameter :: DBOPT_NSPACE = 272
      integer, parameter :: DBOPT_ORIGIN = 273
      integer, parameter :: DBOPT_PLANAR = 274
      integer, parameter :: DBOPT_TIME = 275
      integer, parameter :: DBOPT_UNITS = 276
      integer, parameter :: DBOPT_XUNITS = 277
      integer, parameter :: DBOPT_YUNITS = 278
      integer, parameter :: DBOPT_ZUNITS = 279
      integer, parameter :: DBOPT_DTIME = 280
      integer, parameter :: DBOPT_USESPECMF = 281
      integer, parameter :: DBOPT_XVARNAME = 282
      integer, parameter :: DBOPT_YVARNAME = 283
      integer, parameter :: DBOPT_ZVARNAME = 284
      integer, parameter :: DBOPT_ASCII_LABEL = 285
      integer, parameter :: DBOPT_MATNOS = 286
      integer, parameter :: DBOPT_NMATNOS = 287
      integer, parameter :: DBOPT_MATNAME = 288
      integer, parameter :: DBOPT_NMAT = 289
      integer, parameter :: DBOPT_NMATSPEC = 290
      integer, parameter :: DBOPT_BASEINDEX = 291
      integer, parameter :: DBOPT_ZONENUM = 292
      integer, parameter :: DBOPT_NODENUM = 293
      integer, parameter :: DBOPT_BLOCKORIGIN = 294
      integer, parameter :: DBOPT_GROUPNUM = 295
      integer, parameter :: DBOPT_GROUPORIGIN = 296
      integer, parameter :: DBOPT_NGROUPS = 297
      integer, parameter :: DBOPT_MATNAMES = 298
      integer, parameter :: DBOPT_EXTENTS_SIZE = 299
      integer, parameter :: DBOPT_EXTENTS = 300
      integer, parameter :: DBOPT_MATCOUNTS = 301
      integer, parameter :: DBOPT_MATLISTS = 302
      integer, parameter :: DBOPT_MIXLENS = 303
      integer, parameter :: DBOPT_ZONECOUNTS = 304
      integer, parameter :: DBOPT_HAS_EXTERNAL_ZONES = 305
      integer, parameter :: DBOPT_PHZONELIST = 306
      integer, parameter :: DBOPT_MATCOLORS = 307
      integer, parameter :: DBOPT_BNDNAMES = 308
      integer, parameter :: DBOPT_REGNAMES = 309
      integer, parameter :: DBOPT_ZONENAMES = 310
      integer, parameter :: DBOPT_HIDE_FROM_GUI = 311
      integer, parameter :: DBOPT_TOPO_DIM = 312
      integer, parameter :: DBOPT_REFERENCE = 313
      integer, parameter :: DBOPT_GROUPINGS_SIZE = 314
      integer, parameter :: DBOPT_GROUPINGS = 315
      integer, parameter :: DBOPT_GROUPINGNAMES = 316
      integer, parameter :: DBOPT_ALLOWMAT0 = 317
      integer, parameter :: DBOPT_MRGTREE_NAME = 318
      integer, parameter :: DBOPT_REGION_PNAMES = 319
      integer, parameter :: DBOPT_TENSOR_RANK = 320
      integer, parameter :: DBOPT_MMESH_NAME = 321
      integer, parameter :: DBOPT_TV_CONNECTIVITY = 322
      integer, parameter :: DBOPT_DISJOINT_MODE = 323
      integer, parameter :: DBOPT_MRGV_ONAMES = 324
      integer, parameter :: DBOPT_MRGV_RNAMES = 325
      integer, parameter :: DBOPT_SPECNAMES = 326
      integer, parameter :: DBOPT_SPECCOLORS = 327
      integer, parameter :: DBOPT_LLONGNZNUM = 328
      integer, parameter :: DBOPT_CONSERVED = 329
      integer, parameter :: DBOPT_EXTENSIVE = 330
      integer, parameter :: DBOPT_MB_FILE_NS = 331
      integer, parameter :: DBOPT_MB_BLOCK_NS = 332
      integer, parameter :: DBOPT_MB_BLOCK_TYPE = 333
      integer, parameter :: DBOPT_MB_EMPTY_LIST = 334
      integer, parameter :: DBOPT_MB_EMPTY_COUNT = 335
      integer, parameter :: DBOPT_MB_REPR_BLOCK_IDX = 336
      integer, parameter :: DBOPT_MISSING_VALUE = 337
      integer, parameter :: DBOPT_ALT_ZONENUM_VARS = 338
      integer, parameter :: DBOPT_ALT_NODENUM_VARS = 339
      integer, parameter :: DBOPT_GHOST_NODE_LABELS = 340
      integer, parameter :: DBOPT_GHOST_ZONE_LABELS = 341
      integer, parameter :: DBOPT_LAST = 499
      integer, parameter :: DBOPT_H5_FIRST = 500
      integer, parameter :: DBOPT_H5_VFD = 500
      integer, parameter :: DBOPT_H5_RAW_FILE_OPTS = 501
      integer, parameter :: DBOPT_H5_RAW_EXTENSION = 502
      integer, parameter :: DBOPT_H5_META_FILE_OPTS = 503
      integer, parameter :: DBOPT_H5_META_EXTENSION = 504
      integer, parameter :: DBOPT_H5_CORE_ALLOC_INC = 505
      integer, parameter :: DBOPT_H5_CORE_NO_BACK_STORE = 506
      integer, parameter :: DBOPT_H5_META_BLOCK_SIZE = 507
      integer, parameter :: DBOPT_H5_SMALL_RAW_SIZE = 508
      integer, parameter :: DBOPT_H5_ALIGN_MIN = 509
      integer, parameter :: DBOPT_H5_ALIGN_VAL = 510
      integer, parameter :: DBOPT_H5_DIRECT_MEM_ALIGN = 511
      integer, parameter :: DBOPT_H5_DIRECT_BLOCK_SIZE = 512
      integer, parameter :: DBOPT_H5_DIRECT_BUF_SIZE = 513
      integer, parameter :: DBOPT_H5_LOG_NAME = 514
      integer, parameter :: DBOPT_H5_LOG_BUF_SIZE = 515
      integer, parameter :: DBOPT_H5_MPIO_COMM = 516
      integer, parameter :: DBOPT_H5_MPIO_INFO = 517
      integer, parameter :: DBOPT_H5_MPIP_NO_GPFS_HINTS = 518
      integer, parameter :: DBOPT_H5_SIEVE_BUF_SIZE = 519
      integer, parameter :: DBOPT_H5_CACHE_NELMTS = 520
      integer, parameter :: DBOPT_H5_CACHE_NBYTES = 521
      integer, parameter :: DBOPT_H5_CACHE_POLICY = 522
      integer, parameter :: DBOPT_H5_FAM_SIZE = 523
      integer, parameter :: DBOPT_H5_FAM_FILE_OPTS = 524
      integer, parameter :: DBOPT_H5_USER_DRIVER_ID = 525
      integer, parameter :: DBOPT_H5_USER_DRIVER_INFO = 526
      integer, parameter :: DBOPT_H5_SILO_BLOCK_SIZE = 527
      integer, parameter :: DBOPT_H5_SILO_BLOCK_COUNT = 528
      integer, parameter :: DBOPT_H5_SILO_LOG_STATS = 529
      integer, parameter :: DBOPT_H5_SILO_USE_DIRECT = 530
      integer, parameter :: DBOPT_H5_FIC_SIZE = 531
      integer, parameter :: DBOPT_H5_FIC_BUF = 532
      integer, parameter :: DBOPT_H5_CORE_CREAT_BUFINFO = 533
      integer, parameter :: DBOPT_H5_CORE_OPEN_BUFINFO = 534
      integer, parameter :: DBOPT_H5_CORE_CLOSE_BUFINFO = 535
      integer, parameter :: DBOPT_H5_FCPL_HID_T = 536
      integer, parameter :: DBOPT_H5_FAPL_HID_T = 537
      integer, parameter :: DBOPT_H5_LAST = 599
      integer, parameter :: DB_TOP = 0
      integer, parameter :: DB_NONE = 1
      integer, parameter :: DB_ALL = 2
      integer, parameter :: DB_ABORT = 3
      integer, parameter :: DB_SUSPEND = 4
      integer, parameter :: DB_RESUME = 5
      integer, parameter :: DB_ALL_AND_DRVR = 6
      integer, parameter :: DB_ROWMAJOR = 0
      integer, parameter :: DB_COLMAJOR = 1
      integer, parameter :: DB_NOTCENT = 0
      integer, parameter :: DB_NODECENT = 110
      integer, parameter :: DB_ZONECENT = 111
      integer, parameter :: DB_FACECENT = 112
      integer, parameter :: DB_BNDCENT = 113
      integer, parameter :: DB_EDGECENT = 114
      integer, parameter :: DB_BLOCKCENT = 115
      integer, parameter :: DB_CARTESIAN = 120
      integer, parameter :: DB_CYLINDRICAL = 121
      integer, parameter :: DB_SPHERICAL = 122
      integer, parameter :: DB_NUMERICAL = 123
      integer, parameter :: DB_OTHER = 124
      integer, parameter :: DB_RECTILINEAR = 100
      integer, parameter :: DB_CURVILINEAR = 101
      integer, parameter :: DB_AREA = 140
      integer, parameter :: DB_VOLUME = 141
      integer, parameter :: DB_ON = 1000
      integer, parameter :: DB_OFF = -1000
      integer, parameter :: DB_ABUTTING = 142
      integer, parameter :: DB_FLOATING = 143
      integer, parameter :: DB_VARTYPE_SCALAR = 200
      integer, parameter :: DB_VARTYPE_VECTOR = 201
      integer, parameter :: DB_VARTYPE_TENSOR = 202
      integer, parameter :: DB_VARTYPE_SYMTENSOR = 203
      integer, parameter :: DB_VARTYPE_ARRAY = 204
      integer, parameter :: DB_VARTYPE_MATERIAL = 205
      integer, parameter :: DB_VARTYPE_SPECIES = 206
      integer, parameter :: DB_VARTYPE_LABEL = 207
      integer, parameter :: DB_GHOSTTYPE_NOGHOST = 0
      integer, parameter :: DB_GHOSTTYPE_INTDUP = 1
      integer, parameter :: DB_MAX_COMPATABILITY = 0
      integer, parameter :: DB_MAX_PERFORMANCE = 1
      integer, parameter :: DBCSG_QUADRIC_G = 16777216
      integer, parameter :: DBCSG_SPHERE_PR = 33619968
      integer, parameter :: DBCSG_ELLIPSOID_PRRR = 33685504
      integer, parameter :: DBCSG_PLANE_G = 50331648
      integer, parameter :: DBCSG_PLANE_X = 50397184
      integer, parameter :: DBCSG_PLANE_Y = 50462720
      integer, parameter :: DBCSG_PLANE_Z = 50528256
      integer, parameter :: DBCSG_PLANE_PN = 50593792
      integer, parameter :: DBCSG_PLANE_PPP = 50659328
      integer, parameter :: DBCSG_CYLINDER_PNLR = 67108864
      integer, parameter :: DBCSG_CYLINDER_PPR = 67174400
      integer, parameter :: DBCSG_BOX_XYZXYZ = 83886080
      integer, parameter :: DBCSG_CONE_PNLA = 100663296
      integer, parameter :: DBCSG_CONE_PPA = 100728832
      integer, parameter :: DBCSG_POLYHEDRON_KF = 117440512
      integer, parameter :: DBCSG_HEX_6F = 117506048
      integer, parameter :: DBCSG_TET_4F = 117571584
      integer, parameter :: DBCSG_PYRAMID_5F = 117637120
      integer, parameter :: DBCSG_PRISM_5F = 117702656
      integer, parameter :: DBCSG_QUADRATIC_G = 134217728
      integer, parameter :: DBCSG_CIRCLE_PR = 150994944
      integer, parameter :: DBCSG_ELLIPSE_PRR = 151060480
      integer, parameter :: DBCSG_LINE_G = 167772160
      integer, parameter :: DBCSG_LINE_X = 167837696
      integer, parameter :: DBCSG_LINE_Y = 167903232
      integer, parameter :: DBCSG_LINE_PN = 167968768
      integer, parameter :: DBCSG_LINE_PP = 168034304
      integer, parameter :: DBCSG_BOX_XYXY = 184549376
      integer, parameter :: DBCSG_ANGLE_PNLA = 201326592
      integer, parameter :: DBCSG_ANGLE_PPA = 201392128
      integer, parameter :: DBCSG_POLYGON_KP = 218103808
      integer, parameter :: DBCSG_TRI_3P = 218169344
      integer, parameter :: DBCSG_QUAD_4P = 218234880
      integer, parameter :: DBCSG_INNER = 2130706432
      integer, parameter :: DBCSG_OUTER = 2130771968
      integer, parameter :: DBCSG_ON = 2130837504
      integer, parameter :: DBCSG_UNION = 2130903040
      integer, parameter :: DBCSG_INTERSECT = 2130968576
      integer, parameter :: DBCSG_DIFF = 2131034112
      integer, parameter :: DBCSG_COMPLIMENT = 2131099648
      integer, parameter :: DBCSG_XFORM = 2131165184
      integer, parameter :: DBCSG_SWEEP = 2131230720
      integer, parameter :: DB_PREORDER = 1
      integer, parameter :: DB_POSTORDER = 2
      integer, parameter :: DB_FROMCWR = 4
      integer, parameter :: DB_F77NULL = (-99)
      integer, parameter :: DB_PARTIO_POINTS = 1
      integer, parameter :: DB_PARTIO_HSLABS = 2
      real (kind=8), parameter :: DB_MISSING_VALUE_NOT_SET = 1.0D+308
      integer, parameter :: DB_ZONETYPE_BEAM = 10
      integer, parameter :: DB_ZONETYPE_POLYGON = 20
      integer, parameter :: DB_ZONETYPE_TRIANGLE = 23
      integer, parameter :: DB_ZONETYPE_QUAD = 24
      integer, parameter :: DB_ZONETYPE_POLYHEDRON = 30
      integer, parameter :: DB_ZONETYPE_TET = 34
      integer, parameter :: DB_ZONETYPE_PYRAMID = 35
      integer, parameter :: DB_ZONETYPE_PRISM = 36
      integer, parameter :: DB_ZONETYPE_HEX = 38
      integer, parameter :: DB_MAX_H5_OBJ_VALS = 64
      character (len=10), parameter :: DB_F77NULLSTRING = "NULLSTRING"


! End.
