#include "prediction.h"
double predict_margin_unit11(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2980984896421432495) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.947222232818603516) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4849999994039535522) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
            sum += (double)0.1579111029411764677;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2796874642372131348) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8317500054836273193) ) ) {
                sum += (double)0.01822930000000000036;
              } else {
                sum += (double)0.003636970588235294462;
              }
            } else {
              sum += (double)0.06645244565217391097;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1458329930901527405) ) ) {
            sum += (double)0.08910498529411761681;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.827639579772949219) ) ) {
              sum += (double)0.3258896333333333173;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5126000195741653442) ) ) {
                sum += (double)0.0820778333333333221;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.930000007152557373) ) ) {
                  sum += (double)0.2725447833333333181;
                } else {
                  sum += (double)0.2034408999999999523;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.685000002384185791) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8847000002861022949) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)90.1875) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                  sum += (double)0.002500000000000000052;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.29895000159740448) ) ) {
                    sum += (double)0.03299895192307691905;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.86538314819335938) ) ) {
                      sum += (double)0.01057118604651162593;
                    } else {
                      sum += (double)0.02956630000000000022;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1432655006647109985) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8011499941349029541) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.003722780487804879142;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21111.7900390625) ) ) {
                      sum += (double)0.009489600000000002547;
                    } else {
                      sum += (double)0.002778039999999999416;
                    }
                  }
                } else {
                  sum += (double)0.01081937499999999913;
                }
              }
            } else {
              sum += (double)0.04523233333333333273;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001749999937601387501) ) ) {
              sum += (double)0.09366996428571428002;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7485974133014678955) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2154475003480911255) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4933216571807861328) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2312185317277908325) ) ) {
                      sum += (double)0.03195820192307691904;
                    } else {
                      sum += (double)0.01493326229508196677;
                    }
                  } else {
                    sum += (double)0.07269882142857142515;
                  }
                } else {
                  sum += (double)0.09935792857142855539;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5545.951904296875) ) ) {
                  sum += (double)0.009968269230769231937;
                } else {
                  sum += (double)0.003017717391304347487;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.22536659240722656) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2547229975461959839) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6766999959945678711) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5483999848365783691) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3938712775707244873) ) ) {
                    sum += (double)0.1129440441176470661;
                  } else {
                    sum += (double)0.04593989655172413256;
                  }
                } else {
                  sum += (double)0.02225420689655172382;
                }
              } else {
                sum += (double)0.1150690108695652247;
              }
            } else {
              sum += (double)0.1749166538461538467;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4123500138521194458) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.72562599182128906) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4383046925067901611) ) ) {
                  sum += (double)0.05373562500000000214;
                } else {
                  sum += (double)0.02856205555555555928;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)82.74455642700195312) ) ) {
                  sum += (double)0.02140083333333333768;
                } else {
                  sum += (double)0.008597480769230770453;
                }
              }
            } else {
              sum += (double)0.07489756666666666507;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5155050158500671387) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4986470043659210205) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.44444465637207031) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.358596503734588623) ) ) {
              sum += (double)0.3826869299999999807;
            } else {
              sum += (double)0.2301087699999999348;
            }
          } else {
            sum += (double)0.1005121470588235255;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4285600036382675171) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3599950075149536133) ) ) {
              sum += (double)0.02690533035714285509;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3280.36181640625) ) ) {
                sum += (double)0.03736145588235294246;
              } else {
                sum += (double)0.122580499999999995;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2125499993562698364) ) ) {
              sum += (double)0.2191030921052631308;
            } else {
              sum += (double)0.101632552631578929;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-955.803436279296875) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.16666698455810547) ) ) {
            sum += (double)0.5247037499999998023;
          } else {
            sum += (double)0.340331268518518526;
          }
        } else {
          sum += (double)0.183966097222222208;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4904465079307556152) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.010357707738876343) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.661062240600585938) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009099999908357858658) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.940382003784179688) ) ) {
                sum += (double)0.4377354833333332862;
              } else {
                sum += (double)0.5167347625000000555;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2416300028562545776) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2654579877853393555) ) ) {
                  sum += (double)0.19485316250000001;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1207499988377094269) ) ) {
                    sum += (double)0.3320776249999999874;
                  } else {
                    sum += (double)0.2683806249999999838;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.4527125358581543) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4633.580322265625) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3039920032024383545) ) ) {
                      sum += (double)0.4027705322580645286;
                    } else {
                      sum += (double)0.3692424599999999391;
                    }
                  } else {
                    sum += (double)0.449767175000000019;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04305000044405460358) ) ) {
                    sum += (double)0.4101348392857143144;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1543499976396560669) ) ) {
                      sum += (double)0.2646626896551723673;
                    } else {
                      sum += (double)0.3903300952380951427;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01829999964684247971) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2542.70361328125) ) ) {
                sum += (double)0.5908043369565216807;
              } else {
                sum += (double)0.5284798888888888602;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.40573100745677948) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7093000113964080811) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3328112214803695679) ) ) {
                    sum += (double)0.5020409814814814631;
                  } else {
                    sum += (double)0.4047507799999999767;
                  }
                } else {
                  sum += (double)0.3616662361111110946;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5369121134281158447) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.567441701889038086) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2548.1392822265625) ) ) {
                      sum += (double)0.4985223684210525752;
                    } else {
                      sum += (double)0.4227382375000000581;
                    }
                  } else {
                    sum += (double)0.5573929112903225347;
                  }
                } else {
                  sum += (double)0.430135777777777728;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595285117626190186) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.34866619110107422) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19871.669921875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.48968315124511719) ) ) {
                  sum += (double)0.3710884886363636226;
                } else {
                  sum += (double)0.2401811041666666868;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.34893035888671875) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1682000011205673218) ) ) {
                    sum += (double)0.1070412380952380782;
                  } else {
                    sum += (double)0.1822496406249999867;
                  }
                } else {
                  sum += (double)0.2434637403846154347;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5490999817848205566) ) ) {
                sum += (double)0.06616454761904760895;
              } else {
                sum += (double)0.2007925555555555297;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.67706918716430664) ) ) {
              sum += (double)0.4451739687500000375;
            } else {
              sum += (double)0.2592794270833334025;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.234565258026123047) ) ) {
          sum += (double)0.2844091764705882208;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02190000005066394806) ) ) {
            sum += (double)0.2075148214285713888;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21313.9375) ) ) {
              sum += (double)0.1669793026315789519;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.133145332336425781) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3105044960975646973) ) ) {
                  sum += (double)0.03739995000000000125;
                } else {
                  sum += (double)0.163792710526315749;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.32958376407623291) ) ) {
                  sum += (double)0.04175982894736841866;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.137150004506111145) ) ) {
                    sum += (double)0.02800229545454545332;
                  } else {
                    sum += (double)0.01426060526315789563;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.36980438232421875) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5856605172157287598) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4705.360107421875) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1974000036716461182) ) ) {
              sum += (double)0.5355472916666665917;
            } else {
              sum += (double)0.4818630227272727162;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1217901706695556641) ) ) {
              sum += (double)0.6435123478260870167;
            } else {
              sum += (double)0.5749341911764704882;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0745762847363948822) ) ) {
              sum += (double)0.7309086583333332943;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.633001923561096191) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.619419574737548828) ) ) {
                  sum += (double)0.6528579642857142984;
                } else {
                  sum += (double)0.7137248676470588915;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6516920030117034912) ) ) {
                  sum += (double)0.6058100000000000707;
                } else {
                  sum += (double)0.6717847307692307313;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07294999808073043823) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8496383428573608398) ) ) {
                sum += (double)0.8631163593750000862;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06818994507193565369) ) ) {
                  sum += (double)0.8077319107142857391;
                } else {
                  sum += (double)0.8477848125000000401;
                }
              }
            } else {
              sum += (double)0.7827906923076922707;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.153116345405578613) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5473549962043762207) ) ) {
            sum += (double)0.4281562282608695202;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6756354868412017822) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8290.51611328125) ) ) {
                sum += (double)0.4774399852941176303;
              } else {
                sum += (double)0.5939348815789472491;
              }
            } else {
              sum += (double)0.6272386470588235952;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6088369786739349365) ) ) {
            sum += (double)0.3203120357142857366;
          } else {
            sum += (double)0.4279278269230768483;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3804129958152770996) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.70625019073486328) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.112966001033782959) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5518999993801116943) ) ) {
              sum += (double)0.0505148269230769123;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02364999987185001373) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.33809518814086914) ) ) {
                  sum += (double)0.002500000000000000052;
                } else {
                  sum += (double)0.006344730769230770041;
                }
              } else {
                sum += (double)0.01216318965517241592;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.41666793823242188) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06044999882578849792) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2031770050525665283) ) ) {
                  sum += (double)0.0546313152173912922;
                } else {
                  sum += (double)0.01524764583333333527;
                }
              } else {
                sum += (double)0.09646376315789470524;
              }
            } else {
              sum += (double)0.1722074874999999783;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8356499969959259033) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.22174072265625) ) ) {
                  sum += (double)0.01000004000000000171;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2026499956846237183) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1813077926635742188) ) ) {
                      sum += (double)0.003347406249999999254;
                    } else {
                      sum += (double)0.002500000000000001787;
                    }
                  } else {
                    sum += (double)0.006275321428571428717;
                  }
                }
              } else {
                sum += (double)0.01231640625000000183;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7463951706886291504) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4367500096559524536) ) ) {
                  sum += (double)0.05592652777777776946;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)63.21567726135253906) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4769150763750076294) ) ) {
                      sum += (double)0.00838232142857142995;
                    } else {
                      sum += (double)0.04401813636363636345;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1777999997138977051) ) ) {
                      sum += (double)0.005294238095238095777;
                    } else {
                      sum += (double)0.01488353703703703887;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12281.98779296875) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)177.343536376953125) ) ) {
                    sum += (double)0.003826769230769230378;
                  } else {
                    sum += (double)0.002499999999999999618;
                  }
                } else {
                  sum += (double)0.002500000000000000486;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06320000067353248596) ) ) {
              sum += (double)0.07182774999999998189;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.53819999098777771) ) ) {
                sum += (double)0.01091153125000000196;
              } else {
                sum += (double)0.03624710714285713647;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.782407283782958984) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4899818599224090576) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.880357027053833008) ) ) {
              sum += (double)0.3997202884615385088;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7714499831199645996) ) ) {
                sum += (double)0.2826689916666665914;
              } else {
                sum += (double)0.1993519000000000263;
              }
            }
          } else {
            sum += (double)0.09918260344827585506;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.21903181076049805) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.015350341796875) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3518.140869140625) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1958189979195594788) ) ) {
                    sum += (double)0.04823528846153846139;
                  } else {
                    sum += (double)0.1093702857142857116;
                  }
                } else {
                  sum += (double)0.1263342000000000076;
                }
              } else {
                sum += (double)0.02077615000000000017;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7950999736785888672) ) ) {
                sum += (double)0.3437871333333333279;
              } else {
                sum += (double)0.1083551428571428582;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5749999880790710449) ) ) {
              sum += (double)0.1381735000000000047;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034847021102905273) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11090.091796875) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)115.0925445556640625) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2468999996781349182) ) ) {
                      sum += (double)0.04187058823529411083;
                    } else {
                      sum += (double)0.06652535795454546375;
                    }
                  } else {
                    sum += (double)0.01195332352941176624;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0765499994158744812) ) ) {
                    sum += (double)0.03657048529411765364;
                  } else {
                    sum += (double)0.1727593928571428405;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.59248733520507812) ) ) {
                  sum += (double)0.007897148148148149666;
                } else {
                  sum += (double)0.02074225000000000374;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9394714534282684326) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2362929955124855042) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01440000021830201149) ) ) {
              sum += (double)0.4580849218750000507;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.274736255407333374) ) ) {
                sum += (double)0.1570989100000000083;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4937644004821777344) ) ) {
                  sum += (double)0.3317914347826087518;
                } else {
                  sum += (double)0.2324153699999999823;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005200000014156103134) ) ) {
              sum += (double)0.5199783333333333202;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.58190441131591797) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.716250002384185791) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02210000064224004745) ) ) {
                    sum += (double)0.2948276333333333388;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3409480005502700806) ) ) {
                      sum += (double)0.3737533141592920272;
                    } else {
                      sum += (double)0.4405689239130435308;
                    }
                  }
                } else {
                  sum += (double)0.2698694166666666394;
                }
              } else {
                sum += (double)0.466792973684210466;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345710039138793945) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.31949758529663086) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.53991413116455078) ) ) {
                sum += (double)0.1453677692307692171;
              } else {
                sum += (double)0.3253945000000000309;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.272898256778717041) ) ) {
                sum += (double)0.1992647386363636253;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25223.1259765625) ) ) {
                  sum += (double)0.1493667738095238173;
                } else {
                  sum += (double)0.07562211458333333025;
                }
              }
            }
          } else {
            sum += (double)0.3021772699999999978;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.892569541931152344) ) ) {
          sum += (double)0.1606813846153846148;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.145312190055847168) ) ) {
            sum += (double)0.1089978333333333077;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4324.498779296875) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3992000073194503784) ) ) {
                sum += (double)0.0679265750000000168;
              } else {
                sum += (double)0.01920771739130434919;
              }
            } else {
              sum += (double)0.01378545833333333359;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
          sum += (double)0.1625901999999999903;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07990000024437904358) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.579661369323730469) ) ) {
              sum += (double)0.4894965234374999974;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009249999653548002243) ) ) {
                sum += (double)0.6106935199999999897;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8242999911308288574) ) ) {
                  sum += (double)0.5926110083333333556;
                } else {
                  sum += (double)0.4868362604166667218;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.608510494232177734) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1292500011622905731) ) ) {
                sum += (double)0.4411830416666666643;
              } else {
                sum += (double)0.5457217037037037644;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1913357675075531006) ) ) {
                sum += (double)0.3740491477272727128;
              } else {
                sum += (double)0.4642725147058823221;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7172160148620605469) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992500126361846924) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6219575107097625732) ) ) {
              sum += (double)0.4972136354166666883;
            } else {
              sum += (double)0.6606692115384616981;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1320.23370361328125) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05345000140368938446) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2004.5660400390625) ) ) {
                  sum += (double)0.7031311071428569814;
                } else {
                  sum += (double)0.6449640263157895292;
                }
              } else {
                sum += (double)0.6307458942307690997;
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
              sum += (double)0.7402380147058824633;
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
              sum += (double)0.4069048593749999831;
            } else {
              sum += (double)0.1738227019230769443;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4845700114965438843) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.691678524017333984) ) ) {
                sum += (double)0.1635757232142857343;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4171679913997650146) ) ) {
                  sum += (double)0.05807864473684210688;
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
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
          sum += (double)0.2495410483870967866;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.043774247169494629) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3715499937534332275) ) ) {
              sum += (double)0.684579124999999955;
            } else {
              sum += (double)0.5582747374999998957;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.190721631050109863) ) ) {
              sum += (double)0.4585261458333333984;
            } else {
              sum += (double)0.2778666666666666507;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.522727251052856445) ) ) {
        sum += (double)0.2171321022727272509;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.27391290664672852) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07889900356531143188) ) ) {
              sum += (double)0.00544518965517241417;
            } else {
              sum += (double)0.03041955357142856961;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7086.3857421875) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.170649997889995575) ) ) {
                sum += (double)0.002500000000000001787;
              } else {
                sum += (double)0.004476095238095239084;
              }
            } else {
              sum += (double)0.01340615000000000036;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.558441162109375) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)116.12030029296875) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.43487167358398438) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04124999977648258209) ) ) {
                  sum += (double)0.03803459375000000503;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1641499996185302734) ) ) {
                    sum += (double)0.1204424166666666629;
                  } else {
                    sum += (double)0.04376887962962962286;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.57500076293945312) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1229014992713928223) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3240541815757751465) ) ) {
                      sum += (double)0.004338250000000000092;
                    } else {
                      sum += (double)0.01162089999999999998;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2145.72802734375) ) ) {
                      sum += (double)0.03405305555555554475;
                    } else {
                      sum += (double)0.01161783333333333418;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5710499882698059082) ) ) {
                    sum += (double)0.0846084687499999849;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.08522796630859375) ) ) {
                      sum += (double)0.06255910000000000637;
                    } else {
                      sum += (double)0.01426705978260869;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.1011858148148148118;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)41.29629707336425781) ) ) {
                sum += (double)0.01533861764705882376;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)197.5512771606445312) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1661000028252601624) ) ) {
                    sum += (double)0.002499999999999999618;
                  } else {
                    sum += (double)0.004831307692307691172;
                  }
                } else {
                  sum += (double)0.009275617647058824813;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2340020015835762024) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-72639.33984375) ) ) {
                  sum += (double)0.03594347222222222388;
                } else {
                  sum += (double)0.01111357894736842399;
                }
              } else {
                sum += (double)0.05520510000000000694;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4181034862995147705) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.636480808258056641) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.76897621154785156) ) ) {
            sum += (double)0.1067127583333333379;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006899999920278787613) ) ) {
              sum += (double)0.4000134264705882403;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9000000059604644775) ) ) {
                sum += (double)0.3014076315789473437;
              } else {
                sum += (double)0.2095119199999999904;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6701500117778778076) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6009249687194824219) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.97222232818603516) ) ) {
                sum += (double)0.189534807692307683;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2434595003724098206) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2015499994158744812) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.716522216796875) ) ) {
                      sum += (double)0.0565346406250000072;
                    } else {
                      sum += (double)0.02108181250000000159;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8599999845027923584) ) ) {
                      sum += (double)0.1035089062500000046;
                    } else {
                      sum += (double)0.05193512500000000559;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.92032814025878906) ) ) {
                    sum += (double)0.08605640217391305469;
                  } else {
                    sum += (double)0.1983565588235294275;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6550000011920928955) ) ) {
                sum += (double)0.0889438333333333192;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4636000096797943115) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.15571022033691406) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1077999956905841827) ) ) {
                      sum += (double)0.003397388888888889028;
                    } else {
                      sum += (double)0.01566357999999999986;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23617.005859375) ) ) {
                      sum += (double)0.01823231818181818287;
                    } else {
                      sum += (double)0.04834379166666666339;
                    }
                  }
                } else {
                  sum += (double)0.06149207812500000203;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19746.5576171875) ) ) {
              sum += (double)0.04341754838709676462;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7444999814033508301) ) ) {
                sum += (double)0.2630775952380953187;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1211999990046024323) ) ) {
                  sum += (double)0.1241605108695651993;
                } else {
                  sum += (double)0.204640500000000003;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6305885016918182373) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000143051147461) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3844500035047531128) ) ) {
              sum += (double)0.419995224999999972;
            } else {
              sum += (double)0.175697250000000027;
            }
          } else {
            sum += (double)0.1665532500000000138;
          }
        } else {
          sum += (double)0.3859752500000000475;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9739091694355010986) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.89888715744018555) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2914259880781173706) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
              sum += (double)0.5130632499999999707;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.48645000159740448) ) ) {
                  sum += (double)0.3069848425925926216;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6958000063896179199) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.256303347647190094) ) ) {
                      sum += (double)0.135261191176470591;
                    } else {
                      sum += (double)0.2166635833333332706;
                    }
                  } else {
                    sum += (double)0.2974445312499999772;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4823500066995620728) ) ) {
                  sum += (double)0.2374313289473684307;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05040000006556510925) ) ) {
                    sum += (double)0.4324979761904761966;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7225.479736328125) ) ) {
                      sum += (double)0.3778847976190475855;
                    } else {
                      sum += (double)0.2474417833333333594;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007500000065192580223) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.999999873689375818e-05) ) ) {
                sum += (double)0.5782433068181818125;
              } else {
                sum += (double)0.5164877777777776569;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3619379997253417969) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2302553355693817139) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4189.248046875) ) ) {
                    sum += (double)0.4053750833333333858;
                  } else {
                    sum += (double)0.4537626999999999078;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4332.30908203125) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4324364960193634033) ) ) {
                      sum += (double)0.4171014523809523644;
                    } else {
                      sum += (double)0.3804691346153846188;
                    }
                  } else {
                    sum += (double)0.2876634886363636512;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08009999990463256836) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.72222232818603516) ) ) {
                    sum += (double)0.4953230000000000133;
                  } else {
                    sum += (double)0.5469498690476189973;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.719550013542175293) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.410627514123916626) ) ) {
                      sum += (double)0.5082366200000000278;
                    } else {
                      sum += (double)0.4000598260869565048;
                    }
                  } else {
                    sum += (double)0.3678855416666666489;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.2999420166015625) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3349944949150085449) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1778574958443641663) ) ) {
                sum += (double)0.1185644124999999799;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2614350020885467529) ) ) {
                  sum += (double)0.2861724625000000577;
                } else {
                  sum += (double)0.2013819629629629571;
                }
              }
            } else {
              sum += (double)0.3519180673076923171;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2687500119209289551) ) ) {
              sum += (double)0.07571622413793104023;
            } else {
              sum += (double)0.1863327173913043588;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.710898756980895996) ) ) {
          sum += (double)0.2352809655172413972;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20638.2451171875) ) ) {
            sum += (double)0.1772506071428571472;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3802704960107803345) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.58788537979125977) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3676.5296630859375) ) ) {
                  sum += (double)0.03304821428571429187;
                } else {
                  sum += (double)0.01379166666666666909;
                }
              } else {
                sum += (double)0.1026360131578947371;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1619499996304512024) ) ) {
                sum += (double)0.1465261964285714258;
              } else {
                sum += (double)0.09298850000000000171;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6696245074272155762) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6792999804019927979) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.20970344543457031) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.444673538208007812) ) ) {
                sum += (double)0.4849425454545455705;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4767.1650390625) ) ) {
                  sum += (double)0.5112647666666666479;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.28156614303588867) ) ) {
                    sum += (double)0.5444434772727272387;
                  } else {
                    sum += (double)0.6038446874999999769;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2436.00927734375) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992500126361846924) ) ) {
                  sum += (double)0.5535356249999999756;
                } else {
                  sum += (double)0.6396862019230771246;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8053999841213226318) ) ) {
                  sum += (double)0.703071124999999908;
                } else {
                  sum += (double)0.6364122386363636474;
                }
              }
            }
          } else {
            sum += (double)0.3644715714285713948;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2566.5250244140625) ) ) {
            sum += (double)0.4343550083333332368;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.095000028610229492) ) ) {
              sum += (double)0.4323878624999999976;
            } else {
              sum += (double)0.2361544605263157792;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.579051494598388672) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7147440016269683838) ) ) {
            sum += (double)0.6882221785714285334;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09570000320672988892) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8327875137329101562) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02479999978095293045) ) ) {
                  sum += (double)0.8207771428571428718;
                } else {
                  sum += (double)0.759211218749999972;
                }
              } else {
                sum += (double)0.846846293478260792;
              }
            } else {
              sum += (double)0.7354449843749999438;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3611919581890106201) ) ) {
            sum += (double)0.6861530000000000129;
          } else {
            sum += (double)0.600133339285714329;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.143333196640014648) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441269978880882263) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1530964970588684082) ) ) {
          sum += (double)0.06482863392857143858;
        } else {
          sum += (double)0.1637566470588235346;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.876050472259521484) ) ) {
          sum += (double)0.4739035277777777777;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8869184553623199463) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1083.81622314453125) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.184210538864135742) ) ) {
                sum += (double)0.4148656700000000197;
              } else {
                sum += (double)0.3102823749999999992;
              }
            } else {
              sum += (double)0.222937897727272738;
            }
          } else {
            sum += (double)0.1529464545454545521;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94999980926513672) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.52777862548828125) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3215107321739196777) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2563.4886474609375) ) ) {
                  sum += (double)0.01999650000000000039;
                } else {
                  sum += (double)0.0101577343750000014;
                }
              } else {
                sum += (double)0.07785480208333332708;
              }
            } else {
              sum += (double)0.1169029062499999938;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.82857131958007812) ) ) {
              sum += (double)0.05501691666666666536;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.42391300201416016) ) ) {
                  sum += (double)0.0145599375000000017;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7086.3857421875) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.79999923706054688) ) ) {
                      sum += (double)0.00510425000000000028;
                    } else {
                      sum += (double)0.002794993288590605796;
                    }
                  } else {
                    sum += (double)0.005973740000000001688;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7680511474609375) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3520500063896179199) ) ) {
                    sum += (double)0.04897044565217390649;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0718655027449131012) ) ) {
                      sum += (double)0.006231292682926829925;
                    } else {
                      sum += (double)0.01954218206521737833;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1950000002980232239) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.965011298656463623) ) ) {
                      sum += (double)0.003535392857142857607;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  } else {
                    sum += (double)0.01025467592592592576;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001999999949475750327) ) ) {
            sum += (double)0.2272394687500000343;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14484.2783203125) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-57373.91796875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)170.8607940673828125) ) ) {
                  sum += (double)0.01815470454545454679;
                } else {
                  sum += (double)0.006222347222222221995;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4843499958515167236) ) ) {
                  sum += (double)0.0908991574074073938;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2507845014333724976) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1252960003912448883) ) ) {
                      sum += (double)0.06727879687500000483;
                    } else {
                      sum += (double)0.02831351111111111291;
                    }
                  } else {
                    sum += (double)0.07834527941176470944;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)66.20833206176757812) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034847021102905273) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1443684995174407959) ) ) {
                    sum += (double)0.01927877777777777663;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09610000252723693848) ) ) {
                      sum += (double)0.07251022857142855327;
                    } else {
                      sum += (double)0.1389336468253968282;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3948.9285888671875) ) ) {
                      sum += (double)0.01754818750000000302;
                    } else {
                      sum += (double)0.002499999999999999618;
                    }
                  } else {
                    sum += (double)0.03524306818181818096;
                  }
                }
              } else {
                sum += (double)0.2133880185185185463;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.601218491792678833) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4863049983978271484) ) ) {
            sum += (double)0.2484075441176470389;
          } else {
            sum += (double)0.0853845735294117697;
          }
        } else {
          sum += (double)0.3683935000000000404;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5496329963207244873) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9647493362426757812) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595285117626190186) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.34411334991455078) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2622290104627609253) ) ) {
                sum += (double)0.4609472205882353402;
              } else {
                sum += (double)0.5386754210526315534;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.008303403854370117) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5490560531616210938) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.10953211784362793) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2765665054321289062) ) ) {
                      sum += (double)0.311918546296296284;
                    } else {
                      sum += (double)0.3943355204918032597;
                    }
                  } else {
                    sum += (double)0.4561317638888888748;
                  }
                } else {
                  sum += (double)0.2872201339285714305;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19971.8271484375) ) ) {
                  sum += (double)0.3621425326086956664;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2512755021452903748) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2592420056462287903) ) ) {
                      sum += (double)0.142640657894736872;
                    } else {
                      sum += (double)0.2550298529411764159;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.171450003981590271) ) ) {
                      sum += (double)0.245455125000000024;
                    } else {
                      sum += (double)0.3811132159090909743;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2674500048160552979) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3547820150852203369) ) ) {
                sum += (double)0.223940299999999981;
              } else {
                sum += (double)0.1039973382352941123;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25374.630859375) ) ) {
                sum += (double)0.1599246833333333173;
              } else {
                sum += (double)0.3365881250000000158;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.66363668441772461) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999862571712583) ) ) {
              sum += (double)0.6295700526315788359;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5419237017631530762) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06890000030398368835) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1446390748023986816) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.738284707069396973) ) ) {
                      sum += (double)0.5949714761904763005;
                    } else {
                      sum += (double)0.5535004249999999626;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.694798469543457031) ) ) {
                      sum += (double)0.4391358249999999797;
                    } else {
                      sum += (double)0.5207663421052631803;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7854500114917755127) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2473.6697998046875) ) ) {
                      sum += (double)0.4697773470149253505;
                    } else {
                      sum += (double)0.5237704913793104211;
                    }
                  } else {
                    sum += (double)0.4006851521739130395;
                  }
                }
              } else {
                sum += (double)0.3977825714285714298;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.96444511413574219) ) ) {
              sum += (double)0.3941813303571429228;
            } else {
              sum += (double)0.291731446428571406;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.938632011413574219) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4515369981527328491) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.527557015419006348) ) ) {
              sum += (double)0.2321044166666667019;
            } else {
              sum += (double)0.1017373624999999837;
            }
          } else {
            sum += (double)0.3055275394736842176;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1884500011801719666) ) ) {
            sum += (double)0.1544173467741935535;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2366999909281730652) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.0847935676574707) ) ) {
                sum += (double)0.05089503749999999688;
              } else {
                sum += (double)0.01920535606060606512;
              }
            } else {
              sum += (double)0.08245731578947367024;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.043774247169494629) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8163.606201171875) ) ) {
            sum += (double)0.5076814583333333353;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.793265461921691895) ) ) {
              sum += (double)0.5586838611111111241;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.745067715644836426) ) ) {
                sum += (double)0.752033572916666615;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.0501255989074707) ) ) {
                  sum += (double)0.6264876637931033887;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6006775200366973877) ) ) {
                    sum += (double)0.653315297619047497;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7545000016689300537) ) ) {
                      sum += (double)0.7189934166666668292;
                    } else {
                      sum += (double)0.6867716428571428722;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06500000134110450745) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8360326886177062988) ) ) {
              sum += (double)0.8745335185185184601;
            } else {
              sum += (double)0.8138539999999999663;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5530.912109375) ) ) {
              sum += (double)0.6697569642857142957;
            } else {
              sum += (double)0.7514150740740739298;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.027727305889129639) ) ) {
            sum += (double)0.4239952142857142947;
          } else {
            sum += (double)0.2653668157894736868;
          }
        } else {
          sum += (double)0.5092845138888889567;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.730263233184814453) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1530964970588684082) ) ) {
          sum += (double)0.06224956944444442336;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.09545469284057617) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1997.46710205078125) ) ) {
              sum += (double)0.2400581029411764933;
            } else {
              sum += (double)0.06419125000000000525;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.677381038665771484) ) ) {
                sum += (double)0.282598193548387111;
              } else {
                sum += (double)0.1840395250000000094;
              }
            } else {
              sum += (double)0.3481466354166666832;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.93333339691162109) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1223529987037181854) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5949163138866424561) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1051399968564510345) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.15000152587890625) ) ) {
                      sum += (double)0.004842366666666667041;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.72274589538574219) ) ) {
                      sum += (double)0.006527583333333333154;
                    } else {
                      sum += (double)0.01130592307692307799;
                    }
                  }
                } else {
                  sum += (double)0.02203373529411764564;
                }
              } else {
                sum += (double)0.04336119230769230892;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.08333396911621094) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0185500001534819603) ) ) {
                  sum += (double)0.01244882500000000017;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.612562030553817749) ) ) {
                    sum += (double)0.07232535869565216713;
                  } else {
                    sum += (double)0.01934132352941176497;
                  }
                }
              } else {
                sum += (double)0.1292961447368420891;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.65625) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01244999980553984642) ) ) {
                sum += (double)0.04412003124999999693;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2128499969840049744) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
                    sum += (double)0.00337876190476190481;
                  } else {
                    sum += (double)0.01075115789473684094;
                  }
                } else {
                  sum += (double)0.02605331249999999835;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000089406967163) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8346000015735626221) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                      sum += (double)0.002500000000000001353;
                    } else {
                      sum += (double)0.003166880000000000389;
                    }
                  } else {
                    sum += (double)0.008648636363636363553;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)45.79492568969726562) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)34.77301597595214844) ) ) {
                      sum += (double)0.009426269230769231122;
                    } else {
                      sum += (double)0.02077804545454545529;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-79438.609375) ) ) {
                      sum += (double)0.002500000000000000486;
                    } else {
                      sum += (double)0.007953166666666667411;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)103.6666641235351562) ) ) {
                  sum += (double)0.007883586956521740005;
                } else {
                  sum += (double)0.03063314473684210573;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.24464273452758789) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.96107339859008789) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4315.2431640625) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7329000234603881836) ) ) {
                  sum += (double)0.1344877199999999495;
                } else {
                  sum += (double)0.08315061249999998461;
                }
              } else {
                sum += (double)0.04807433333333333697;
              }
            } else {
              sum += (double)0.2350105999999999862;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1096915006637573242) ) ) {
              sum += (double)0.1133307105263157977;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1948949992656707764) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3285999894142150879) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.694999992847442627) ) ) {
                      sum += (double)0.01109570000000000174;
                    } else {
                      sum += (double)0.02471914473684209967;
                    }
                  } else {
                    sum += (double)0.0537325294117647137;
                  }
                } else {
                  sum += (double)0.08540988461538462362;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7150000035762786865) ) ) {
                  sum += (double)0.1334625434782608644;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5017827451229095459) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3411365002393722534) ) ) {
                      sum += (double)0.07369878448275861416;
                    } else {
                      sum += (double)0.1511584843749999851;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.451850011944770813) ) ) {
                      sum += (double)0.02717206048387096548;
                    } else {
                      sum += (double)0.06740621428571429152;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5985960066318511963) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3534500002861022949) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01185000035911798477) ) ) {
            sum += (double)0.2956383823529411536;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.16666650772094727) ) ) {
              sum += (double)0.1917099736842105273;
            } else {
              sum += (double)0.1100008382352941211;
            }
          }
        } else {
          sum += (double)0.3571346607142856788;
        }
      } else {
        sum += (double)0.4517005161290323367;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4574484974145889282) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.100659728050231934) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3347699940204620361) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.84093379974365234) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009099999908357858658) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2455308809876441956) ) ) {
                sum += (double)0.414755956896551703;
              } else {
                sum += (double)0.4944011086956522361;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2412979975342750549) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.34807825088500977) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3903499990701675415) ) ) {
                    sum += (double)0.2477749166666667335;
                  } else {
                    sum += (double)0.3268970217391304334;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2592420056462287903) ) ) {
                    sum += (double)0.09437866000000001698;
                  } else {
                    sum += (double)0.18194426315789472;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.345059394836425781) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5233944952487945557) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2686650007963180542) ) ) {
                      sum += (double)0.3575715333333333024;
                    } else {
                      sum += (double)0.4188784754901961338;
                    }
                  } else {
                    sum += (double)0.3216763699999999893;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2035999968647956848) ) ) {
                    sum += (double)0.2375342954545454355;
                  } else {
                    sum += (double)0.3683220156249999433;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1631935015320777893) ) ) {
              sum += (double)0.08619214705882352612;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.34866619110107422) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6098500192165374756) ) ) {
                  sum += (double)0.1876723823529411472;
                } else {
                  sum += (double)0.2610879285714285958;
                }
              } else {
                sum += (double)0.1109405288461538658;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.38224649429321289) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003499999875202775002) ) ) {
              sum += (double)0.6053937031249999601;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.125) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.20640254020690918) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3978164941072463989) ) ) {
                    sum += (double)0.479305720588235229;
                  } else {
                    sum += (double)0.4506731562500000399;
                  }
                } else {
                  sum += (double)0.5382943333333334301;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.717704057693481445) ) ) {
                  sum += (double)0.3694004090909090987;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09320000186562538147) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.058059453964233398) ) ) {
                      sum += (double)0.4506573624999999916;
                    } else {
                      sum += (double)0.5217296428571428502;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1312040165066719055) ) ) {
                      sum += (double)0.3721918500000000463;
                    } else {
                      sum += (double)0.4499129027777777901;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23173.6484375) ) ) {
              sum += (double)0.2541676093749999921;
            } else {
              sum += (double)0.3754504565217390843;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.234565258026123047) ) ) {
          sum += (double)0.2630897499999999556;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-30044.84375) ) ) {
            sum += (double)0.144261482142857167;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.21577906608581543) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2014499977231025696) ) ) {
                sum += (double)0.03033957692307692397;
              } else {
                sum += (double)0.1602218382352941228;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2392999976873397827) ) ) {
                sum += (double)0.04614129411764705813;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.69741535186767578) ) ) {
                  sum += (double)0.03570629411764705829;
                } else {
                  sum += (double)0.01087131818181818338;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7049920260906219482) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10253.5322265625) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.83002042770385742) ) ) {
              sum += (double)0.5031379545454545132;
            } else {
              sum += (double)0.3865492631578947291;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5441325008869171143) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.99710369110107422) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.929581522941589355) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.690877556800842285) ) ) {
                    sum += (double)0.5265064531249999957;
                  } else {
                    sum += (double)0.6042633026315789024;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4950319975614547729) ) ) {
                    sum += (double)0.5263296093749999516;
                  } else {
                    sum += (double)0.4051489285714285349;
                  }
                }
              } else {
                sum += (double)0.6278428750000000225;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1783500015735626221) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.30580568313598633) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1980.24371337890625) ) ) {
                    sum += (double)0.5785770882352940792;
                  } else {
                    sum += (double)0.6624654687500000083;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.868712663650512695) ) ) {
                    sum += (double)0.7207715568181817245;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.815599977970123291) ) ) {
                      sum += (double)0.6933221086956521395;
                    } else {
                      sum += (double)0.6085822976190475853;
                    }
                  }
                }
              } else {
                sum += (double)0.5729309699999999284;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.081206917762756348) ) ) {
            sum += (double)0.4485783888888889015;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2566.5250244140625) ) ) {
              sum += (double)0.3476783214285713575;
            } else {
              sum += (double)0.1745576739130434707;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.114535152912139893) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.61852264404296875) ) ) {
            sum += (double)0.876408159090909078;
          } else {
            sum += (double)0.8115280119047618701;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.126100003719329834) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.10443019866943359) ) ) {
              sum += (double)0.7301417941176470139;
            } else {
              sum += (double)0.7858776874999999773;
            }
          } else {
            sum += (double)0.6766202999999999523;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.262443304061889648) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2290119975805282593) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
          sum += (double)0.08145963999999997207;
        } else {
          sum += (double)0.1736120375000000104;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7919499874114990234) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.481987491250038147) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05509999953210353851) ) ) {
              sum += (double)0.1635634583333333281;
            } else {
              sum += (double)0.2648202187500000027;
            }
          } else {
            sum += (double)0.3160804910714286597;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06979249045252799988) ) ) {
            sum += (double)0.5013987968749999968;
          } else {
            sum += (double)0.3688248913043478683;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3582975119352340698) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1422784999012947083) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.21538448333740234) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.51666641235351562) ) ) {
                  sum += (double)0.005517600000000000109;
                } else {
                  sum += (double)0.02030793750000000134;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1499.338623046875) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.97321510314941406) ) ) {
                    sum += (double)0.004784480000000000677;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                      sum += (double)0.002500000000000001353;
                    } else {
                      sum += (double)0.003116295454545455357;
                    }
                  }
                } else {
                  sum += (double)0.006948185185185186581;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05834999866783618927) ) ) {
                sum += (double)0.0556054615384615411;
              } else {
                sum += (double)0.005707900000000001861;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94999980926513672) ) ) {
              sum += (double)0.05495977343749999106;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.43487167358398438) ) ) {
                sum += (double)0.05147049999999998154;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.1783599853515625) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3347499966621398926) ) ) {
                    sum += (double)0.003261374999999999517;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5550999939441680908) ) ) {
                      sum += (double)0.01439912500000000047;
                    } else {
                      sum += (double)0.007028677419354839584;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1748144999146461487) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)192.2323760986328125) ) ) {
                      sum += (double)0.009046392857142858748;
                    } else {
                      sum += (double)0.02733037931034480728;
                    }
                  } else {
                    sum += (double)0.04450976785714284845;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.1113333676470588118;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4622579962015151978) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02359999995678663254) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.616350024938583374) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3566415905952453613) ) ) {
                sum += (double)0.1672844062499999895;
              } else {
                sum += (double)0.03914093181818181083;
              }
            } else {
              sum += (double)0.3212954772727272812;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9338.98193359375) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7497999966144561768) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4694499969482421875) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.67017269134521484) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3060237020254135132) ) ) {
                      sum += (double)0.02924363571428571784;
                    } else {
                      sum += (double)0.05931419512195120619;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.253134995698928833) ) ) {
                      sum += (double)0.01297935384615384914;
                    } else {
                      sum += (double)0.0460926999999999934;
                    }
                  }
                } else {
                  sum += (double)0.07849351000000000245;
                }
              } else {
                sum += (double)0.1174174545454545332;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)66.20833206176757812) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3836500048637390137) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1133500002324581146) ) ) {
                    sum += (double)0.08105151562500000073;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.176493704319000244) ) ) {
                      sum += (double)0.03287550000000000194;
                    } else {
                      sum += (double)0.009018455882352942321;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.121399998664855957) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.510714530944824219) ) ) {
                      sum += (double)0.1326127499999999737;
                    } else {
                      sum += (double)0.04656170945945946327;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3956.6634521484375) ) ) {
                      sum += (double)0.1570255526315789407;
                    } else {
                      sum += (double)0.2547761562500000521;
                    }
                  }
                }
              } else {
                sum += (double)0.3204983235294118216;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1819000020623207092) ) ) {
            sum += (double)0.1747842727272727048;
          } else {
            sum += (double)0.3346910333333333321;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4604820013046264648) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.089089453220367432) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2417185008525848389) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01490000030025839806) ) ) {
            sum += (double)0.3565855000000000552;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.34807825088500977) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5456.853515625) ) ) {
                sum += (double)0.3176775299999999858;
              } else {
                sum += (double)0.2279759558823529486;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2075499966740608215) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6218500137329101562) ) ) {
                  sum += (double)0.1345434264705882288;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2022235020995140076) ) ) {
                    sum += (double)0.3088896607142856965;
                  } else {
                    sum += (double)0.2011285166666666457;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6144500076770782471) ) ) {
                  sum += (double)0.1730967173913043333;
                } else {
                  sum += (double)0.08696510294117648643;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.13317298889160156) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999862571712583) ) ) {
              sum += (double)0.5831482261904761266;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3549064993858337402) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1767892464995384216) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7161500155925750732) ) ) {
                    sum += (double)0.4030445535714285987;
                  } else {
                    sum += (double)0.2894431969696969476;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3910.9554443359375) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9008.33447265625) ) ) {
                      sum += (double)0.4080661184210526149;
                    } else {
                      sum += (double)0.3675117647058823156;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08964999765157699585) ) ) {
                      sum += (double)0.4829456532258064039;
                    } else {
                      sum += (double)0.3458812812500000611;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6084312200546264648) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2487.288818359375) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1138500012457370758) ) ) {
                      sum += (double)0.4787066116071429511;
                    } else {
                      sum += (double)0.412373902173913065;
                    }
                  } else {
                    sum += (double)0.5284490775862069611;
                  }
                } else {
                  sum += (double)0.3439573076923077011;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4865499883890151978) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7093999981880187988) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4366499930620193481) ) ) {
                  sum += (double)0.1429471111111110804;
                } else {
                  sum += (double)0.3193620657894736814;
                }
              } else {
                sum += (double)0.136378897727272741;
              }
            } else {
              sum += (double)0.3524464868421053332;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.113101601600646973) ) ) {
          sum += (double)0.2469181973684209941;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21581.0751953125) ) ) {
            sum += (double)0.1657029642857142937;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.710588455200195312) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2613.43408203125) ) ) {
                sum += (double)0.1441020833333333251;
              } else {
                sum += (double)0.04293634999999999813;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09499999880790710449) ) ) {
                sum += (double)0.04703417187499998875;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3294865041971206665) ) ) {
                  sum += (double)0.01345553749999999979;
                } else {
                  sum += (double)0.02338933333333333142;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9539542198181152344) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5856605172157287598) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5355575084686279297) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.58401346206665039) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1792.49029541015625) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06890000030398368835) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.31310892105102539) ) ) {
                    sum += (double)0.505424162499999996;
                  } else {
                    sum += (double)0.5661576666666666702;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1352315507829189301) ) ) {
                    sum += (double)0.4224157361111111064;
                  } else {
                    sum += (double)0.5193407272727273982;
                  }
                }
              } else {
                sum += (double)0.5833437499999999387;
              }
            } else {
              sum += (double)0.4010895500000000169;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.130457162857055664) ) ) {
              sum += (double)0.537120312499999808;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5506139993667602539) ) ) {
                sum += (double)0.681206947368421023;
              } else {
                sum += (double)0.6206202894736841946;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.611263751983642578) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.213711261749267578) ) ) {
                sum += (double)0.6327905681818182249;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.791695296764373779) ) ) {
                  sum += (double)0.7565151160714285172;
                } else {
                  sum += (double)0.6992551666666667609;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2670851945877075195) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.791716814041137695) ) ) {
                  sum += (double)0.6288876018518517741;
                } else {
                  sum += (double)0.7088663653846153379;
                }
              } else {
                sum += (double)0.5511620576923076387;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02799999993294477463) ) ) {
              sum += (double)0.8687925374999998507;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.11565709114074707) ) ) {
                sum += (double)0.7075438928571429198;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.23824787139892578) ) ) {
                  sum += (double)0.8374637058823529712;
                } else {
                  sum += (double)0.7582318076923078021;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.081206917762756348) ) ) {
            sum += (double)0.4196390694444444569;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06030000001192092896) ) ) {
              sum += (double)0.2672507857142857879;
            } else {
              sum += (double)0.1564891470588235245;
            }
          }
        } else {
          sum += (double)0.4908157391304346917;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.636480808258056641) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.435000002384185791) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.422222375869750977) ) ) {
            sum += (double)0.1230204444444444323;
          } else {
            sum += (double)0.0371757413793103314;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.9316563606262207) ) ) {
            sum += (double)0.135942201923076933;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.178947210311889648) ) ) {
              sum += (double)0.3716667499999999347;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7763499915599822998) ) ) {
                sum += (double)0.299125472222222244;
              } else {
                sum += (double)0.1687548906250000147;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1829499974846839905) ) ) {
              sum += (double)0.01439709375000000104;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.59523773193359375) ) ) {
                  sum += (double)0.008227568181818183113;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                    sum += (double)0.002500000000000001353;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06190999783575534821) ) ) {
                      sum += (double)0.003688350000000000396;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15525.25) ) ) {
                  sum += (double)0.01533622222222222331;
                } else {
                  sum += (double)0.002500000000000000486;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8515999913215637207) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.08791160583496094) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1641499996185302734) ) ) {
                  sum += (double)0.08982315217391305395;
                } else {
                  sum += (double)0.02025528571428571525;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1949830055236816406) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8163344860076904297) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4142000079154968262) ) ) {
                      sum += (double)0.03750531521739130375;
                    } else {
                      sum += (double)0.01260771978021977581;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.310550004243850708) ) ) {
                      sum += (double)0.003071960000000000315;
                    } else {
                      sum += (double)0.01184969230769230934;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3505356162786483765) ) ) {
                    sum += (double)0.07242570833333332458;
                  } else {
                    sum += (double)0.01617696153846153936;
                  }
                }
              }
            } else {
              sum += (double)0.08737663793103447873;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6850499808788299561) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09293600171804428101) ) ) {
              sum += (double)0.1315216973684210644;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1948949992656707764) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.55335474014282227) ) ) {
                  sum += (double)0.07631478750000000866;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8949999809265136719) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2581999972462654114) ) ) {
                      sum += (double)0.01168935849056603783;
                    } else {
                      sum += (double)0.02959172058823529225;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.84304523468017578) ) ) {
                      sum += (double)0.04736047619047619589;
                    } else {
                      sum += (double)0.0143664666666666694;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.814999997615814209) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)63.08333206176757812) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.02801132202148438) ) ) {
                      sum += (double)0.1074161973684210347;
                    } else {
                      sum += (double)0.03666376666666666673;
                    }
                  } else {
                    sum += (double)0.1952190416666666206;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6150684952735900879) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1142500005662441254) ) ) {
                      sum += (double)0.04283705357142856412;
                    } else {
                      sum += (double)0.1207775499999999835;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                      sum += (double)0.007592666666666668569;
                    } else {
                      sum += (double)0.03503116304347825283;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3111544996500015259) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.37681102752685547) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.80778884887695312) ) ) {
                  sum += (double)0.08871413043478260096;
                } else {
                  sum += (double)0.1965431874999999939;
                }
              } else {
                sum += (double)0.03556828409090909138;
              }
            } else {
              sum += (double)0.2069424444444444844;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5698890089988708496) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9600000083446502686) ) ) {
          sum += (double)0.1706865000000000188;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9353688657283782959) ) ) {
            sum += (double)0.3668648333333333067;
          } else {
            sum += (double)0.1933597391304347768;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1337.30963134765625) ) ) {
          sum += (double)0.4629044600000000731;
        } else {
          sum += (double)0.321881928571428555;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4621350020170211792) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9970184266567230225) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3360275030136108398) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0465999990701675415) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
              sum += (double)0.4728503951612902378;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.451324224472045898) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.604779362678527832) ) ) {
                  sum += (double)0.3847950000000001092;
                } else {
                  sum += (double)0.4337780750000000407;
                }
              } else {
                sum += (double)0.31371411764705881;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.018756866455078125) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2444199994206428528) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.595749974250793457) ) ) {
                  sum += (double)0.293603121794871802;
                } else {
                  sum += (double)0.1521332625000000049;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08419999852776527405) ) ) {
                  sum += (double)0.2882464078947368225;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.206849999725818634) ) ) {
                    sum += (double)0.4209772416666666683;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3058000057935714722) ) ) {
                      sum += (double)0.3232672968749999431;
                    } else {
                      sum += (double)0.4121483461538461568;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4042499959468841553) ) ) {
                sum += (double)0.116892784090909127;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2583734989166259766) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3435999900102615356) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7284500002861022949) ) ) {
                      sum += (double)0.2275478900000000304;
                    } else {
                      sum += (double)0.1582395882352941319;
                    }
                  } else {
                    sum += (double)0.09539343749999999733;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13944.6357421875) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.11640167236328125) ) ) {
                      sum += (double)0.3763435789473684734;
                    } else {
                      sum += (double)0.2158771166666666741;
                    }
                  } else {
                    sum += (double)0.1953863666666666721;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.38224649429321289) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08044999837875366211) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.773041486740112305) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3701220005750656128) ) ) {
                  sum += (double)0.4472440952380952184;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.41615867614746094) ) ) {
                    sum += (double)0.4985922241379310282;
                  } else {
                    sum += (double)0.5717302200000000667;
                  }
                }
              } else {
                sum += (double)0.6235801607142857916;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2468.587646484375) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4031770080327987671) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.361772000789642334) ) ) {
                    sum += (double)0.4411143913043477638;
                  } else {
                    sum += (double)0.4927004375000000325;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1773499995470046997) ) ) {
                    sum += (double)0.338699046874999965;
                  } else {
                    sum += (double)0.400848078947368458;
                  }
                }
              } else {
                sum += (double)0.5289479062499999884;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.04359245300292969) ) ) {
              sum += (double)0.3997684843750000105;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.3760986328125) ) ) {
                sum += (double)0.2156865000000000032;
              } else {
                sum += (double)0.3778337638888888406;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.896885991096496582) ) ) {
          sum += (double)0.2684337692307692258;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.758207559585571289) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4313.30517578125) ) ) {
              sum += (double)0.2218645750000000361;
            } else {
              sum += (double)0.0441494166666666632;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03584999963641166687) ) ) {
              sum += (double)0.1096240694444444302;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.89138698577880859) ) ) {
                sum += (double)0.04040158333333332408;
              } else {
                sum += (double)0.009312192307692309517;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9539542198181152344) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6219575107097625732) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.94444465637207031) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4667980223894119263) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4761.35205078125) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.649624109268188477) ) ) {
                    sum += (double)0.4890233815789473693;
                  } else {
                    sum += (double)0.5235976607142858175;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.01828098297119141) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03080000076442956924) ) ) {
                      sum += (double)0.5626969999999998917;
                    } else {
                      sum += (double)0.528143499999999988;
                    }
                  } else {
                    sum += (double)0.6147277375000000932;
                  }
                }
              } else {
                sum += (double)0.4283546250000000444;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992500126361846924) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4386.61572265625) ) ) {
                  sum += (double)0.535544261904761898;
                } else {
                  sum += (double)0.614563527777777785;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03170000016689300537) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2068.7967529296875) ) ) {
                    sum += (double)0.6585928437499999344;
                  } else {
                    sum += (double)0.6900947894736840782;
                  }
                } else {
                  sum += (double)0.6119850096153846009;
                }
              }
            }
          } else {
            sum += (double)0.3571608653846153891;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.6234130859375) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.910897254943847656) ) ) {
                sum += (double)0.6604141184210526871;
              } else {
                sum += (double)0.7196906899999998553;
              }
            } else {
              sum += (double)0.6096873194444445421;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1074000000953674316) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02799999993294477463) ) ) {
                sum += (double)0.8343938333333333901;
              } else {
                sum += (double)0.7898318854166666014;
              }
            } else {
              sum += (double)0.7093963611111113732;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6788139939308166504) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02049999963492155075) ) ) {
            sum += (double)0.4282986607142857394;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.088814973831176758) ) ) {
              sum += (double)0.2186679583333333288;
            } else {
              sum += (double)0.3617416166666666544;
            }
          }
        } else {
          sum += (double)0.5595780294117647102;
        }
      }
    }
  }
  return sum;
}
