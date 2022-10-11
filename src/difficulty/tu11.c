#include "prediction.h"
double predict_margin_unit11(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2831453397228142488) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2765776916165623711) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04935000000000001191) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.75221631205674555) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.03846153846154721) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2258850621187963037) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2472.994105478598158) ) ) {
                sum += (double)0.002480366562765744937;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1737.602051886094387) ) ) {
                  sum += (double)-0.002888792738957501795;
                } else {
                  sum += (double)0.0008817788741284167311;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.37289915966386999) ) ) {
                sum += (double)-0.007224722643961288202;
              } else {
                sum += (double)0.003326482332563176613;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08382084018800491088) ) ) {
              sum += (double)-0.008054317954231202809;
            } else {
              sum += (double)-0.001581646993423643614;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9150000000000001465) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.41145833333333393) ) ) {
              sum += (double)0.004015831820099916016;
            } else {
              sum += (double)-0.0007341650764285869313;
            }
          } else {
            sum += (double)0.0102249503400382441;
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1460.217558944000075) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07245000000000001439) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3926440000000000485) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.86408730158730407) ) ) {
                sum += (double)-0.009259984836085904253;
              } else {
                sum += (double)-9.175051154575621494e-05;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.891111111111111409) ) ) {
                sum += (double)-0.003799019659251004748;
              } else {
                sum += (double)0.002842282979492260098;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09005000000000001892) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4666.013506153932212) ) ) {
                sum += (double)0.007031459658211152569;
              } else {
                sum += (double)-3.15618808137022944e-05;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09970000000000002471) ) ) {
                sum += (double)-0.006024869720689968178;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6960000000000000631) ) ) {
                  sum += (double)-0.001775888319440686132;
                } else {
                  sum += (double)0.0001517430275357022887;
                }
              }
            }
          }
        } else {
          sum += (double)0.004867772123856236276;
        }
      }
    } else {
      sum += (double)-0.00593528920706700748;
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.325855839657968327) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
        sum += (double)-0.0004334788397392726374;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.208554536679536717) ) ) {
          sum += (double)-0.001800765338273372382;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2180500000000000216) ) ) {
            sum += (double)0.009940872638652587315;
          } else {
            sum += (double)0.002888497026886652046;
          }
        }
      }
    } else {
      sum += (double)-1.168936861312403677e-06;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.154350000000000015) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08890000000000002067) ) ) {
      sum += (double)0.0001467348046804190127;
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2584443566462722441) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2448.48124855514061) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.37097091194969067) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5009430000000000271) ) ) {
              sum += (double)-0.01326427916865233203;
            } else {
              sum += (double)-0.002035650758806873632;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8044000000000001149) ) ) {
              sum += (double)0.00211206591594747476;
            } else {
              sum += (double)-0.005625582923461852625;
            }
          }
        } else {
          sum += (double)0.001156112483653884025;
        }
      } else {
        sum += (double)-0.0005211827170846743259;
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5181500000000001105) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4675000000000000822) ) ) {
        sum += (double)0.000863161573514249097;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4287926431766753144) ) ) {
          sum += (double)0.009412351262374014232;
        } else {
          sum += (double)0.002348793944603337885;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.30439814814815058) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4710860867349266901) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.483097327483048566) ) ) {
            sum += (double)0.0001401598152107324938;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
              sum += (double)-0.001821456396057821682;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11846.64145781244406) ) ) {
                sum += (double)0.001477548580107765613;
              } else {
                sum += (double)0.008177189359955589279;
              }
            }
          }
        } else {
          sum += (double)-0.004572430853551559884;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4599203400496544303) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11425.04291619889409) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4497500000000000386) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2893000000000000571) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.232050000000000034) ) ) {
                  sum += (double)-0.00443399296813109297;
                } else {
                  sum += (double)0.005400775929908972761;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-23963.85177757939891) ) ) {
                  sum += (double)-0.001611676412342827672;
                } else {
                  sum += (double)-0.01067384789974580063;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4707000000000000628) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3024760000000000226) ) ) {
                  sum += (double)-0.0003014549379393690665;
                } else {
                  sum += (double)0.01124177398942922089;
                }
              } else {
                sum += (double)-0.0008753851049909013981;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3410175000000000289) ) ) {
              sum += (double)-0.0002851285615631838103;
            } else {
              sum += (double)-0.01335939727782202609;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2979940000000000366) ) ) {
            sum += (double)-0.0001547214415167863727;
          } else {
            sum += (double)0.01004154376946658246;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.154350000000000015) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9859698681732581571) ) ) {
      sum += (double)0.001944463579666049977;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2979940000000000366) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04326142423856935149) ) ) {
          sum += (double)0.005322061385089079874;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8253500000000001391) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.764897074756232698) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1455340000000000245) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01405000000000000172) ) ) {
                  sum += (double)0.001543790474544305073;
                } else {
                  sum += (double)-0.005920324150058562176;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.533917682926829507) ) ) {
                  sum += (double)0.002287984659712207457;
                } else {
                  sum += (double)0.008835784822077545966;
                }
              }
            } else {
              sum += (double)3.288023271965277662e-05;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6650000000000001465) ) ) {
              sum += (double)-0.001362158046108975611;
            } else {
              sum += (double)-0.007553976897134103557;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3242065000000000641) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.676547515257193588) ) ) {
            sum += (double)-0.002591536684726632785;
          } else {
            sum += (double)-0.01020953520019089907;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.755813953488372325) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.408051529790660394) ) ) {
              sum += (double)0.0005989172460135723866;
            } else {
              sum += (double)-0.009332520093978884101;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.943152454780363136) ) ) {
              sum += (double)0.0003723778362916693946;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.72670807453416586) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6074.632222739891404) ) ) {
                  sum += (double)0.004448376053632585765;
                } else {
                  sum += (double)-0.005636308716202920351;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.10815000000000001) ) ) {
                  sum += (double)0.002820807494055913196;
                } else {
                  sum += (double)-0.006380117588925635075;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-244.3733554551900227) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1658500000000000252) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5181500000000001105) ) ) {
          sum += (double)0.007175434294719344915;
        } else {
          sum += (double)0.001175578624867506302;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.329588014981273769) ) ) {
          sum += (double)-0.001829518084046338061;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9201500000000001345) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.72670807453416586) ) ) {
              sum += (double)0.001511698598347798947;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.9767628205128247) ) ) {
                sum += (double)-0.001459917401335103417;
              } else {
                sum += (double)0.0007635234112636913976;
              }
            }
          } else {
            sum += (double)0.007992669772702144446;
          }
        }
      }
    } else {
      sum += (double)-0.004414211920626057509;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.154350000000000015) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.10815000000000001) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-211.5714022873356726) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-472.9911387249753147) ) ) {
          sum += (double)2.317063409063352253e-05;
        } else {
          sum += (double)-0.005351731922308092942;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001150000000000000197) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-85.02663671482834218) ) ) {
            sum += (double)0.003925542200070624745;
          } else {
            sum += (double)-0.00281200397441906105;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01405000000000000172) ) ) {
            sum += (double)0.008883968361289368981;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4335005000000000663) ) ) {
              sum += (double)0.006269704838641818392;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.220357010728820191) ) ) {
                sum += (double)0.002642946989030914209;
              } else {
                sum += (double)-0.004757800129297952083;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4139613341503254884) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.077254641909815014) ) ) {
          sum += (double)-0.0001474581950768391733;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3024760000000000226) ) ) {
            sum += (double)-0.001544270137296802981;
          } else {
            sum += (double)-0.01108153011190572516;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.946466452074269271) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1184500000000000136) ) ) {
            sum += (double)-0.003299283326588023195;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1324000000000000454) ) ) {
              sum += (double)0.007569856552291037363;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1446000000000000341) ) ) {
                sum += (double)-0.00228270200059625325;
              } else {
                sum += (double)0.006023513973072906411;
              }
            }
          }
        } else {
          sum += (double)-0.004937643540048457583;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2378485000000000182) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1488515000000000255) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1391100000000000392) ) ) {
          sum += (double)9.404029141768721004e-05;
        } else {
          sum += (double)0.009239465671711931394;
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.62250712250712681) ) ) {
            sum += (double)0.004845559849786174739;
          } else {
            sum += (double)-0.0009857222397075414335;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4609500000000000264) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2563500000000000223) ) ) {
              sum += (double)-0.0005221286522375919109;
            } else {
              sum += (double)-0.008438754129664011866;
            }
          } else {
            sum += (double)0.001386476267095078894;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2717060000000000586) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4902302506306597807) ) ) {
          sum += (double)0.008756455432554193646;
        } else {
          sum += (double)0.001152907057229132564;
        }
      } else {
        sum += (double)0.0006281150714618796531;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2327420902542548242) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9072000000000001174) ) ) {
      sum += (double)-0.0005837788821335739443;
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5573.923605496105665) ) ) {
        sum += (double)0.003566259084856656433;
      } else {
        sum += (double)0.0001088467534266408809;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)67.58504398826981685) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-31269.01582963789042) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.13045634920635507) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.07334525939177894) ) ) {
            sum += (double)0.004371792733263892526;
          } else {
            sum += (double)0.01294645030059903695;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2979940000000000366) ) ) {
            sum += (double)-0.001558739922648514405;
          } else {
            sum += (double)0.006441122428018622795;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)121.4022959183673578) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5968000000000001082) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06135000000000000869) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3784500000000000086) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.691015480139064997) ) ) {
                  sum += (double)0.002533339347944495602;
                } else {
                  sum += (double)-0.0004703923444600109486;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2929020000000000512) ) ) {
                  sum += (double)-0.0006300403424023546303;
                } else {
                  sum += (double)-0.00747359469346916671;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2980515137801267866) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5155000000000001803) ) ) {
                  sum += (double)0.001560430947393133148;
                } else {
                  sum += (double)0.01081830038262503874;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06925000000000001987) ) ) {
                  sum += (double)0.009036199883168985827;
                } else {
                  sum += (double)0.000406499393585916895;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6447000000000001618) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1369000000000000217) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6204000000000000625) ) ) {
                  sum += (double)-0.003337872454598921849;
                } else {
                  sum += (double)-0.01203862417222344681;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3107540328745755365) ) ) {
                  sum += (double)0.002169996484997858271;
                } else {
                  sum += (double)-0.003946374429249290515;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.48317829457365491) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7134500000000000286) ) ) {
                  sum += (double)0.005803131601296050712;
                } else {
                  sum += (double)-0.002777804990240091785;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1173000000000000292) ) ) {
                  sum += (double)0.0003444395206099843624;
                } else {
                  sum += (double)-0.00668556426551248327;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1050000000000000239) ) ) {
            sum += (double)-0.0001457683854531460765;
          } else {
            sum += (double)0.01107266352462865817;
          }
        }
      }
    } else {
      sum += (double)-0.001168044095595521543;
    }
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34.36327066033143041) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.154350000000000015) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1394000000000000239) ) ) {
        sum += (double)-5.968886303573607864e-05;
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14193.52161079702273) ) ) {
          sum += (double)-0.006745635272607980286;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3727500000000000813) ) ) {
            sum += (double)-0.004036055059364694782;
          } else {
            sum += (double)0.001547784696595175605;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1577.474241027566222) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5181500000000001105) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4675000000000000822) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3772195000000000964) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4087500000000000577) ) ) {
                sum += (double)0.0005985826092149879821;
              } else {
                sum += (double)-0.001991174469883508907;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4037960000000000438) ) ) {
                sum += (double)0.01072869928915618463;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3860500000000000598) ) ) {
                  sum += (double)0.003958582266783515838;
                } else {
                  sum += (double)-0.0002864197334168879817;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.28832547169812273) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2624030000000000529) ) ) {
                sum += (double)0.01309279517387955394;
              } else {
                sum += (double)0.003706990269000280235;
              }
            } else {
              sum += (double)-0.0003394165237352107897;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.30439814814815058) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4710860867349266901) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.483097327483048566) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7292.957146226334771) ) ) {
                  sum += (double)-0.003511343921444993327;
                } else {
                  sum += (double)0.001121015726138612292;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1032187713739281393) ) ) {
                  sum += (double)-0.0003684858288216117045;
                } else {
                  sum += (double)0.005314767270737819939;
                }
              }
            } else {
              sum += (double)-0.004096215001372670479;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4559886699161891932) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11425.04291619889409) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4497500000000000386) ) ) {
                  sum += (double)-0.002815466769078206043;
                } else {
                  sum += (double)0.00223804954816329664;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.477650000000000019) ) ) {
                  sum += (double)-0.002015816055010915663;
                } else {
                  sum += (double)-0.01519615011183546825;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12192.03602085573402) ) ) {
                sum += (double)-0.0003475249290844539449;
              } else {
                sum += (double)0.007963174214593273653;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1248.8076697168176) ) ) {
          sum += (double)-0.004730615872292838302;
        } else {
          sum += (double)0.0001790490016207211079;
        }
      }
    }
  } else {
    sum += (double)0.003358381818849788016;
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9859698681732581571) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3023.691425623624582) ) ) {
      sum += (double)-0.002650350065058760998;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5568760000000000376) ) ) {
        sum += (double)0.007403576047504764265;
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1061.317261442419749) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8138480000000000159) ) ) {
            sum += (double)0.000916031661949000698;
          } else {
            sum += (double)0.005289330536721841523;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-282.5149217182645884) ) ) {
            sum += (double)-0.001947701921717820807;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5102304767324556956) ) ) {
              sum += (double)0.003183541816796462733;
            } else {
              sum += (double)0.0003471448377257727795;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.755813953488372325) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5081020000000001646) ) ) {
        sum += (double)-0.006297014774829347468;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-162.0383866462893536) ) ) {
          sum += (double)0.002392799715367893102;
        } else {
          sum += (double)-0.004037292999418567487;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.924285714285714599) ) ) {
        sum += (double)0.004659940775985046621;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.485097903309652079) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1426500000000000268) ) ) {
            sum += (double)-0.004779861553043700945;
          } else {
            sum += (double)0.0008271766825801175329;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7371000000000000885) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5042355000000001697) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3852150000000000296) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.875516528925620374) ) ) {
                  sum += (double)0.002863773886179811837;
                } else {
                  sum += (double)6.931497839394385927e-05;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.94056250000000574) ) ) {
                  sum += (double)0.0009991677811287903634;
                } else {
                  sum += (double)0.0094471641388225603;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5137965000000001003) ) ) {
                sum += (double)-0.006885736771130955038;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.730992608792824905) ) ) {
                  sum += (double)3.085432133458280274e-05;
                } else {
                  sum += (double)-0.004306918528596138072;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7451500000000000901) ) ) {
              sum += (double)-0.007103871645296066031;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5466088436068282652) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.9791841883936101) ) ) {
                  sum += (double)0.0001447966243324129583;
                } else {
                  sum += (double)-0.001634601971798966451;
                }
              } else {
                sum += (double)0.004280020836907276818;
              }
            }
          }
        }
      }
    }
  }
  return sum;
}
