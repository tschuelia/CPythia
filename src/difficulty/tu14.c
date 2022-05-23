#include "prediction.h"
double predict_margin_unit14(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4626670032739639282) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.240384578704833984) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5300000011920928955) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1536365002393722534) ) ) {
            sum += (double)0.02175499193548386875;
          } else {
            sum += (double)0.09403645967741934564;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7030478417873382568) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009349999949336051941) ) ) {
              sum += (double)0.3659615909090909169;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.147619009017944336) ) ) {
                sum += (double)0.3179451617647058859;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.701851844787597656) ) ) {
                  sum += (double)0.2083651125000000326;
                } else {
                  sum += (double)0.1304514305555555809;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.258018136024475098) ) ) {
              sum += (double)0.02676259090909091296;
            } else {
              sum += (double)0.1186730714285714194;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4249999970197677612) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37087917327880859) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1088919974863529205) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992499828338623047) ) ) {
                sum += (double)0.01397414393939394074;
              } else {
                sum += (double)0.003410537037037037443;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02865000069141387939) ) ) {
                sum += (double)0.02756016666666665643;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5521000027656555176) ) ) {
                  sum += (double)0.1199411764705882455;
                } else {
                  sum += (double)0.062791180555555548;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1077.8555908203125) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1423714980483055115) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1903499960899353027) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1273088604211807251) ) ) {
                      sum += (double)0.003396526315789473536;
                    } else {
                      sum += (double)0.002556693939393941181;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3192499876022338867) ) ) {
                      sum += (double)0.009120631578947368048;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  }
                } else {
                  sum += (double)0.006247500000000000449;
                }
              } else {
                sum += (double)0.0149006666666666697;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9555689990520477295) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3518999963998794556) ) ) {
                  sum += (double)0.04499298437499999609;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2349999994039535522) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6057999730110168457) ) ) {
                      sum += (double)0.0138999565217391291;
                    } else {
                      sum += (double)0.007292195652173914279;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1552999988198280334) ) ) {
                      sum += (double)0.0449786249999999943;
                    } else {
                      sum += (double)0.01372319999999999963;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)120.2119026184082031) ) ) {
                  sum += (double)0.002500000000000000052;
                } else {
                  sum += (double)0.006240208333333334585;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.5917363166809082) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.43589687347412109) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3551682829856872559) ) ) {
                  sum += (double)0.05983364062500000358;
                } else {
                  sum += (double)0.02390651250000000103;
                }
              } else {
                sum += (double)0.1319722236842105489;
              }
            } else {
              sum += (double)0.1637130743243243591;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2209069952368736267) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7410667836666107178) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5461499989032745361) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.870000004768371582) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.48113155364990234) ) ) {
                      sum += (double)0.01771432142857142997;
                    } else {
                      sum += (double)0.04717161111111110861;
                    }
                  } else {
                    sum += (double)0.08767362499999999115;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.6897430419921875) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.28952407836914062) ) ) {
                      sum += (double)0.02705414999999999556;
                    } else {
                      sum += (double)0.04922032812500000409;
                    }
                  } else {
                    sum += (double)0.01400468421052631675;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12769.51611328125) ) ) {
                  sum += (double)0.01927928846153846229;
                } else {
                  sum += (double)0.006809120000000001838;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.810000002384185791) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2462499961256980896) ) ) {
                  sum += (double)0.1726978522727272702;
                } else {
                  sum += (double)0.0893830899999999845;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.37382316589355469) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2435000017285346985) ) ) {
                    sum += (double)0.0301801818181818178;
                  } else {
                    sum += (double)0.07343013281249999302;
                  }
                } else {
                  sum += (double)0.01990131818181818321;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5687299966812133789) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.53749990463256836) ) ) {
          sum += (double)0.2909518043478260263;
        } else {
          sum += (double)0.106269849999999999;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.464984014630317688) ) ) {
          sum += (double)0.4946322031250000029;
        } else {
          sum += (double)0.3426583214285713885;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603064954280853271) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9199577271938323975) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.28906393051147461) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3368515074253082275) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03755000047385692596) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.7925872802734375) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.315441131591796875) ) ) {
                  sum += (double)0.4168000833333333488;
                } else {
                  sum += (double)0.3817153593749999518;
                }
              } else {
                sum += (double)0.4859080086206897242;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.499390125274658203) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4622500091791152954) ) ) {
                  sum += (double)0.3508888043478261554;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3459.880126953125) ) ) {
                    sum += (double)0.396573437499999959;
                  } else {
                    sum += (double)0.445010500000000031;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13455.06201171875) ) ) {
                  sum += (double)0.3793054642857143222;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.983926534652709961) ) ) {
                    sum += (double)0.2976554375000000086;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2809690535068511963) ) ) {
                      sum += (double)0.140444261904761919;
                    } else {
                      sum += (double)0.2602212840909091107;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0870000012218952179) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1151857972145080566) ) ) {
                sum += (double)0.5820220131578948131;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.87615728378295898) ) ) {
                  sum += (double)0.4909432166666666819;
                } else {
                  sum += (double)0.5383513749999999654;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.175438642501831055) ) ) {
                sum += (double)0.5059733299999998879;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7023999989032745361) ) ) {
                  sum += (double)0.4466399204545454804;
                } else {
                  sum += (double)0.3627285555555556096;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3334394991397857666) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04004999902099370956) ) ) {
              sum += (double)0.3158598076923077036;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2386270016431808472) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3113500028848648071) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.29695606231689453) ) ) {
                    sum += (double)0.2327305394736841615;
                  } else {
                    sum += (double)0.151920544117647105;
                  }
                } else {
                  sum += (double)0.05842181818181817893;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.71027374267578125) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13730.01611328125) ) ) {
                    sum += (double)0.3176676562500000967;
                  } else {
                    sum += (double)0.2210471388888888833;
                  }
                } else {
                  sum += (double)0.125168599999999991;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4819000065326690674) ) ) {
              sum += (double)0.1724572166666666351;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.04359245300292969) ) ) {
                sum += (double)0.4280965909090909127;
              } else {
                sum += (double)0.3350407738095237953;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3836105018854141235) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.27392953634262085) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.204099997878074646) ) ) {
              sum += (double)0.2065428235294117787;
            } else {
              sum += (double)0.09743613333333332738;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.758152246475219727) ) ) {
              sum += (double)0.08743443421052632392;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2784219980239868164) ) ) {
                sum += (double)0.01733940322580645316;
              } else {
                sum += (double)0.04803280999999999523;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.668108701705932617) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1717.01214599609375) ) ) {
              sum += (double)0.31882526785714288;
            } else {
              sum += (double)0.153642390624999986;
            }
          } else {
            sum += (double)0.09680988095238095281;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6792999804019927979) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6219575107097625732) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5410194993019104004) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.173913240432739258) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.28444576263427734) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.141082048416137695) ) ) {
                  sum += (double)0.5228133260869565202;
                } else {
                  sum += (double)0.4711769910714285747;
                }
              } else {
                sum += (double)0.6127724545454547034;
              }
            } else {
              sum += (double)0.3938690000000000246;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02245000004768371582) ) ) {
              sum += (double)0.6648803088235295533;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4538.65966796875) ) ) {
                sum += (double)0.5474673295454544064;
              } else {
                sum += (double)0.623012040322580618;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3733.5308837890625) ) ) {
              sum += (double)0.6241646250000000284;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8282499909400939941) ) ) {
                sum += (double)0.6845043000000000655;
              } else {
                sum += (double)0.736588149999999886;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1074000000953674316) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09740376472473144531) ) ) {
                sum += (double)0.8668730446428571934;
              } else {
                sum += (double)0.8147838541666668766;
              }
            } else {
              sum += (double)0.7523518281250000106;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6760014891624450684) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5527740120887756348) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2312.410400390625) ) ) {
              sum += (double)0.2769257272727273511;
            } else {
              sum += (double)0.1989629250000000127;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.274540483951568604) ) ) {
              sum += (double)0.4962692777777777953;
            } else {
              sum += (double)0.3051361953124999693;
            }
          }
        } else {
          sum += (double)0.6072828229166666869;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.160416603088378906) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6650000214576721191) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2500165030360221863) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.473544836044311523) ) ) {
            sum += (double)0.1199054687500000077;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1775.0577392578125) ) ) {
              sum += (double)0.04315428571428571447;
            } else {
              sum += (double)0.0135032857142857142;
            }
          }
        } else {
          sum += (double)0.2102585869565217203;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4784455001354217529) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.09476137161254883) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2538.3482666015625) ) ) {
              sum += (double)0.2418375576923076919;
            } else {
              sum += (double)0.1233280645161290157;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03640000149607658386) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2927275002002716064) ) ) {
                sum += (double)0.2736649500000000179;
              } else {
                sum += (double)0.4727149861111110685;
              }
            } else {
              sum += (double)0.254883528846153895;
            }
          }
        } else {
          sum += (double)0.4389872857142857465;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5713820159435272217) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2250000014901161194) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1165290027856826782) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.51062774658203125) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4560.48388671875) ) ) {
                sum += (double)0.0412876315789473744;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07786550000309944153) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04397500120103359222) ) ) {
                    sum += (double)0.0032890384615384613;
                  } else {
                    sum += (double)0.007066366666666666456;
                  }
                } else {
                  sum += (double)0.02024060000000000095;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09103149920701980591) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3148.3372802734375) ) ) {
                      sum += (double)0.002616734899328860848;
                    } else {
                      sum += (double)0.005918153846153846424;
                    }
                  } else {
                    sum += (double)0.005973055555555555236;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04870000109076499939) ) ) {
                    sum += (double)0.01096144736842105498;
                  } else {
                    sum += (double)0.003343571428571428389;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1038499996066093445) ) ) {
                  sum += (double)0.01709139705882353408;
                } else {
                  sum += (double)0.004851099999999999683;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1328900009393692017) ) ) {
              sum += (double)0.09293235294117646594;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.32954549789428711) ) ) {
                sum += (double)0.08012553846153845638;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02025000005960464478) ) ) {
                  sum += (double)0.02987923529411764395;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6937.22802734375) ) ) {
                    sum += (double)0.01065131250000000106;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5707696676254272461) ) ) {
                      sum += (double)0.007334404761904762468;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.22855949401855469) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.66426849365234375) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01260000001639127731) ) ) {
                sum += (double)0.1845979130434783622;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.36538457870483398) ) ) {
                  sum += (double)0.01117555000000000111;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1576480045914649963) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.649658203125) ) ) {
                      sum += (double)0.05357818750000000602;
                    } else {
                      sum += (double)0.01496755000000000134;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05164999887347221375) ) ) {
                      sum += (double)0.04305023529411763916;
                    } else {
                      sum += (double)0.1014818666666666841;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.2005736956521738945;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2422170042991638184) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.51904773712158203) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12398.7353515625) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15051.7529296875) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09024999663233757019) ) ) {
                      sum += (double)0.08146410714285713672;
                    } else {
                      sum += (double)0.0326024479166666728;
                    }
                  } else {
                    sum += (double)0.1032934821428571487;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.387700006365776062) ) ) {
                    sum += (double)0.004910823529411765219;
                  } else {
                    sum += (double)0.03083765217391304728;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)83.95437240600585938) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1489000022411346436) ) ) {
                    sum += (double)0.0110344642857142846;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2362999990582466125) ) ) {
                      sum += (double)0.03513087500000000585;
                    } else {
                      sum += (double)0.01606750000000000192;
                    }
                  }
                } else {
                  sum += (double)0.004090300000000000706;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.58333206176757812) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7766721844673156738) ) ) {
                  sum += (double)0.08515771874999998603;
                } else {
                  sum += (double)0.01844004545454545549;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-28313.5185546875) ) ) {
                  sum += (double)0.05739436111111111821;
                } else {
                  sum += (double)0.1630685370370370257;
                }
              }
            }
          }
        }
      } else {
        sum += (double)0.3430215375000000289;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.04838705062866211) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.340364500880241394) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05040000006556510925) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001149999992776429281) ) ) {
                sum += (double)0.503182666666666667;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.05187416076660156) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01770000066608190536) ) ) {
                    sum += (double)0.3140525576923077211;
                  } else {
                    sum += (double)0.3911953913043478281;
                  }
                } else {
                  sum += (double)0.4617434531249999252;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.34807825088500977) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07035000249743461609) ) ) {
                  sum += (double)0.2924380681818182226;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2436119988560676575) ) ) {
                    sum += (double)0.3395647403846152601;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6230.9931640625) ) ) {
                      sum += (double)0.3629064285714285742;
                    } else {
                      sum += (double)0.4140446923076923635;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2195909991860389709) ) ) {
                  sum += (double)0.1583619400000000343;
                } else {
                  sum += (double)0.3355411899999999892;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01829999964684247971) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2818.396728515625) ) ) {
                sum += (double)0.6218166911764706484;
              } else {
                sum += (double)0.5234043666666665651;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2493.7919921875) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07950000092387199402) ) ) {
                  sum += (double)0.4699874239130434339;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.00507354736328125) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.280414968729019165) ) ) {
                      sum += (double)0.4713009874999999904;
                    } else {
                      sum += (double)0.3833296923076924267;
                    }
                  } else {
                    sum += (double)0.3586619868421052626;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2195943370461463928) ) ) {
                  sum += (double)0.4805354565217391793;
                } else {
                  sum += (double)0.5576866125000000673;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3337879925966262817) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1402209997177124023) ) ) {
              sum += (double)0.3147841250000000257;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7659499943256378174) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3560499995946884155) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7743.1357421875) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.02361106872558594) ) ) {
                      sum += (double)0.06397256521739130841;
                    } else {
                      sum += (double)0.1309914615384615566;
                    }
                  } else {
                    sum += (double)0.2524289166666666695;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25538.880859375) ) ) {
                    sum += (double)0.2740314874999999484;
                  } else {
                    sum += (double)0.1883177205882353433;
                  }
                }
              } else {
                sum += (double)0.2716250921052631995;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3010499924421310425) ) ) {
              sum += (double)0.4012428965517240709;
            } else {
              sum += (double)0.2367955000000000199;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3709160089492797852) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29245.787109375) ) ) {
            sum += (double)0.1105745882352941051;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.405139923095703125) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3211.5439453125) ) ) {
                sum += (double)0.1087659264705882617;
              } else {
                sum += (double)0.026498975000000001;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.9605865478515625) ) ) {
                sum += (double)0.00954174999999999815;
              } else {
                sum += (double)0.02417954411764705949;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4151660054922103882) ) ) {
            sum += (double)0.261596653846153937;
          } else {
            sum += (double)0.1223262899999999903;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7569907009601593018) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6567690074443817139) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5468925237655639648) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02730000019073486328) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4756965041160583496) ) ) {
                sum += (double)0.5272722142857142469;
              } else {
                sum += (double)0.6388057352941176603;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.485707506537437439) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.846590876579284668) ) ) {
                  sum += (double)0.5062705394736842779;
                } else {
                  sum += (double)0.5830549583333333175;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.644062280654907227) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1041000001132488251) ) ) {
                    sum += (double)0.4467822794117647378;
                  } else {
                    sum += (double)0.5295858699999999031;
                  }
                } else {
                  sum += (double)0.381470615384615408;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1027000024914741516) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992000043392181396) ) ) {
                sum += (double)0.631078638888888821;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5894770026206970215) ) ) {
                  sum += (double)0.6593408214285714219;
                } else {
                  sum += (double)0.7036984456521738762;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3459.4644775390625) ) ) {
                sum += (double)0.5357260400000000145;
              } else {
                sum += (double)0.6360756250000000334;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.749575495719909668) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6785500049591064453) ) ) {
              sum += (double)0.6676167352941175803;
            } else {
              sum += (double)0.7414385546874998623;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1056000031530857086) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8944000005722045898) ) ) {
                sum += (double)0.8122814199999999207;
              } else {
                sum += (double)0.8644043875000001487;
              }
            } else {
              sum += (double)0.7495065500000001046;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.692272484302520752) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
            sum += (double)0.4194289741379310099;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1562.7584228515625) ) ) {
              sum += (double)0.3327314916666666567;
            } else {
              sum += (double)0.133938516666666646;
            }
          }
        } else {
          sum += (double)0.6098209090909091357;
        }
      }
    }
  }
  return sum;
}
