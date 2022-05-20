#include "header.h"
double predict_margin_unit11(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3730200082063674927) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.456695079803466797) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2471444979310035706) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4106.695556640625) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1488799974322319031) ) ) {
            sum += (double)0.156927420454545441;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2075000032782554626) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.7068328857421875) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2072555050253868103) ) ) {
                  sum += (double)0.3217860543478260893;
                } else {
                  sum += (double)0.3860262692307692145;
                }
              } else {
                sum += (double)0.2518894861111111161;
              }
            } else {
              sum += (double)0.1801550000000000373;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.487012863159179688) ) ) {
            sum += (double)0.1849380416666666638;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.12272834777832031) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.36341667175292969) ) ) {
                sum += (double)0.09254202380952379625;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04510000068694353104) ) ) {
                  sum += (double)0.01400477777777777572;
                } else {
                  sum += (double)0.03191792499999999977;
                }
              }
            } else {
              sum += (double)0.148289499999999963;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9590523242950439453) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001750000054016709328) ) ) {
            sum += (double)0.535032130952380891;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2056.26678466796875) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.283674955368041992) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08964999765157699585) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.16634821891784668) ) ) {
                    sum += (double)0.4056609404761905013;
                  } else {
                    sum += (double)0.4469444166666667329;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4959999918937683105) ) ) {
                    sum += (double)0.4027607364864865258;
                  } else {
                    sum += (double)0.3609652083333332873;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3232295066118240356) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6962499916553497314) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.67136144638061523) ) ) {
                      sum += (double)0.3216911562499999433;
                    } else {
                      sum += (double)0.4075473499999999749;
                    }
                  } else {
                    sum += (double)0.2086261071428571479;
                  }
                } else {
                  sum += (double)0.430581758333333342;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1487563997507095337) ) ) {
                sum += (double)0.3705205500000000041;
              } else {
                sum += (double)0.1781112250000000397;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3005.94970703125) ) ) {
            sum += (double)0.2083701718750000098;
          } else {
            sum += (double)0.01738922619047619106;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2547229975461959839) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.62019252777099609) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7743.21044921875) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3185768574476242065) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03804999962449073792) ) ) {
                sum += (double)0.2165801562500000166;
              } else {
                sum += (double)0.09007923214285715185;
              }
            } else {
              sum += (double)0.2357413194444444027;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.125330999493598938) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2120106443762779236) ) ) {
                sum += (double)0.005426295454545455345;
              } else {
                sum += (double)0.03033286250000000184;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4538.952392578125) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.6094822883605957) ) ) {
                  sum += (double)0.2152916833333333446;
                } else {
                  sum += (double)0.05193467045454545211;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1982085034251213074) ) ) {
                  sum += (double)0.07165499999999999647;
                } else {
                  sum += (double)0.02112264705882352725;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07178550213575363159) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1408999934792518616) ) ) {
              sum += (double)0.05065689583333333329;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04427749849855899811) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8504999876022338867) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02221600059419870377) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.01517950044944882393) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.003147576923076923511;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02985549997538328171) ) ) {
                      sum += (double)0.005194500000000000332;
                    } else {
                      sum += (double)0.002938086956521738895;
                    }
                  }
                } else {
                  sum += (double)0.007251071428571427904;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05489999987185001373) ) ) {
                  sum += (double)0.01233210294117647113;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.482550010085105896) ) ) {
                    sum += (double)0.002845333333333333395;
                  } else {
                    sum += (double)0.006134999999999999828;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8554.18994140625) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.60548496246337891) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21606.0595703125) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.155310995876789093) ) ) {
                    sum += (double)0.1145062666666666756;
                  } else {
                    sum += (double)0.2131558035714285482;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6044999957084655762) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3322421610355377197) ) ) {
                      sum += (double)0.1341212500000000252;
                    } else {
                      sum += (double)0.04922510606060605254;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1519464999437332153) ) ) {
                      sum += (double)0.008202799999999999675;
                    } else {
                      sum += (double)0.05057502631578946611;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.146192498505115509) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)106.2747421264648438) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1161219999194145203) ) ) {
                      sum += (double)0.01390416176470588364;
                    } else {
                      sum += (double)0.03732994230769231397;
                    }
                  } else {
                    sum += (double)0.003292000000000001522;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3206299394369125366) ) ) {
                    sum += (double)0.124363953124999968;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1741354987025260925) ) ) {
                      sum += (double)0.09438082692307693533;
                    } else {
                      sum += (double)0.01856559374999999443;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.38690471649169922) ) ) {
                sum += (double)0.04637487068965515796;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1308999955654144287) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.25824260711669922) ) ) {
                    sum += (double)0.002843057142857143178;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3443500101566314697) ) ) {
                      sum += (double)0.002500000000000000052;
                    } else {
                      sum += (double)0.01698826666666666471;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4567.749755859375) ) ) {
                    sum += (double)0.02467799999999999855;
                  } else {
                    sum += (double)0.008082717391304349713;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.30689764022827148) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05309999920427799225) ) ) {
            sum += (double)0.04358365789473683111;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9779.37646484375) ) ) {
              sum += (double)0.3671104256756756445;
            } else {
              sum += (double)0.2118213194444444336;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5441.749755859375) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.47668361663818359) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.20099449157714844) ) ) {
                sum += (double)0.1087174351851851878;
              } else {
                sum += (double)0.2956220208333333876;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5579499900341033936) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.17857170104980469) ) ) {
                  sum += (double)0.08302548214285714046;
                } else {
                  sum += (double)0.0294982282608695634;
                }
              } else {
                sum += (double)0.1315558611111111165;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1357.7510986328125) ) ) {
              sum += (double)0.008782321428571429264;
            } else {
              sum += (double)0.05120441666666666197;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.500843241810798645) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5677529871463775635) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.770978927612304688) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1938.53759765625) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02185000013560056686) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.39141368865966797) ) ) {
                sum += (double)0.5617295833333332267;
              } else {
                sum += (double)0.6538950166666666064;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8906999826431274414) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.20640254020690918) ) ) {
                  sum += (double)0.4747242222222222141;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0833976157009601593) ) ) {
                    sum += (double)0.4835372000000000003;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4627555012702941895) ) ) {
                      sum += (double)0.5175730595238096088;
                    } else {
                      sum += (double)0.5585141612903226083;
                    }
                  }
                }
              } else {
                sum += (double)0.401499173076923066;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.538359880447387695) ) ) {
              sum += (double)0.5937750156250000133;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7221499979496002197) ) ) {
                sum += (double)0.4969337282608695672;
              } else {
                sum += (double)0.3237247115384614959;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.462560996413230896) ) ) {
            sum += (double)0.2880299038461538452;
          } else {
            sum += (double)0.4399478166666666579;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.752637147903442383) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.613146305084228516) ) ) {
              sum += (double)0.6468485499999999666;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.73171544075012207) ) ) {
                sum += (double)0.7430612499999998954;
              } else {
                sum += (double)0.7041976944444445774;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07294999808073043823) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8496383428573608398) ) ) {
                sum += (double)0.8631163593749999752;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2234.0103759765625) ) ) {
                  sum += (double)0.8422205769230768357;
                } else {
                  sum += (double)0.8040714583333333776;
                }
              }
            } else {
              sum += (double)0.7809176249999999486;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.32926750183105469) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6516920030117034912) ) ) {
              sum += (double)0.6259218043478260718;
            } else {
              sum += (double)0.7028000416666667638;
            }
          } else {
            sum += (double)0.4692563970588234934;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5167984962463378906) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.288064956665039062) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2833.0113525390625) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4325644969940185547) ) ) {
              sum += (double)0.3825197343749999757;
            } else {
              sum += (double)0.4357801000000000036;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.807593107223510742) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.07409999892115592957) ) ) {
                sum += (double)0.2004172750000000336;
              } else {
                sum += (double)0.3536083392857142793;
              }
            } else {
              sum += (double)0.1446455681818181738;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9613.73095703125) ) ) {
            sum += (double)0.2487447619047619685;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4425304979085922241) ) ) {
              sum += (double)0.1115926583333333305;
            } else {
              sum += (double)0.02759410416666666435;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-955.803436279296875) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06945000216364860535) ) ) {
            sum += (double)0.3584864807692307864;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.630369305610656738) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3322000056505203247) ) ) {
                sum += (double)0.5861022734375000987;
              } else {
                sum += (double)0.5048873653846153164;
              }
            } else {
              sum += (double)0.3792720760869566221;
            }
          }
        } else {
          sum += (double)0.2735379038461538403;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3804129958152770996) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.950584888458251953) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1403499990701675415) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1101900003850460052) ) ) {
          sum += (double)0.01599554545454545673;
        } else {
          sum += (double)0.1058427934782608659;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.05718076229095459) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.294934496283531189) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1546.64678955078125) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4242.560791015625) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2322530001401901245) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01600000029429793358) ) ) {
                    sum += (double)0.4168964615384614936;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.49739837646484375) ) ) {
                      sum += (double)0.3300038214285714311;
                    } else {
                      sum += (double)0.2023970955882352651;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10257.505859375) ) ) {
                    sum += (double)0.4399694772727272829;
                  } else {
                    sum += (double)0.3398057031250000248;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.367383718490600586) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.782732486724853516) ) ) {
                    sum += (double)0.3649135000000000018;
                  } else {
                    sum += (double)0.2840693799999999825;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.460684299468994141) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6806499958038330078) ) ) {
                      sum += (double)0.250169845238095323;
                    } else {
                      sum += (double)0.1738895833333333474;
                    }
                  } else {
                    sum += (double)0.09797779411764705182;
                  }
                }
              }
            } else {
              sum += (double)0.08744188793103445378;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004100000020116567612) ) ) {
              sum += (double)0.5178925208333333696;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2476.0946044921875) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2302553355693817139) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3206399977207183838) ) ) {
                    sum += (double)0.3769106447368421597;
                  } else {
                    sum += (double)0.4517352499999999216;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.31283760070800781) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4633.580322265625) ) ) {
                      sum += (double)0.375489193181818226;
                    } else {
                      sum += (double)0.4169734166666667075;
                    }
                  } else {
                    sum += (double)0.2943286785714285259;
                  }
                }
              } else {
                sum += (double)0.2765499270833333689;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.193059921264648438) ) ) {
            sum += (double)0.1799227666666666503;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2451.3175048828125) ) ) {
              sum += (double)0.05069099000000000521;
            } else {
              sum += (double)0.01515427272727272803;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.76161623001098633) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7883.8984375) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1627960056066513062) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3089700490236282349) ) ) {
              sum += (double)0.1589682083333333329;
            } else {
              sum += (double)0.07295695312499998753;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19895.677734375) ) ) {
              sum += (double)0.3286645909090908924;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5457027554512023926) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2877244949340820312) ) ) {
                  sum += (double)0.217228971153846151;
                } else {
                  sum += (double)0.3350202499999999639;
                }
              } else {
                sum += (double)0.1320243124999999906;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1248619966208934784) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2968935668468475342) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.92995071411132812) ) ) {
                sum += (double)0.009484735294117647986;
              } else {
                sum += (double)0.002500000000000000052;
              }
            } else {
              sum += (double)0.04313610294117647265;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.28437995910644531) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3259.7789306640625) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3424021005630493164) ) ) {
                  sum += (double)0.07828095000000000192;
                } else {
                  sum += (double)0.1996435961538461645;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2420474961400032043) ) ) {
                  sum += (double)0.05174451785714285351;
                } else {
                  sum += (double)0.008443812499999999929;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.11233139038085938) ) ) {
                sum += (double)0.2837710441176470311;
              } else {
                sum += (double)0.1126468166666666632;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345710039138793945) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.13558950275182724) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07196350023150444031) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1850999966263771057) ) ) {
                sum += (double)0.05388994047619047323;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20832.8955078125) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)66.39786911010742188) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-33447.3857421875) ) ) {
                      sum += (double)0.01400912500000000074;
                    } else {
                      sum += (double)0.00558097826086956586;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1959500014781951904) ) ) {
                      sum += (double)0.002500000000000000919;
                    } else {
                      sum += (double)0.005964200000000001098;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.75853347778320312) ) ) {
                    sum += (double)0.004092948275862069198;
                  } else {
                    sum += (double)0.002500000000000000919;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0853369981050491333) ) ) {
                sum += (double)0.06535251086956520017;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6679500043392181396) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)61.06442642211914062) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5615121424198150635) ) ) {
                      sum += (double)0.01565485897435897264;
                    } else {
                      sum += (double)0.0384286374999999944;
                    }
                  } else {
                    sum += (double)0.003366730769230769429;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-30201.5068359375) ) ) {
                    sum += (double)0.1034573541666666679;
                  } else {
                    sum += (double)0.01080536666666666833;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6630937755107879639) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1982000023126602173) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.75555562973022461) ) ) {
                  sum += (double)0.08561785714285714832;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1938704997301101685) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.35714340209960938) ) ) {
                      sum += (double)0.04243726470588235489;
                    } else {
                      sum += (double)0.01443443750000000282;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2164440006017684937) ) ) {
                      sum += (double)0.09867040909090905865;
                    } else {
                      sum += (double)0.04534317857142855512;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.38099193572998047) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5910499989986419678) ) ) {
                    sum += (double)0.1238624732142856871;
                  } else {
                    sum += (double)0.1822371470588235454;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2036740034818649292) ) ) {
                    sum += (double)0.02388217500000000201;
                  } else {
                    sum += (double)0.07538194230769229565;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)73.64706039428710938) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8977.38916015625) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.941253662109375) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.18843555450439453) ) ) {
                      sum += (double)0.08588560714285715936;
                    } else {
                      sum += (double)0.02648553749999999971;
                    }
                  } else {
                    sum += (double)0.1148141041666666529;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3662.715087890625) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.337184488773345947) ) ) {
                      sum += (double)0.04900409374999999124;
                    } else {
                      sum += (double)0.01724959090909091233;
                    }
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)210.4564361572265625) ) ) {
                  sum += (double)0.002809343750000000209;
                } else {
                  sum += (double)0.007394767857142857566;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9484573304653167725) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.92378044128417969) ) ) {
              sum += (double)0.1676607499999999973;
            } else {
              sum += (double)0.2804756964285714527;
            }
          } else {
            sum += (double)0.04011595833333333333;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.608510494232177734) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1926.77142333984375) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.36085987091064453) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.112508773803710938) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.954715132713317871) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.452947854995727539) ) ) {
                    sum += (double)0.4587801499999999977;
                  } else {
                    sum += (double)0.5423890131578946727;
                  }
                } else {
                  sum += (double)0.4107773928571428756;
                }
              } else {
                sum += (double)0.5725751956521738517;
              }
            } else {
              sum += (double)0.59492594166666668;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4503329992294311523) ) ) {
              sum += (double)0.3905714411764705796;
            } else {
              sum += (double)0.4938444999999999641;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.61587333679199219) ) ) {
            sum += (double)0.4657284074074073965;
          } else {
            sum += (double)0.2932670483870968292;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7172160148620605469) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992500126361846924) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6219575107097625732) ) ) {
              sum += (double)0.4972136354166665773;
            } else {
              sum += (double)0.6606692115384616981;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1320.23370361328125) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05345000140368938446) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2004.5660400390625) ) ) {
                  sum += (double)0.7031311071428570925;
                } else {
                  sum += (double)0.6449640263157894182;
                }
              } else {
                sum += (double)0.6307458942307692107;
              }
            } else {
              sum += (double)0.7465526428571428452;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.361916422843933105) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07485000044107437134) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8438450098037719727) ) ) {
                sum += (double)0.8695482166666667068;
              } else {
                sum += (double)0.8187549051724138938;
              }
            } else {
              sum += (double)0.7402380147058823523;
            }
          } else {
            sum += (double)0.7199343095238095458;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5527740120887756348) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.883204728364944458) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.555555343627929688) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2955999970436096191) ) ) {
              sum += (double)0.4476761071428571603;
            } else {
              sum += (double)0.5099390833333333761;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09200000017881393433) ) ) {
              sum += (double)0.1583037812499999974;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.02109241485595703) ) ) {
                sum += (double)0.3559341374999999696;
              } else {
                sum += (double)0.2789138653846153781;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2845.7130126953125) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.92392826080322266) ) ) {
              sum += (double)0.4069048593750000387;
            } else {
              sum += (double)0.1738227019230768888;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4845700114965438843) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.691678524017333984) ) ) {
                sum += (double)0.1635757232142857343;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4171679913997650146) ) ) {
                  sum += (double)0.058078644736842093;
                } else {
                  sum += (double)0.1031485833333333352;
                }
              }
            } else {
              sum += (double)0.2767438906249999886;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.029400944709777832) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3322000056505203247) ) ) {
            sum += (double)0.654522090909090859;
          } else {
            sum += (double)0.4381068611111111344;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.769084692001342773) ) ) {
            sum += (double)0.4445633035714285364;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.44464206695556641) ) ) {
              sum += (double)0.1239249999999999796;
            } else {
              sum += (double)0.3517503269230769503;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3802810013294219971) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.653235435485839844) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1874.20947265625) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2707985043525695801) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0008999999845400452614) ) ) {
            sum += (double)0.4164847499999999592;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1488799974322319031) ) ) {
              sum += (double)0.09190150925925927305;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7997491955757141113) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2252394258975982666) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1074340082705020905) ) ) {
                    sum += (double)0.2806274625000000356;
                  } else {
                    sum += (double)0.1577810125000000119;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5118.264892578125) ) ) {
                    sum += (double)0.2600787708333333614;
                  } else {
                    sum += (double)0.3241387884615384296;
                  }
                }
              } else {
                sum += (double)0.1288386911764705656;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01705000083893537521) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.518010854721069336) ) ) {
              sum += (double)0.4691723749999999193;
            } else {
              sum += (double)0.5402978625000000035;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4612497687339782715) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.244957923889160156) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3327.4100341796875) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2302553355693817139) ) ) {
                    sum += (double)0.4217743625000000551;
                  } else {
                    sum += (double)0.3815717661290322082;
                  }
                } else {
                  sum += (double)0.4505228703703703652;
                }
              } else {
                sum += (double)0.3087303157894736305;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5148.9970703125) ) ) {
                sum += (double)0.3655936956521739778;
              } else {
                sum += (double)0.2136424999999999574;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.436507940292358398) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-978.03826904296875) ) ) {
            sum += (double)0.2529465967741935661;
          } else {
            sum += (double)0.1070996052631579126;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2507435008883476257) ) ) {
            sum += (double)0.01199502631578947508;
          } else {
            sum += (double)0.09560968749999999849;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.146993003785610199) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.87402820587158203) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4714.392333984375) ) ) {
            sum += (double)0.1868156093750000246;
          } else {
            sum += (double)0.05017485294117646211;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0722170025110244751) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2114999964833259583) ) ) {
              sum += (double)0.02597780769230769241;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7944134175777435303) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.20454597473144531) ) ) {
                  sum += (double)0.008179812499999999584;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05425200052559375763) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.09615325927734375) ) ) {
                      sum += (double)0.004480692307692307925;
                    } else {
                      sum += (double)0.00262094000000000129;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15662.58740234375) ) ) {
                      sum += (double)0.009006576923076924437;
                    } else {
                      sum += (double)0.00267361111111111098;
                    }
                  }
                }
              } else {
                sum += (double)0.01370414999999999828;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11499.205078125) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.60778236389160156) ) ) {
                sum += (double)0.1315435769230769159;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1479999944567680359) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1049109995365142822) ) ) {
                    sum += (double)0.0357748421052631535;
                  } else {
                    sum += (double)0.01038169354838709701;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5130974501371383667) ) ) {
                    sum += (double)0.02801981250000000132;
                  } else {
                    sum += (double)0.08291591304347824265;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.44423007965087891) ) ) {
                sum += (double)0.04971388235294116331;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1229014992713928223) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08989049866795539856) ) ) {
                    sum += (double)0.004202187500000001061;
                  } else {
                    sum += (double)0.0122390113636363651;
                  }
                } else {
                  sum += (double)0.02459659000000000151;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3372901231050491333) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3109924942255020142) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4536.6142578125) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.04398155212402344) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6324.894775390625) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2363299950957298279) ) ) {
                    sum += (double)0.2463692368421052659;
                  } else {
                    sum += (double)0.3423933375000000057;
                  }
                } else {
                  sum += (double)0.1575343645833332806;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.17966499924659729) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1628635004162788391) ) ) {
                    sum += (double)0.08643673529411766143;
                  } else {
                    sum += (double)0.04220486842105262287;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2717079669237136841) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7284500002861022949) ) ) {
                      sum += (double)0.1956981857142857384;
                    } else {
                      sum += (double)0.1271187599999999973;
                    }
                  } else {
                    sum += (double)0.09655823809523808587;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.960769176483154297) ) ) {
                sum += (double)0.08140841666666666365;
              } else {
                sum += (double)0.02943626470588235622;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.748300015926361084) ) ) {
              sum += (double)0.3545928863636363948;
            } else {
              sum += (double)0.2661322656249999752;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5302499830722808838) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5398.585205078125) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.69074249267578125) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10296.70654296875) ) ) {
                  sum += (double)0.2675237857142857001;
                } else {
                  sum += (double)0.1190041964285714349;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2424295023083686829) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1730099990963935852) ) ) {
                    sum += (double)0.09245265384615383719;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.61594200134277344) ) ) {
                      sum += (double)0.06051931666666666293;
                    } else {
                      sum += (double)0.01480104999999999962;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.45220565795898438) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8580194413661956787) ) ) {
                      sum += (double)0.09970859459459457952;
                    } else {
                      sum += (double)0.04261196551724137638;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)73.82097244262695312) ) ) {
                      sum += (double)0.212137949999999964;
                    } else {
                      sum += (double)0.0516684807692307721;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.16666698455810547) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.25) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2475999966263771057) ) ) {
                    sum += (double)0.01195506521739130371;
                  } else {
                    sum += (double)0.0356151093749999953;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2555.320068359375) ) ) {
                    sum += (double)0.1730569852941176434;
                  } else {
                    sum += (double)0.07259820833333334444;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3335.6925048828125) ) ) {
                  sum += (double)0.01803646428571428414;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1633.931396484375) ) ) {
                    sum += (double)0.002500000000000000486;
                  } else {
                    sum += (double)0.01181480000000000204;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.94834709167480469) ) ) {
              sum += (double)0.2258510921052631626;
            } else {
              sum += (double)0.1158021666666666366;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4056834876537322998) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.605323493480682373) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.66363668441772461) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4449169933795928955) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7682999968528747559) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.284993171691894531) ) ) {
                sum += (double)0.4330207613636363195;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1922676712274551392) ) ) {
                  sum += (double)0.4992165468749999446;
                } else {
                  sum += (double)0.5538196875000001018;
                }
              }
            } else {
              sum += (double)0.368645842592592532;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.47508847713470459) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.651617288589477539) ) ) {
                sum += (double)0.4968054027777777382;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5108679831027984619) ) ) {
                  sum += (double)0.5636598425925926081;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1769.0440673828125) ) ) {
                    sum += (double)0.6066755357142856742;
                  } else {
                    sum += (double)0.6739280000000000825;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1919.49127197265625) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5447575151920318604) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1242311373353004456) ) ) {
                    sum += (double)0.473832604166666671;
                  } else {
                    sum += (double)0.5753321730769230813;
                  }
                } else {
                  sum += (double)0.6068129464285715313;
                }
              } else {
                sum += (double)0.3646124130434782451;
              }
            }
          }
        } else {
          sum += (double)0.3160185249999999946;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.638506770133972168) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.733775019645690918) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7320500016212463379) ) ) {
              sum += (double)0.6895913269230768972;
            } else {
              sum += (double)0.7405671124999999577;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02704999968409538269) ) ) {
              sum += (double)0.8346713225806451364;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8322224915027618408) ) ) {
                sum += (double)0.7433056805555555702;
              } else {
                sum += (double)0.8096685441176469933;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.65909099578857422) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6839055120944976807) ) ) {
              sum += (double)0.6448873541666665377;
            } else {
              sum += (double)0.7117619821428571303;
            }
          } else {
            sum += (double)0.5301637000000000155;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4640775024890899658) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6058602333068847656) ) ) {
          sum += (double)0.434817941176470546;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.43038272857666016) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
              sum += (double)0.3641616296296296129;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.708333373069763184) ) ) {
                sum += (double)0.2311723229166666727;
              } else {
                sum += (double)0.0923064519230768904;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.35035800933837891) ) ) {
              sum += (double)0.04560472058823529518;
            } else {
              sum += (double)0.1435683281249999776;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.230263113975524902) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5700338184833526611) ) ) {
            sum += (double)0.6352225468750000159;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.274540483951568604) ) ) {
              sum += (double)0.4890837368421051545;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.555548012256622314) ) ) {
                sum += (double)0.4333952934782608346;
              } else {
                sum += (double)0.3064381176470588053;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4158.9404296875) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1115499995648860931) ) ) {
              sum += (double)0.2656312700000000304;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9918491840362548828) ) ) {
                sum += (double)0.5029761607142856361;
              } else {
                sum += (double)0.3972966315789474012;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1350999996066093445) ) ) {
              sum += (double)0.2820356770833333804;
            } else {
              sum += (double)0.1265668970588235132;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3839095085859298706) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.49475526809692383) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2505149990320205688) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4210.100830078125) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001999999949475750327) ) ) {
            sum += (double)0.4010138125000000664;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1447290033102035522) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.928571224212646484) ) ) {
                sum += (double)0.1436500476190476494;
              } else {
                sum += (double)0.03673295370370370516;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.679401397705078125) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2075000032782554626) ) ) {
                  sum += (double)0.3324944142857142459;
                } else {
                  sum += (double)0.1748874880952381028;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13546.12060546875) ) ) {
                  sum += (double)0.278343819444444418;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6650499999523162842) ) ) {
                    sum += (double)0.09715889583333332802;
                  } else {
                    sum += (double)0.163952965909090892;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.349340915679931641) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1384220048785209656) ) ) {
              sum += (double)0.07791298809523809765;
            } else {
              sum += (double)0.2371555625000000556;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09345000237226486206) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1652235016226768494) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008549999911338090897) ) ) {
                  sum += (double)0.03148917187499999937;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.35347986221313477) ) ) {
                    sum += (double)0.008205782608695652916;
                  } else {
                    sum += (double)0.003071928571428571807;
                  }
                }
              } else {
                sum += (double)0.05204983928571427221;
              }
            } else {
              sum += (double)0.0840843043478260721;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.814081728458404541) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0007499999774154275656) ) ) {
            sum += (double)0.5426003425925925994;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.388249397277832031) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1611.07354736328125) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2764400094747543335) ) ) {
                  sum += (double)0.3387569196428570906;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3589064925909042358) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0185000002384185791) ) ) {
                      sum += (double)0.4499799666666666753;
                    } else {
                      sum += (double)0.3858808484848484377;
                    }
                  } else {
                    sum += (double)0.4578281624999999688;
                  }
                }
              } else {
                sum += (double)0.2456225300000000056;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3299775123596191406) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09560000151395797729) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.52901744842529297) ) ) {
                    sum += (double)0.05506867647058823895;
                  } else {
                    sum += (double)0.1527672187500000167;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3002879172563552856) ) ) {
                    sum += (double)0.212934919354838742;
                  } else {
                    sum += (double)0.3597562380952381011;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6380.7568359375) ) ) {
                  sum += (double)0.4230397282608695519;
                } else {
                  sum += (double)0.2733299444444444726;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3002.78369140625) ) ) {
            sum += (double)0.1802946923076922947;
          } else {
            sum += (double)0.02505427777777777601;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2473215013742446899) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36350345611572266) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.45296049118041992) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.96290731430053711) ) ) {
              sum += (double)0.1122748815789473414;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1625540032982826233) ) ) {
                sum += (double)0.0113980390625000004;
              } else {
                sum += (double)0.1048469464285714248;
              }
            }
          } else {
            sum += (double)0.193432440476190487;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4698499888181686401) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07202149927616119385) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1370999962091445923) ) ) {
                sum += (double)0.0721084772727272616;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04306649975478649139) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2056499943137168884) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02944599930197000504) ) ) {
                      sum += (double)0.002500000000000000919;
                    } else {
                      sum += (double)0.00335476190476190466;
                    }
                  } else {
                    sum += (double)0.006329562500000000119;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06122849881649017334) ) ) {
                    sum += (double)0.009636911764705883426;
                  } else {
                    sum += (double)0.003570444444444445097;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7422136962413787842) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1979499980807304382) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08158849924802780151) ) ) {
                    sum += (double)0.09510713235294118717;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2036755010485649109) ) ) {
                      sum += (double)0.02028174999999998382;
                    } else {
                      sum += (double)0.07325224999999999098;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2875500023365020752) ) ) {
                    sum += (double)0.1143860089285714254;
                  } else {
                    sum += (double)0.02428650000000000253;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-160683.6953125) ) ) {
                  sum += (double)0.03767454999999998722;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5503499805927276611) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4368.82763671875) ) ) {
                      sum += (double)0.01128902727272726794;
                    } else {
                      sum += (double)0.002982760000000000532;
                    }
                  } else {
                    sum += (double)0.02082890000000000436;
                  }
                }
              }
            }
          } else {
            sum += (double)0.1027806250000000005;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4930.85009765625) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8964445292949676514) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.69728851318359375) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7830500006675720215) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.31525993347167969) ) ) {
                  sum += (double)0.1615070147058823569;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3240500092506408691) ) ) {
                    sum += (double)0.3390628571428571658;
                  } else {
                    sum += (double)0.2454679333333333324;
                  }
                }
              } else {
                sum += (double)0.1355503750000000285;
              }
            } else {
              sum += (double)0.08027888888888889962;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.293614998459815979) ) ) {
              sum += (double)0.1308476176470587948;
            } else {
              sum += (double)0.04084256896551724525;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.16666698455810547) ) ) {
            sum += (double)0.06049008749999999074;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2534999921917915344) ) ) {
              sum += (double)0.03501586363636363664;
            } else {
              sum += (double)0.003153879999999999965;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5860525071620941162) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.770978927612304688) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06890000030398368835) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7633500099182128906) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2757.0069580078125) ) ) {
                sum += (double)0.5396019396551723357;
              } else {
                sum += (double)0.4417753482142857124;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5302670001983642578) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4263404905796051025) ) ) {
                  sum += (double)0.6089220735294117448;
                } else {
                  sum += (double)0.5171565833333333639;
                }
              } else {
                sum += (double)0.6557056666666666311;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4220529943704605103) ) ) {
              sum += (double)0.4010434568965516866;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.49841690063476562) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.9375) ) ) {
                  sum += (double)0.4984761481481481682;
                } else {
                  sum += (double)0.4242786190476190433;
                }
              } else {
                sum += (double)0.5589148928571429087;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4246724992990493774) ) ) {
            sum += (double)0.2410630384615384258;
          } else {
            sum += (double)0.4065502692307692012;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.69886398315429688) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.142740987241268158) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.745067715644836426) ) ) {
                sum += (double)0.7508055799999999724;
              } else {
                sum += (double)0.6843459485294116629;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2498915344476699829) ) ) {
                sum += (double)0.6247412857142856657;
              } else {
                sum += (double)0.6828639999999999155;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06940000131726264954) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8333657979965209961) ) ) {
                sum += (double)0.8771456057692307295;
              } else {
                sum += (double)0.8084146184210526664;
              }
            } else {
              sum += (double)0.7492461057692308968;
            }
          }
        } else {
          sum += (double)0.456357765624999967;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5496329963207244873) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9647493362426757812) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.706140279769897461) ) ) {
            sum += (double)0.4604594833333333082;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09930000081658363342) ) ) {
              sum += (double)0.1645114342105263028;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.75) ) ) {
                sum += (double)0.3915175892857142848;
              } else {
                sum += (double)0.2820030294117646386;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.100188374519348145) ) ) {
            sum += (double)0.3700418055555554919;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.019622325897216797) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1717.01214599609375) ) ) {
                sum += (double)0.2703081374999999342;
              } else {
                sum += (double)0.1047192142857142627;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1779000014066696167) ) ) {
                sum += (double)0.1707792647058823388;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.477336764335632324) ) ) {
                  sum += (double)0.08217923529411765016;
                } else {
                  sum += (double)0.02391850000000000226;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.043774247169494629) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.32692289352416992) ) ) {
            sum += (double)0.6246674224137931386;
          } else {
            sum += (double)0.32877626666666665;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.745323657989501953) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6089324951171875) ) ) {
              sum += (double)0.4024461666666666604;
            } else {
              sum += (double)0.4564913437500000559;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9038.6396484375) ) ) {
              sum += (double)0.4331588815789473301;
            } else {
              sum += (double)0.285806978260869593;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4174484908580780029) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.349175930023193359) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2237330004572868347) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1489094942808151245) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.88171768188476562) ) ) {
            sum += (double)0.1632122400000000084;
          } else {
            sum += (double)0.05084868918918918068;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2602.255126953125) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2044190019369125366) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.497521638870239258) ) ) {
                sum += (double)0.3487924166666666603;
              } else {
                sum += (double)0.2721009895833333414;
              }
            } else {
              sum += (double)0.1495171184210526416;
            }
          } else {
            sum += (double)0.1132768928571428468;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.969126582145690918) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3206399977207183838) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2221.6064453125) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003249999950639903545) ) ) {
                sum += (double)0.472736736111111111;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3115714937448501587) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2712945044040679932) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5259.546875) ) ) {
                      sum += (double)0.3985456052631579094;
                    } else {
                      sum += (double)0.280807270833333289;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3291017860174179077) ) ) {
                      sum += (double)0.4598680625000000077;
                    } else {
                      sum += (double)0.3762159210526315745;
                    }
                  }
                } else {
                  sum += (double)0.2604822361111110984;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2833234965801239014) ) ) {
                sum += (double)0.2501056634615385077;
              } else {
                sum += (double)0.1310235192307692142;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4064300060272216797) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3281867802143096924) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0009500000160187482834) ) ) {
                  sum += (double)0.5574629062499999455;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3614729940891265869) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.96954202651977539) ) ) {
                      sum += (double)0.4677722968750000487;
                    } else {
                      sum += (double)0.411403749999999957;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.395289003849029541) ) ) {
                      sum += (double)0.5263846704545454003;
                    } else {
                      sum += (double)0.452234485294117583;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.459166526794433594) ) ) {
                  sum += (double)0.4299548645833333183;
                } else {
                  sum += (double)0.3251387166666666606;
                }
              }
            } else {
              sum += (double)0.3250572934782608447;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.072157740592956543) ) ) {
            sum += (double)0.2799595468750000204;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3019.1319580078125) ) ) {
              sum += (double)0.198231720588235294;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09054999798536300659) ) ) {
                sum += (double)0.0256463055555555576;
              } else {
                sum += (double)0.07339275000000000659;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.18651199340820312) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8692.29345703125) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.262597009539604187) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6327500045299530029) ) ) {
              sum += (double)0.29528179347826089;
            } else {
              sum += (double)0.1260454821428571293;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3025994151830673218) ) ) {
              sum += (double)0.4248677976190475825;
            } else {
              sum += (double)0.3138547187500000391;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.58906269073486328) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4765.255126953125) ) ) {
              sum += (double)0.07721683333333333177;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1191274970769882202) ) ) {
                sum += (double)0.003981194444444444321;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5193499922752380371) ) ) {
                  sum += (double)0.02016511111111111282;
                } else {
                  sum += (double)0.05715835714285714964;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2756.3868408203125) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4477999955415725708) ) ) {
                sum += (double)0.2935372857142857228;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1739879995584487915) ) ) {
                  sum += (double)0.05538970833333332899;
                } else {
                  sum += (double)0.2097030603448276076;
                }
              }
            } else {
              sum += (double)0.03263671428571428279;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3928639888763427734) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1950545012950897217) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.77499961853027344) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21458.619140625) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1023535020649433136) ) ) {
                  sum += (double)0.0502655729166666676;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6304500102996826172) ) ) {
                    sum += (double)0.0864088611111111099;
                  } else {
                    sum += (double)0.2251636323529411787;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8080.87255859375) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3168500065803527832) ) ) {
                    sum += (double)0.1071086249999999851;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1363660022616386414) ) ) {
                      sum += (double)0.01182580303030303023;
                    } else {
                      sum += (double)0.05620335937500000462;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.63783788681030273) ) ) {
                    sum += (double)0.04144641666666666613;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.104399997740983963) ) ) {
                      sum += (double)0.004660570422535212712;
                    } else {
                      sum += (double)0.01734029999999999599;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4310500025749206543) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.260264277458190918) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1728000044822692871) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.102611001580953598) ) ) {
                      sum += (double)0.002969484000000001834;
                    } else {
                      sum += (double)0.00615164285714285726;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)83.95437240600585938) ) ) {
                      sum += (double)0.0132550465116279062;
                    } else {
                      sum += (double)0.002703414285714286335;
                    }
                  }
                } else {
                  sum += (double)0.02514575000000000143;
                }
              } else {
                sum += (double)0.04926625000000000448;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4503.1162109375) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)96.50801467895507812) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-39530.7109375) ) ) {
                  sum += (double)0.2422370781250000327;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.45619583129882812) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7438137531280517578) ) ) {
                      sum += (double)0.1301913881578947163;
                    } else {
                      sum += (double)0.05131446929824561021;
                    }
                  } else {
                    sum += (double)0.2069104666666666814;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2162499949336051941) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09810000285506248474) ) ) {
                    sum += (double)0.04295314423076922877;
                  } else {
                    sum += (double)0.09152227631578947753;
                  }
                } else {
                  sum += (double)0.01765155172413793508;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.54761886596679688) ) ) {
                sum += (double)0.05565248529411764844;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.26086997985839844) ) ) {
                  sum += (double)0.003417760869565217297;
                } else {
                  sum += (double)0.0245715833333333307;
                }
              }
            }
          }
        } else {
          sum += (double)0.2588917934782608565;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6084312200546264648) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6567690074443817139) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.645604372024536133) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.541973501443862915) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1941.93548583984375) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3525.2095947265625) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5676.748779296875) ) ) {
                  sum += (double)0.5100248362068965369;
                } else {
                  sum += (double)0.4119670208333333083;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01245000027120113373) ) ) {
                  sum += (double)0.6285935000000000272;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1517677158117294312) ) ) {
                    sum += (double)0.564036933333333379;
                  } else {
                    sum += (double)0.5303708235294117834;
                  }
                }
              }
            } else {
              sum += (double)0.4315320517241379439;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.952620983123779297) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5893499851226806641) ) ) {
                sum += (double)0.5835643846153845127;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01225000014528632164) ) ) {
                  sum += (double)0.6935899722222220731;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04495000094175338745) ) ) {
                    sum += (double)0.6286821500000000507;
                  } else {
                    sum += (double)0.6654708235294117813;
                  }
                }
              }
            } else {
              sum += (double)0.5391392368421051851;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.70000076293945312) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.00933647155761719) ) ) {
              sum += (double)0.521121032608695578;
            } else {
              sum += (double)0.4082999017857142365;
            }
          } else {
            sum += (double)0.3105440333333333025;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07175000011920928955) ) ) {
            sum += (double)0.7394407894736843012;
          } else {
            sum += (double)0.6604324861111110501;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8963870704174041748) ) ) {
            sum += (double)0.8810953703703704454;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04429999925196170807) ) ) {
              sum += (double)0.7995927124999999691;
            } else {
              sum += (double)0.7509427656249999528;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6841369867324829102) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4871665090322494507) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.288064956665039062) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2510.0093994140625) ) ) {
              sum += (double)0.3615965833333333879;
            } else {
              sum += (double)0.2134568958333333544;
            }
          } else {
            sum += (double)0.08863039130434781365;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07675000280141830444) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.04190000146627426147) ) ) {
              sum += (double)0.348333892857142835;
            } else {
              sum += (double)0.1441571964285714713;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9467031955718994141) ) ) {
              sum += (double)0.4858226600000000173;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.999556601047515869) ) ) {
                sum += (double)0.4386971749999999948;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3456500023603439331) ) ) {
                  sum += (double)0.2153643055555555796;
                } else {
                  sum += (double)0.332635107142857156;
                }
              }
            }
          }
        }
      } else {
        sum += (double)0.5951654407894736432;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.334890365600585938) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2468404993414878845) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3102.8297119140625) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13330.00634765625) ) ) {
            sum += (double)0.3601404687500000534;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.772012472152709961) ) ) {
              sum += (double)0.3373632916666666759;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2075499966740608215) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1706480011343955994) ) ) {
                  sum += (double)0.1672161851851851899;
                } else {
                  sum += (double)0.2770102962962962545;
                }
              } else {
                sum += (double)0.1193812857142857176;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.553977251052856445) ) ) {
            sum += (double)0.1690563750000000087;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06524999812245368958) ) ) {
              sum += (double)0.03450622115384614774;
            } else {
              sum += (double)0.09344786111111109961;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.995824962854385376) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3408444970846176147) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003249999950639903545) ) ) {
              sum += (double)0.527214866666666615;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2494.414306640625) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1943294927477836609) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.459899663925170898) ) ) {
                    sum += (double)0.3827275735294117798;
                  } else {
                    sum += (double)0.2695899565217391158;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3728.5625) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2704624980688095093) ) ) {
                      sum += (double)0.4116117638888889263;
                    } else {
                      sum += (double)0.3720212944444444836;
                    }
                  } else {
                    sum += (double)0.477372399999999919;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.386554718017578125) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.06045079231262207) ) ) {
                    sum += (double)0.2544161250000000485;
                  } else {
                    sum += (double)0.3929861428571427839;
                  }
                } else {
                  sum += (double)0.1465141833333333254;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1233.187255859375) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999862571712583) ) ) {
                sum += (double)0.5641801249999999213;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.932718873023986816) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03034999966621398926) ) ) {
                    sum += (double)0.4885951842105263343;
                  } else {
                    sum += (double)0.4615944687500000421;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.346989870071411133) ) ) {
                    sum += (double)0.3764835462962962676;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.091346025466918945) ) ) {
                      sum += (double)0.4900937380952380407;
                    } else {
                      sum += (double)0.4300904817073170072;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.3354111323529411215;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.099195718765258789) ) ) {
            sum += (double)0.2258184017857143011;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4312.84765625) ) ) {
              sum += (double)0.1692419038461538683;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3570055067539215088) ) ) {
                sum += (double)0.02856186666666666804;
              } else {
                sum += (double)0.06292442647058824057;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.222882002592086792) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.78939533233642578) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10291.52783203125) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008800000287010334432) ) ) {
              sum += (double)0.3190499852941176551;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2361000031232833862) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6566999852657318115) ) ) {
                  sum += (double)0.1007001527777777738;
                } else {
                  sum += (double)0.2193477321428571603;
                }
              } else {
                sum += (double)0.06459070833333331596;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.98148155212402344) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1314854994416236877) ) ) {
                sum += (double)0.01253200999999999968;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1913169994950294495) ) ) {
                  sum += (double)0.1676583161764705898;
                } else {
                  sum += (double)0.03067577499999999888;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08973300084471702576) ) ) {
                sum += (double)0.005136176470588236023;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1731420010328292847) ) ) {
                  sum += (double)0.03663044642857142541;
                } else {
                  sum += (double)0.0107346666666666684;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07196350023150444031) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.80760765075683594) ) ) {
              sum += (double)0.0400617857142857095;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0446629989892244339) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1400.22216796875) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001400000008288770914) ) ) {
                    sum += (double)0.003673038461538461093;
                  } else {
                    sum += (double)0.002500000000000001353;
                  }
                } else {
                  sum += (double)0.006384674999999999379;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05950300022959709167) ) ) {
                  sum += (double)0.01316601562500000107;
                } else {
                  sum += (double)0.003571546875000000502;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21682.7138671875) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)132.9972915649414062) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.60548496246337891) ) ) {
                  sum += (double)0.1328167794117647293;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-33623.90234375) ) ) {
                    sum += (double)0.09807989999999998376;
                  } else {
                    sum += (double)0.02707455952380952852;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09013000130653381348) ) ) {
                  sum += (double)0.05192326470588234932;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5618000030517578125) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)448.4499969482421875) ) ) {
                      sum += (double)0.009860342105263156937;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  } else {
                    sum += (double)0.02584670312500000205;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5491.355224609375) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.169916003942489624) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.22431755065917969) ) ) {
                    sum += (double)0.03314130555555554886;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.0949249267578125) ) ) {
                      sum += (double)0.01664975000000000135;
                    } else {
                      sum += (double)0.002689088235294118025;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1765579953789710999) ) ) {
                    sum += (double)0.08154667857142856857;
                  } else {
                    sum += (double)0.02821665909090909086;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5356979668140411377) ) ) {
                  sum += (double)0.01084030434782608764;
                } else {
                  sum += (double)0.002500000000000000486;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3857000023126602173) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3342.8382568359375) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3790194988250732422) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.15137767791748047) ) ) {
                sum += (double)0.1780615500000000406;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09995000064373016357) ) ) {
                  sum += (double)0.129417178571428565;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1807499974966049194) ) ) {
                    sum += (double)0.06273876388888889599;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2067999988794326782) ) ) {
                      sum += (double)0.0212233000000000005;
                    } else {
                      sum += (double)0.005132222222222222914;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.2124167499999999875;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.186517536640167236) ) ) {
              sum += (double)0.03872602499999999032;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1417500004172325134) ) ) {
                sum += (double)0.01565790000000000237;
              } else {
                sum += (double)0.003564250000000000144;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06824999675154685974) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.89285659790039062) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.9080357551574707) ) ) {
                sum += (double)0.09197708333333334818;
              } else {
                sum += (double)0.03082538793103448138;
              }
            } else {
              sum += (double)0.1472481999999999958;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.48809528350830078) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.96363639831542969) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3338835090398788452) ) ) {
                  sum += (double)0.3111360000000000237;
                } else {
                  sum += (double)0.4478661634615384579;
                }
              } else {
                sum += (double)0.2348394903846153514;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3156024962663650513) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.76844215393066406) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3057000041007995605) ) ) {
                    sum += (double)0.1200706578947368514;
                  } else {
                    sum += (double)0.281531349999999958;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3265444934368133545) ) ) {
                    sum += (double)0.1439778611111111328;
                  } else {
                    sum += (double)0.046630546296296288;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.723749995231628418) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4846500009298324585) ) ) {
                    sum += (double)0.2352361785714285614;
                  } else {
                    sum += (double)0.3902736428571428884;
                  }
                } else {
                  sum += (double)0.1700056447368420987;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3243703395128250122) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5856605172157287598) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.088670015335083008) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5182804763317108154) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7854500114917755127) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.485714435577392578) ) ) {
                sum += (double)0.4868285217391304931;
              } else {
                sum += (double)0.5699333749999999643;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08162003010511398315) ) ) {
                sum += (double)0.4950237000000000109;
              } else {
                sum += (double)0.3901808461538461836;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.50639820098876953) ) ) {
              sum += (double)0.5532202763157894054;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02139999996870756149) ) ) {
                sum += (double)0.6701157031250000173;
              } else {
                sum += (double)0.62386913333333327;
              }
            }
          }
        } else {
          sum += (double)0.3835786547619046694;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.681208610534667969) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1191200204193592072) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8681999742984771729) ) ) {
                sum += (double)0.7541799537037036094;
              } else {
                sum += (double)0.7090349218750000571;
              }
            } else {
              sum += (double)0.6613060625000000137;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8123999834060668945) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.783370018005371094) ) ) {
                sum += (double)0.6348042968749999515;
              } else {
                sum += (double)0.7088663653846154489;
              }
            } else {
              sum += (double)0.5702248552631579148;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.43269252777099609) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1672.965087890625) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.805501461029052734) ) ) {
                sum += (double)0.7265612166666667315;
              } else {
                sum += (double)0.8370680625000000985;
              }
            } else {
              sum += (double)0.8620580874999997922;
            }
          } else {
            sum += (double)0.735009937500000099;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3386.900390625) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.32692289352416992) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7607523500919342041) ) ) {
            sum += (double)0.6100929326923076879;
          } else {
            sum += (double)0.4652993815789474574;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6366959810256958008) ) ) {
            sum += (double)0.2487603250000000044;
          } else {
            sum += (double)0.4698608235294118307;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.861176490783691406) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2771999984979629517) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.081206917762756348) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6068294942378997803) ) ) {
                sum += (double)0.3937336704545453814;
              } else {
                sum += (double)0.4603737692307693363;
              }
            } else {
              sum += (double)0.2151676296296295976;
            }
          } else {
            sum += (double)0.5546479833333334275;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.78571414947509766) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1464.59063720703125) ) ) {
              sum += (double)0.1693714666666666369;
            } else {
              sum += (double)0.08824404999999997667;
            }
          } else {
            sum += (double)0.3471907142857143524;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3285430073738098145) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.469298362731933594) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2549335062503814697) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4202.166259765625) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.477477148175239563) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03889999911189079285) ) ) {
              sum += (double)0.3550483157894736008;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6431999802589416504) ) ) {
                sum += (double)0.3149633416666667296;
              } else {
                sum += (double)0.1676710526315789429;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.070455074310302734) ) ) {
              sum += (double)0.2700566111111111223;
            } else {
              sum += (double)0.1263108333333333166;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.44529438018798828) ) ) {
            sum += (double)0.1633003870967742188;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7828499972820281982) ) ) {
              sum += (double)0.01643115217391304464;
            } else {
              sum += (double)0.1086932258064516182;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.470335662364959717) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0043000001460313797) ) ) {
            sum += (double)0.5189862083333331988;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2539.68701171875) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2570222020149230957) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.51058197021484375) ) ) {
                  sum += (double)0.3902028888888888769;
                } else {
                  sum += (double)0.247459984375000025;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2206000015139579773) ) ) {
                  sum += (double)0.4477520384615384375;
                } else {
                  sum += (double)0.377976547619047587;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.099999904632568359) ) ) {
                sum += (double)0.3430252343750000432;
              } else {
                sum += (double)0.2061968382352941109;
              }
            }
          }
        } else {
          sum += (double)0.06743297222222223442;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.3285369873046875) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9223.24072265625) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2559999972581863403) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5941999852657318115) ) ) {
              sum += (double)0.2996779444444443996;
            } else {
              sum += (double)0.1818651851851851853;
            }
          } else {
            sum += (double)0.3564211547619047793;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1244204975664615631) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.35574245452880859) ) ) {
              sum += (double)0.0258753611111111094;
            } else {
              sum += (double)0.003420547619047618632;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01550000021234154701) ) ) {
              sum += (double)0.2451919423076923121;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.81982421875) ) ) {
                sum += (double)0.03297029761904761436;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.40783405303955078) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.61220073699951172) ) ) {
                    sum += (double)0.2001987656249999692;
                  } else {
                    sum += (double)0.1040250104166666606;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.191104501485824585) ) ) {
                    sum += (double)0.05366266071428571482;
                  } else {
                    sum += (double)0.09386377083333331817;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1950545012950897217) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07202149927616119385) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1370999962091445923) ) ) {
              sum += (double)0.06270343055555555045;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0382499992847442627) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04784000106155872345) ) ) {
                  sum += (double)0.002500000000000000919;
                } else {
                  sum += (double)0.003403900000000000935;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0653499998152256012) ) ) {
                  sum += (double)0.01289252631578947407;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-291005.046875) ) ) {
                    sum += (double)0.008847999999999999962;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)106.3635482788085938) ) ) {
                      sum += (double)0.005645826530612245604;
                    } else {
                      sum += (double)0.002563775510204082449;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10282.9345703125) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.47179508209228516) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.55036544799804688) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.66765689849853516) ) ) {
                    sum += (double)0.1253776022727272899;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1592610031366348267) ) ) {
                      sum += (double)0.02354775531914893999;
                    } else {
                      sum += (double)0.09247259615384616216;
                    }
                  }
                } else {
                  sum += (double)0.1853721136363636335;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3001499921083450317) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-44382.2734375) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)326.966156005859375) ) ) {
                      sum += (double)0.05347764999999999463;
                    } else {
                      sum += (double)0.01026763157894737023;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)40.16813278198242188) ) ) {
                      sum += (double)0.01180709375000000075;
                    } else {
                      sum += (double)0.005447166666666666129;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)111.6361122131347656) ) ) {
                    sum += (double)0.1141599687499999932;
                  } else {
                    sum += (double)0.02528926785714285738;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.63492012023925781) ) ) {
                sum += (double)0.04919811538461537487;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2939.94921875) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.10416603088378906) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1447684988379478455) ) ) {
                      sum += (double)0.03496336666666666204;
                    } else {
                      sum += (double)0.01352861764705882291;
                    }
                  } else {
                    sum += (double)0.007347472222222223986;
                  }
                } else {
                  sum += (double)0.003716086206896552797;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.408749997615814209) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1018500030040740967) ) ) {
              sum += (double)0.1114408611111111225;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.31642532348632812) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.58606529235839844) ) ) {
                  sum += (double)0.109782656250000013;
                } else {
                  sum += (double)0.06191263461538461937;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6427449584007263184) ) ) {
                  sum += (double)0.03858826470588234969;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.89023208618164062) ) ) {
                    sum += (double)0.01289247058823529517;
                  } else {
                    sum += (double)0.004509434782608695395;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-39762.91015625) ) ) {
              sum += (double)0.2551940555555555767;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4746.14599609375) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.86274433135986328) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09230000153183937073) ) ) {
                    sum += (double)0.1061635714285714405;
                  } else {
                    sum += (double)0.2367935882352940891;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2727075070142745972) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.01794910430908203) ) ) {
                      sum += (double)0.1083177166666666608;
                    } else {
                      sum += (double)0.0491790681818181849;
                    }
                  } else {
                    sum += (double)0.1179198695652173834;
                  }
                }
              } else {
                sum += (double)0.01155263888888889007;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5571127235889434814) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5798964798450469971) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.38224649429321289) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4751455038785934448) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.50731754302978516) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1426.64923095703125) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1667575538158416748) ) ) {
                  sum += (double)0.5250834632352940901;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08925000205636024475) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03370000049471855164) ) ) {
                      sum += (double)0.4403941071428572052;
                    } else {
                      sum += (double)0.5167556826923076496;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1781499981880187988) ) ) {
                      sum += (double)0.3493785500000000099;
                    } else {
                      sum += (double)0.4659567236842104276;
                    }
                  }
                }
              } else {
                sum += (double)0.5717836750000000468;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2470.7705078125) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07950000092387199402) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4263.822265625) ) ) {
                    sum += (double)0.5994458214285715014;
                  } else {
                    sum += (double)0.4812817678571427726;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1664500012993812561) ) ) {
                    sum += (double)0.3149529444444444382;
                  } else {
                    sum += (double)0.4484841704545454166;
                  }
                }
              } else {
                sum += (double)0.2954595666666666731;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.886904716491699219) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.731054782867431641) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.444673538208007812) ) ) {
                  sum += (double)0.5132714868421052179;
                } else {
                  sum += (double)0.5630518500000000204;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.71146202087402344) ) ) {
                  sum += (double)0.6174707976190475511;
                } else {
                  sum += (double)0.673454214285714281;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05629999935626983643) ) ) {
                sum += (double)0.4236329722222221816;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1338344626128673553) ) ) {
                  sum += (double)0.4976120312500000309;
                } else {
                  sum += (double)0.5996691093749999535;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.83683013916015625) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5467000007629394531) ) ) {
              sum += (double)0.4238418000000000463;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15469.1328125) ) ) {
                sum += (double)0.3898308636363637114;
              } else {
                sum += (double)0.2437571956521739913;
              }
            }
          } else {
            sum += (double)0.2297567307692308103;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.568561911582946777) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7147440016269683838) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.788998126983642578) ) ) {
              sum += (double)0.6453343695652173917;
            } else {
              sum += (double)0.7173856785714285422;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09685000032186508179) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8970000147819519043) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8034499883651733398) ) ) {
                  sum += (double)0.8292593529411763642;
                } else {
                  sum += (double)0.7828800441176471114;
                }
              } else {
                sum += (double)0.8505163461538459702;
              }
            } else {
              sum += (double)0.7300673750000000739;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.42301750183105469) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6482034921646118164) ) ) {
              sum += (double)0.611150431034482744;
            } else {
              sum += (double)0.7120086250000000616;
            }
          } else {
            sum += (double)0.5245474903846154557;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5791780054569244385) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.96328639984130859) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2845.7130126953125) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2161500006914138794) ) ) {
              sum += (double)0.2942250299999999985;
            } else {
              sum += (double)0.4044819655172413597;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4379590004682540894) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.953351855278015137) ) ) {
                sum += (double)0.1170652968750000023;
              } else {
                sum += (double)0.02583302941176471301;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.110869288444519043) ) ) {
                sum += (double)0.2230644625000000048;
              } else {
                sum += (double)0.3296277499999999416;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.46477699279785156) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.186649322509765625) ) ) {
              sum += (double)0.1245380416666666545;
            } else {
              sum += (double)0.0436615909090908999;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4296405017375946045) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)47.68539237976074219) ) ) {
                sum += (double)0.1543735312500000012;
              } else {
                sum += (double)0.06439370454545455258;
              }
            } else {
              sum += (double)0.2763349833333332839;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7571980059146881104) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1655.56048583984375) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.512443780899047852) ) ) {
              sum += (double)0.4507347083333332893;
            } else {
              sum += (double)0.3443471428571428516;
            }
          } else {
            sum += (double)0.289049715909090954;
          }
        } else {
          sum += (double)0.6142358970588235323;
        }
      }
    }
  }
  return sum;
}
