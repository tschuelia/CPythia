#include "prediction.h"
double predict_margin_unit9(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5031527682228830178) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12101.76805091953611) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.17778753292362026) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.313112745098040435) ) ) {
                  sum += (double)-0.004826654795476352858;
                } else {
                  sum += (double)0.004181622020017310148;
                }
              } else {
                sum += (double)-0.007924537434262014096;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04920000000000000762) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4061.155400297998767) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                    sum += (double)0.001223648815802559544;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.482074000000000058) ) ) {
                      sum += (double)-0.001209072034481347736;
                    } else {
                      sum += (double)-0.008645255713489435195;
                    }
                  }
                } else {
                  sum += (double)0.00556953155308065849;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.3190058479532194) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2841076982928243955) ) ) {
                    sum += (double)0.0009443666029021209997;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2190499999999999947) ) ) {
                      sum += (double)0.00608671472203582524;
                    } else {
                      sum += (double)0.0001724596005897329723;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3065784092638312863) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4626188573480190525) ) ) {
                      sum += (double)0.01569283257974741358;
                    } else {
                      sum += (double)0.00729108316280398152;
                    }
                  } else {
                    sum += (double)0.001134300852758621508;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2508523744426000568) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7484500000000001707) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.196750000000000036) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6391.930040077767444) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.57793522267206576) ) ) {
                      sum += (double)0.0009016904819563937613;
                    } else {
                      sum += (double)0.01373990522264952746;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.10905271199389688) ) ) {
                      sum += (double)0.002755222890981178906;
                    } else {
                      sum += (double)-0.002839573377552257871;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
                    sum += (double)0.001076585528277236104;
                  } else {
                    sum += (double)-0.009008844730585482963;
                  }
                }
              } else {
                sum += (double)6.680492838249160303e-05;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
                sum += (double)-0.002946586145694738996;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.39689043154655579) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.469444444444445) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3249.949450539746977) ) ) {
                      sum += (double)-0.001496949486389517444;
                    } else {
                      sum += (double)0.0007222343155322370409;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1155500000000000277) ) ) {
                      sum += (double)0.0006795791685776055762;
                    } else {
                      sum += (double)0.004170308869847033119;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7236.996653052084184) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.71370023419203754) ) ) {
                      sum += (double)0.001495396959314776236;
                    } else {
                      sum += (double)-0.001207882387328278575;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2689713774233481458) ) ) {
                      sum += (double)-0.004601191427052848081;
                    } else {
                      sum += (double)-0.001103867109790082103;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5120878152759216206) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0953500000000000042) ) ) {
              sum += (double)-0.007954636528172276053;
            } else {
              sum += (double)-0.002392690973935666758;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2553249611856754364) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5189379155588735859) ) ) {
                sum += (double)0.004484463037496048965;
              } else {
                sum += (double)9.018125483484164696e-05;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5599500000000001698) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1395500000000000351) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5340269922761711197) ) ) {
                    sum += (double)-0.006115335773361623393;
                  } else {
                    sum += (double)-0.001678231850055495909;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.32109164420485392) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.401298701298702376) ) ) {
                      sum += (double)-0.0009743770330567301085;
                    } else {
                      sum += (double)0.003359383325626154153;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6111605972688834987) ) ) {
                      sum += (double)0.0007635446706663004965;
                    } else {
                      sum += (double)-0.008327020232612326184;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3970620000000000815) ) ) {
                  sum += (double)-0.003492685345422553555;
                } else {
                  sum += (double)-0.01151937067576808138;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4987890206545879113) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.86758263639984179) ) ) {
            sum += (double)0.0008560910652300069562;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4843500000000000583) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4191117286610134829) ) ) {
                sum += (double)0.01860112712990498116;
              } else {
                sum += (double)0.001895231418670253239;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.62645348837209447) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2106500000000000317) ) ) {
                  sum += (double)-0.0003658849183994096043;
                } else {
                  sum += (double)0.01009962414380033077;
                }
              } else {
                sum += (double)-0.004407826148729900896;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3739500000000000601) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.901809780515980819) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
                sum += (double)0.0002066215949106376109;
              } else {
                sum += (double)-0.005589293407203085873;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4612010000000000276) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6391.930040077767444) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3152500000000000857) ) ) {
                    sum += (double)-0.005399251131814080361;
                  } else {
                    sum += (double)0.002052504358101188593;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4045.520025272053772) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3436155000000000181) ) ) {
                      sum += (double)0.01056853309864550297;
                    } else {
                      sum += (double)0.001845115475459933397;
                    }
                  } else {
                    sum += (double)-0.000442613398705391306;
                  }
                }
              } else {
                sum += (double)0.005269541384182747229;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8623277660543351431) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6549412391405855516) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6435984235989665736) ) ) {
                  sum += (double)-0.0003068191569378271588;
                } else {
                  sum += (double)0.006464223148288162843;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4320780000000000176) ) ) {
                  sum += (double)-0.001165222010407211163;
                } else {
                  sum += (double)-0.007924045398537114121;
                }
              }
            } else {
              sum += (double)-0.007206995550765737599;
            }
          }
        }
      }
    } else {
      sum += (double)-0.001342419865178864176;
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.08825438027255572) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2270140000000000213) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1592430000000000234) ) ) {
          sum += (double)-0.001590481544032073223;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7143.768529324467636) ) ) {
            sum += (double)0.005265384291247060013;
          } else {
            sum += (double)-0.001663559986295813035;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.87146226415094574) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5677500000000000879) ) ) {
            sum += (double)-0.003585064895853528298;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1946668479876043911) ) ) {
              sum += (double)-0.001001263248215416386;
            } else {
              sum += (double)0.006777528034190290901;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4881500000000000838) ) ) {
            sum += (double)-0.005014342125703430929;
          } else {
            sum += (double)0.001971005828724339218;
          }
        }
      }
    } else {
      sum += (double)-0.0001861948958474718744;
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3268798599916286629) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4995331520331520725) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12101.76805091953611) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.17778753292362026) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.313112745098040435) ) ) {
                  sum += (double)-0.004433487115363087851;
                } else {
                  sum += (double)0.004637283384899448108;
                }
              } else {
                sum += (double)-0.007279023621820366816;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04920000000000000762) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3010418023613812832) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.17170228445099589) ) ) {
                    sum += (double)0.002365725196973512967;
                  } else {
                    sum += (double)-0.001583438530551461;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5062870000000001536) ) ) {
                    sum += (double)4.620577605904336503e-05;
                  } else {
                    sum += (double)-0.008048314558419126033;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.3190058479532194) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2841076982928243955) ) ) {
                    sum += (double)0.001164606253672699487;
                  } else {
                    sum += (double)0.005232757852651622257;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1937.925932230502212) ) ) {
                    sum += (double)0.002976259195189204839;
                  } else {
                    sum += (double)0.01220538969471536561;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6319000000000001283) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5973.486975242797598) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3112500000000000822) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.002049180327871269) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.895945945945947564) ) ) {
                      sum += (double)-0.001751165335371628745;
                    } else {
                      sum += (double)0.007085961573544609371;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.63725490196079093) ) ) {
                      sum += (double)-0.01216626246377625412;
                    } else {
                      sum += (double)-0.003306500182137757978;
                    }
                  }
                } else {
                  sum += (double)0.002334063598225025443;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.407843474118376681) ) ) {
                  sum += (double)0.007842437804642117538;
                } else {
                  sum += (double)-0.001171459660308095873;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276496810577003649) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2508523744426000568) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7484500000000001707) ) ) {
                    sum += (double)0.002121940413599683693;
                  } else {
                    sum += (double)6.231253191763337542e-05;
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)16180.09325483776956) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.00714285714286333) ) ) {
                      sum += (double)-3.192429192523688091e-05;
                    } else {
                      sum += (double)-0.001516091710921669633;
                    }
                  } else {
                    sum += (double)0.00644120988888908369;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.43665158371041102) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1879.768845692260356) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6945.123393532623595) ) ) {
                      sum += (double)0.0004329163833965933767;
                    } else {
                      sum += (double)0.005712021768035783695;
                    }
                  } else {
                    sum += (double)-0.0008956113109592677085;
                  }
                } else {
                  sum += (double)-0.0001916231490831123423;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2534372918956249165) ) ) {
            sum += (double)6.029723601892603076e-05;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5340269922761711197) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4566350000000000686) ) ) {
                  sum += (double)-0.01287458952832346709;
                } else {
                  sum += (double)-0.001567314493476059485;
                }
              } else {
                sum += (double)-0.002776391137352421552;
              }
            } else {
              sum += (double)-0.001613679802542013122;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.569111884291402359) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4843500000000000583) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.401298701298702376) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.49507021931512174) ) ) {
                sum += (double)0.001131543452089747411;
              } else {
                sum += (double)-0.005819357048732794538;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6526430887472424169) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3420950000000000935) ) ) {
                  sum += (double)0.004723931311587274001;
                } else {
                  sum += (double)0.01078275514875571064;
                }
              } else {
                sum += (double)0.0004207029991358549547;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5775730000000001141) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7291161822165118656) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06705000000000001237) ) ) {
                  sum += (double)-0.0005337378103469995203;
                } else {
                  sum += (double)0.002080339432853853081;
                }
              } else {
                sum += (double)-0.004772909494832826283;
              }
            } else {
              sum += (double)-0.00343708889114805469;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)118.0299834287672098) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8623277660543351431) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6871843434343435364) ) ) {
                  sum += (double)0.004124670334974168615;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)20.45461734320752001) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-271.4489652655623217) ) ) {
                      sum += (double)-0.001008820318883029256;
                    } else {
                      sum += (double)-0.004452824824777714199;
                    }
                  } else {
                    sum += (double)0.002405594426233860755;
                  }
                }
              } else {
                sum += (double)0.001515201635162564996;
              }
            } else {
              sum += (double)0.004568939429517700213;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1238500000000000295) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.240913000000000016) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5141168753850328121) ) ) {
                  sum += (double)0.007586358912925979248;
                } else {
                  sum += (double)-0.001473345338877200426;
                }
              } else {
                sum += (double)-0.002285121979316111045;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8769200928108228377) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2178.807099952505723) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)642.537947836085209) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5666130000000001443) ) ) {
                      sum += (double)-0.00232572138191813188;
                    } else {
                      sum += (double)0.003777740241153842906;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.11189358372457292) ) ) {
                      sum += (double)0.001727821064638884784;
                    } else {
                      sum += (double)-0.0015884949194528901;
                    }
                  }
                } else {
                  sum += (double)0.004249854699152524028;
                }
              } else {
                sum += (double)-0.003232735984544519731;
              }
            }
          }
        }
      }
    } else {
      sum += (double)-0.001233069561239699512;
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.08825438027255572) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2270140000000000213) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1592430000000000234) ) ) {
          sum += (double)-0.001460924760799273353;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7143.768529324467636) ) ) {
            sum += (double)0.004836478738182992988;
          } else {
            sum += (double)-0.001528050342018413572;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.87146226415094574) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5677500000000000879) ) ) {
            sum += (double)-0.003293034141567249048;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1946668479876043911) ) ) {
              sum += (double)-0.0009197027052153639677;
            } else {
              sum += (double)0.006225446882191597482;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4881500000000000838) ) ) {
            sum += (double)-0.004605885808522285248;
          } else {
            sum += (double)0.001810452388631380921;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.61204013377927069) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2807000000000000051) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2106500000000000317) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1412000000000000199) ) ) {
              sum += (double)-0.00171775428760966996;
            } else {
              sum += (double)0.007847974692381258846;
            }
          } else {
            sum += (double)-0.00553654473007124566;
          }
        } else {
          sum += (double)0.007322050853678559353;
        }
      } else {
        sum += (double)-0.0002371237655172573038;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9074435000000001805) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9934500000000000552) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.03931893328124715786) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05500000000000000722) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)59725.4629650157658) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2648210000000000286) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)329.6666666666666856) ) ) {
                sum += (double)-0.004965321706734232739;
              } else {
                sum += (double)-0.001435476890537784557;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3658645000000000369) ) ) {
                sum += (double)0.004660619880133541962;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5536370000000000458) ) ) {
                  sum += (double)-0.002703917712340201708;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.75486037469071476) ) ) {
                    sum += (double)-0.0007996554515906553057;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8140.442679804484214) ) ) {
                      sum += (double)0.005007333538233064117;
                    } else {
                      sum += (double)0.001647207760858995524;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2270140000000000213) ) ) {
              sum += (double)-9.869318228082427644e-05;
            } else {
              sum += (double)0.006055401650616668366;
            }
          }
        } else {
          sum += (double)0.00486799934146720046;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9679500000000001991) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01395000000000000059) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.198484848484848708) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1642951312239392114) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-864.8017076591004297) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009850000000000001116) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.535781628804885113) ) ) {
                      sum += (double)0.0005112030067412894974;
                    } else {
                      sum += (double)0.003599313503435756009;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1559.276745549883799) ) ) {
                      sum += (double)0.001832520998022460924;
                    } else {
                      sum += (double)0.005914515514068604055;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04908122139453940935) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8079557428872498059) ) ) {
                      sum += (double)-0.0006886553711379257703;
                    } else {
                      sum += (double)-0.005076506856356593003;
                    }
                  } else {
                    sum += (double)0.001229919927821378645;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7881440123671350495) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6967396201528700539) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5399840518659736466) ) ) {
                      sum += (double)-0.0007462100421964834758;
                    } else {
                      sum += (double)0.00324806105180878036;
                    }
                  } else {
                    sum += (double)-0.008721710512665689988;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-65.80519855055165124) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.512751786874594107) ) ) {
                      sum += (double)0.006761574055607339276;
                    } else {
                      sum += (double)0.0002198397256680385109;
                    }
                  } else {
                    sum += (double)-0.0009653874326122084855;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-717.0164406190135651) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06524444126709380565) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.09707842318205106569) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2539.379249415995218) ) ) {
                      sum += (double)-0.0003619599811606494938;
                    } else {
                      sum += (double)-0.004988323089025771366;
                    }
                  } else {
                    sum += (double)-0.00766398196316162017;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2025.244583427236194) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.243379790940767116) ) ) {
                      sum += (double)0.001193802149602713782;
                    } else {
                      sum += (double)-0.0003775509227939796188;
                    }
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3064.437254561459213) ) ) {
                      sum += (double)-0.001942580007412604559;
                    } else {
                      sum += (double)0.002801226558138834172;
                    }
                  }
                }
              } else {
                sum += (double)-0.00586847406867839743;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03705000000000000654) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2166315049226441858) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7821500000000000119) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174478000000000022) ) ) {
                    sum += (double)-0.0002602564949510875443;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1052900224917293903) ) ) {
                      sum += (double)0.0006221293532543655577;
                    } else {
                      sum += (double)0.01085217571179157049;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.154452422829296665) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2361985000000000334) ) ) {
                      sum += (double)-0.0007474594494316830727;
                    } else {
                      sum += (double)0.002279904819711474611;
                    }
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)10171.3697502395753) ) ) {
                      sum += (double)-0.001604949114371570637;
                    } else {
                      sum += (double)0.005533210508907691373;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7328500000000001124) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2721073006283602491) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1664534368267386599) ) ) {
                      sum += (double)0.006903755072501977647;
                    } else {
                      sum += (double)-0.00125736341705390514;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.23959827833572689) ) ) {
                      sum += (double)0.0006090875685220891247;
                    } else {
                      sum += (double)-0.0009377427816206457918;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2772.548050562498702) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7803500000000002101) ) ) {
                      sum += (double)0.002195024729691625546;
                    } else {
                      sum += (double)-0.002159284338284846345;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4203560000000000629) ) ) {
                      sum += (double)-0.008114946951546105416;
                    } else {
                      sum += (double)-0.003081155704338193156;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9305500000000000993) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04145000000000000767) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2081000000000000349) ) ) {
                    sum += (double)-0.006445025156345049813;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.437797619047619602) ) ) {
                      sum += (double)0.001734526057821487522;
                    } else {
                      sum += (double)-0.00181617923719928822;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.71269841269841372) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.920300000000000118) ) ) {
                      sum += (double)0.0001645653782524750849;
                    } else {
                      sum += (double)0.003766040757257171044;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
                      sum += (double)0.002258418051901591849;
                    } else {
                      sum += (double)-0.0003052202756080407112;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5882.835930520358488) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.80359334895659007) ) ) {
                    sum += (double)-0.001779983705171513586;
                  } else {
                    sum += (double)-0.01044563374175660163;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
                    sum += (double)0.002760858807301618065;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1066415978387809521) ) ) {
                      sum += (double)-0.002044874330191454818;
                    } else {
                      sum += (double)0.001290473689586108148;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.65524034672972675) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3532.451953216338097) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-907.5257922099390271) ) ) {
                sum += (double)-0.005555215643022624362;
              } else {
                sum += (double)-0.0001132420006895498688;
              }
            } else {
              sum += (double)0.001318416906217592059;
            }
          } else {
            sum += (double)-0.006624260474266664006;
          }
        }
      }
    } else {
      sum += (double)-0.003396326955209156857;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.155357142857144304) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.08580896800492683607) ) ) {
        sum += (double)0.005562198558306459192;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006450000000000001739) ) ) {
          sum += (double)-0.0005988125983298747939;
        } else {
          sum += (double)0.002420158120327579442;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03485000000000000597) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.02622543668122271146) ) ) {
          sum += (double)0.001492820444460230076;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1018.758829443079094) ) ) {
            sum += (double)-0.004202313521102309796;
          } else {
            sum += (double)-0.001074873934310589677;
          }
        }
      } else {
        sum += (double)0.003572411592874811474;
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1727500000000000424) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-262709.374830352026) ) ) {
            sum += (double)0.006142377468616600465;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)148.927747252747281) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)20.45461734320752001) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8969687899648990381) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-156.7600528121663501) ) ) {
                    sum += (double)-0.001519008203642861331;
                  } else {
                    sum += (double)0.003012796615150354143;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-156.7600528121663501) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.883349826818407013) ) ) {
                      sum += (double)0.003129139884490404928;
                    } else {
                      sum += (double)-0.001415896109213561193;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7444509567657248139) ) ) {
                      sum += (double)-0.00992898404163052202;
                    } else {
                      sum += (double)-0.002689419669596400213;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.996815286624204155) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8491407799074687235) ) ) {
                    sum += (double)0.006939608575457007454;
                  } else {
                    sum += (double)0.001287040539507166735;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.225650000000000045) ) ) {
                      sum += (double)-0.003298213333582437207;
                    } else {
                      sum += (double)0.002617523292095329333;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6670401960206224778) ) ) {
                      sum += (double)0.004174421571017021201;
                    } else {
                      sum += (double)0.0001154050426257691766;
                    }
                  }
                }
              }
            } else {
              sum += (double)-0.005429524750078251055;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.835491146007350638) ) ) {
              sum += (double)-0.002504156532018001272;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5995.730546760533798) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1339500000000000413) ) ) {
                  sum += (double)0.005785405986656297871;
                } else {
                  sum += (double)-0.0004543500806112589453;
                }
              } else {
                sum += (double)0.006748850872569632682;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9631328576282706111) ) ) {
              sum += (double)-0.001015983388655907187;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1940000000000000335) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04395000000000000989) ) ) {
                    sum += (double)0.001037113956747528955;
                  } else {
                    sum += (double)0.008269968330610728835;
                  }
                } else {
                  sum += (double)-0.003061939070970323001;
                }
              } else {
                sum += (double)0.006720316905156382623;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8781420789956296824) ) ) {
          sum += (double)0.004464850531786844837;
        } else {
          sum += (double)-0.0005403453295116288297;
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7444253094382086156) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)118.0299834287672098) ) ) {
          sum += (double)-0.006932433695141941403;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5031527682228830178) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10745.58170698661525) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4120.477146499230912) ) ) {
                      sum += (double)-0.004769850712813108844;
                    } else {
                      sum += (double)-0.0003031869024963475593;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04920000000000000762) ) ) {
                      sum += (double)-2.612609402861251618e-05;
                    } else {
                      sum += (double)0.002895535222493844825;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3755158646863254179) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3634578871420977575) ) ) {
                      sum += (double)-2.440348309714365191e-05;
                    } else {
                      sum += (double)0.00243525632509063129;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3554500000000000437) ) ) {
                      sum += (double)-0.001099003373818590755;
                    } else {
                      sum += (double)0.001267402409521872515;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2534372918956249165) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04395000000000000989) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.095641646489105447) ) ) {
                      sum += (double)0.0009766244837420268426;
                    } else {
                      sum += (double)-0.005630552082128460756;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2333.321561901081623) ) ) {
                      sum += (double)0.00073613071216131927;
                    } else {
                      sum += (double)-0.003565563598114262871;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5189379155588735859) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
                      sum += (double)-0.009090744830971206336;
                    } else {
                      sum += (double)-0.002570529510297382692;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3289.059317362541606) ) ) {
                      sum += (double)-0.00170874708434591246;
                    } else {
                      sum += (double)0.0009049686034330763204;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.15097402597402976) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-35445.64132608562795) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.14962251201098553) ) ) {
                    sum += (double)0.000594931202147266306;
                  } else {
                    sum += (double)0.008928065635665576386;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.442099999999999993) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5642304926403781673) ) ) {
                      sum += (double)0.004757113552393295482;
                    } else {
                      sum += (double)0.001068348344273469105;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6282926336678872348) ) ) {
                      sum += (double)0.000617545652356453088;
                    } else {
                      sum += (double)-0.002589995000403117094;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6682000000000001272) ) ) {
                  sum += (double)-0.000798555834904103156;
                } else {
                  sum += (double)0.004690516785006155175;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.06168384879725863) ) ) {
              sum += (double)-0.006186913667766337499;
            } else {
              sum += (double)-0.0009526390838125470967;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6909735000000001293) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7607063765522581456) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.77028985507246617) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.872261072261072634) ) ) {
                sum += (double)-0.002594534570901133562;
              } else {
                sum += (double)-0.008174371202715564541;
              }
            } else {
              sum += (double)-0.001233406348502366981;
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)572.059826422058336) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1488.538162805079082) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)118.0299834287672098) ) ) {
                  sum += (double)-0.005489299415157993488;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6795141123970477315) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.940712851405623773) ) ) {
                      sum += (double)-0.001015106732119084101;
                    } else {
                      sum += (double)-0.005818285188892807075;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7881440123671350495) ) ) {
                      sum += (double)0.004009122301433600682;
                    } else {
                      sum += (double)-0.001010972516751394885;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05935000000000000692) ) ) {
                  sum += (double)-0.00339664363409182676;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8623277660543351431) ) ) {
                    sum += (double)0.006944908001770806229;
                  } else {
                    sum += (double)-0.001735180631459585805;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)715.4826587170257426) ) ) {
                sum += (double)0.004152689444201946266;
              } else {
                sum += (double)-0.0007309059506843947149;
              }
            }
          }
        } else {
          sum += (double)0.003724566009681004597;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.8050000000000001599) ) ) {
      sum += (double)0.002735691563055627461;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.11363240676324482) ) ) {
        sum += (double)-0.002478555475535721385;
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2793.363867362420478) ) ) {
          sum += (double)0.002647253575074731777;
        } else {
          sum += (double)-0.001520384810528700205;
        }
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)142.2522321428571672) ) ) {
    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)10362.98456196805637) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.17654109589042122) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-45582.08751746388589) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3057365000000000221) ) ) {
            sum += (double)0.006499919349832353893;
          } else {
            sum += (double)0.0009662433382200164315;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6836000000000000965) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1446500000000000286) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2508523744426000568) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7607500000000001483) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2553249611856754364) ) ) {
                      sum += (double)0.002321059132280018852;
                    } else {
                      sum += (double)-0.003361384843411836711;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08395000000000001072) ) ) {
                      sum += (double)7.456732922176438551e-05;
                    } else {
                      sum += (double)0.002143146457859855351;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7124500000000001387) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.310715078210065665) ) ) {
                      sum += (double)0.001587846809577256107;
                    } else {
                      sum += (double)-0.0002580395667021888112;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
                      sum += (double)-0.0002906220495282406499;
                    } else {
                      sum += (double)-0.002810464961321122897;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3192380828539810866) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1279338682318470199) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.002049180327871269) ) ) {
                      sum += (double)-0.0001503289026942652854;
                    } else {
                      sum += (double)0.008246390974366439239;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4951140000000000541) ) ) {
                      sum += (double)-0.004735260545406395211;
                    } else {
                      sum += (double)0.001032242568198651162;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5988367574978012975) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.473050000000000026) ) ) {
                      sum += (double)0.006395544055814913857;
                    } else {
                      sum += (double)0.0008181668127407055189;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.56214887640449618) ) ) {
                      sum += (double)0.0003382945359484614434;
                    } else {
                      sum += (double)-0.001222923728391408062;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4978420000000000623) ) ) {
                sum += (double)-0.006337085815571973785;
              } else {
                sum += (double)0.0005338190185308156008;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5935000000000001386) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1607000000000000095) ) ) {
                sum += (double)-0.0009003596849977328967;
              } else {
                sum += (double)-0.006347655213884394361;
              }
            } else {
              sum += (double)0.002726415558593816429;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0290500000000000029) ) ) {
          sum += (double)0.005917841571649241905;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1450000000000000455) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3112500000000000822) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8360500000000000709) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2082316587659429064) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8006.423874351355153) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.872261072261072634) ) ) {
                      sum += (double)0.006447557701673239938;
                    } else {
                      sum += (double)0.0001396356694942055851;
                    }
                  } else {
                    sum += (double)0.008029322146662505252;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4901430000000000509) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4505095000000000627) ) ) {
                      sum += (double)-0.0006645533564138807409;
                    } else {
                      sum += (double)0.006666961340937240139;
                    }
                  } else {
                    sum += (double)-0.004006962424648757327;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8457500000000001128) ) ) {
                  sum += (double)-0.006809643668299672319;
                } else {
                  sum += (double)-0.001341657674394984741;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.35781818181818537) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7866.211076535222674) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4881500000000000838) ) ) {
                    sum += (double)-0.01076308133494017355;
                  } else {
                    sum += (double)-0.003385094389750243748;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.20714285714286262) ) ) {
                    sum += (double)0.002371039227565845207;
                  } else {
                    sum += (double)-0.004412574976854941392;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.2322677322677329) ) ) {
                  sum += (double)0.00278308221507167974;
                } else {
                  sum += (double)-0.001653544820529500312;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5536370000000000458) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06864811295460455931) ) ) {
                sum += (double)0.005735179368883331838;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3859225000000000572) ) ) {
                  sum += (double)6.995980654457003515e-05;
                } else {
                  sum += (double)0.003864733962713336971;
                }
              }
            } else {
              sum += (double)-0.002956655951642156877;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.88731060606061618) ) ) {
        sum += (double)-0.0007917561622485355839;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.15097402597402976) ) ) {
          sum += (double)0.003130224449529625357;
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2399659671015315077) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2287316404723389318) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1915340000000000376) ) ) {
                sum += (double)-0.001087548591447193335;
              } else {
                sum += (double)0.001343077689215565942;
              }
            } else {
              sum += (double)0.007697300178067197074;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.2322677322677329) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.32834040296925338) ) ) {
                sum += (double)-0.01013303133906019379;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.74189814814816657) ) ) {
                  sum += (double)0.001060238349702505691;
                } else {
                  sum += (double)-0.007377630179365027643;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)115.9545454545454675) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)109.0641025641025834) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2999655000000000515) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2093320000000000181) ) ) {
                      sum += (double)0.0007424434300529813647;
                    } else {
                      sum += (double)-0.00286036504505386615;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.30306122448979878) ) ) {
                      sum += (double)-0.00171014005780854004;
                    } else {
                      sum += (double)0.003976621752400972751;
                    }
                  }
                } else {
                  sum += (double)-0.003212295830517142466;
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)16180.09325483776956) ) ) {
                  sum += (double)0.007726817587770761289;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1684877502298116336) ) ) {
                    sum += (double)0.004732034420756323426;
                  } else {
                    sum += (double)-0.002513550008514344857;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)23070.06005165050738) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
        sum += (double)-0.007107342181774421036;
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.03580261074118568781) ) ) {
          sum += (double)0.003195861241876881299;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2312300000000000189) ) ) {
            sum += (double)-0.000250982547487865824;
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8491407799074687235) ) ) {
              if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9550000000000000711) ) ) {
                sum += (double)0.0005786868442555127444;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)167.5392857142857395) ) ) {
                  sum += (double)-0.004738152902280965036;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)183.7630769230769658) ) ) {
                    sum += (double)0.001232120410337553176;
                  } else {
                    sum += (double)-0.002915348176294086865;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
                sum += (double)-0.001538112584719151469;
              } else {
                sum += (double)0.003871880789212109146;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-23408.498900080147) ) ) {
        sum += (double)-0.0001795747123837906553;
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.06845150950446143856) ) ) {
          sum += (double)0.0008878572571369147681;
        } else {
          sum += (double)0.008774023640613370228;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9606451612903227355) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.7610275038920733) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9632500000000000506) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8840870000000001783) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1458.29730909354339) ) ) {
            sum += (double)-0.0005586920368283180205;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-864.8017076591004297) ) ) {
              sum += (double)0.002493064146899335708;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7925860000000001238) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9631328576282706111) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.7697158305976026238) ) ) {
                    sum += (double)0.005118251843616005055;
                  } else {
                    sum += (double)0.001045336757946823151;
                  }
                } else {
                  sum += (double)-0.0006957431279923507366;
                }
              } else {
                sum += (double)-0.0019218761020608269;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.08188154061328727085) ) ) {
            sum += (double)0.004198506699437797897;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9074435000000001805) ) ) {
              sum += (double)0.003743063603537917158;
            } else {
              sum += (double)0.0003342015929961427573;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.04618346993186531885) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3514705882352941457) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3632.024792260073355) ) ) {
              sum += (double)-0.00328722989178773916;
            } else {
              sum += (double)0.0007117163024282513201;
            }
          } else {
            sum += (double)0.00105887571270808366;
          }
        } else {
          sum += (double)-0.00359286409966796472;
        }
      }
    } else {
      sum += (double)0.003233241854224832342;
    }
  } else {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-271.4489652655623217) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01185000000000000116) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1.3862943611200651) ) ) {
          sum += (double)-0.004859917259426911433;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2690500000000000669) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5594259411545304816) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3787509271869893279) ) ) {
                sum += (double)0.0005503274770513545602;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6720624541353420467) ) ) {
                  sum += (double)0.01184408228288806771;
                } else {
                  sum += (double)0.003628266619225613276;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.921363443236741575) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000000000000799) ) ) {
                  sum += (double)-0.0006865923158378835992;
                } else {
                  sum += (double)-0.004590535486662577179;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.395011276321747484) ) ) {
                  sum += (double)0.004208081842731494632;
                } else {
                  sum += (double)-0.0003978505488963901939;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.569111884291402359) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2250000000000000333) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4543500000000000316) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.60769230769231442) ) ) {
                    sum += (double)0.006848984370277782195;
                  } else {
                    sum += (double)-2.972010327288558085e-05;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-499.6086617798037537) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.335585585585585822) ) ) {
                      sum += (double)-3.394810763951498474e-05;
                    } else {
                      sum += (double)-0.001119776372473628174;
                    }
                  } else {
                    sum += (double)-0.005535746313099564747;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.64761904761907374) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.15097402597402976) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.130274200633482079) ) ) {
                      sum += (double)0.002627815463267212711;
                    } else {
                      sum += (double)0.0003008637176008626389;
                    }
                  } else {
                    sum += (double)-0.00302442379198505527;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7034.526718448786596) ) ) {
                    sum += (double)0.006011161540797419107;
                  } else {
                    sum += (double)0.001845753306181692737;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.437797619047619602) ) ) {
                sum += (double)2.837132775452941871e-06;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94281045751634274) ) ) {
                  sum += (double)-0.007226042069480434656;
                } else {
                  sum += (double)-0.003200718197668227238;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)43305.24755796225509) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)183.7630769230769658) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-120569.0775940371968) ) ) {
              sum += (double)0.004293186326309591377;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8378500000000000947) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2484845401189077485) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7246500000000001274) ) ) {
                      sum += (double)0.004258135125401777202;
                    } else {
                      sum += (double)-0.0002317920681727758073;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3042628804014196331) ) ) {
                      sum += (double)-0.001174914523076117353;
                    } else {
                      sum += (double)0.0001101781722218320251;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.197938500000000045) ) ) {
                    sum += (double)-0.0009415636100991830581;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4093.415394671918875) ) ) {
                      sum += (double)-0.005387321867955390323;
                    } else {
                      sum += (double)-0.001677469788077434482;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5031527682228830178) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2508523744426000568) ) ) {
                      sum += (double)-0.003180779576170899951;
                    } else {
                      sum += (double)0.001699819186316520138;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04395000000000000989) ) ) {
                      sum += (double)0.0007495414945995364014;
                    } else {
                      sum += (double)-7.576645647290886217e-05;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2511183070799432038) ) ) {
                      sum += (double)0.0001937674752942235919;
                    } else {
                      sum += (double)-0.001616010673023042868;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5642304926403781673) ) ) {
                      sum += (double)0.001969721458508160057;
                    } else {
                      sum += (double)7.057404228438810055e-05;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2240150000000000474) ) ) {
              sum += (double)-0.000153205529026252961;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5436705000000000565) ) ) {
                if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9250000000000001554) ) ) {
                  sum += (double)0.001342068016788094216;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.06446597211275277572) ) ) {
                    sum += (double)-0.006731100346801979772;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)215.2883771929824945) ) ) {
                      sum += (double)-0.0004301304117766044355;
                    } else {
                      sum += (double)-0.003554548730862249883;
                    }
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-42515.07229609502247) ) ) {
                  sum += (double)-0.0009369076218685775271;
                } else {
                  sum += (double)0.00306488816006828934;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)223.8669250645995135) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1955750000000000266) ) ) {
              sum += (double)0.0005549813266416405658;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-120569.0775940371968) ) ) {
                sum += (double)0.01144731028489648188;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.07945677231391518047) ) ) {
                  sum += (double)-0.0003132961095273646798;
                } else {
                  sum += (double)0.004437092096422167245;
                }
              }
            }
          } else {
            sum += (double)-0.0008951267897555054533;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8271178460467978333) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)15.77248611608338713) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7140656586248165238) ) ) {
            sum += (double)-0.008618016260739510756;
          } else {
            sum += (double)-0.003289027784807435541;
          }
        } else {
          sum += (double)-0.002195757461680845901;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08395000000000001072) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2953170000000000517) ) ) {
            sum += (double)0.006422759351072009244;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.921363443236741575) ) ) {
              sum += (double)-0.001124610228918215826;
            } else {
              sum += (double)0.003209093100847485846;
            }
          }
        } else {
          sum += (double)-0.004043771759743955939;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9074435000000001805) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9934500000000000552) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.03931893328124715786) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05500000000000000722) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)59725.4629650157658) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2648210000000000286) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)329.6666666666666856) ) ) {
                sum += (double)-0.004190614546954349491;
              } else {
                sum += (double)-0.001329344625611438187;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3658645000000000369) ) ) {
                sum += (double)0.00431351046946418324;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5536370000000000458) ) ) {
                  sum += (double)-0.002433954579747420535;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.75486037469071476) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00575000000000000077) ) ) {
                      sum += (double)-0.001887287736065357832;
                    } else {
                      sum += (double)0.0005607953050352566023;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8140.442679804484214) ) ) {
                      sum += (double)0.004603055871036714104;
                    } else {
                      sum += (double)0.001395571361571749502;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2270140000000000213) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
                sum += (double)-0.0007088447562879691315;
              } else {
                sum += (double)0.000751967960581248528;
              }
            } else {
              sum += (double)0.005214818617786854196;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.036375661375661839) ) ) {
            sum += (double)0.003048306623275563298;
          } else {
            sum += (double)0.005405270802051962385;
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.08774088920105922729) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05935000000000000692) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03385000000000000508) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.08580896800492683607) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.94047619047619335) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.43376557335367671) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.06446597211275277572) ) ) {
                      sum += (double)-0.001930600503743190805;
                    } else {
                      sum += (double)0.002238734005361492103;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1256.768626091058877) ) ) {
                      sum += (double)0.0003122924923095709692;
                    } else {
                      sum += (double)0.004810525075309735402;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.78888888888889497) ) ) {
                    sum += (double)-0.005116423315264784048;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.57417582417583191) ) ) {
                      sum += (double)0.002317013370143776018;
                    } else {
                      sum += (double)-0.001015935721912675617;
                    }
                  }
                }
              } else {
                sum += (double)-0.004479945907716574582;
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)13833.51142176279791) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.07577460551863703098) ) ) {
                  sum += (double)-0.00406299818326716182;
                } else {
                  sum += (double)0.002879421970071372253;
                }
              } else {
                sum += (double)0.008858531237759249138;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02459183207930617718) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.808101472995090386) ) ) {
                sum += (double)-0.0009588025713599948249;
              } else {
                sum += (double)-0.007925460096149413575;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03442655001000935466) ) ) {
                sum += (double)0.001492922120785236456;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.14236111111111249) ) ) {
                  sum += (double)-0.004398277770923396217;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.07577460551863703098) ) ) {
                    sum += (double)0.0002762510059336770337;
                  } else {
                    sum += (double)-0.002344992133981491436;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8753585000000000393) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1243193429785608706) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04000638251704572573) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5666130000000001443) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6945.123393532623595) ) ) {
                    sum += (double)0.0008824435447200452282;
                  } else {
                    sum += (double)-0.009763720155763586095;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6829935000000001422) ) ) {
                    sum += (double)0.003330099640547388561;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.34260670731707599) ) ) {
                      sum += (double)0.001561493375442270107;
                    } else {
                      sum += (double)-0.001351515401571204639;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.890916808149406769) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1247124030991497295) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01055000000000000208) ) ) {
                      sum += (double)0.001408754485700898463;
                    } else {
                      sum += (double)0.004455593411400787449;
                    }
                  } else {
                    sum += (double)-0.002910138835268806859;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4849410000000000109) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.811253561253562516) ) ) {
                      sum += (double)-0.004754132018553878375;
                    } else {
                      sum += (double)0.0003722657277695939253;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.702729044834310201) ) ) {
                      sum += (double)0.005345288642889242832;
                    } else {
                      sum += (double)0.001093396315053232369;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8360500000000000709) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2082316587659429064) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.540750000000000175) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7759500000000000286) ) ) {
                      sum += (double)0.001906950507307028989;
                    } else {
                      sum += (double)0.0002969587216287889494;
                    }
                  } else {
                    sum += (double)-0.004184537947924116263;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1137500000000000178) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8190000000000000613) ) ) {
                      sum += (double)-0.0002535433389255302276;
                    } else {
                      sum += (double)-0.004069135902483000423;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8237500000000000933) ) ) {
                      sum += (double)9.306510007436294462e-05;
                    } else {
                      sum += (double)0.004828502423212879813;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6213000000000000744) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0553124705129175373) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3378300000000000192) ) ) {
                      sum += (double)0.003687267457484418118;
                    } else {
                      sum += (double)-0.0004380188258219599486;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05693937631927865894) ) ) {
                      sum += (double)-0.007780899923259284104;
                    } else {
                      sum += (double)-0.001344620101754332971;
                    }
                  }
                } else {
                  sum += (double)0.006262643663413951407;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.114147004888090417) ) ) {
              sum += (double)0.001709322917375603748;
            } else {
              sum += (double)0.004587974609030818704;
            }
          }
        }
      }
    } else {
      sum += (double)-0.003192491348614864832;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.155357142857144304) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.08580896800492683607) ) ) {
        sum += (double)0.004850177156144051469;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-427.1704539211891074) ) ) {
          sum += (double)0.002329696624997222836;
        } else {
          sum += (double)-0.0005985370115395254173;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03485000000000000597) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.02622543668122271146) ) ) {
          sum += (double)0.001335958280665934875;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1018.758829443079094) ) ) {
            sum += (double)-0.004022146995180761464;
          } else {
            sum += (double)-0.0009317686477551839373;
          }
        }
      } else {
        sum += (double)0.003185228237826803841;
      }
    }
  }
  return sum;
}
