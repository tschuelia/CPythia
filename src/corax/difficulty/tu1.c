#include "prediction.h"
double predict_margin_unit1(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5466515000000001789) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3325620000000000798) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2053.868197878035971) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.25552350000000007) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
              sum += (double)0.0005038341412074184671;
            } else {
              sum += (double)-0.008648489728993645487;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.327327084680026026) ) ) {
              sum += (double)0.006911424106654328811;
            } else {
              sum += (double)0.0009844550939965498754;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04505000000000000671) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.264912280701754987) ) ) {
              sum += (double)-0.007689102379571538005;
            } else {
              sum += (double)-0.01635489380948982815;
            }
          } else {
            sum += (double)-0.003492798155371184751;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075923801982495709) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4446970000000000645) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9163500000000001089) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9450000000000000622) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.308777777777778262) ) ) {
                  sum += (double)0.005966451236135956494;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2053.868197878035971) ) ) {
                    sum += (double)0.002711383551112079952;
                  } else {
                    sum += (double)-0.01104124295460716561;
                  }
                }
              } else {
                sum += (double)0.01099097629988404247;
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)9392.751123286552684) ) ) {
                sum += (double)-0.009256732881033886626;
              } else {
                sum += (double)0.007034422149121739506;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.975304878048781188) ) ) {
              sum += (double)0.01199268296625228755;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2508.19119374671709) ) ) {
                sum += (double)0.00952163323886580544;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8433000000000000496) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009850000000000001116) ) ) {
                    sum += (double)-0.005262073761366619848;
                  } else {
                    sum += (double)0.007842299100411722831;
                  }
                } else {
                  sum += (double)-0.009208113200058867451;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4507.9565926974592) ) ) {
            sum += (double)0.007338203570541663133;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.212912087912088488) ) ) {
              sum += (double)0.003489770332240621411;
            } else {
              sum += (double)-0.006445668620827423208;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7014630000000000587) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5708454851664590546) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.486100386100386306) ) ) {
            sum += (double)0.01670814089238403452;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1053.386332019519841) ) ) {
              sum += (double)0.0131430937675628412;
            } else {
              sum += (double)-0.001926932535024526542;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.754310344827586743) ) ) {
            sum += (double)0.00841416609958377075;
          } else {
            sum += (double)-0.001099892335151376587;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3922500000000000431) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7999015000000001541) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6399918775570295759) ) ) {
              sum += (double)0.0198502718667057064;
            } else {
              sum += (double)0.008952352901068017302;
            }
          } else {
            sum += (double)0.02306190356032576314;
          }
        } else {
          sum += (double)0.01293974719708888138;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3502855000000000829) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.58257918552036436) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2660000000000000697) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
              sum += (double)0.003912314456974964015;
            } else {
              sum += (double)-0.00717936296022552399;
            }
          } else {
            sum += (double)0.006625791210156001775;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.7350000000000000977) ) ) {
              sum += (double)-0.01548194525563575084;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08395000000000001072) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.702729044834310201) ) ) {
                    sum += (double)-0.01079975586344309249;
                  } else {
                    sum += (double)0.001913865435169119977;
                  }
                } else {
                  sum += (double)-0.002516323263317811997;
                }
              } else {
                sum += (double)-0.0108458053149759915;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02395000000000000254) ) ) {
              sum += (double)0.01440535258345076834;
            } else {
              sum += (double)-0.00516361028173807201;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1854525000000000201) ) ) {
          sum += (double)-0.01471441711554389437;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.34234234234234506) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-35445.64132608562795) ) ) {
              sum += (double)0.001680037489859258952;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4391.076444984862064) ) ) {
                sum += (double)-0.0100920269777539616;
              } else {
                sum += (double)-0.01443275427636102684;
              }
            }
          } else {
            sum += (double)-0.01440276809665654197;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.71269841269841372) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4505095000000000627) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3632.024792260073355) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1251748251748257) ) ) {
                sum += (double)0.001958409458714943999;
              } else {
                sum += (double)-0.01007395545176860766;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1155500000000000277) ) ) {
                sum += (double)0.01139807595788858152;
              } else {
                sum += (double)0.00159818455390547693;
              }
            }
          } else {
            sum += (double)0.008705895202238826333;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5094895000000000396) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.317357322368964523) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07895000000000000628) ) ) {
                  sum += (double)-0.008544461326575948298;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4925320000000000253) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.38051350000000006) ) ) {
                      sum += (double)-0.00667280248133584903;
                    } else {
                      sum += (double)0.002485097277289799109;
                    }
                  } else {
                    sum += (double)-0.01368627072490654316;
                  }
                }
              } else {
                sum += (double)0.009105580607512812896;
              }
            } else {
              sum += (double)-0.0193628935853463989;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1337.280669109357859) ) ) {
              sum += (double)0.004290285098358699242;
            } else {
              sum += (double)-0.008936979010138540458;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5001330000000000497) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4626188573480190525) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8050000000000001599) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.580400000000000138) ) ) {
                  sum += (double)0.003874793148247348065;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.446234000000000075) ) ) {
                    sum += (double)-0.01043748251056252074;
                  } else {
                    sum += (double)-0.0014219582303793654;
                  }
                }
              } else {
                sum += (double)0.01258120762243901229;
              }
            } else {
              sum += (double)-0.01090791354446044026;
            }
          } else {
            sum += (double)-0.002370557420030353947;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16683.00555405385603) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
              sum += (double)0.01138446166181564766;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8220058538128890424) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)51.70714285714286262) ) ) {
                  sum += (double)-0.0008152884842428603871;
                } else {
                  sum += (double)-0.01322813475764194474;
                }
              } else {
                sum += (double)0.01246055000996917385;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.18253968253969077) ) ) {
              sum += (double)0.001533389057663425703;
            } else {
              sum += (double)-0.009310488945146272455;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.162040510127533288) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6014500000000001512) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3397655000000000536) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.25552350000000007) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9550000000000000711) ) ) {
              sum += (double)-0.00985603012543322457;
            } else {
              sum += (double)0.002274506221656205033;
            }
          } else {
            sum += (double)0.00332864190451931212;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1900500000000000245) ) ) {
            sum += (double)-0.007923486536381823056;
          } else {
            sum += (double)0.00461096824708329394;
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)760.1404084372057923) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-864.8017076591004297) ) ) {
                sum += (double)0.008362685097373288162;
              } else {
                sum += (double)0.00225219368581560872;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01485000000000000209) ) ) {
                sum += (double)-0.0101635160998034893;
              } else {
                sum += (double)0.001927507615495785594;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.332274916211522164) ) ) {
              sum += (double)-0.008770647196883070082;
            } else {
              sum += (double)0.005834791865292152796;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4446970000000000645) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.84898917704717647) ) ) {
              sum += (double)0.008452195597880128239;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3439.063894173575591) ) ) {
                sum += (double)0.007886155233057676184;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000000000000799) ) ) {
                  sum += (double)-0.00278169841497727258;
                } else {
                  sum += (double)0.01059760320869783737;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.754310344827586743) ) ) {
              sum += (double)0.01243370328576134075;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02980769127971986607) ) ) {
                sum += (double)-0.003638900510589078863;
              } else {
                sum += (double)0.009622755996986762442;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7602760000000000629) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7291161822165118656) ) ) {
          sum += (double)0.01562825255707226205;
        } else {
          sum += (double)0.007215781599806177921;
        }
      } else {
        sum += (double)0.02022477319206830368;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678700000000000858) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.45666166058785862) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4351.162893810690548) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.00781250000000178) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
              sum += (double)0.009984313369092910617;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9115500000000001934) ) ) {
                if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                  sum += (double)-0.01097236732764764015;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5801.456541730448407) ) ) {
                    sum += (double)-0.001524045490111230377;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5706.165657108974301) ) ) {
                      sum += (double)0.007324068174775351728;
                    } else {
                      sum += (double)-0.006564972914341190083;
                    }
                  }
                }
              } else {
                sum += (double)-0.01670729785551612265;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13199.90560314734284) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
                sum += (double)-0.006579958206187412964;
              } else {
                sum += (double)0.004285577809433730595;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
                sum += (double)0.004003632569811650145;
              } else {
                sum += (double)-0.009169268828769304436;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
            sum += (double)-0.01226768703409840226;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2240150000000000474) ) ) {
              sum += (double)-0.01136923447319213368;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.194724803310769135) ) ) {
                sum += (double)-0.003114189294075631748;
              } else {
                sum += (double)-0.01790438424907827078;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            sum += (double)-0.01324101286023234535;
          } else {
            sum += (double)-0.007041465640301813531;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.70619946091644792) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16031.30829179268949) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-30179.937288398276) ) ) {
                sum += (double)0.00541624443506283533;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.38875137513751667) ) ) {
                  sum += (double)-0.0002297039775279660634;
                } else {
                  sum += (double)-0.009800276022143296004;
                }
              }
            } else {
              sum += (double)-0.009615437004804733984;
            }
          } else {
            sum += (double)-0.01208982297366464204;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.17376160990712286) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5323.925722576165754) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4524659535674726007) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
              sum += (double)0.02071846307057042744;
            } else {
              sum += (double)0.008696394973890780172;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1251748251748257) ) ) {
              sum += (double)0.004916651998704516836;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13199.90560314734284) ) ) {
                sum += (double)0.003604134598854035094;
              } else {
                sum += (double)-0.01419394646039149471;
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1622.076218527950459) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5877760000000001872) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1000142058976443288) ) ) {
                sum += (double)-0.01752609342652600155;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7371304289733293658) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05505000000000000865) ) ) {
                      sum += (double)-0.003701326178498516323;
                    } else {
                      sum += (double)0.002776663579765651247;
                    }
                  } else {
                    sum += (double)0.01317813181802508782;
                  }
                } else {
                  sum += (double)-0.008335126335122025609;
                }
              }
            } else {
              sum += (double)0.01060519787108867885;
            }
          } else {
            sum += (double)-0.009204097776960544139;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.55844155844156518) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)29304.5719267044733) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)215.2883771929824945) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)11222.22816428306942) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.90096618357488367) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14660.96176939566249) ) ) {
                      sum += (double)0.0004088901780317529379;
                    } else {
                      sum += (double)-0.006187632269816305784;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2081000000000000349) ) ) {
                      sum += (double)0.003014107487118780886;
                    } else {
                      sum += (double)-0.01099590038413584929;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)99.07708333333334849) ) ) {
                    sum += (double)0.004643991380051766191;
                  } else {
                    sum += (double)-0.004466354798893750269;
                  }
                }
              } else {
                sum += (double)-0.01991280761731069673;
              }
            } else {
              sum += (double)0.008822307030531769539;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1492500000000000215) ) ) {
              sum += (double)-0.002908192334095841252;
            } else {
              sum += (double)-0.01561000681003205798;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7668550000000001754) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16683.00555405385603) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.78183361629881531) ) ) {
                sum += (double)0.008308386198169899831;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7034000000000001362) ) ) {
                  sum += (double)0.002443577374557323687;
                } else {
                  sum += (double)-0.01107012621329307202;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.45498652291105657) ) ) {
                sum += (double)0.001289673543302679399;
              } else {
                sum += (double)-0.009453274992139829719;
              }
            }
          } else {
            sum += (double)0.01480409804054575243;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.446234000000000075) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6988000000000001988) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174478000000000022) ) ) {
                sum += (double)-0.01004547236789930797;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.711180124223603105) ) ) {
                  sum += (double)0.008316098069175437146;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4045.520025272053772) ) ) {
                    sum += (double)0.00194248934015244022;
                  } else {
                    sum += (double)-0.006886636321083682011;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
                sum += (double)0.01408272703460951292;
              } else {
                sum += (double)0.00203692694748182487;
              }
            }
          } else {
            sum += (double)-0.01451452141855801882;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1344370000000000287) ) ) {
            sum += (double)-0.01398350708704131778;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004250000000000001173) ) ) {
              sum += (double)-0.003087683059896663938;
            } else {
              sum += (double)-0.009565621560884850563;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2081.229889241327783) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
              sum += (double)0.006453836493946253812;
            } else {
              sum += (double)-0.003521164225994540594;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7034.526718448786596) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5732.82001265566214) ) ) {
                sum += (double)0.002344467194991794665;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.20714285714286262) ) ) {
                  sum += (double)0.01075400483148454198;
                } else {
                  sum += (double)0.001263182151562039241;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4143455000000000887) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                    sum += (double)-0.001147315855229994342;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)739.2431776973787692) ) ) {
                      sum += (double)-0.005066394948794276758;
                    } else {
                      sum += (double)0.007290662288055597441;
                    }
                  }
                } else {
                  sum += (double)0.006547017121647538858;
                }
              } else {
                sum += (double)-0.004640830397109168767;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.325799200799202104) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9118821962252711133) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.0281746031746124) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000000000001021) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3213010000000000588) ) ) {
                    sum += (double)-0.003562035011561389287;
                  } else {
                    sum += (double)0.00353981811216342538;
                  }
                } else {
                  sum += (double)0.01086210619803414622;
                }
              } else {
                sum += (double)-0.01139550818976436432;
              }
            } else {
              sum += (double)-0.009029207892990736076;
            }
          } else {
            sum += (double)-0.009145144226315389188;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1057530000000000137) ) ) {
            sum += (double)-0.01354077630071573272;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
              sum += (double)0.003199150054062789832;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.34234234234234506) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8140.442679804484214) ) ) {
                  sum += (double)-0.0114086602130731192;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.92861142217245352) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)93.89015151515152979) ) ) {
                      sum += (double)0.001814789299538895019;
                    } else {
                      sum += (double)-0.01099273244300391292;
                    }
                  } else {
                    sum += (double)-0.009870874829632961256;
                  }
                }
              } else {
                sum += (double)-0.01288988943201710251;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0313500000000000098) ) ) {
            sum += (double)0.00517983997422342534;
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8662560233874664339) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.240913000000000016) ) ) {
                sum += (double)-0.006926174000534092087;
              } else {
                sum += (double)0.00184332594854270883;
              }
            } else {
              sum += (double)-0.01524944845188388673;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.14962251201098553) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21751.357454319721) ) ) {
            sum += (double)0.004468329045774634134;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03385000000000000508) ) ) {
              sum += (double)-0.01164154458874253062;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
                  sum += (double)-0.004388010872911491701;
                } else {
                  sum += (double)0.003652898986989187337;
                }
              } else {
                sum += (double)-0.007340168813845237075;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3744800000000000906) ) ) {
            sum += (double)-0.01073633765772192238;
          } else {
            sum += (double)-0.006740172730090046582;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6829935000000001422) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3578754866530491907) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.486100386100386306) ) ) {
            sum += (double)0.01456349704358264434;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1053.386332019519841) ) ) {
              sum += (double)0.01151186331001186232;
            } else {
              sum += (double)-0.0006583733395778165699;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6967396201528700539) ) ) {
            sum += (double)0.008759005106710992736;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.062745098039215907) ) ) {
              sum += (double)0.01062814270643149504;
            } else {
              sum += (double)0.00187524577179138687;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7999015000000001541) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3688321311376249745) ) ) {
            sum += (double)0.01730334247475811063;
          } else {
            sum += (double)0.01200807449448603771;
          }
        } else {
          sum += (double)0.01941127276794746281;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.25728920409771661) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1622.076218527950459) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.677320500000000103) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2447500000000000508) ) ) {
                sum += (double)0.01026433955611524493;
              } else {
                sum += (double)0.004921640343306742105;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.07449922958397615) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5877760000000001872) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.720486111111111605) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3152500000000000857) ) ) {
                      sum += (double)0.006948395642644368715;
                    } else {
                      sum += (double)-0.003185364826595143452;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1339500000000000413) ) ) {
                      sum += (double)-0.003100273094679696553;
                    } else {
                      sum += (double)0.005406127185436895161;
                    }
                  }
                } else {
                  sum += (double)0.009711320836613895197;
                }
              } else {
                sum += (double)-0.004195995596255807855;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2491000000000000159) ) ) {
              sum += (double)0.01634771532994437615;
            } else {
              sum += (double)0.009061262542054743588;
            }
          }
        } else {
          sum += (double)-0.006506907514727022432;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
          sum += (double)0.006027306028140365542;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.455850000000000033) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1891267783217778775) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.138110787595931539) ) ) {
                sum += (double)-0.006636445990570810638;
              } else {
                sum += (double)0.01453898136726959438;
              }
            } else {
              sum += (double)-0.007637654102211164676;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)34.2970588235294187) ) ) {
              sum += (double)0.00380761497869442668;
            } else {
              sum += (double)-0.007844435598016655589;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6614500000000002045) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9350000000000001643) ) ) {
            sum += (double)-0.01182265604044366487;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05517050000000000426) ) ) {
                sum += (double)-0.01224193602312419887;
              } else {
                sum += (double)3.398781298458339285e-05;
              }
            } else {
              sum += (double)-0.01080490599504089176;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7650000000000001243) ) ) {
            sum += (double)-0.01054670576144554547;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01634999999999999995) ) ) {
              sum += (double)0.007702963496532551357;
            } else {
              sum += (double)-0.00798922641383150757;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8957715509494285078) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.667349726775957386) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03085000000000000242) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1206.163682551244392) ) ) {
                  sum += (double)0.001394016329222028854;
                } else {
                  sum += (double)-0.007234283233611187892;
                }
              } else {
                sum += (double)0.00430717564585901113;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6768.866270911575157) ) ) {
                sum += (double)0.003264006817825602664;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5120878152759216206) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2478.891438747010852) ) ) {
                      sum += (double)-0.002067192266682973262;
                    } else {
                      sum += (double)-0.0095594920848699836;
                    }
                  } else {
                    sum += (double)-0.013426571789540407;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1842.867320295106538) ) ) {
                    sum += (double)-0.0002784386091480545275;
                  } else {
                    sum += (double)-0.009839897776958607054;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
              sum += (double)0.01644017785697748923;
            } else {
              sum += (double)0.006967957698680110612;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3216.282614078772895) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2756805000000000505) ) ) {
              sum += (double)-0.01184108083812520501;
            } else {
              sum += (double)0.006751004965475434529;
            }
          } else {
            sum += (double)-0.01005063932782434069;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.118717000000000017) ) ) {
            sum += (double)-0.01225985640131545089;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
              sum += (double)0.004146786015578557069;
            } else {
              sum += (double)-0.01015574768769449999;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03305000000000000299) ) ) {
            sum += (double)0.004360512953584374206;
          } else {
            sum += (double)-0.00542730614431891599;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.14962251201098553) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21751.357454319721) ) ) {
            sum += (double)0.004081186495204872436;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06605000000000001148) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)9173.564891287333012) ) ) {
                sum += (double)-0.010802817909273673;
              } else {
                sum += (double)0.001953055596855774421;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.317357322368964523) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                  sum += (double)-0.004959139460788303776;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6282926336678872348) ) ) {
                    sum += (double)0.008372794812824362748;
                  } else {
                    sum += (double)-0.006722526874069740567;
                  }
                }
              } else {
                sum += (double)-0.01620468703235232802;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3339271889634866652) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)229.6363636363636545) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2361862430022099446) ) ) {
                  sum += (double)-0.00645315568261739872;
                } else {
                  sum += (double)0.007263100355887857143;
                }
              } else {
                sum += (double)-0.01402419180063249268;
              }
            } else {
              sum += (double)-0.0113253742306556153;
            }
          } else {
            sum += (double)-0.005065684077665125185;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.419765446224257488) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6179515000000000979) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)760.1404084372057923) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.883349826818407013) ) ) {
            sum += (double)0.006875110654585872734;
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5.113654335801698814) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                sum += (double)-0.001852616630294744854;
              } else {
                sum += (double)-0.01383644667574459794;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1121500000000000136) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1559.276745549883799) ) ) {
                  sum += (double)0.003957379896049306386;
                } else {
                  sum += (double)-0.005744370688023555174;
                }
              } else {
                sum += (double)0.006489573068273629154;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
              sum += (double)0.0100110600079954485;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2025.244583427236194) ) ) {
                sum += (double)0.007707306693712908004;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8433000000000000496) ) ) {
                  sum += (double)0.005799842325993183334;
                } else {
                  sum += (double)-0.007352975473952272703;
                }
              }
            }
          } else {
            sum += (double)0.0130281484130183485;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5708454851664590546) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7446860000000000701) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2527500000000000857) ) ) {
              sum += (double)0.0141959184046301784;
            } else {
              sum += (double)0.008379990130968290388;
            }
          } else {
            sum += (double)0.0170392299042743077;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.062745098039215907) ) ) {
            sum += (double)0.01529821995529306346;
          } else {
            sum += (double)0.005380528996140647273;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.87146226415094574) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1622.076218527950459) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5094895000000000396) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.924550000000000094) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)662.612427436425719) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2158000000000000196) ) ) {
                  sum += (double)0.00257249677927679811;
                } else {
                  sum += (double)-0.009711607835476367481;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3787509271869893279) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.00378787878788067) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4917.478106812183796) ) ) {
                      sum += (double)0.001010046173611710415;
                    } else {
                      sum += (double)0.006756473338343445094;
                    }
                  } else {
                    sum += (double)-0.00430132388447247889;
                  }
                } else {
                  sum += (double)0.007306846628472734445;
                }
              }
            } else {
              sum += (double)-0.01269948138596637202;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7446860000000000701) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                sum += (double)0.004480444528955530512;
              } else {
                sum += (double)0.01157137550019782593;
              }
            } else {
              sum += (double)0.01654103427219445407;
            }
          }
        } else {
          sum += (double)-0.00893957363940366817;
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.455850000000000033) ) ) {
            sum += (double)-0.007073873863475127824;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)122.8416666666666828) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)11458.24876613496417) ) ) {
                sum += (double)-0.001873143604455206664;
              } else {
                sum += (double)0.008215448408494693128;
              }
            } else {
              sum += (double)-0.01077134444552240063;
            }
          }
        } else {
          sum += (double)0.006813490038534691234;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.446234000000000075) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2756805000000000505) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
            sum += (double)0.009620189413403678821;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1360340320715830165) ) ) {
                sum += (double)-0.008181358264680483813;
              } else {
                sum += (double)0.000210971488736692186;
              }
            } else {
              sum += (double)-0.0115256278317658091;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.468432671081678187) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8849500000000000144) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)82.64618349518126195) ) ) {
                sum += (double)-0.006428293524706548898;
              } else {
                sum += (double)0.004542302129919181981;
              }
            } else {
              sum += (double)-0.01241939086249614632;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1472221264172316191) ) ) {
              sum += (double)-0.01190339407509567217;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9023689374824783727) ) ) {
                sum += (double)-0.005468839822226561655;
              } else {
                sum += (double)-0.01654385682612794992;
              }
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2081.229889241327783) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
            sum += (double)0.005348250569644777234;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.924550000000000094) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7340.285232759907558) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.158598193308449209) ) ) {
                    sum += (double)-0.01223059927163749026;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3755158646863254179) ) ) {
                      sum += (double)0.006591533715649974291;
                    } else {
                      sum += (double)-0.005438736655716145882;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4082770000000000565) ) ) {
                    sum += (double)0.0003583329885634860051;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
                      sum += (double)0.00683570113311842819;
                    } else {
                      sum += (double)-0.002433167343863325369;
                    }
                  }
                }
              } else {
                sum += (double)0.008478887906428724669;
              }
            } else {
              sum += (double)-0.01279334780025950281;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.325799200799202104) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9772770219198791963) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.0281746031746124) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5095115945175783256) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7731500000000001149) ) ) {
                    sum += (double)0.008857574979438363749;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1179193971631925381) ) ) {
                      sum += (double)0.009084618301839420679;
                    } else {
                      sum += (double)-0.003110227280671575955;
                    }
                  }
                } else {
                  sum += (double)-0.001249198078447717047;
                }
              } else {
                sum += (double)-0.01036586441371645066;
              }
            } else {
              sum += (double)-0.01195970113867436679;
            }
          } else {
            sum += (double)-0.007700956914473553426;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1710950000000000248) ) ) {
            sum += (double)-0.01089299272882734981;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2367240667710305002) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7506000000000000449) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1308500000000000218) ) ) {
                  sum += (double)0.005706422751171809707;
                } else {
                  sum += (double)-0.01225139133411696189;
                }
              } else {
                sum += (double)-0.008165315392676286699;
              }
            } else {
              sum += (double)-0.009732001087321360752;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.70619946091644792) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.025350000000000001) ) ) {
              sum += (double)0.008991343338472764304;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-26216.36240703851217) ) ) {
                sum += (double)0.004794657907716489559;
              } else {
                sum += (double)-0.005724109542525702976;
              }
            }
          } else {
            sum += (double)-0.009217359594941808981;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.14962251201098553) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21751.357454319721) ) ) {
            sum += (double)0.003824366567983585562;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06605000000000001148) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.283247888168071893) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1828494567527934322) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8697.080932372247844) ) ) {
                    sum += (double)0.003558914292357310931;
                  } else {
                    sum += (double)-0.01104627325623756991;
                  }
                } else {
                  sum += (double)0.006966349038405770903;
                }
              } else {
                sum += (double)-0.01073004614964406973;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)166.9041125316803402) ) ) {
                sum += (double)-0.013390555859256352;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8628500000000002279) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6945.123393532623595) ) ) {
                      sum += (double)-0.005345794400712144956;
                    } else {
                      sum += (double)-0.00142279615577648377;
                    }
                  } else {
                    sum += (double)-0.01250575641606705909;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6549412391405855516) ) ) {
                    sum += (double)0.00689393920767111118;
                  } else {
                    sum += (double)-0.009975287621433232346;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-0.007821988889676497608;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6734055000000001012) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3578754866530491907) ) ) {
          sum += (double)0.01055744693819537887;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6967396201528700539) ) ) {
            sum += (double)0.007270888373687339409;
          } else {
            sum += (double)0.00301615004897197404;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.835693500000000089) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2484845401189077485) ) ) {
            sum += (double)0.01519991963888426764;
          } else {
            sum += (double)0.01127881054002282529;
          }
        } else {
          sum += (double)0.01710993022194571764;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.93082137161084688) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1622.076218527950459) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6493.911283074395214) ) ) {
              sum += (double)0.00711566200350486483;
            } else {
              sum += (double)0.002674574828979809152;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4173837132183961796) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.09126037187329660849) ) ) {
                sum += (double)0.003047271188248969198;
              } else {
                sum += (double)0.01286234153194823482;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3183000000000000829) ) ) {
                sum += (double)0.01030234027838915385;
              } else {
                sum += (double)0.0007770486426513453521;
              }
            }
          }
        } else {
          sum += (double)-0.004162240766668702692;
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.47850877192982821) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16362.01564670949665) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)13476.57528643532896) ) ) {
                sum += (double)0.001345000849827222107;
              } else {
                sum += (double)0.00952935812907204291;
              }
            } else {
              if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
                sum += (double)-0.0145777387710110673;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.64312313803376853) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3940500000000000114) ) ) {
                    sum += (double)0.01134819807219046572;
                  } else {
                    sum += (double)-0.001729207305553401991;
                  }
                } else {
                  sum += (double)-0.006718345559858903727;
                }
              }
            }
          } else {
            sum += (double)-0.006381032698244437119;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.638798000000000088) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.044849653237345022) ) ) {
              sum += (double)0.008687357148221955261;
            } else {
              sum += (double)-0.00892712092223290829;
            }
          } else {
            sum += (double)0.01632121612519544032;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.388216000000000061) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2756805000000000505) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.265050167224081257) ) ) {
              sum += (double)0.004088876220651271529;
            } else {
              sum += (double)-0.003931370930746233561;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.095641646489105447) ) ) {
              sum += (double)0.00544225412442479739;
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)118.0299834287672098) ) ) {
                sum += (double)-0.0119111646282183143;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8150000000000000577) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.870650000000000035) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5481.444926233901242) ) ) {
                      sum += (double)0.0002100692257370637367;
                    } else {
                      sum += (double)0.009421207786648238755;
                    }
                  } else {
                    sum += (double)-0.008387454188665781699;
                  }
                } else {
                  sum += (double)0.006222097595809500913;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.808257918552036436) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3250715000000000687) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.06066176470588758) ) ) {
                sum += (double)-0.003363971282325194361;
              } else {
                sum += (double)-0.01102981885404629402;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-952.9475905187154012) ) ) {
                sum += (double)0.005776932001045402727;
              } else {
                sum += (double)-0.004968420908180092195;
              }
            }
          } else {
            sum += (double)-0.0111489962960641207;
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)642.537947836085209) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            sum += (double)-0.007410452079863717734;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.720486111111111605) ) ) {
              sum += (double)0.002307096340517672019;
            } else {
              sum += (double)-0.01073835739670604174;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
              sum += (double)0.007867996370255697994;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3704.779412412050533) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07205000000000001681) ) ) {
                  sum += (double)0.01051808993520035075;
                } else {
                  sum += (double)0.005376018303098994457;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.81296296296296422) ) ) {
                    sum += (double)0.005326482181015061886;
                  } else {
                    sum += (double)-0.003933081462698411433;
                  }
                } else {
                  sum += (double)-0.008301035022719054079;
                }
              }
            }
          } else {
            sum += (double)0.01018334514292169174;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7533620000000000871) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7291161822165118656) ) ) {
          sum += (double)0.01092314046806954625;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
            sum += (double)0.007321010534870335713;
          } else {
            sum += (double)-0.003369831924291930535;
          }
        }
      } else {
        sum += (double)0.01426419897261124031;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3283310000000000395) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1710950000000000248) ) ) {
          sum += (double)-0.009991057640558078171;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.83232931726908177) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3819500000000000672) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-36696.22831575417513) ) ) {
                  sum += (double)0.009308799729301639458;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2399659671015315077) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04458582443600670603) ) ) {
                      sum += (double)-0.007768086903861957937;
                    } else {
                      sum += (double)0.009283024939715575283;
                    }
                  } else {
                    sum += (double)-0.005778511200346847683;
                  }
                }
              } else {
                sum += (double)0.006903724899178820783;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)361.7598371524995287) ) ) {
                sum += (double)-0.01222587539457302766;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.00781250000000178) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1720691644993862512) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5629.325767958667711) ) ) {
                      sum += (double)-0.002426681556018925323;
                    } else {
                      sum += (double)-0.01058528045818061744;
                    }
                  } else {
                    sum += (double)-0.001647211383696830156;
                  }
                } else {
                  sum += (double)-0.007453761030282275539;
                }
              }
            }
          } else {
            sum += (double)-0.00911910381307151803;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04310000000000000636) ) ) {
            sum += (double)0.007129313986726893738;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.240913000000000016) ) ) {
              sum += (double)-0.004996297195580050657;
            } else {
              sum += (double)0.001690662829997762904;
            }
          }
        } else {
          sum += (double)-0.01024067569400871451;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.71269841269841372) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.482074000000000058) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09695000000000000839) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3632.024792260073355) ) ) {
                sum += (double)-0.006222830070529081214;
              } else {
                sum += (double)0.01136178804674943185;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13199.90560314734284) ) ) {
                sum += (double)0.003356263024948450812;
              } else {
                sum += (double)-0.002733299017361645773;
              }
            }
          } else {
            sum += (double)0.006982249773917640311;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0640500000000000097) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
                sum += (double)-0.0008563039309445980929;
              } else {
                sum += (double)-0.008083618195357007361;
              }
            } else {
              sum += (double)0.0122320110882518894;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.194724803310769135) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
                sum += (double)-0.0001819483133713032991;
              } else {
                sum += (double)0.009336670411303510386;
              }
            } else {
              sum += (double)-0.01157695974966199172;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.00000001800250948e-35) ) ) {
            sum += (double)-0.00166635544262387289;
          } else {
            sum += (double)0.0126162481460304985;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.455850000000000033) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3282773505116238777) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8050000000000001599) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16031.30829179268949) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2086500000000000299) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4487310000000000465) ) ) {
                      sum += (double)-0.0008522612529582079734;
                    } else {
                      sum += (double)0.01469550159985236193;
                    }
                  } else {
                    sum += (double)-0.005190372884099596004;
                  }
                } else {
                  sum += (double)-0.007216721734506455384;
                }
              } else {
                sum += (double)0.01101167145007388333;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4391.076444984862064) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.17654109589042122) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4681341459817245365) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6319000000000001283) ) ) {
                      sum += (double)0.01063177827476919843;
                    } else {
                      sum += (double)-0.005275223612425349907;
                    }
                  } else {
                    sum += (double)-0.006243808901501390896;
                  }
                } else {
                  sum += (double)-0.008565383217844025135;
                }
              } else {
                sum += (double)-0.01204214378695407303;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.86694963214488396) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19099.32569550648986) ) ) {
                sum += (double)0.005505443669407681685;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.509500000000000175) ) ) {
                  sum += (double)0.006071386118342434607;
                } else {
                  sum += (double)-0.006155921812012776426;
                }
              }
            } else {
              sum += (double)-0.005184431537569298733;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.446234000000000075) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.002049180327871269) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.114147004888090417) ) ) {
          sum += (double)-0.008407502515353437733;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4151.245079122973038) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
              sum += (double)0.00339638277687318588;
            } else {
              sum += (double)-0.01059651396484101449;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.606377583365031558) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)118.0299834287672098) ) ) {
                sum += (double)-0.004424349750203552221;
              } else {
                sum += (double)0.01128159688274303282;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.856934660369398804) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3449485957867410302) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441180000000000294) ) ) {
                    sum += (double)-0.009042967910397771772;
                  } else {
                    sum += (double)-0.001315942213682885255;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06705000000000001237) ) ) {
                    sum += (double)-0.009629140994484652188;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1604000000000000148) ) ) {
                      sum += (double)0.01433481069277340626;
                    } else {
                      sum += (double)-0.00133148383854469316;
                    }
                  }
                }
              } else {
                sum += (double)-0.01560186668183820638;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8957715509494285078) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000000000001021) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3904340000000000588) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7795.802699447695886) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.567117117117118319) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)15.77248611608338713) ) ) {
                      sum += (double)-0.007322736584610568117;
                    } else {
                      sum += (double)0.002455242220225998303;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002250000000000000697) ) ) {
                      sum += (double)-0.01355887378607670973;
                    } else {
                      sum += (double)-0.001459599113061192145;
                    }
                  }
                } else {
                  sum += (double)0.009261281436860124144;
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4415.807239953120188) ) ) {
                  sum += (double)-0.01075460789063429137;
                } else {
                  sum += (double)-0.002136103276012787152;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004250000000000001173) ) ) {
                sum += (double)-0.002179312916326938462;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2757311940914686788) ) ) {
                  sum += (double)0.004871089024470914332;
                } else {
                  sum += (double)0.0008198690781932781125;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.000750000000000000124) ) ) {
              sum += (double)0.01603840738399745641;
            } else {
              sum += (double)0.005682082949942181965;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5323.925722576165754) ) ) {
            sum += (double)0.006642312672568405525;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2330500000000000071) ) ) {
              sum += (double)-0.005360104622206604032;
            } else {
              sum += (double)-0.01810972370416122704;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1057530000000000137) ) ) {
            sum += (double)-0.009765866696717995579;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
              sum += (double)0.002823099659753900738;
            } else {
              sum += (double)-0.007813910139656727455;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
            sum += (double)0.009056891980916402865;
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5420.781404110555741) ) ) {
              sum += (double)-0.007082649389797094665;
            } else {
              sum += (double)-0.0003337933303451071521;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.14962251201098553) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21751.357454319721) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)18906.11182675446616) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2419000000000000317) ) ) {
                sum += (double)-0.005144459142187670156;
              } else {
                sum += (double)0.004363740802750050093;
              }
            } else {
              sum += (double)0.009797633286580459053;
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)294.2731973911765522) ) ) {
              sum += (double)-0.01025574435809406201;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9350000000000001643) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06605000000000001148) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3742.494223235453774) ) ) {
                    sum += (double)-0.01014660193360860004;
                  } else {
                    sum += (double)-0.003145219664875991382;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07519656588417543419) ) ) {
                    sum += (double)-0.01010108931423536228;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1233065969357276664) ) ) {
                      sum += (double)0.003123727052462479427;
                    } else {
                      sum += (double)-0.003387091742201950566;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6549412391405855516) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2660001773777408984) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5481.444926233901242) ) ) {
                      sum += (double)-0.006981265680976526423;
                    } else {
                      sum += (double)0.006369859822784316658;
                    }
                  } else {
                    sum += (double)0.01022738103667876312;
                  }
                } else {
                  sum += (double)-0.009099571018643380985;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3744800000000000906) ) ) {
            sum += (double)-0.007904904956440462344;
          } else {
            sum += (double)-0.004479451015071727465;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6734055000000001012) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3578754866530491907) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.53684210526317599) ) ) {
            sum += (double)0.0092879857278022563;
          } else {
            sum += (double)0.001271134807991124247;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6967396201528700539) ) ) {
            sum += (double)0.006124849485510624678;
          } else {
            sum += (double)0.002512808344374093967;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.835693500000000089) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6399918775570295759) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
              sum += (double)0.006416296750123307371;
            } else {
              sum += (double)0.01253277202197819115;
            }
          } else {
            sum += (double)0.005287760857389866426;
          }
        } else {
          sum += (double)0.01455426944756343585;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.93082137161084688) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1622.076218527950459) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2928.425989978642974) ) ) {
              sum += (double)0.004789614617034456713;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6181500000000000883) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2380.495614866096275) ) ) {
                  sum += (double)-0.01320261322014634406;
                } else {
                  sum += (double)0.0009100841869853657992;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7852500000000001146) ) ) {
                  sum += (double)0.01042043573423851593;
                } else {
                  sum += (double)-0.004187510503055168892;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2491000000000000159) ) ) {
              sum += (double)0.01020070317774991568;
            } else {
              sum += (double)0.004818558819507609906;
            }
          }
        } else {
          sum += (double)-0.003661689002742515939;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7091915000000000857) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.62019230769231015) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6768.866270911575157) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                sum += (double)0.001740317520522910704;
              } else {
                sum += (double)0.01123818286219590255;
              }
            } else {
              sum += (double)-0.004190157140594915827;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24839.74131948253489) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)142.2522321428571672) ) ) {
                sum += (double)0.002925928490843922314;
              } else {
                sum += (double)-0.005982426429113727948;
              }
            } else {
              sum += (double)-0.008069586213220725918;
            }
          }
        } else {
          sum += (double)0.007820477596968316084;
        }
      }
    }
  }
  return sum;
}
