
#include "prediction.h"

void predict_unit11(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7731500000000001149) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.114147004888090417) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.3190058479532194) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05505000000000000865) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5845015000000001182) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5890.241073706772113) ) ) {
              result[0] += 0;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3249.949450539746977) ) ) {
                result[0] += 0.006314546170757437;
              } else {
                result[0] += 0.0010891000444197857;
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1387.069702312839809) ) ) {
              result[0] += 0.0006027908211931616;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.835491146007350638) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0014995246024539287;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3781980000000000897) ) ) {
            result[0] += -0.002232145265678471;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7052500000000000435) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1523500000000000132) ) ) {
                result[0] += -0.0013741856061317476;
              } else {
                result[0] += 0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2067000000000000226) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08395000000000001072) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.75154320987654355) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.003844665845438065;
                  }
                }
              } else {
                result[0] += -0.00035786755730286775;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2363500000000000323) ) ) {
          result[0] += 0.004863031101221792;
        } else {
          result[0] += 0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1233065969357276664) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.47150997150997398) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7424500000000001654) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4925320000000000253) ) ) {
              result[0] += 0.005445686949841351;
            } else {
              result[0] += -0.00046115191465740817;
            }
          } else {
            result[0] += -0.0027803093307391374;
          }
        } else {
          result[0] += -0.0068960658937989635;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1828494567527934322) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06705000000000001237) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2978831689071954059) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.39356884057971797) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.78019323671498242) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2772.548050562498702) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
                      result[0] += 0.002877789777490023;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.0017644481188533129;
                  }
                } else {
                  result[0] += 0.0046575318996268525;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.57793522267206576) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2118118797363109373) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0067913588634069075;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7310500000000000886) ) ) {
                    result[0] += 0.0030111909214996257;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.265006002400961727) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4487310000000000465) ) ) {
                  result[0] += 0.0007424172058776423;
                } else {
                  result[0] += -0.0007877553005186836;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4784.444799033853087) ) ) {
                  result[0] += -0.00027177096686251074;
                } else {
                  result[0] += -0.0056855053995735465;
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9290.770887201673759) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3634578871420977575) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7124500000000001387) ) ) {
                  result[0] += -0.002940169896422967;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7350500000000000922) ) ) {
                    result[0] += 0.0018964682048621285;
                  } else {
                    result[0] += -0.0015097804046960827;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4033126559258033983) ) ) {
                  result[0] += 0.0034773501797251364;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.08825438027255572) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.10263157894737063) ) ) {
                      result[0] += 0.00029518914893984766;
                    } else {
                      result[0] += -0.004879620470229266;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.33974358974359831) ) ) {
                      result[0] += 0.0038155130947067;
                    } else {
                      result[0] += -0.0005715202893187906;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7517.831857566079634) ) ) {
                result[0] += 0.008214993663520477;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4222760000000000402) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1506500000000000339) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2404.62816755580252) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0038531040925732707;
                    }
                  } else {
                    result[0] += -0.003968006039245686;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4566350000000000686) ) ) {
                    result[0] += 0.006118245805247106;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2870.605387001201507) ) ) {
                      result[0] += 0.001769561154087995;
                    } else {
                      result[0] += -0.00019302796043813342;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276496810577003649) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3264795000000000891) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2104742577805706616) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7246500000000001274) ) ) {
                      result[0] += 0.00020061223629889635;
                    } else {
                      result[0] += -0.0008773458554279682;
                    }
                  } else {
                    result[0] += -0.00438965237291007;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0313500000000000098) ) ) {
                    result[0] += -0.0009917117007152468;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.77028985507246617) ) ) {
                      result[0] += 0.002179316816360059;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2019559617197731194) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5349.110830475206967) ) ) {
                    result[0] += -0.001711851145211048;
                  } else {
                    result[0] += 0.0010148936898680522;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2135526242593671353) ) ) {
                    result[0] += 0.006295172335618583;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.435224480679027081) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.091810344827586654) ) ) {
                  result[0] += -0.0013604975475478315;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1121500000000000136) ) ) {
                    result[0] += 0.003055886005795989;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6254210000000001157) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3029155602761551269) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2040413945387017647) ) ) {
                      result[0] += 0.0009364265153454066;
                    } else {
                      result[0] += -0.0014071597481414057;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1869734242044373551) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0033317306111605256;
                    }
                  }
                } else {
                  result[0] += 0.0008195498303370486;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2361862430022099446) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.580400000000000138) ) ) {
                result[0] += -0.0010843524476487959;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.28245614035088096) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.83824525745257539) ) ) {
                    result[0] += 0.002404921167151901;
                  } else {
                    result[0] += 0.009187293197986692;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3511342604241804444) ) ) {
                    result[0] += 0.002248032428751196;
                  } else {
                    result[0] += -0.0018372832141457076;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2386968934588671598) ) ) {
                result[0] += -0.00235367794769559;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.180896918882973573) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.240913000000000016) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.003856544937567375;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2978831689071954059) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1468760000000000343) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.002413471376826183;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.36135000000000006) ) ) {
                      result[0] += 0.00043960217614825;
                    } else {
                      result[0] += -8.334193357215703e-06;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7875500000000000833) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2527500000000000857) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3018.749278514522757) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.88731060606061618) ) ) {
            result[0] += -0.00778650157570161;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1339500000000000413) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.003474859879116613;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
            result[0] += 0.0011657463639945047;
          } else {
            result[0] += -0.0012846504848693075;
          }
        }
      } else {
        result[0] += 0.0011401707261774329;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.145515329548585759) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1279338682318470199) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1036061969132185817) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1010493287512936184) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.25728920409771661) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.07059800664451998) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6734055000000001012) ) ) {
                      result[0] += -0.0008631981213263081;
                    } else {
                      result[0] += 0.0008578539532397002;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06217697296483003927) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0038221215554831703;
                    }
                  }
                } else {
                  result[0] += -0.0029406972670442105;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1221000000000000141) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1612811956950306047) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01125000000000000132) ) ) {
                      result[0] += -0.00029517501180130197;
                    } else {
                      result[0] += 0.0007443942304143588;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.517120500000000094) ) ) {
                      result[0] += -0.004143912528803593;
                    } else {
                      result[0] += 0.00015666783902424487;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1546000000000000429) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.78759398496241317) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.005302022621117857;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3791.556210767445464) ) ) {
                      result[0] += 0.00017008217187217478;
                    } else {
                      result[0] += -0.002664902795110703;
                    }
                  }
                }
              }
            } else {
              result[0] += -0.0037221744943153716;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5321155000000000745) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3724040000000000683) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.14236111111111249) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1154034132138477414) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.003270520295788552;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1241660000000000125) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0016693069791014628;
                  }
                }
              } else {
                result[0] += 0.005214483451105639;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1911254520728568607) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0036715813158412795;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.25552350000000007) ) ) {
            result[0] += 0;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4348515000000000574) ) ) {
              result[0] += -0.007189156726975348;
            } else {
              result[0] += -0.0011047501293545046;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8407499999999999973) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.221246000000000026) ) ) {
            result[0] += 0;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.496478873239436957) ) ) {
              result[0] += 0.0009998032703147366;
            } else {
              result[0] += 0.005503945834153541;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3819320000000000492) ) ) {
            result[0] += -0.0016452537663720899;
          } else {
            result[0] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2690.993343004484359) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2717.414574262154929) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.12310606060606588) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.06061224489796402) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4784.444799033853087) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.518295403837575108) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.432034895516332895) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05505000000000000865) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03085000000000000242) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0024789699695231767;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.21064381391329512) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
                      result[0] += -0.0005965410068058758;
                    } else {
                      result[0] += 0.0025476345057870594;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3152500000000000857) ) ) {
                      result[0] += -0.0029433248576605383;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8844.783695497389999) ) ) {
                  result[0] += -0.0002450617892185669;
                } else {
                  result[0] += -0.00593761469598897;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)623.1461654618134389) ) ) {
                result[0] += -0.0018104757748555233;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2807000000000000051) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.005885156216732886;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.31475748194014663) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.314611154752554967) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.432034895516332895) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.2641090678503506) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.2152144160583962) ) ) {
                      result[0] += -9.029836354058779e-05;
                    } else {
                      result[0] += 0.001523304574195144;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3216.282614078772895) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.005302812580779697;
                    }
                  }
                } else {
                  result[0] += 0.0038153916388706075;
                }
              } else {
                result[0] += -0.003545768217582316;
              }
            } else {
              result[0] += 0.0035079068786851453;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66217532467532791) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2833.358085742900585) ) ) {
              result[0] += -0.005884272477714051;
            } else {
              result[0] += 0;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.73128342245989408) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3420950000000000935) ) ) {
                result[0] += -0.0042065828369271885;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1036061969132185817) ) ) {
                  result[0] += -0.0012203377360414005;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.17170228445099589) ) ) {
                    result[0] += 0.0022897960452385796;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              result[0] += 0.004125843552827931;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.18541666666667567) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2419000000000000317) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.978492136910269927) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7263500000000001622) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0174500000000000037) ) ) {
                      result[0] += -0.0029164900169524302;
                    } else {
                      result[0] += 0.0014415623578956996;
                    }
                  } else {
                    result[0] += -0.007375023609280729;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7759500000000000286) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.388216000000000061) ) ) {
                      result[0] += 0.005325450197673881;
                    } else {
                      result[0] += 0.0010180249552467942;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4606.135262423782478) ) ) {
                      result[0] += 0.0010912171374925243;
                    } else {
                      result[0] += -0.00020551174900850812;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9139.728134485791088) ) ) {
                    result[0] += 0.002511638011585719;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0029757107825545944;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.392166500000000029) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06285000000000001696) ) ) {
                      result[0] += 0.0016439615383804001;
                    } else {
                      result[0] += 0.006206476793813337;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4320780000000000176) ) ) {
                      result[0] += -0.0016136345071387417;
                    } else {
                      result[0] += 0.00251529106870933;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-18644.6123996954484) ) ) {
                result[0] += 0.0018097127404765954;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1729500000000000204) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1121500000000000136) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3871448717291648411) ) ) {
                      result[0] += 0.00014057578656058068;
                    } else {
                      result[0] += -0.0019816755126126975;
                    }
                  } else {
                    result[0] += 0.0014391877134689948;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3057365000000000221) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.005738142506402317;
                  }
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4190.954657040626444) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36860497623707644) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.17778753292362026) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4478500000000000258) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6133040000000001823) ) ) {
                      result[0] += 0.00020273595290259367;
                    } else {
                      result[0] += -0.003763614544263724;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3532.451953216338097) ) ) {
                      result[0] += 0.006908033997613463;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7092500000000001581) ) ) {
                    result[0] += -0.0055695784661745655;
                  } else {
                    result[0] += -0.0010178637501757645;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.43959330143541209) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9566.137358918122118) ) ) {
                    result[0] += -0.0013277581024836926;
                  } else {
                    result[0] += 0.0023740144289804495;
                  }
                } else {
                  result[0] += 0.00668187771259153;
                }
              }
            } else {
              result[0] += -0.0035142560466917445;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.83412756598240634) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7372500000000000719) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02395000000000000254) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                  result[0] += -0.0009358015207884848;
                } else {
                  result[0] += -0.00600547165865418;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5192.030210470990824) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
                  result[0] += 0.007504643435561011;
                } else {
                  result[0] += -0.0007571919021698497;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5882.835930520358488) ) ) {
                  result[0] += -0.004301145452435149;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01485000000000000209) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1179193971631925381) ) ) {
                      result[0] += 0.0011252448103536263;
                    } else {
                      result[0] += -0.0013927173849471726;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1412000000000000199) ) ) {
                      result[0] += -0.0017601287689744008;
                    } else {
                      result[0] += 0.0009144137376353675;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5182500000000002105) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3282773505116238777) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7350500000000000922) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                      result[0] += 0.00014692286642960234;
                    } else {
                      result[0] += 0.005337614034501581;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.59166666666667567) ) ) {
                      result[0] += -0.0035322857679502646;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7068500000000000894) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.59166666666667567) ) ) {
                      result[0] += 0.0007147240683493785;
                    } else {
                      result[0] += -0.0004961373143429367;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363200000000000633) ) ) {
                      result[0] += 0.00026946067475079773;
                    } else {
                      result[0] += -0.005345358275641606;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3436155000000000181) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.004565951968086881;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11144.16520893778397) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9392.751123286552684) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4133440879166302429) ) ) {
                    result[0] += 0.0005144724833987207;
                  } else {
                    result[0] += -0.0033387784907803965;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)142.2522321428571672) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3688321311376249745) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0033060377838459174;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6334000000000000741) ) ) {
                      result[0] += -0.0032550248946245715;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                result[0] += -0.005434510377583376;
              }
            }
          }
        }
      }
    } else {
      result[0] += -0.003864123984704231;
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.482074000000000058) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.144153487166192917) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7291161822165118656) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.548804922219870317) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)507.68014339146265) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1369.851320094411903) ) ) {
                result[0] += 0.003635089160589865;
              } else {
                result[0] += 0;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1879.768845692260356) ) ) {
                result[0] += -0.00215502260615821;
              } else {
                result[0] += 0;
              }
            }
          } else {
            result[0] += -0.0037430115995381688;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2527500000000000857) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2850000000000000866) ) ) {
              result[0] += -0.0012253748272150924;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8623277660543351431) ) ) {
                result[0] += -0.0004198093269603862;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.498956746384165761) ) ) {
                  result[0] += 0.005194971728467337;
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            result[0] += -0.0013059793726341708;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4612010000000000276) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2353.687490992878338) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4143455000000000887) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1316846325177797872) ) ) {
                result[0] += 0.004271216068442695;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6010500000000000842) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4709808304613328223) ) ) {
                    result[0] += 0.004657086342600606;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4843500000000000583) ) ) {
                      result[0] += 0.0005606326116878307;
                    } else {
                      result[0] += -0.00031478541200495016;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2626015000000000432) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.003365885673854507;
                  }
                }
              }
            } else {
              result[0] += 0.006121954629582187;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4203560000000000629) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840560000000000085) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.10263157894737063) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1647458771900037477) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1010493287512936184) ) ) {
                      result[0] += 0.0004897742212484485;
                    } else {
                      result[0] += -0.0018111947845635093;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.236694677871149395) ) ) {
                      result[0] += 0.003812597648800782;
                    } else {
                      result[0] += 0.0006869886549905593;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.08712121212122526) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1643.069582787823265) ) ) {
                      result[0] += -0.002143179279122513;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
                      result[0] += -0.0003579386839789934;
                    } else {
                      result[0] += 0.0023607416227111673;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.81858974358974734) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.481489856570616936) ) ) {
                    result[0] += 0.006359384763363509;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1514018167545138904) ) ) {
                result[0] += 0.0034692966689512383;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1879.768845692260356) ) ) {
                  result[0] += -0.005272264087583486;
                } else {
                  result[0] += 0;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2429488264872171899) ) ) {
            result[0] += 0.0007753169602828748;
          } else {
            result[0] += 0.006263541365319983;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.67204301075269157) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.69062500000000249) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.550425500000000123) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1.3862943611200651) ) ) {
              result[0] += -0.004349216639540876;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04505000000000000671) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1488.538162805079082) ) ) {
                    result[0] += 0.0009531575753572294;
                  } else {
                    result[0] += -0.0015907569954447835;
                  }
                } else {
                  result[0] += -0.0038721394689013346;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.409826191705387366) ) ) {
                  result[0] += 0.0034419903685523256;
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5626395000000000701) ) ) {
              result[0] += 0.003427085532720311;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.638798000000000088) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.433327285921625727) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08784999999999999754) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1516.142594860419422) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0014898837672485269;
                    }
                  } else {
                    result[0] += 0.0012546357432354053;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1920.955598101732676) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)482.0848310656759281) ) ) {
                      result[0] += -0.0005610849061276694;
                    } else {
                      result[0] += -0.004158487414255854;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6829935000000001422) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1369.851320094411903) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2004.58624898434573) ) ) {
                      result[0] += 0.001248508745569189;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.106606960732522002) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0038167924809266113;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01485000000000000209) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006850000000000001053) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0022239649805186478;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9118821962252711133) ) ) {
                      result[0] += 0.0006816762034197234;
                    } else {
                      result[0] += -0.0008489872119602471;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1291.853035939608844) ) ) {
            result[0] += 0.00471145742079139;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2082316587659429064) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2519.658559778325525) ) ) {
                result[0] += 0.002026162950320236;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1842.867320295106538) ) ) {
                  result[0] += 0.0006981635512615904;
                } else {
                  result[0] += -0.0003786878507673382;
                }
              }
            } else {
              result[0] += -0.0008448207436624522;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06175000000000000627) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.87142857142858077) ) ) {
              result[0] += 0.0037918235307817486;
            } else {
              result[0] += 0;
            }
          } else {
            result[0] += -0.0011649243517878431;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.901900000000000146) ) ) {
            result[0] += -0.0054730055316604895;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003250000000000000718) ) ) {
              result[0] += -0.002556322165922002;
            } else {
              result[0] += 0.001548055253600121;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06446597211275277572) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)131.6369047619047876) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8173765000000000613) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0458500000000000088) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01565000000000000419) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7550000000000001155) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.0021772217255348974;
            }
          } else {
            result[0] += 0;
          }
        } else {
          result[0] += 0.005375597670528201;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8079557428872498059) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01027238991612000781) ) ) {
            result[0] += 0.0012043517201976782;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1018.758829443079094) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.0017123945720495636;
            }
          }
        } else {
          result[0] += -0.0019340323178425986;
        }
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5850000000000000755) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)84224.34186458920885) ) ) {
            result[0] += -0.0008948968223790799;
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.05500000000000000722) ) ) {
              result[0] += 0;
            } else {
              result[0] += 7.466857806903613e-05;
            }
          }
        } else {
          result[0] += 0.0016718372380553812;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01695000000000000326) ) ) {
          result[0] += 0;
        } else {
          result[0] += -0.004800589975493719;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08774088920105922729) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.50897851045040099) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07945677231391518047) ) ) {
          result[0] += 0.002565933897801985;
        } else {
          result[0] += -0.0008086367249093438;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)106.7332126398946883) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.606377583365031558) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.860555555555555962) ) ) {
              result[0] += -0.0022049782570640387;
            } else {
              result[0] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9650000000000000799) ) ) {
              result[0] += -0.0010611520044818423;
            } else {
              result[0] += -0.007413253685342167;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1427500000000000158) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01255000000000000213) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.002136261121509062;
            }
          } else {
            result[0] += -0.001221914871434447;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.486100386100386306) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5201090000000001545) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3550000000000000377) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.0022552502622099823;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2180905966455483069) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6094905000000000461) ) ) {
                result[0] += 0.0013365324741616048;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1141.227353400294305) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1698.023085430723995) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.001650855692777833;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-824.1224939772984044) ) ) {
                    result[0] += 0.0005360677217981273;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8969687899648990381) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0031100384130478887;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3016800000000000592) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.314611154752554967) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
                result[0] += -0.000150045927981786;
              } else {
                result[0] += 0.0033076547680501883;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3864500000000000712) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7174563514726279845) ) ) {
                  result[0] += 0.0017346002214181722;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1850000000000000255) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.03500000000000001027) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0005895471936585463;
                    }
                  } else {
                    result[0] += 0.0002613654300855816;
                  }
                } else {
                  result[0] += -0.005697335776967152;
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1920.955598101732676) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2690.993343004484359) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5126500000000001611) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6779663431404205909) ) ) {
                    result[0] += 0.002338825170880188;
                  } else {
                    result[0] += -0.0022379348514591758;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2166315049226441858) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.005087311022801563;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.07059800664451998) ) ) {
                  result[0] += -0.0003285449077241429;
                } else {
                  result[0] += 0.002117832332794662;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.19793814432989798) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.711180124223603105) ) ) {
                  result[0] += -0.0016770139826155044;
                } else {
                  result[0] += -0.009859516034678908;
                }
              } else {
                result[0] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.650443786982250138) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05365000000000001018) ) ) {
              result[0] += 0.003042679522803741;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.532388663967611642) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2879000000000001003) ) ) {
                  result[0] += -0.0024650026784542134;
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            result[0] += 0.004393059841356065;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006450000000000001739) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.872261072261072634) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.583910433979686783) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.414688759516345984) ) ) {
                  result[0] += 0.0009448617613544299;
                } else {
                  result[0] += -0.0009875071003088139;
                }
              } else {
                result[0] += 0.003246266214637619;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.17778753292362026) ) ) {
                result[0] += -0.002016182946562895;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.92861142217245352) ) ) {
                  result[0] += 0.0014288554317284814;
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008150000000000002728) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.463850174216029032) ) ) {
                result[0] += -0.004939141556428383;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33592821992194288) ) ) {
                  result[0] += 0.0012292494801133074;
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9650000000000000799) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0033709854859267406;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)43305.24755796225509) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)21962.47439012520408) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5.113654335801698814) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7747129114313702214) ) ) {
                      result[0] += -0.004578640121711302;
                    } else {
                      result[0] += -1.814662716955529e-05;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
                      result[0] += 0.0013778710622485261;
                    } else {
                      result[0] += -7.17135280651068e-05;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)29304.5719267044733) ) ) {
                      result[0] += 0.0009953116175622993;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.16869918699187636) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.003996599988447447;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)223.8669250645995135) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1468760000000000343) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.005710430749351626;
                  }
                } else {
                  result[0] += 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.317357322368964523) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9842100889221309101) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1727500000000000424) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.06061224489796402) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.414688759516345984) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.062745098039215907) ) ) {
                result[0] += 0.00043523445351641914;
              } else {
                result[0] += -0.001787265288634849;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.883349826818407013) ) ) {
                result[0] += 0.004864287703646079;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2127.473441927146268) ) ) {
                  result[0] += 0.002910950052249095;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1900500000000000245) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03200000000000000761) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0038151910667212855;
                    }
                  } else {
                    result[0] += 0.0015480465595295281;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07205000000000001681) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-94839.3939457742963) ) ) {
                result[0] += 0.0021995187577729144;
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8377419705366430103) ) ) {
                result[0] += -0.003907739943390652;
              } else {
                result[0] += -0.0001725809633890861;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7444509567657248139) ) ) {
            result[0] += 0.004728521482571114;
          } else {
            result[0] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7320592709375011164) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2534500000000000641) ) ) {
            result[0] += -0.004110080293667935;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6010500000000000842) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4420656524973072266) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8050000000000001599) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1710950000000000248) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06303700000000000969) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0008386967811225792;
                    }
                  } else {
                    result[0] += -0.002224419413981596;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.482074000000000058) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-18158.57126180104024) ) ) {
                      result[0] += -6.74986236777538e-05;
                    } else {
                      result[0] += 0.004153082901023882;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.04880952380953119) ) ) {
                      result[0] += 0.0005271987351779195;
                    } else {
                      result[0] += -0.0013771680709898117;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0756500000000000089) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8850000000000001199) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0010129577181770706;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.737273511647972946) ) ) {
                      result[0] += -0.00017127178389577858;
                    } else {
                      result[0] += -0.0023828456938254083;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)786.2947641301196882) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)507.68014339146265) ) ) {
                      result[0] += 0.0007867004332732438;
                    } else {
                      result[0] += -0.0024356502769774793;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5261.246056081498864) ) ) {
                      result[0] += 0.00021592323540703984;
                    } else {
                      result[0] += 0.0016701391081425743;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6087500000000001243) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4093.415394671918875) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.18253968253969077) ) ) {
                    result[0] += 0.00045481178485919153;
                  } else {
                    result[0] += -0.0016633428081419595;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1313.95443299723388) ) ) {
                    result[0] += -0.0007000912275624545;
                  } else {
                    result[0] += -0.00701971902222028;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.978768481788676592) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7769885000000001929) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1311.833829054160333) ) ) {
                      result[0] += 0.0001805238002787444;
                    } else {
                      result[0] += 0.001549949584880009;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.002364066193854875) ) ) {
                      result[0] += 0.00023925950459664766;
                    } else {
                      result[0] += -0.0005514514602712652;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5565325000000000966) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.517120500000000094) ) ) {
                      result[0] += -0.0002252524059216019;
                    } else {
                      result[0] += 0.0013962097504301232;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3473000000000000531) ) ) {
                      result[0] += -0.00174001429644765;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1018.758829443079094) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2081.229889241327783) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8769200928108228377) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6199606872203474728) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0014109921070068004;
                  }
                } else {
                  result[0] += -0.0003417347068249623;
                }
              } else {
                result[0] += -0.0018460022237235289;
              }
            } else {
              result[0] += 0.003029107635050004;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1523500000000000132) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4254330624375546877) ) ) {
                result[0] += 0;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7959100033456006917) ) ) {
                  result[0] += -0.006393293334451796;
                } else {
                  result[0] += -0.0010926575966799504;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.77179878048780548) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.344900589101620803) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.198484848484848708) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.689073741007194762) ) ) {
                      result[0] += -0.00019987644032409544;
                    } else {
                      result[0] += 0.0012257642554573851;
                    }
                  } else {
                    result[0] += -0.0009228994407700228;
                  }
                } else {
                  result[0] += 0.002880667820475399;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2534500000000000641) ) ) {
                  result[0] += 0.0008641534940038053;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2879000000000001003) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9983.220168266934706) ) ) {
                      result[0] += -0.000473977428032059;
                    } else {
                      result[0] += -0.007557644349569408;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6871843434343435364) ) ) {
        result[0] += 0.0001268630465170938;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7881440123671350495) ) ) {
          result[0] += -0.0032886995158624465;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1663.13767962321208) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.0012983622982334188;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2801060000000000771) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.27991452991453158) ) ) {
          result[0] += -0.00042122635577275226;
        } else {
          result[0] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
          result[0] += 0;
        } else {
          result[0] += 0.0050934830744222195;
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8350000000000000755) ) ) {
        result[0] += 0.0019749175541624786;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3652000000000000246) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.285058977719528484) ) ) {
            result[0] += 0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.083835341365462668) ) ) {
              result[0] += -0.0031203565126559966;
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4446970000000000645) ) ) {
            result[0] += -0.0005217284943565793;
          } else {
            result[0] += 0.003142410367536611;
          }
        }
      }
    }
  }
  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14995.28300841563214) ) ) {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5133.306374476119345) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5988367574978012975) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3599500000000000477) ) ) {
          result[0] += -0.00521426573618676;
        } else {
          result[0] += 0;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4200500000000000345) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.025350000000000001) ) ) {
            result[0] += 0.0016262105777568405;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-36696.22831575417513) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.921363443236741575) ) ) {
                result[0] += 6.527206248681379e-05;
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1448.773443424887091) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)739.2431776973787692) ) ) {
                  result[0] += -0.00072627304487011;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.35781818181818537) ) ) {
                  result[0] += -0.004506486853680609;
                } else {
                  result[0] += -0.00041551148611579234;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.05227272727272947) ) ) {
            result[0] += 0.002530421253110655;
          } else {
            result[0] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5567.746532477868641) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.34134834110034179) ) ) {
          result[0] += 0.005049482257941878;
        } else {
          result[0] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.78759398496241317) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7124500000000001387) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.53708791208791595) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.94047619047619335) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.314611154752554967) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.002965970762765302;
                }
              } else {
                result[0] += 0.0014105773763456967;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2818837338874919385) ) ) {
                result[0] += -0.0056921743244325385;
              } else {
                result[0] += -0.0010567338118936313;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4407500000000000306) ) ) {
              result[0] += 0.0012612705043844447;
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.30731523378582892) ) ) {
            result[0] += 0.0042130677072748915;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)154.1011111111111234) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-94839.3939457742963) ) ) {
                result[0] += 0.004274198283812927;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3282773505116238777) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17639.05176736719659) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11657.82777714064287) ) ) {
                      result[0] += -0.0023844218199815274;
                    } else {
                      result[0] += 0.0004523182094885232;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1292500000000000315) ) ) {
                      result[0] += 0.007088516567089805;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-29069.44581527830451) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8501.126385312682032) ) ) {
                      result[0] += 0.002338524550847271;
                    } else {
                      result[0] += -0.00010649005066774148;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.455850000000000033) ) ) {
                      result[0] += -0.0018330868774884;
                    } else {
                      result[0] += 0.0006378055962595174;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.07626592109350838) ) ) {
                result[0] += -0.0042170878591245966;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.482074000000000058) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.43599383073067699) ) ) {
                    result[0] += 0.0016559516874586548;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1110651606754299442) ) ) {
                      result[0] += -0.0008320252704928446;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-53428.13244237575418) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.003688076220344814;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8844.783695497389999) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9139.728134485791088) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9173.564891287333012) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.289274051889615802) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2660001773777408984) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6241500000000000936) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2363500000000000323) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1292500000000000315) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.13209924403954787) ) ) {
                      result[0] += 0.0018233057740218216;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.0021183227892111554;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2833.358085742900585) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.008446676350978446;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4917.478106812183796) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10400.13848083777884) ) ) {
                    result[0] += 0.00048588518153847997;
                  } else {
                    result[0] += -0.005407879325471031;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9983.220168266934706) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.78759398496241317) ) ) {
                      result[0] += 0.0013772873823532654;
                    } else {
                      result[0] += -0.0009839056004964473;
                    }
                  } else {
                    result[0] += 0.005546129010464145;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4148169003269751576) ) ) {
                result[0] += 0.0011572210929572785;
              } else {
                result[0] += 0.007365589459503154;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3609444825669292922) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.14236111111111249) ) ) {
                result[0] += -0.005886804920153149;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4120.477146499230912) ) ) {
                  result[0] += 0.0005189601561608377;
                } else {
                  result[0] += -0.00214700359690054;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4133440879166302429) ) ) {
                  result[0] += -0.0006373966350309962;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10400.13848083777884) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5831362938626021286) ) ) {
                      result[0] += 0.00773061191640192;
                    } else {
                      result[0] += 0.0006218572007325992;
                    }
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4351716793902547509) ) ) {
                  result[0] += 0.00032767298188391824;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.90814019219898512) ) ) {
                    result[0] += -0.002575950426213207;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3864500000000000712) ) ) {
                      result[0] += -0.00020118224307875306;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08188154061328727085) ) ) {
            result[0] += 0.0012716683568122602;
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)14358.85907140550808) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.64761904761907374) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2027874902874902963) ) ) {
                  result[0] += 0.0025960696641456806;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07205000000000001681) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0015705291733376348;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7550000000000001155) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.004641998958336259;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)96.63122171945703087) ) ) {
                result[0] += -0.005016048947917055;
              } else {
                result[0] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.314611154752554967) ) ) {
          result[0] += 0;
        } else {
          result[0] += 0.005879444449328794;
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)13833.51142176279791) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)12336.40759658668867) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.78345184227537601) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4606.135262423782478) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8557.692406390551696) ) ) {
                result[0] += -0.0034197677570399717;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.01219512195122263) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.53708791208791595) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3028.043267225880754) ) ) {
                      result[0] += -0.00011339885268392172;
                    } else {
                      result[0] += 0.000980385691401539;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0313500000000000098) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.003876016921416016;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.482074000000000058) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4262175000000000824) ) ) {
                      result[0] += -0.0005513548344940009;
                    } else {
                      result[0] += 0.003732041078463492;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
                      result[0] += -0.005551435850174166;
                    } else {
                      result[0] += -0.0004081988156865866;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.78759398496241317) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.002049180327871269) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.567117117117118319) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.23959827833572689) ) ) {
                      result[0] += -0.001212745710091991;
                    } else {
                      result[0] += 0.0005122475520732787;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.8369719981015713) ) ) {
                      result[0] += -0.008654758689520627;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  result[0] += 0.0019731502837428004;
                }
              } else {
                result[0] += -0.005008153708390499;
              }
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8550000000000000933) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.0281746031746124) ) ) {
                result[0] += -0.0018350860893238446;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.4495192307692335) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2105.992513001595853) ) ) {
                    result[0] += 0.0027483055530597273;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.446234000000000075) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3944745000000000612) ) ) {
                      result[0] += -0.0002560387771405967;
                    } else {
                      result[0] += 0.0023840614711995124;
                    }
                  } else {
                    result[0] += -0.0022527448209538484;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9455500000000001126) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.901900000000000146) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.10905271199389688) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5481.444926233901242) ) ) {
                      result[0] += 0.0016056831563464181;
                    } else {
                      result[0] += -0.0010725425371661478;
                    }
                  } else {
                    result[0] += 0.0048195560793689585;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1037995575841958729) ) ) {
                    result[0] += 0.005941441307258672;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03931893328124715786) ) ) {
                  result[0] += 0.001172644877186952;
                } else {
                  result[0] += -0.003411938127030551;
                }
              }
            }
          }
        } else {
          result[0] += -0.004922779470251653;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)118.3581481481481603) ) ) {
          result[0] += 0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.0052038635266534366;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3344.138681686334621) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3064.401422747675497) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12333.58675317392408) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3146.277250048707629) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1729.290123274111693) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5586000000000000965) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)572.059826422058336) ) ) {
                result[0] += -0.00098709536959201;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3371000000000000663) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1116.565576061355387) ) ) {
                    result[0] += 0.0015959122923414077;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += -0.000370233618185929;
                }
              }
            } else {
              result[0] += 0.002950331383985051;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1460500000000000409) ) ) {
              result[0] += 0;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.31475748194014663) ) ) {
                result[0] += -0.00025154731379782054;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.61204013377927069) ) ) {
                  result[0] += -0.005648980166827301;
                } else {
                  result[0] += -0.001265719811644612;
                }
              }
            }
          }
        } else {
          result[0] += 0.002471384841231717;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5924805000000000765) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4138499999999999956) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6243108164664067372) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8450000000000000844) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1955750000000000266) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.86694963214488396) ) ) {
                      result[0] += -0.00041047804654333156;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1748500000000000332) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0020315504123801136;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.27991452991453158) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                      result[0] += -0.0026802756936795506;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1934555000000000302) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1854500000000000315) ) ) {
                    result[0] += 0.0003145187555034715;
                  } else {
                    result[0] += -0.0004129523421339729;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2227500000000000313) ) ) {
                    result[0] += 0.0003785591479416579;
                  } else {
                    result[0] += 0.007024615767856687;
                  }
                }
              }
            } else {
              result[0] += -0.002618968560618844;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.75486037469071476) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)760.1404084372057923) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1604000000000000148) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.083835341365462668) ) ) {
                      result[0] += -0.0014505894519969012;
                    } else {
                      result[0] += 0.002771239718973336;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)642.537947836085209) ) ) {
                      result[0] += -0.0029889541210426987;
                    } else {
                      result[0] += 0.0007188750178949298;
                    }
                  }
                } else {
                  result[0] += 0.0028926831703125345;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6526430887472424169) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4006500000000000061) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6549412391405855516) ) ) {
                      result[0] += 0.007053162892200915;
                    } else {
                      result[0] += 0.0018877840997401651;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.487126000000000059) ) ) {
                      result[0] += 0.001544473389202383;
                    } else {
                      result[0] += -0.0003080507998106779;
                    }
                  }
                } else {
                  result[0] += -0.0022372922243910653;
                }
              }
            } else {
              result[0] += 0.0060887823754788226;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4671500000000000652) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.198484848484848708) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.0024732407794282978;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3002208421277365313) ) ) {
                result[0] += 0.0014261638160634762;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2082206845299330589) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.711180124223603105) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0017180700344506903;
                    }
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += -0.0028050629788755267;
                }
              }
            }
          } else {
            result[0] += -0.00338165475533957;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.77003205128205821) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.028991596638655803) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9706500000000001238) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07945677231391518047) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.835693500000000089) ) ) {
                result[0] += 0.00337336564068508;
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09453843892841291841) ) ) {
                result[0] += -0.0027605598628279225;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.742610837438423932) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.532388663967611642) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                      result[0] += -0.0006643138883231901;
                    } else {
                      result[0] += 0.0006668590830344949;
                    }
                  } else {
                    result[0] += -0.0022932410733006656;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1407.682258252089468) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1155500000000000277) ) ) {
                      result[0] += 0.0018758533248191007;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07798442130072869016) ) ) {
                      result[0] += -0.0003422300335377455;
                    } else {
                      result[0] += 0.0007495061673548535;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += -0.001073859596008664;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8150000000000000577) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)829.040359399005979) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5250000000000001332) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.29500000000000004) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03385000000000000508) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.002692526516609874;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2839320000000000177) ) ) {
                    result[0] += -0.0004924440168134144;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.211309523809525501) ) ) {
                  result[0] += 0.005236954228620725;
                } else {
                  result[0] += 0.0007104748538936293;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07035000000000000975) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2082206845299330589) ) ) {
                  result[0] += 0.0013597124605653562;
                } else {
                  result[0] += -3.804406068385076e-05;
                }
              } else {
                result[0] += -0.0023876596191539676;
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1137.968895395498521) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)507.68014339146265) ) ) {
                  result[0] += -0.0018641314455646182;
                } else {
                  result[0] += 0.000365214816359372;
                }
              } else {
                result[0] += -0.0047710723038838785;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.80196078431373152) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.39689043154655579) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003750000000000000295) ) ) {
                      result[0] += -0.0025538739718242664;
                    } else {
                      result[0] += -0.00024042518788092813;
                    }
                  } else {
                    result[0] += -0.004551656600367407;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3578754866530491907) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1889249870736071368) ) ) {
                      result[0] += 0.0005614361771814796;
                    } else {
                      result[0] += 0.004494592399584747;
                    }
                  } else {
                    result[0] += -0.0008440987333957488;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1533.824223339392574) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.005151004588584588;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6254210000000001157) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8550000000000000933) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03995000000000000634) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2093320000000000181) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01325000000000000309) ) ) {
                  result[0] += 0.00048746079663663627;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1355947963695212921) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0012306440361668607;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2607440000000000313) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1795.96581361443873) ) ) {
                  result[0] += -0.00033141509839133636;
                } else {
                  result[0] += 6.197748062350055e-05;
                }
              } else {
                result[0] += 0.0021877278251793268;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8212500000000001465) ) ) {
              result[0] += 0.008109693039938798;
            } else {
              result[0] += 0.0013133253863099356;
            }
          }
        } else {
          result[0] += -0.003574630576480974;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4231.908399006179934) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4420656524973072266) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3660021954817824219) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03305000000000000299) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[0] += -0.002218769492020047;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1514018167545138904) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9142500000000001181) ) ) {
                  result[0] += 0.003526522249562507;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2743.202382171203226) ) ) {
                  result[0] += 0.0009049063847360407;
                } else {
                  result[0] += -0.0015332568604676576;
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4391.076444984862064) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
                result[0] += -0.0015691788864503333;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3913.927573521703835) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3632.024792260073355) ) ) {
                    result[0] += 0.00144343677964887;
                  } else {
                    result[0] += -0.0030501920526259997;
                  }
                } else {
                  result[0] += 0.0025707463377260247;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3137585000000000512) ) ) {
                result[0] += -0.00048406697940805597;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4978420000000000623) ) ) {
                  result[0] += -0.008002068767625112;
                } else {
                  result[0] += -0.0009516657955059846;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.67204301075269157) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1523500000000000132) ) ) {
              result[0] += 0.0030088258625209927;
            } else {
              result[0] += -0.0032369916364230903;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7866.211076535222674) ) ) {
              result[0] += 0.005271352267406801;
            } else {
              result[0] += 0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.048809523809525857) ) ) {
          result[0] += 0;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.46790123456790411) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5988367574978012975) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2648210000000000286) ) ) {
                result[0] += -0.0011733614528034845;
              } else {
                result[0] += -0.005572208487618308;
              }
            } else {
              result[0] += 0;
            }
          } else {
            result[0] += 0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5727811426840619946) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5159500000000001307) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3483525000000000649) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4966500000000000914) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1710950000000000248) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07622150000000001147) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0001226028149704919;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0261500000000000031) ) ) {
                  result[0] += 0.0009195337320187978;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              result[0] += -0.0012893491926084053;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-42515.07229609502247) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.00466736968901693;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3991483633491397787) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5381500000000001283) ) ) {
              result[0] += -0.0031125376341999324;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6424500000000000766) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1729500000000000204) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2270140000000000213) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5832000000000000517) ) ) {
                      result[0] += 0.0016336410120198247;
                    } else {
                      result[0] += -0.0008866155655238815;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09385000000000003062) ) ) {
                      result[0] += 0.0015435354952396932;
                    } else {
                      result[0] += 0.0071106577083251184;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.580400000000000138) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4768620372057117418) ) ) {
                      result[0] += -0.004259734479170821;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.87142857142858077) ) ) {
                      result[0] += 0.002742755737504983;
                    } else {
                      result[0] += -0.000844776156125394;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1784550515539286286) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02459183207930617718) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01478534615874095223) ) ) {
                      result[0] += 0.0001232962289842498;
                    } else {
                      result[0] += -0.0020433627676382333;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02837773553863971385) ) ) {
                      result[0] += 0.0027266227365265183;
                    } else {
                      result[0] += 0.00023767965327689146;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8557.692406390551696) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2902500000000000635) ) ) {
                      result[0] += 0.00037316869242211227;
                    } else {
                      result[0] += -0.0008819711815672745;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7759500000000000286) ) ) {
                      result[0] += -0.000681045901958311;
                    } else {
                      result[0] += -0.003814047612612562;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3079795000000000171) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7201500000000001789) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6550000000000001377) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0015254600102330292;
                }
              } else {
                result[0] += -0.000900375467679583;
              }
            } else {
              result[0] += 0.0041930540043523005;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3991483633491397787) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.77028985507246617) ) ) {
            result[0] += 0;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4843500000000000583) ) ) {
              result[0] += 0.006057577386208645;
            } else {
              result[0] += 0.0007033831900130882;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1349500000000000421) ) ) {
            result[0] += -0.003324718760158628;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6603400946501547519) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.04880952380953119) ) ) {
                result[0] += -0.0033220080857343545;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6111605972688834987) ) ) {
                  result[0] += 0.0018624559265677468;
                } else {
                  result[0] += -0.0005512630408997742;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)154.1011111111111234) ) ) {
                result[0] += 0.004373036381920136;
              } else {
                result[0] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.114147004888090417) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8551000000000000822) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.130274200633482079) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)167.5392857142857395) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.65838375108038605) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6734055000000001012) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.0011954138330260175;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1000142058976443288) ) ) {
              result[0] += 0.0012773307616446021;
            } else {
              result[0] += 0.006612088537205529;
            }
          }
        } else {
          result[0] += -0.0005314824174127862;
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1755162960706670994) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1155500000000000277) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06663870972854980812) ) ) {
              result[0] += 0.0023128338474403174;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1036061969132185817) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.15450928381962914) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.486100386100386306) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.00033052448387843906;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2648210000000000286) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.005767701332486164;
                  }
                }
              } else {
                result[0] += 0.0012056421402602132;
              }
            }
          } else {
            result[0] += -0.0033554407027441397;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5376165000000000527) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1768500000000000349) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4606.135262423782478) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.358141500000000057) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3149.812030383795445) ) ) {
                    result[0] += -0.001670537251009061;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.07059800664451998) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.02658071352879077) ) ) {
                      result[0] += 0.0015643626637117632;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.005479417584763306;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)10171.3697502395753) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08706594241544672597) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7781500000000000083) ) ) {
                      result[0] += -0.000870994599120074;
                    } else {
                      result[0] += -0.006485931746810103;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)59.16273471352914015) ) ) {
                    result[0] += 0.0042083690645219685;
                  } else {
                    result[0] += -0.000304968340226108;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.76341350601295943) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.74216524216524604) ) ) {
                  result[0] += 0.000378006544791775;
                } else {
                  result[0] += 0.005333633943517523;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7803500000000002101) ) ) {
                  result[0] += 0.0025158677269307823;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2344066382699040996) ) ) {
                    result[0] += 0.002317772419570813;
                  } else {
                    result[0] += -0.002496437065006364;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7158.326501222521074) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.469444444444445) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1141.227353400294305) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03785000000000000864) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7916000000000001924) ) ) {
                      result[0] += -0.0016412155932459017;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.15450928381962914) ) ) {
                      result[0] += 0.0004141650290539779;
                    } else {
                      result[0] += -0.0019152370102894993;
                    }
                  }
                } else {
                  result[0] += 0.0017146612997165104;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09947290620547651063) ) ) {
                  result[0] += 0.0026892023932631793;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              result[0] += -0.002551317254207023;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2063.329983498031197) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.159464746154530435) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1423286664273381852) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1179193971631925381) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8753585000000000393) ) ) {
                result[0] += 0.0008897350435019097;
              } else {
                result[0] += -0.001162434277294023;
              }
            } else {
              result[0] += -0.002199503411148805;
            }
          } else {
            result[0] += 0.0005023209633885461;
          }
        } else {
          result[0] += -0.0031549126427469145;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4302840000000000553) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3420950000000000935) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02295654067395430306) ) ) {
                result[0] += -0.0015648644780560548;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.901900000000000146) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.872261072261072634) ) ) {
                    result[0] += -0.002024392797294347;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1123872490207054042) ) ) {
                      result[0] += -0.00027902725123406485;
                    } else {
                      result[0] += 0.00020557607228479592;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1241660000000000125) ) ) {
                    result[0] += -0.00012714200188139276;
                  } else {
                    result[0] += 0.0022535483704483592;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)101.5672514619883202) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8501.126385312682032) ) ) {
                  result[0] += 0.0038589005919257967;
                } else {
                  result[0] += -0.0031928097239798006;
                }
              } else {
                result[0] += 0.004264453820607372;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)18183.16014768836976) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2303.801636448604313) ) ) {
                result[0] += -0.004831902524439169;
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += 0.0008223920019541972;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07618126899281679743) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)142.2522321428571672) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.60851063829787932) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.76341350601295943) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.653589743589744199) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05855000000000001176) ) ) {
                      result[0] += 0.0001830623707884614;
                    } else {
                      result[0] += -0.001643138104181463;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7517.831857566079634) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0032493195761953203;
                    }
                  }
                } else {
                  result[0] += -0.00254934049387866;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01651861945051705596) ) ) {
                  result[0] += 0.004037863306825832;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1688500000000000278) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9046500000000001762) ) ) {
                      result[0] += 0.0014642959990225335;
                    } else {
                      result[0] += -0.0018275172002411326;
                    }
                  } else {
                    result[0] += 0.0031489077366490016;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1103500000000000175) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0031681019853146268;
              }
            }
          } else {
            result[0] += 0.0032330596669492787;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1171905010334959446) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.39689043154655579) ) ) {
        result[0] += 0;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7852500000000001146) ) ) {
          result[0] += -0.00592981773837144;
        } else {
          result[0] += -0.0002268492042601285;
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7092500000000001581) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.283247888168071893) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4150000000000000355) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.003909962313846242;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5936032516797165037) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.43376557335367671) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1313.95443299723388) ) ) {
                  result[0] += -0.005949820267928094;
                } else {
                  result[0] += -0.0003510994751368487;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.50897851045040099) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3449485957867410302) ) ) {
                    result[0] += -0.004128667733494539;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-200.3606350077996296) ) ) {
                  result[0] += -0.003656709333580555;
                } else {
                  result[0] += 0.0001971473689078292;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.93082137161084688) ) ) {
                  result[0] += 0.0035459834181368836;
                } else {
                  result[0] += 0;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6350000000000001199) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.005372753259286846;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3511342604241804444) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4580000000000000182) ) ) {
            result[0] += -0.003949161025244656;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3599500000000000477) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7221500000000000696) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2059541029866850392) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)159.4971590909091219) ) ) {
                      result[0] += 0.005010439262971406;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7092500000000001581) ) ) {
                      result[0] += -0.0006050496300436189;
                    } else {
                      result[0] += 0.0013135477967948944;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94281045751634274) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.39356884057971797) ) ) {
                      result[0] += 0.0018418328920368219;
                    } else {
                      result[0] += -0.001843254716993836;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2924659694118884601) ) ) {
                      result[0] += 0.011201280086055759;
                    } else {
                      result[0] += 0.002030554525518424;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1827500000000000513) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2461167842040226927) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1219665183460445085) ) ) {
                      result[0] += 0.0024596070212312784;
                    } else {
                      result[0] += -8.715606420548377e-05;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.0212765957446841) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0026946299841758073;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
                      result[0] += 0.0006967635174930571;
                    } else {
                      result[0] += 0.006626618957348074;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4828000000000000624) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3557370000000000254) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.005834354013536828;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1889249870736071368) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1490519239829231901) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.004194178167619639;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4550085000000000934) ) ) {
                    result[0] += -0.002266790345409848;
                  } else {
                    result[0] += 1.910549988695558e-05;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.405609901914840254) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1647458771900037477) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.38051350000000006) ) ) {
                result[0] += 0.0030320961906926225;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4849410000000000109) ) ) {
                  result[0] += -0.0015583792042372722;
                } else {
                  result[0] += 0.0005483047482046594;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6129500000000001059) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.77028985507246617) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1530.761118312260805) ) ) {
                    result[0] += -0.0008539521121675162;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07895000000000000628) ) ) {
                      result[0] += 0.005065977587509025;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  result[0] += -0.0019386435256997891;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2782500000000000528) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1934555000000000302) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2613055141501312573) ) ) {
                      result[0] += -0.0020814933878029055;
                    } else {
                      result[0] += -0.006705621322020181;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.07449922958397615) ) ) {
                    result[0] += 0.002097599275736934;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9989.107872504324405) ) ) {
                      result[0] += -0.0016740765505626719;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4103386442176324422) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1221000000000000141) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.006477858993180593;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5623500000000001275) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4800849858356940891) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2503885000000000693) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5254000000000000892) ) ) {
                      result[0] += 0.0006971054830328822;
                    } else {
                      result[0] += -0.0017562061022417974;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2807000000000000051) ) ) {
                      result[0] += 0.004545661671494739;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1256.768626091058877) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1590.266385994794746) ) ) {
                      result[0] += -2.9099413194292367e-05;
                    } else {
                      result[0] += -0.002449971303618971;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.344900589101620803) ) ) {
                      result[0] += -5.370728619524474e-05;
                    } else {
                      result[0] += 0.0025143176364798743;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1827500000000000513) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0458500000000000088) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.334577114427861311) ) ) {
                      result[0] += 0.002098519617894894;
                    } else {
                      result[0] += -0.002513300410113471;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3089370407807915941) ) ) {
                      result[0] += -0.0022193849140274362;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6770500000000000407) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2086500000000000299) ) ) {
                      result[0] += 0.0027965796637386526;
                    } else {
                      result[0] += -0.00046889521808078855;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.63725490196079093) ) ) {
                      result[0] += 0.0001404415517973562;
                    } else {
                      result[0] += 0.0057789900453444005;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

