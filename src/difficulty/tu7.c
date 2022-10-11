#include "prediction.h"
double predict_margin_unit7(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.32690882134914823) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6957.789300648867538) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.691015480139064997) ) ) {
        sum += (double)4.640430377188761974e-07;
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11633.46423378696454) ) ) {
          sum += (double)0.0009256997057422832863;
        } else {
          sum += (double)0.008626515247518002152;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.244044242768009401) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3057500000000000218) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07575000000000001177) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.529344945096554387) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7450000000000001066) ) ) {
                  sum += (double)-0.004009768527623130442;
                } else {
                  sum += (double)0.005955726330314028462;
                }
              } else {
                sum += (double)0.007751194565180531161;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1026.429492244415542) ) ) {
                sum += (double)0.00138620071463324405;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5102304767324556956) ) ) {
                  sum += (double)0.003072397913952658061;
                } else {
                  sum += (double)-0.004044093150465282935;
                }
              }
            }
          } else {
            sum += (double)-0.002000951240734216794;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1922.307281728331645) ) ) {
            sum += (double)-0.0008600765244117198694;
          } else {
            sum += (double)0.01119771103082862519;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2796390000000000264) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.807894736842105665) ) ) {
            sum += (double)-0.01600608376913178338;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2150355000000000183) ) ) {
              sum += (double)0.001293474072491543553;
            } else {
              sum += (double)-0.00558775750634812364;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007100000000000000408) ) ) {
            sum += (double)-0.006786661132637210499;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5071000000000001062) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3318725000000000702) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.361710963455149859) ) ) {
                  sum += (double)0.007681305463280131522;
                } else {
                  sum += (double)-0.001535111016017638198;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4261680000000000468) ) ) {
                  sum += (double)-0.004292226501971652293;
                } else {
                  sum += (double)0.0016036756588839005;
                }
              }
            } else {
              sum += (double)-0.006801751132345240647;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.61180124223603016) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8450000000000000844) ) ) {
        sum += (double)-0.0003516962367008021626;
      } else {
        sum += (double)0.00137210879162554737;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8150000000000000577) ) ) {
        sum += (double)0.000503421990138480744;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3628942767329608188) ) ) {
          sum += (double)-0.009708866591812151392;
        } else {
          sum += (double)-0.0008293109335978173131;
        }
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.730992608792824905) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2933365293588373057) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5438500000000001666) ) ) {
        sum += (double)-0.003348481455767817958;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3224500000000000699) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.192234848484849508) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06800000000000001876) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1026.429492244415542) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08382084018800491088) ) ) {
                  sum += (double)-0.0002775433750261278778;
                } else {
                  sum += (double)0.003203272952221708665;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.451996927803379744) ) ) {
                  sum += (double)0.00121533465229380468;
                } else {
                  sum += (double)-0.01019044246086225729;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.602325581395349197) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0846500000000000169) ) ) {
                  sum += (double)-0.006417083957137247573;
                } else {
                  sum += (double)-0.000529936843757458924;
                }
              } else {
                sum += (double)-0.00881121914035518615;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1476375000000000048) ) ) {
              sum += (double)-0.0009180967050590367346;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.41530501089326322) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16109.82692390526427) ) ) {
                  sum += (double)0.01108892503311501194;
                } else {
                  sum += (double)0.000235864676732897439;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)111.1403508771930007) ) ) {
                  sum += (double)0.01648293775806407985;
                } else {
                  sum += (double)0.005254422617857485572;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.901704545454547812) ) ) {
            sum += (double)0.001971238426764124196;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17787.44282608967842) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.9888888888888907) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.02380952380952905) ) ) {
                  sum += (double)-0.002514101922186943918;
                } else {
                  sum += (double)0.009041185977805876392;
                }
              } else {
                sum += (double)-0.004244155045945278287;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3681235000000000479) ) ) {
                sum += (double)-0.003998177524797744652;
              } else {
                sum += (double)-0.01563984582816927912;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.325855839657968327) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.54015000000000013) ) ) {
          sum += (double)-0.0001759620129872949894;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
            sum += (double)0.002031429958684370131;
          } else {
            sum += (double)0.0120538814811334636;
          }
        }
      } else {
        sum += (double)0.0003695093081417901489;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0539500000000000049) ) ) {
      sum += (double)-0.003979755747604687977;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4707000000000000628) ) ) {
        sum += (double)-0.001345872380296637191;
      } else {
        sum += (double)0.008122232659770274935;
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5679000000000000714) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5435500000000000886) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5071000000000001062) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4876000000000000889) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)57.49696663296259658) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.58149205561072748) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-23963.85177757939891) ) ) {
                sum += (double)0.004887261125991156259;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.305052790346909575) ) ) {
                  sum += (double)0.00019278463994617891;
                } else {
                  sum += (double)-0.001446906046942192511;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4504500000000000726) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.15564516129032668) ) ) {
                  sum += (double)0.01559825750661341;
                } else {
                  sum += (double)0.0007286828568261888035;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2180500000000000216) ) ) {
                  sum += (double)0.001079702339346962515;
                } else {
                  sum += (double)-0.001477391449244400351;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)102.4779942279942446) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4850000000000000422) ) ) {
                sum += (double)-0.0007087065692621728015;
              } else {
                sum += (double)-0.006322028681857724298;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)183.1289592760181222) ) ) {
                sum += (double)0.004126376267122462346;
              } else {
                sum += (double)-0.0009838928446734781803;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5556763474782282497) ) ) {
            sum += (double)0.01137562075972634382;
          } else {
            sum += (double)-0.001861704735410953538;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4170797359626947087) ) ) {
          sum += (double)-0.007893608247349239923;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6627.119522556799893) ) ) {
            sum += (double)0.006286625965246660924;
          } else {
            sum += (double)-0.005235455048101259924;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2933365293588373057) ) ) {
        sum += (double)-0.00224033933259469055;
      } else {
        sum += (double)0.008472876832000313108;
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)118.1981481481481495) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.140437609692192461) ) ) {
        sum += (double)0.003159410246692661607;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.208711433756811) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.71943947525343432) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.835271317829459292) ) ) {
              sum += (double)0.002394145797192825074;
            } else {
              sum += (double)-0.01017756576090071002;
            }
          } else {
            sum += (double)0.004980009737338206635;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10488.86544911318379) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5166589929042439966) ) ) {
              sum += (double)-0.0001707744046777467722;
            } else {
              sum += (double)-0.006804004982050478913;
            }
          } else {
            sum += (double)-0.01390197709237093668;
          }
        }
      }
    } else {
      sum += (double)0.005009053348432448115;
    }
  }
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.32690882134914823) ) ) {
    sum += (double)-0.0003166681812640585974;
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2473650000000000293) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04681961945518394591) ) ) {
        sum += (double)0.008025712182738543865;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07092506117818180023) ) ) {
          sum += (double)-0.007249624076908089791;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02505000000000000282) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4650000000000000244) ) ) {
              sum += (double)-0.0004222397044247732669;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.58149205561072748) ) ) {
                sum += (double)-0.003373599280040768915;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1536732317414395144) ) ) {
                  sum += (double)0.003883813735972994636;
                } else {
                  sum += (double)0.01536018777196487828;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4796000000000000818) ) ) {
              sum += (double)0.0004621775213494513793;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1536732317414395144) ) ) {
                sum += (double)0.001753975095662469331;
              } else {
                sum += (double)-0.002108937436939043938;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1644719925911697356) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1328607757856534455) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16783.36736365294564) ) ) {
            sum += (double)0.004803155334208716182;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)108.7425925925926009) ) ) {
              sum += (double)-0.0001463676090150303039;
            } else {
              sum += (double)-0.008011581851230081472;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.28832547169812273) ) ) {
            sum += (double)0.001033124077418829658;
          } else {
            sum += (double)-0.01313399822774014708;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.56755000000000011) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5268500000000001515) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2750375000000000458) ) ) {
              sum += (double)0.007439750095737483228;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2448.48124855514061) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5129.274497330098711) ) ) {
                  sum += (double)0.0007884349734330578681;
                } else {
                  sum += (double)-0.00610685114932937867;
                }
              } else {
                sum += (double)0.008184206055861330611;
              }
            }
          } else {
            sum += (double)-0.007516901317014942387;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5036000000000001586) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9005500000000000727) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8250000000000000666) ) ) {
                sum += (double)-0.0005928447740685393328;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2494096930589172756) ) ) {
                  sum += (double)0.009682016659015595453;
                } else {
                  sum += (double)0.004292346633884992074;
                }
              }
            } else {
              sum += (double)-0.00389296268831081007;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.221420291016541565) ) ) {
              sum += (double)-0.0079165447273459328;
            } else {
              sum += (double)0.002830724649430343878;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5679000000000000714) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.730992608792824905) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5435500000000000886) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9313838414749247008) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.009150000000000003617) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.882665832290363328) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.336734693877551061) ) ) {
                sum += (double)-0.0007050869967210887527;
              } else {
                sum += (double)0.006541953845126809337;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1972000000000000142) ) ) {
                sum += (double)-0.007960168018175561855;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1843.148446414932323) ) ) {
                  sum += (double)-0.00728388907891154222;
                } else {
                  sum += (double)0.0002090148377716224352;
                }
              }
            }
          } else {
            sum += (double)0.0002334361693224007786;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.18505000000000002) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.825757575757575912) ) ) {
              sum += (double)-0.004029972787755706741;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.140910052012023224) ) ) {
                sum += (double)0.007136725669077586751;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.337552742616034074) ) ) {
                  sum += (double)0.00666288357228303138;
                } else {
                  sum += (double)-0.001539949988183209398;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.06458333333333499) ) ) {
              sum += (double)-0.008003965220867260283;
            } else {
              sum += (double)0.002214103859917375839;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2933365293588373057) ) ) {
          sum += (double)-0.001814693522290905872;
        } else {
          sum += (double)0.01108988353263259605;
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0539500000000000049) ) ) {
        sum += (double)-0.003245259559875149184;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4009500000000000841) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.964433291539125603) ) ) {
            sum += (double)-0.001176747008264082467;
          } else {
            sum += (double)0.008372214605458158654;
          }
        } else {
          sum += (double)-0.00356440943161767318;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
      sum += (double)0.004350171394679953549;
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.140437609692192461) ) ) {
        sum += (double)0.003430229359673341808;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.208711433756811) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.71943947525343432) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.835271317829459292) ) ) {
              sum += (double)0.002096308094995081531;
            } else {
              sum += (double)-0.008656445361891584866;
            }
          } else {
            sum += (double)0.00377783655246994492;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21186.65183932884247) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-36406.22903770698031) ) ) {
              sum += (double)-0.006526132440386730148;
            } else {
              sum += (double)0.001911001539642177578;
            }
          } else {
            sum += (double)-0.01083337031689276218;
          }
        }
      }
    }
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-85.02663671482834218) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.50416666666666821) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.00605000000000000069) ) ) {
          sum += (double)-0.003627596706539167742;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1936000000000000221) ) ) {
            sum += (double)0.01424652522374669598;
          } else {
            sum += (double)0.002753199310878803614;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05098500000000000948) ) ) {
          sum += (double)0.002443890811267117498;
        } else {
          sum += (double)-0.004621609427573808437;
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.212865725728852262) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7317500000000002336) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02635000000000000189) ) ) {
            sum += (double)0.004346923661935193223;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7609450000000000935) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1078208703468215152) ) ) {
                sum += (double)-0.009825436749088589661;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1979168169407865274) ) ) {
                  sum += (double)-0.001563575520140584674;
                } else {
                  sum += (double)-0.008824811864521883015;
                }
              }
            } else {
              sum += (double)0.003169320763875058036;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)206.5532786885246139) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3878415000000000612) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1740840000000000165) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.48655523255816036) ) ) {
                  sum += (double)-0.00767195403656455166;
                } else {
                  sum += (double)-5.780099002114167506e-05;
                }
              } else {
                sum += (double)0.003243129541105706226;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4480.563354773491483) ) ) {
                sum += (double)-0.004135468477397569176;
              } else {
                sum += (double)6.110674268940536108e-06;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1226830000000000143) ) ) {
              sum += (double)-0.001547089053085541578;
            } else {
              sum += (double)0.01039695460626244641;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4609500000000000264) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4401000000000000467) ) ) {
            sum += (double)0.0001944860334298595286;
          } else {
            sum += (double)-0.004564862486379547141;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.64676616915423146) ) ) {
            sum += (double)0.0002835909825593134937;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.3556547619047663) ) ) {
              sum += (double)0.01106905575955200415;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13280.04482759072744) ) ) {
                sum += (double)0.003299397854859457448;
              } else {
                sum += (double)-0.002501315441875763025;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7444527670486335014) ) ) {
      sum += (double)-0.007036363238269319545;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006650000000000000529) ) ) {
        sum += (double)-0.005327211941487265852;
      } else {
        sum += (double)0.004920661028348767563;
      }
    }
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9566500000000001114) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.67992424242424931) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-38191.21312166600546) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4675000000000000822) ) ) {
          sum += (double)0.008859675190693590274;
        } else {
          sum += (double)0.001453518474565408886;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.5358422939068177) ) ) {
          sum += (double)0.0001516655494825993602;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8351.289787540712496) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3540370000000000461) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                sum += (double)-0.002602894127381534268;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4401000000000000467) ) ) {
                  sum += (double)-0.01028692096742762213;
                } else {
                  sum += (double)-0.0006539590562979141026;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3354500000000000259) ) ) {
                sum += (double)0.004783833366369071721;
              } else {
                sum += (double)-0.002856151546120492928;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.52233644859813921) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.69255000000000011) ) ) {
                sum += (double)-0.0002159113844493261338;
              } else {
                sum += (double)-0.009386828894661043005;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.795000000000000151) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2297500000000000375) ) ) {
                  sum += (double)0.005082242585588548842;
                } else {
                  sum += (double)-0.002014601591974236536;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
                  sum += (double)0.01005109069340116672;
                } else {
                  sum += (double)-0.0003639184479391398492;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.115000000000000005) ) ) {
        sum += (double)-0.0009324375068207370072;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15269.41089232427839) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.3556547619047663) ) ) {
            sum += (double)-0.00685633642001459969;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.14667015835553604) ) ) {
              sum += (double)0.006436008064341717724;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2979940000000000366) ) ) {
                sum += (double)-0.001538683445928362486;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4335005000000000663) ) ) {
                  sum += (double)0.007100619567737849643;
                } else {
                  sum += (double)-0.0007663522562548008912;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1566500000000000392) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7862500000000001155) ) ) {
              sum += (double)0.02328896361083411179;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.420454545454546746) ) ) {
                sum += (double)-0.00295478493747709358;
              } else {
                sum += (double)0.00776047520305683889;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000000000001021) ) ) {
              sum += (double)-0.001692349591897565576;
            } else {
              sum += (double)0.004962406502814002175;
            }
          }
        }
      }
    }
  } else {
    sum += (double)-0.002516479885788170529;
  }
  return sum;
}
