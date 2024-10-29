#include "prediction.h"
double predict_margin_unit11(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9325002873475637388) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.563301282051282826) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)26.28707706142381895) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.392166500000000029) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.485097903309652079) ) ) {
              sum += (double)-0.005524322628999035929;
            } else {
              sum += (double)-0.0008642644683878901099;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5291855000000000864) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8271178460467978333) ) ) {
                sum += (double)0.001271486430661224187;
              } else {
                sum += (double)0.006420913608876177223;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.532388663967611642) ) ) {
                sum += (double)0.001955832786104478183;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2419000000000000317) ) ) {
                  sum += (double)-0.007545579048792030487;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4268500000000000627) ) ) {
                    sum += (double)0.003535031113648359063;
                  } else {
                    sum += (double)-0.001159398023105764983;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.004221387345356284425;
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-67546.57382663110911) ) ) {
          sum += (double)0.003406652800002689559;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-985.1868867154022382) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1590.266385994794746) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7957915931777371776) ) ) {
                sum += (double)-0.004583644533274799752;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.252450980392159963) ) ) {
                  sum += (double)0.002214589780602464059;
                } else {
                  sum += (double)-0.003923965732169341393;
                }
              }
            } else {
              sum += (double)-0.007641254433099074934;
            }
          } else {
            sum += (double)0.001448962312623419159;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.742610837438423932) ) ) {
        sum += (double)-0.001027242274384676047;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7350000000000000977) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.448286052009456704) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.624858597285068651) ) ) {
              sum += (double)0.005948751497258317374;
            } else {
              sum += (double)0.0008554074178899058164;
            }
          } else {
            sum += (double)0.008438864712149534569;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.317357322368964523) ) ) {
            sum += (double)0.003813819230292234911;
          } else {
            sum += (double)-0.002620889099053978939;
          }
        }
      }
    }
  } else {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-271.4489652655623217) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7444253094382086156) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.36135000000000006) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1079.931960267036857) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3431500000000000661) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.520019664933700887) ) ) {
                  sum += (double)-0.002309156687352468054;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.2641090678503506) ) ) {
                    sum += (double)0.006107625088212883385;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7320592709375011164) ) ) {
                      sum += (double)0.001608273663499072866;
                    } else {
                      sum += (double)-0.002286376108566206058;
                    }
                  }
                }
              } else {
                sum += (double)0.005942189105650388242;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.582324042174648393) ) ) {
                sum += (double)0.008968343235828192192;
              } else {
                sum += (double)0.003191675777898879147;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9290.770887201673759) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11531.82324522852832) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24839.74131948253489) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)58.19230769230770051) ) ) {
                    sum += (double)0.006574755412677490973;
                  } else {
                    sum += (double)-5.854681732000602501e-05;
                  }
                } else {
                  sum += (double)-0.001328322986512312214;
                }
              } else {
                sum += (double)0.009405826560649881499;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05255000000000000643) ) ) {
                sum += (double)-8.353091407754195143e-05;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.35781818181818537) ) ) {
                  sum += (double)-0.007343520074057361888;
                } else {
                  sum += (double)-0.0005351724037098621895;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.47850877192982821) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3239502683350661827) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4995331520331520725) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4880421551248437795) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1186.628837777138642) ) ) {
                      sum += (double)0.001014455235769372386;
                    } else {
                      sum += (double)-1.772753260878785818e-05;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
                      sum += (double)-0.0005605687882085874868;
                    } else {
                      sum += (double)0.006033891971671295935;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2534372918956249165) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5201090000000001545) ) ) {
                      sum += (double)0.001160158238047527979;
                    } else {
                      sum += (double)-0.0009407546017982551349;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5257804178184334321) ) ) {
                      sum += (double)-0.004814705362297840886;
                    } else {
                      sum += (double)-0.0015237683280958929;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4901500000000000301) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5642304926403781673) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
                      sum += (double)-0.001619335935978012935;
                    } else {
                      sum += (double)0.004750843144601308611;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1121500000000000136) ) ) {
                      sum += (double)-0.001354519114053157319;
                    } else {
                      sum += (double)0.0009707859310446455108;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6507500000000000506) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
                      sum += (double)-0.0001007297460409738074;
                    } else {
                      sum += (double)0.00362809753674626749;
                    }
                  } else {
                    sum += (double)-0.003394815712383129729;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5050000000000001155) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2240150000000000474) ) ) {
                  sum += (double)-0.0001260280113462233656;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-61889.65780747836834) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1684877502298116336) ) ) {
                      sum += (double)0.002768057147113476332;
                    } else {
                      sum += (double)-0.001187261802229545166;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2577865146990329093) ) ) {
                      sum += (double)-0.003859926174836812197;
                    } else {
                      sum += (double)-0.001300394446516766559;
                    }
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-23408.498900080147) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-72018.65726884668402) ) ) {
                    sum += (double)0.003186373499713010277;
                  } else {
                    sum += (double)-0.0004549240590839812482;
                  }
                } else {
                  sum += (double)0.004429939613515700841;
                }
              }
            }
          } else {
            sum += (double)-0.005629240969608290991;
          }
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)9790.82043369202438) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9350000000000001643) ) ) {
              sum += (double)-0.0009994312899747623616;
            } else {
              sum += (double)0.00569290843345546943;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7607063765522581456) ) ) {
              sum += (double)-0.002743747165728856359;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6334000000000000741) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01185000000000000116) ) ) {
                  sum += (double)-0.002731666528077079242;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.025350000000000001) ) ) {
                    sum += (double)0.00216413024640738777;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05764999999999999986) ) ) {
                      sum += (double)-0.002378131861875805442;
                    } else {
                      sum += (double)-0.000432667122152569875;
                    }
                  }
                }
              } else {
                sum += (double)0.002634599636309195494;
              }
            }
          }
        } else {
          sum += (double)0.003322366162548748541;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.219437893081761315) ) ) {
        sum += (double)-0.0009106160551136714904;
      } else {
        sum += (double)-0.005035785613501471067;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01395000000000000059) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006850000000000001053) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9999263622974964294) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.948187489548568796) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6670401960206224778) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1846000000000000141) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8021437310018827427) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)118.0299834287672098) ) ) {
                  sum += (double)0.002191328009288489014;
                } else {
                  sum += (double)0.007004342652128377547;
                }
              } else {
                sum += (double)-0.0008639554764215810236;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2999655000000000515) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2114255000000000162) ) ) {
                    sum += (double)0.0005197763922585147377;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2127.473441927146268) ) ) {
                      sum += (double)0.001912059781426713725;
                    } else {
                      sum += (double)0.007422209034643910928;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3325620000000000798) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.808101472995090386) ) ) {
                      sum += (double)0.0005444508335930056371;
                    } else {
                      sum += (double)-0.006158801248183862556;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3462985000000000646) ) ) {
                      sum += (double)0.005425730109787912404;
                    } else {
                      sum += (double)2.008668006486375422e-05;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
                  sum += (double)-0.003935278795385999638;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.71032126588348277) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2021.296333301971345) ) ) {
                      sum += (double)0.004814923927618231826;
                    } else {
                      sum += (double)-0.0005707837690100407051;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2063695000000000113) ) ) {
                      sum += (double)-0.0001680177958962415048;
                    } else {
                      sum += (double)-0.001612611507429362323;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7444509567657248139) ) ) {
              sum += (double)-0.005598171534257770712;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.80442341124203276) ) ) {
                sum += (double)0.001586822432455129534;
              } else {
                sum += (double)-0.00246556951082413248;
              }
            }
          }
        } else {
          sum += (double)0.002567498613738105999;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8957715509494285078) ) ) {
          sum += (double)-0.005437847083756905918;
        } else {
          sum += (double)0.0001524054354616058633;
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008150000000000002728) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.754310344827586743) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.433327285921625727) ) ) {
            sum += (double)-0.002261137390868074321;
          } else {
            sum += (double)-0.01009057512286445392;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
            sum += (double)-0.001983094971642765728;
          } else {
            sum += (double)0.00167766615865377086;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
          sum += (double)0.004859889763608264343;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1396.779958297000576) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5206.745974317551372) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)24506.24669275645647) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.25552350000000007) ) ) {
                  sum += (double)0.0001272178723960400095;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8212.004448418350876) ) ) {
                    sum += (double)-0.0007911712959629176034;
                  } else {
                    sum += (double)-0.004933752636845519478;
                  }
                }
              } else {
                sum += (double)0.001496154719806557431;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.01219512195122263) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3095740000000000713) ) ) {
                  sum += (double)-0.002976330159886497826;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3989980000000000748) ) ) {
                    sum += (double)0.002783773706918889115;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.0212765957446841) ) ) {
                      sum += (double)0.0007485704650356236672;
                    } else {
                      sum += (double)-0.004302485662013075425;
                    }
                  }
                }
              } else {
                sum += (double)0.001935459523442154038;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1256.768626091058877) ) ) {
              sum += (double)-0.005991951148990422998;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-824.1224939772984044) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1860.099431670796776) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8116500000000000936) ) ) {
                    sum += (double)-0.001641672210981645185;
                  } else {
                    sum += (double)0.004984735545081183869;
                  }
                } else {
                  sum += (double)-0.003505212613019384124;
                }
              } else {
                sum += (double)-0.005178720462898079614;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01485000000000000209) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
        sum += (double)0.004040235902947783911;
      } else {
        sum += (double)-0.00286368766210692979;
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1810.080069446367361) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.332274916211522164) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.00000001800250948e-35) ) ) {
                sum += (double)-0.001897574902190795774;
              } else {
                sum += (double)0.001100479321242170362;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)361.7598371524995287) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.265050167224081257) ) ) {
                  sum += (double)-4.974686288345305234e-05;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.43089430894309011) ) ) {
                    sum += (double)-0.005921493938634318603;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2450.380029300642036) ) ) {
                      sum += (double)-0.002870168140418565862;
                    } else {
                      sum += (double)0.004502589249421356382;
                    }
                  }
                }
              } else {
                sum += (double)9.394393231173917791e-06;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.90306122448980375) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.860788113695091006) ) ) {
                sum += (double)0.001366296684533148181;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
                  sum += (double)-0.0003907949133967689994;
                } else {
                  sum += (double)-0.004682731282947739763;
                }
              }
            } else {
              sum += (double)0.002060413168113990699;
            }
          }
        } else {
          sum += (double)0.004326760267092360189;
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4026600000000000734) ) ) {
            sum += (double)0.0004444055545392324976;
          } else {
            sum += (double)0.004592648025440669059;
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9379530110910064833) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2304500000000000159) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03785000000000000864) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)59.16273471352914015) ) ) {
                  sum += (double)0.001460575695215559798;
                } else {
                  sum += (double)-0.002181428848347830365;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.29705882352941515) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-95.57213752792789307) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1121500000000000136) ) ) {
                      sum += (double)-9.513077851858630014e-05;
                    } else {
                      sum += (double)0.002652559221782929775;
                    }
                  } else {
                    sum += (double)-0.00501220915539296076;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2930090000000000194) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0756500000000000089) ) ) {
                      sum += (double)0.002672997718346596489;
                    } else {
                      sum += (double)-0.002204383955267126115;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1678605806223842645) ) ) {
                      sum += (double)-0.001893614216218673452;
                    } else {
                      sum += (double)-0.006272592752860380386;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5347230000000001704) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3264795000000000891) ) ) {
                  sum += (double)0.003071156155054490314;
                } else {
                  sum += (double)0.008867405652502696051;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-985.1868867154022382) ) ) {
                  sum += (double)-0.002040980476589284061;
                } else {
                  sum += (double)0.003573152036399298952;
                }
              }
            }
          } else {
            sum += (double)-0.0007295890887957141597;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3266.861991663331082) ) ) {
    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2113.689413772091484) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.117150000000000018) ) ) {
        sum += (double)-0.0001816070191534493864;
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4103386442176324422) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6770500000000000407) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1604000000000000148) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2571.528544352357585) ) ) {
                sum += (double)0.01048723444961411483;
              } else {
                sum += (double)0.003465653504229311913;
              }
            } else {
              sum += (double)0.00146463396103605468;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.240695900668028262) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.78345184227537601) ) ) {
                sum += (double)0.0006090609476925656169;
              } else {
                sum += (double)0.007589881525915151417;
              }
            } else {
              sum += (double)-0.005113167476572240931;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3304355872301289465) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.087782058337921853) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
                sum += (double)-0.0001965313000481393082;
              } else {
                sum += (double)0.005978500630784360816;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5159500000000001307) ) ) {
                sum += (double)-0.009299548520718728048;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2553249611856754364) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6221500000000000918) ) ) {
                    sum += (double)0.005858162026928829917;
                  } else {
                    sum += (double)-0.003371080429134604411;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4853978233193322334) ) ) {
                    sum += (double)-0.007665066997804983497;
                  } else {
                    sum += (double)-0.001846725861905262238;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5988367574978012975) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4671500000000000652) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363200000000000633) ) ) {
                  sum += (double)0.00243006649058956966;
                } else {
                  sum += (double)0.009396406151990428432;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3599500000000000477) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5528205492927561471) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1516.142594860419422) ) ) {
                      sum += (double)0.003272075929577289433;
                    } else {
                      sum += (double)-0.002466974493674480018;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2227500000000000313) ) ) {
                      sum += (double)-0.004761979169393450173;
                    } else {
                      sum += (double)0.001898511910297140479;
                    }
                  }
                } else {
                  sum += (double)0.00741033651215037073;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.473050000000000026) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1359000000000000485) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.582324042174648393) ) ) {
                    sum += (double)-0.001752611322611324646;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8426833958685702175) ) ) {
                      sum += (double)0.007555985815122361407;
                    } else {
                      sum += (double)0.00117564550981624381;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.442099999999999993) ) ) {
                    sum += (double)3.908405679731516972e-05;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3020500000000000962) ) ) {
                      sum += (double)-0.0002300613907368632125;
                    } else {
                      sum += (double)-0.007326720893542833582;
                    }
                  }
                }
              } else {
                sum += (double)0.003333692848894221489;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9455500000000001126) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2225.774828494720623) ) ) {
            sum += (double)-0.001534707898139426284;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3989980000000000748) ) ) {
              sum += (double)0.002761755221524545088;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06344288914682723324) ) ) {
                sum += (double)0.001629863343965459472;
              } else {
                sum += (double)-0.0003897153897887565611;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2556.820004021212753) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.49467557742445045) ) ) {
              sum += (double)-0.002887319978393430679;
            } else {
              sum += (double)0.003591041401212463971;
            }
          } else {
            sum += (double)-0.004382447334117775366;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.737273511647972946) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.376459500000000058) ) ) {
            sum += (double)-0.005497208154873796035;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.63725490196079093) ) ) {
              sum += (double)-0.003136150793818696415;
            } else {
              sum += (double)0.003952922619060552159;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
            sum += (double)0.001982932957072310043;
          } else {
            sum += (double)-0.0008925421354762767562;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4805000000000000937) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.04232804232805165) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4976500000000000923) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.36135000000000006) ) ) {
              sum += (double)0.004310674782163556595;
            } else {
              sum += (double)-0.001441698226808047975;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5314418083097262047) ) ) {
              sum += (double)0.009532507794280446062;
            } else {
              sum += (double)0.003679970578020913975;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.471890500000000046) ) ) {
            sum += (double)0.002041916381457177434;
          } else {
            sum += (double)-0.005567678866120656482;
          }
        }
      } else {
        sum += (double)-0.0001546155037291363477;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07035000000000000975) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4958483270806217091) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.674650000000000083) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.18303571428572241) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01395000000000000059) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.736068111455108642) ) ) {
                    sum += (double)0.002914920280513436362;
                  } else {
                    sum += (double)-0.00356630853902552801;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6402500000000000968) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4736.924814125954072) ) ) {
                      sum += (double)0.007644681928091890191;
                    } else {
                      sum += (double)0.001517877743428779633;
                    }
                  } else {
                    sum += (double)0.01049431222771883207;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1297121988736138765) ) ) {
                  sum += (double)0.005784268898765465225;
                } else {
                  sum += (double)-0.0002194133074273148416;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2005135503574813904) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8015000000000001013) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1665780000000000316) ) ) {
                    sum += (double)-0.0001948749023282042526;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01815000000000000294) ) ) {
                      sum += (double)0.001313402415167025947;
                    } else {
                      sum += (double)0.00576382618329055775;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1784550515539286286) ) ) {
                    sum += (double)0.000252381817446431869;
                  } else {
                    sum += (double)-0.004140662207021105802;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7148500000000000965) ) ) {
                    sum += (double)-0.001518833961351612281;
                  } else {
                    sum += (double)-0.008190347153997754384;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.746250000000000191) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.8806779661016968) ) ) {
                      sum += (double)0.001799365206263677398;
                    } else {
                      sum += (double)-0.002099640998898686696;
                    }
                  } else {
                    sum += (double)-0.002226976968934924351;
                  }
                }
              }
            }
          } else {
            sum += (double)-0.005103369609406775004;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.218025500000000011) ) ) {
            sum += (double)-0.0009528441370129554517;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3462985000000000646) ) ) {
              sum += (double)0.01315969458352721569;
            } else {
              sum += (double)0.003341684631207772396;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2793.363867362420478) ) ) {
          sum += (double)-0.0001685366523536060849;
        } else {
          sum += (double)-0.005688234238683315645;
        }
      }
    }
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2508523744426000568) ) ) {
      sum += (double)0.000364806580250964102;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1137500000000000178) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.825750000000000095) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7124500000000001387) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.310715078210065665) ) ) {
              sum += (double)0.00136487159481915696;
            } else {
              sum += (double)-0.0002604224282154932375;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
              sum += (double)0.0001830072478815615545;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66217532467532791) ) ) {
                sum += (double)-0.01043603959025088575;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2689713774233481458) ) ) {
                  sum += (double)-0.004588344132705416377;
                } else {
                  sum += (double)-0.000130716140589168657;
                }
              }
            }
          }
        } else {
          sum += (double)-0.005469213278678401215;
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4784.444799033853087) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2808462751056642337) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2745899061051987888) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1204359241998356339) ) ) {
                sum += (double)0.001459599238916067711;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3205004002465369761) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7759500000000000286) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1770958479253431361) ) ) {
                      sum += (double)0.001865520070849547435;
                    } else {
                      sum += (double)-0.003504604374193112399;
                    }
                  } else {
                    sum += (double)-0.006705120437689674612;
                  }
                } else {
                  sum += (double)0.002413007413390751317;
                }
              }
            } else {
              sum += (double)-0.00631826024551484719;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66217532467532791) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5568739105774286324) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1688500000000000278) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5890.241073706772113) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5702500000000001457) ) ) {
                      sum += (double)0.001934309899430218613;
                    } else {
                      sum += (double)-0.005253022273458613813;
                    }
                  } else {
                    sum += (double)-0.01144845045404349615;
                  }
                } else {
                  sum += (double)-0.001158116081029693205;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.638401428543058258) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4671500000000000652) ) ) {
                    sum += (double)0.005041627778640821005;
                  } else {
                    sum += (double)0.0006647207435023383014;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5323.925722576165754) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1022.028164160269057) ) ) {
                      sum += (double)0.001310962491935277604;
                    } else {
                      sum += (double)-0.001456184932985390024;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840560000000000085) ) ) {
                      sum += (double)-0.006893780694928211723;
                    } else {
                      sum += (double)0.0007738937953739109376;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.57793522267206576) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7424500000000001654) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3634578871420977575) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5349.110830475206967) ) ) {
                      sum += (double)-0.004926919327916817054;
                    } else {
                      sum += (double)0.003150474066558917128;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.1721611721611751) ) ) {
                      sum += (double)0.001225411579955243586;
                    } else {
                      sum += (double)0.008109353361202937052;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4006080000000000751) ) ) {
                    sum += (double)0.01053807657697761191;
                  } else {
                    sum += (double)0.001840597495734712418;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.58257918552036436) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.50897851045040099) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2534372918956249165) ) ) {
                      sum += (double)0.004133267207086371853;
                    } else {
                      sum += (double)-0.002940439906434846873;
                    }
                  } else {
                    sum += (double)-0.00633170763032767786;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5261.246056081498864) ) ) {
                    sum += (double)2.040141550807606606e-05;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.1043557168784055) ) ) {
                      sum += (double)0.009082990693359323936;
                    } else {
                      sum += (double)-0.001169921888778419766;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2067000000000000226) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3533.336699232966112) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6199252650020550259) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.71008403361344818) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2104742577805706616) ) ) {
                    sum += (double)0.0017296142010632563;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5221506565800743127) ) ) {
                      sum += (double)0.009894379884449310686;
                    } else {
                      sum += (double)0.004540925074476207662;
                    }
                  }
                } else {
                  sum += (double)-0.003271543397497557459;
                }
              } else {
                sum += (double)0.0001086691170510421301;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3146902490233077776) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.221202854230377888) ) ) {
                  sum += (double)0.0007729515953913858447;
                } else {
                  sum += (double)0.008752568617400546119;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2626.389045125775283) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2717.414574262154929) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3483525000000000649) ) ) {
                      sum += (double)-0.002903903041376990589;
                    } else {
                      sum += (double)0.0005516936850578550797;
                    }
                  } else {
                    sum += (double)-0.00652138328944819063;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.06066176470588758) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-95.57213752792789307) ) ) {
                      sum += (double)0.001826799182602370335;
                    } else {
                      sum += (double)-0.003643212082279257032;
                    }
                  } else {
                    sum += (double)-0.003479223717428269608;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.667349726775957386) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1.00000001800250948e-35) ) ) {
                sum += (double)-0.003689078587808153863;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    sum += (double)0.005308674891289816462;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.59053651266766316) ) ) {
                      sum += (double)0.0001208681399976985286;
                    } else {
                      sum += (double)0.004556663044895949664;
                    }
                  }
                } else {
                  sum += (double)0.00693701307755294292;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4248.335231464433491) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.767948717948721438) ) ) {
                  sum += (double)-0.001864767807841919691;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.57793522267206576) ) ) {
                    sum += (double)0.008948204974711408341;
                  } else {
                    sum += (double)0.0005562821759876502995;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5565325000000000966) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1842.867320295106538) ) ) {
                      sum += (double)-0.00240342124246005007;
                    } else {
                      sum += (double)0.001837924412692474056;
                    }
                  } else {
                    sum += (double)-0.008815506539632684754;
                  }
                } else {
                  sum += (double)0.001236979261057863941;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05764999999999999986) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1702908340369640727) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02895000000000000351) ) ) {
          sum += (double)-0.0001458975465833866811;
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.05408888269713012925) ) ) {
            sum += (double)0.004606349283987790783;
          } else {
            sum += (double)0.001132398185235874771;
          }
        }
      } else {
        sum += (double)-0.003806616311474018098;
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3371.239524566822638) ) ) {
        sum += (double)-0.0002538297294550822874;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07335000000000001241) ) ) {
          sum += (double)-0.007111912063766890821;
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1398177495611052923) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1308500000000000218) ) ) {
              sum += (double)-0.001723517101559266353;
            } else {
              sum += (double)-0.008202624328476699339;
            }
          } else {
            sum += (double)0.0008531840011705937822;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9325002873475637388) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.883349826818407013) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3658645000000000369) ) ) {
          sum += (double)-0.003210636197113973366;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.460180995475113264) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.532388663967611642) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5741900000000000892) ) ) {
                sum += (double)0.003550101113479528243;
              } else {
                sum += (double)0.0009750157501554795924;
              }
            } else {
              sum += (double)-0.002576842230718133162;
            }
          } else {
            sum += (double)0.005465447888334001858;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4769234976159801298) ) ) {
          sum += (double)0.004424011525660563951;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2342500000000000415) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2384160000000000446) ) ) {
              sum += (double)-0.0003302254652470911411;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8781420789956296824) ) ) {
                sum += (double)-0.007242544664462387087;
              } else {
                sum += (double)-0.00310226026757064394;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4675530000000000519) ) ) {
              sum += (double)0.004673411422759614353;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5598315000000001485) ) ) {
                sum += (double)-0.007154475568652013048;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5182500000000002105) ) ) {
                  sum += (double)1.974781831260751108e-05;
                } else {
                  sum += (double)-0.003182856791316873105;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.100981848184818812) ) ) {
        sum += (double)-0.0007029385988591060333;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7350000000000000977) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.395011276321747484) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.689073741007194762) ) ) {
              sum += (double)0.006488965724279031032;
            } else {
              sum += (double)0.001925066431429039429;
            }
          } else {
            sum += (double)0.008679715016969751298;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.317357322368964523) ) ) {
            sum += (double)0.003492402618926056593;
          } else {
            sum += (double)-0.002504352713791121749;
          }
        }
      }
    }
  } else {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-271.4489652655623217) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
              sum += (double)0.003805897054889157381;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09695000000000000839) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8491407799074687235) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2962.976412357489153) ) ) {
                    sum += (double)-0.00168449317046044612;
                  } else {
                    sum += (double)0.005308332370715482425;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8461.096702489729068) ) ) {
                    sum += (double)-0.0009840436017748044502;
                  } else {
                    sum += (double)-0.004870833984004637081;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6967396201528700539) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5594259411545304816) ) ) {
                    sum += (double)0.0009905630647894080737;
                  } else {
                    sum += (double)0.005528940397880430409;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4978420000000000623) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)118.0299834287672098) ) ) {
                      sum += (double)-0.003519271429780960851;
                    } else {
                      sum += (double)0.0003195084781529741692;
                    }
                  } else {
                    sum += (double)0.002218989345868073101;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3744800000000000906) ) ) {
              sum += (double)0.0009274363817047458431;
            } else {
              sum += (double)0.005955176288281601241;
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7444253094382086156) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2534500000000000641) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04920000000000000762) ) ) {
                sum += (double)-0.0002388758293636435365;
              } else {
                sum += (double)-0.005734162347400087109;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2690500000000000669) ) ) {
                sum += (double)0.005156609726857392349;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3940500000000000114) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.28801843317972597) ) ) {
                      sum += (double)0.001553046192579412036;
                    } else {
                      sum += (double)-0.0008769817631415692365;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4250000000000000444) ) ) {
                      sum += (double)-5.810274500986762719e-05;
                    } else {
                      sum += (double)0.0003626332001206384399;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.53684210526317599) ) ) {
                    sum += (double)-0.00574631515768553227;
                  } else {
                    sum += (double)-9.796421603511060335e-05;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6909735000000001293) ) ) {
              if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.07059800664451998) ) ) {
                  sum += (double)0.003032162456617272777;
                } else {
                  sum += (double)-0.0004881572974680285304;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7959100033456006917) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1564500000000000335) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)361.7598371524995287) ) ) {
                      sum += (double)-0.008985048291678676691;
                    } else {
                      sum += (double)-0.004046832331025291586;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7444509567657248139) ) ) {
                      sum += (double)-0.0018303362171178839;
                    } else {
                      sum += (double)0.002086704758066692741;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8662560233874664339) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.8806779661016968) ) ) {
                      sum += (double)0.0009019815725301603753;
                    } else {
                      sum += (double)-0.002991180849735435195;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                      sum += (double)-0.004723108714313498276;
                    } else {
                      sum += (double)-0.001008998542352575493;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.00330381742338004469;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)294.2731973911765522) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1607000000000000095) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0640500000000000097) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03085000000000000242) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4143455000000000887) ) ) {
                  sum += (double)-0.002392924199443628979;
                } else {
                  sum += (double)0.00305794253932078694;
                }
              } else {
                sum += (double)-0.00458623569407317494;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.409826191705387366) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.392166500000000029) ) ) {
                  sum += (double)0.007903436712571121694;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1283.269061062331048) ) ) {
                    sum += (double)0.002020599102203624996;
                  } else {
                    sum += (double)-0.003617949649946298682;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4925320000000000253) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2342500000000000415) ) ) {
                    sum += (double)7.284686697016388632e-05;
                  } else {
                    sum += (double)-0.002449142237398625136;
                  }
                } else {
                  sum += (double)0.003532399197423637203;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.33990778688524692) ) ) {
              sum += (double)-0.004712654645593524969;
            } else {
              sum += (double)-0.001633719827215004451;
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)690.7475206421901248) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2081000000000000349) ) ) {
              sum += (double)0.001751643699391612543;
            } else {
              sum += (double)0.007404116037604502494;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3383000000000001006) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1727500000000000424) ) ) {
                sum += (double)-0.001191315687994969237;
              } else {
                sum += (double)0.001906231423652178644;
              }
            } else {
              sum += (double)-0.005361787140252654779;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.219437893081761315) ) ) {
        sum += (double)-0.0008147058732891840089;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.07230000000000001703) ) ) {
          sum += (double)-0.002375553336211924053;
        } else {
          sum += (double)-0.006635902350106952056;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01395000000000000059) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006850000000000001053) ) ) {
      sum += (double)-5.360839638280660884e-05;
    } else {
      sum += (double)-0.0006268819361553407783;
    }
  } else {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1810.080069446367361) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01485000000000000209) ) ) {
        sum += (double)0.003418328894778554627;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.332274916211522164) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4231.908399006179934) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.754310344827586743) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.883349826818407013) ) ) {
                  sum += (double)-0.001604062031353326034;
                } else {
                  sum += (double)0.002879899869137123383;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.591750841750842582) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3412.950059462908939) ) ) {
                    sum += (double)-0.005011290077708530424;
                  } else {
                    sum += (double)-0.0104701007657378338;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01975000000000000019) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.43959330143541209) ) ) {
                      sum += (double)0.004507341341051705752;
                    } else {
                      sum += (double)-0.00123712762567099112;
                    }
                  } else {
                    sum += (double)-0.004010550550865022747;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1123872490207054042) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5845015000000001182) ) ) {
                  sum += (double)-0.007375219224860406035;
                } else {
                  sum += (double)-0.0005748179276150550089;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.087782058337921853) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)662.612427436425719) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1492500000000000215) ) ) {
                      sum += (double)0.001023170880482409751;
                    } else {
                      sum += (double)-0.00128104461307717416;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8623277660543351431) ) ) {
                      sum += (double)0.0003979532580448152685;
                    } else {
                      sum += (double)-0.005813660696661549637;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.702729044834310201) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1222.028157201931208) ) ) {
                      sum += (double)0.001756434679541972032;
                    } else {
                      sum += (double)-0.004275112423829841198;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1233065969357276664) ) ) {
                      sum += (double)0.003872445085609592733;
                    } else {
                      sum += (double)-0.0003202525411451258709;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6549412391405855516) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.65838375108038605) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.83130081300813075) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)9790.82043369202438) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.978492136910269927) ) ) {
                      sum += (double)-0.0002232371809988931101;
                    } else {
                      sum += (double)0.001884531516441827941;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.8369719981015713) ) ) {
                      sum += (double)-0.000582095826711522186;
                    } else {
                      sum += (double)-0.004265081344696544305;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363200000000000633) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.656050000000000133) ) ) {
                      sum += (double)-0.005230027433752943225;
                    } else {
                      sum += (double)0.0021621189224156445;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4770315000000000527) ) ) {
                      sum += (double)0.009560029830467813711;
                    } else {
                      sum += (double)0.002297034519622338962;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.75486037469071476) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4844.968018580479111) ) ) {
                    sum += (double)0.003545451057775416207;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5133.306374476119345) ) ) {
                      sum += (double)-0.008169550487410966871;
                    } else {
                      sum += (double)-0.001764932920461340917;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.47850877192982821) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14402.23152588333323) ) ) {
                      sum += (double)0.0009595116649435805802;
                    } else {
                      sum += (double)-0.0001269829110893279898;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-107826.1666621288314) ) ) {
                      sum += (double)0.0005837964585307172261;
                    } else {
                      sum += (double)-0.0006187880599058291024;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)148.927747252747281) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.29705882352941515) ) ) {
                  sum += (double)-0.001027705050247849352;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3744800000000000906) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)34.2970588235294187) ) ) {
                      sum += (double)0.005821228017266026622;
                    } else {
                      sum += (double)0.001307244097312270379;
                    }
                  } else {
                    sum += (double)0.008513356096876931525;
                  }
                }
              } else {
                sum += (double)-0.0006026123637925424057;
              }
            }
          }
        } else {
          sum += (double)0.003770024255100694766;
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3436155000000000181) ) ) {
          sum += (double)-0.0001834338715625181103;
        } else {
          sum += (double)0.004000921817314073356;
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9379530110910064833) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2304500000000000159) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1663.13767962321208) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.325799200799202104) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.653589743589744199) ) ) {
                  sum += (double)-0.00041891239619042971;
                } else {
                  sum += (double)-0.005944036100991919452;
                }
              } else {
                sum += (double)0.001738097627135140122;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1590.266385994794746) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)809.688662557468092) ) ) {
                    sum += (double)0.006954022646280371908;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05015000000000000707) ) ) {
                      sum += (double)0.002737572400528762249;
                    } else {
                      sum += (double)-0.0008915585566276675467;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1559.276745549883799) ) ) {
                    sum += (double)-0.003846500177219766298;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.890916808149406769) ) ) {
                      sum += (double)0.001257197945989474083;
                    } else {
                      sum += (double)-0.0009308275710386367972;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05015000000000000707) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-907.5257922099390271) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2668.597659326529538) ) ) {
                      sum += (double)-0.0008225285223410759875;
                    } else {
                      sum += (double)0.002029625854857972783;
                    }
                  } else {
                    sum += (double)0.003922460458360774692;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1860.099431670796776) ) ) {
                    sum += (double)-0.006582705119641407351;
                  } else {
                    sum += (double)-0.00121837944184148084;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5347230000000001704) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3264795000000000891) ) ) {
                sum += (double)0.002456746790461172749;
              } else {
                sum += (double)0.00790632551050713013;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-985.1868867154022382) ) ) {
                sum += (double)-0.001938221611626218376;
              } else {
                sum += (double)0.003039743104534125846;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3016800000000000592) ) ) {
            sum += (double)0.002426350117005325862;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4222760000000000402) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.49507021931512174) ) ) {
                sum += (double)-0.007313513319206707726;
              } else {
                sum += (double)-0.0002088515821151685917;
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7.193095877481540334) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.650443786982250138) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7747129114313702214) ) ) {
                      sum += (double)0.003463905854347382966;
                    } else {
                      sum += (double)-0.0001382618372390021497;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.395011276321747484) ) ) {
                      sum += (double)-0.00543708213396975476;
                    } else {
                      sum += (double)-0.001072596908078324003;
                    }
                  }
                } else {
                  sum += (double)0.003550269301877729839;
                }
              } else {
                sum += (double)-0.003612258513988425741;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)223.8669250645995135) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-120569.0775940371968) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01185000000000000116) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.870650000000000035) ) ) {
          sum += (double)-0.001970073271812422533;
        } else {
          sum += (double)0.0001246319224822598978;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08784999999999999754) ) ) {
          sum += (double)0.006502497172133993135;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-160227.8577119282854) ) ) {
            sum += (double)0.003375526386998024125;
          } else {
            sum += (double)-0.000586015536076244653;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.47850877192982821) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6836000000000000965) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24839.74131948253489) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.35781818181818537) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.06035185914383755373) ) ) {
                sum += (double)-0.003995246377729190848;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1036061969132185817) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-27390.08921065179311) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1702908340369640727) ) ) {
                      sum += (double)-0.002861868855447332813;
                    } else {
                      sum += (double)0.001304046600505337408;
                    }
                  } else {
                    sum += (double)0.00559516332636738993;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.41428571428571814) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                      sum += (double)-0.001077216767992737962;
                    } else {
                      sum += (double)0.003200783162795495414;
                    }
                  } else {
                    sum += (double)-0.006207333375801119164;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3689500000000000557) ) ) {
                sum += (double)0.005804317670324084244;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-42515.07229609502247) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-53428.13244237575418) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363200000000000633) ) ) {
                      sum += (double)0.0004415401714238793547;
                    } else {
                      sum += (double)0.004799362616217489955;
                    }
                  } else {
                    sum += (double)0.006775017656356460867;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6199252650020550259) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08900840403564362624) ) ) {
                      sum += (double)-0.002586721865652133034;
                    } else {
                      sum += (double)0.001822966261815319291;
                    }
                  } else {
                    sum += (double)-0.004206614392420073879;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)38933.33430093093193) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24053.73781696207516) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2632500000000000395) ) ) {
                  sum += (double)-0.005849577184302034473;
                } else {
                  sum += (double)0.0006288205195573060187;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-23408.498900080147) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3420950000000000935) ) ) {
                    sum += (double)0.00460888720854589224;
                  } else {
                    sum += (double)0.001239735627534464552;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6213000000000000744) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
                      sum += (double)1.371296766795782439e-05;
                    } else {
                      sum += (double)-0.0009941157773248577526;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4587524074502786764) ) ) {
                      sum += (double)0.004283293327812574477;
                    } else {
                      sum += (double)-0.0008116993487069164596;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.003344221879564521997;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4978420000000000623) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3781980000000000897) ) ) {
              sum += (double)-0.0006854757823699497016;
            } else {
              sum += (double)-0.005974833112142703684;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-27390.08921065179311) ) ) {
              sum += (double)-0.001926595143022752626;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.7367000000000001325) ) ) {
                sum += (double)-0.0003526046848977429718;
              } else {
                sum += (double)0.003865248265312459016;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.7050000000000000711) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5050000000000001155) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3650000000000000466) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2164415000000000366) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4587524074502786764) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)6178.216161766199548) ) ) {
                    sum += (double)0.001028920768730435652;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1460500000000000409) ) ) {
                      sum += (double)-0.000130314529691734674;
                    } else {
                      sum += (double)0.0004513191030159650549;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1607000000000000095) ) ) {
                    sum += (double)-0.0008516026680690221094;
                  } else {
                    sum += (double)-8.241997787712116764e-05;
                  }
                }
              } else {
                sum += (double)-0.002297627151084385023;
              }
            } else {
              sum += (double)0.001317563967679494805;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-28217.98058526761452) ) ) {
              sum += (double)0.001487839600332607325;
            } else {
              sum += (double)0.006834636670917828942;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.32834040296925338) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7451.581543301115744) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.75486037469071476) ) ) {
                sum += (double)0.002212628693831965743;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6795141123970477315) ) ) {
                  sum += (double)-0.002871005771557229823;
                } else {
                  sum += (double)-0.0005972666599892485252;
                }
              }
            } else {
              sum += (double)0.005462013275604340502;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.948187489548568796) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3819500000000000672) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3176158234407915892) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4283830000000000693) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3724040000000000683) ) ) {
                      sum += (double)-6.631319319262132458e-05;
                    } else {
                      sum += (double)-0.003222653162432398931;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2158000000000000196) ) ) {
                      sum += (double)0.006424287729341672006;
                    } else {
                      sum += (double)-0.0004794589066866454573;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4254330624375546877) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2114255000000000162) ) ) {
                      sum += (double)-0.0004273284109372248803;
                    } else {
                      sum += (double)-0.003603420582910766071;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3859225000000000572) ) ) {
                      sum += (double)-0.0008942852288007075269;
                    } else {
                      sum += (double)0.0009846624926420637254;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)40.22777777777778141) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.63929539295393312) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)109.0641025641025834) ) ) {
                      sum += (double)-0.0007517851986310048048;
                    } else {
                      sum += (double)-0.004764450149066243659;
                    }
                  } else {
                    sum += (double)-0.006480755614799472118;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6682000000000001272) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
                      sum += (double)0.002563803129453602267;
                    } else {
                      sum += (double)-0.002266827481201421496;
                    }
                  } else {
                    sum += (double)0.003174740609835424894;
                  }
                }
              }
            } else {
              sum += (double)0.002071312994950090264;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1766435000000000366) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3383000000000001006) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03500000000000001027) ) ) {
          sum += (double)0.001845375028588408343;
        } else {
          sum += (double)-0.0003751684389520145444;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1006120000000000209) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)474.2399380804953921) ) ) {
            sum += (double)-0.0005052012593504709393;
          } else {
            sum += (double)-6.543568982275616735e-05;
          }
        } else {
          sum += (double)-0.001011107397915814903;
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5454500000000001014) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1748500000000000332) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6779663431404205909) ) ) {
            sum += (double)0.002319257380446874874;
          } else {
            sum += (double)-0.001530558269618421561;
          }
        } else {
          sum += (double)-0.002436458009294162948;
        }
      } else {
        sum += (double)-0.003160150339094731052;
      }
    }
  }
  return sum;
}
