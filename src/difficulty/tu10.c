#include "prediction.h"
double predict_margin_unit10(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)181.638621794871824) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)290.138775510204141) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-106082.2518424642476) ) ) {
        sum += (double)0.004686615506035367133;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.7097500000000002141) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.17547169811321339) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)46.2023809523809561) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-38191.21312166600546) ) ) {
                sum += (double)0.003693854330592397529;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.59151511703276527) ) ) {
                  sum += (double)0.0002336709601071375959;
                } else {
                  sum += (double)-0.001043697876957445144;
                }
              }
            } else {
              sum += (double)0.005399174473224131396;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6950000000000000622) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4250000000000000444) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07858684030820616007) ) ) {
                  sum += (double)0.003984079028289556207;
                } else {
                  sum += (double)-0.0007777486722161017739;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)116.0666666666666771) ) ) {
                  sum += (double)-0.002183732180601915228;
                } else {
                  sum += (double)0.01075729949394866464;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6111095000000000832) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3147500000000000298) ) ) {
                  sum += (double)-0.001382298465103499888;
                } else {
                  sum += (double)-0.006652526879978566329;
                }
              } else {
                sum += (double)0.001558544447898434953;
              }
            }
          }
        } else {
          sum += (double)-0.004571923122489611642;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08468050000000000577) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0277000000000000024) ) ) {
          sum += (double)0.0001501688841085652506;
        } else {
          sum += (double)-0.001140656009418362883;
        }
      } else {
        sum += (double)0.01274254973514719197;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.946466452074269271) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.335150000000000059) ) ) {
        sum += (double)0.002322441764521118463;
      } else {
        sum += (double)-0.0009685759624496161546;
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2050000000000000433) ) ) {
        sum += (double)-0.000257872537361317905;
      } else {
        sum += (double)-0.006562931479849209992;
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.224238952202467923) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8776831527315031023) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1248.8076697168176) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1577.474241027566222) ) ) {
          sum += (double)6.374839189300048655e-05;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5290675981248388338) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8407000000000001139) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                sum += (double)0.008034901230404283001;
              } else {
                sum += (double)-0.00033236107137594675;
              }
            } else {
              sum += (double)-0.00566713496474882325;
            }
          } else {
            sum += (double)-0.01055603916858267356;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7501260000000001815) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7156000000000001249) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08145000000000002238) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9859698681732581571) ) ) {
                sum += (double)0.006095710940621664603;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                  sum += (double)0.0005540178623418828699;
                } else {
                  sum += (double)-0.008231517232835366266;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5568760000000000376) ) ) {
                sum += (double)0.006812099690503946835;
              } else {
                sum += (double)-0.0006731625890269209243;
              }
            }
          } else {
            sum += (double)0.005004360293435576416;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.99047323644098029) ) ) {
            sum += (double)0.0003977493542812031457;
          } else {
            sum += (double)-0.006315099238935514836;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5787000000000001032) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3895500000000000629) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2015500000000000347) ) ) {
            sum += (double)-0.0008236137065511530374;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8450000000000000844) ) ) {
              sum += (double)-0.0008122643355450887177;
            } else {
              sum += (double)-0.00848327442380215381;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.06020942408377294) ) ) {
            sum += (double)0.007697310457910773278;
          } else {
            sum += (double)-0.002043015866548144027;
          }
        }
      } else {
        sum += (double)-0.005975183511304145954;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5435500000000000886) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4009500000000000841) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05695000000000000756) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.65809968847352174) ) ) {
            sum += (double)0.0001785427717788798038;
          } else {
            sum += (double)-0.006270059642886072204;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.04820000000000001367) ) ) {
            sum += (double)-0.0003789914280892473365;
          } else {
            sum += (double)0.003458896007338963137;
          }
        }
      } else {
        sum += (double)-0.00292832675864678621;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.730992608792824905) ) ) {
        sum += (double)0.007213563855140560886;
      } else {
        sum += (double)0.0003083542549232775242;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8708480000000001775) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.98913043478261109) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.51496792587313145) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.54330392943063366) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.073498117531512364) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1476375000000000048) ) ) {
              sum += (double)-0.004568161652287475172;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2150355000000000183) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2700.929737596660289) ) ) {
                  sum += (double)0.008674120583929356698;
                } else {
                  sum += (double)-0.003543398979432867829;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.040476190476192997) ) ) {
                  sum += (double)-0.0003509447984001531256;
                } else {
                  sum += (double)-0.006738112988927197171;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8340135669768041771) ) ) {
              sum += (double)-0.003137812334194445794;
            } else {
              sum += (double)0.008807085480079234266;
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
            sum += (double)-0.0005291682014467687708;
          } else {
            sum += (double)-0.01056161650074867453;
          }
        }
      } else {
        sum += (double)-0.006938470374619972597;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.71943947525343432) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2577500000000000902) ) ) {
          sum += (double)0.008099760723220409894;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.62258064516129608) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3772195000000000964) ) ) {
              sum += (double)-0.007792305521549755011;
            } else {
              sum += (double)0.001924466938211609858;
            }
          } else {
            sum += (double)0.003946934943995000257;
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3532.309299966947492) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3953.943999719150725) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03937372917409572709) ) ) {
              sum += (double)-0.00372289633523333139;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15269.41089232427839) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.97368421052632215) ) ) {
                  sum += (double)-0.00265341729732323714;
                } else {
                  sum += (double)7.455599327682279134e-05;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13510.52394035309953) ) ) {
                  sum += (double)0.006250872775789394729;
                } else {
                  sum += (double)0.000460249719731285669;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2730813378879465292) ) ) {
              sum += (double)0.009376073939546361244;
            } else {
              sum += (double)0.002953140533995175267;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2854.952487975431268) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6950000000000000622) ) ) {
              sum += (double)-0.0006672441552373513992;
            } else {
              sum += (double)-0.009663969775018503919;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6111095000000000832) ) ) {
              sum += (double)-0.0004213706193408154081;
            } else {
              sum += (double)-0.004248825865959439917;
            }
          }
        }
      }
    }
  } else {
    sum += (double)0.002775513946238229984;
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8708480000000001775) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-771.1535402920288789) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1248.8076697168176) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.678173972291619798) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.451996927803379744) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3187835000000000529) ) ) {
              sum += (double)-0.005955080455590262313;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5679452574321449676) ) ) {
                sum += (double)-0.0008961197180216882389;
              } else {
                sum += (double)0.003851174021606569575;
              }
            }
          } else {
            sum += (double)-0.006648920651290065285;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3246.901261113256169) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3770.886007893999249) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.81002331002331474) ) ) {
                sum += (double)-0.0008336253439320456598;
              } else {
                sum += (double)0.0004919374123369188575;
              }
            } else {
              sum += (double)0.002651746474333533787;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.676579163248564708) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4837550000000000461) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3801160000000000649) ) ) {
                  sum += (double)0.002461833282901240271;
                } else {
                  sum += (double)0.009755201664840472409;
                }
              } else {
                sum += (double)-0.002349075380567050477;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.807894736842105665) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06800000000000001876) ) ) {
                  sum += (double)0.0001543401848604849277;
                } else {
                  sum += (double)-0.00980706510062282627;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6066600000000000881) ) ) {
                  sum += (double)-0.00119524132190918929;
                } else {
                  sum += (double)0.004359776739315294851;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02275000000000000286) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.792892156862745612) ) ) {
            sum += (double)0.002815421108766099668;
          } else {
            sum += (double)-0.003892466361902467871;
          }
        } else {
          sum += (double)0.00348278855398595228;
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.335150000000000059) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1280000000000000304) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08305000000000002658) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3897280000000000189) ) ) {
              sum += (double)-0.002854565998701581817;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.755813953488372325) ) ) {
                sum += (double)-0.0006336888247734801796;
              } else {
                sum += (double)0.006905091404343388986;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9112985503553449051) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4000330000000000275) ) ) {
                sum += (double)-0.005795342794798745249;
              } else {
                sum += (double)0.000665233512157915245;
              }
            } else {
              sum += (double)-0.007691368132193607265;
            }
          }
        } else {
          sum += (double)0.004885105851610636006;
        }
      } else {
        sum += (double)-0.0052610761098806939;
      }
    }
  } else {
    sum += (double)0.002377589681224776073;
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2831453397228142488) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2765776916165623711) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04935000000000001191) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2472.994105478598158) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.369924812030076211) ) ) {
            sum += (double)-0.004864886543980729942;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08746750000000001746) ) ) {
              sum += (double)-0.0007360299998443263882;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04108592410728736238) ) ) {
                sum += (double)-0.0007826980461357951283;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.75221631205674555) ) ) {
                  sum += (double)0.002806367734792601046;
                } else {
                  sum += (double)0.00809334126109619717;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2267.103310406615037) ) ) {
            sum += (double)-0.007579493901144670684;
          } else {
            sum += (double)-0.0002800329300955234856;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07245000000000001439) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3926440000000000485) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9350000000000001643) ) ) {
              sum += (double)-0.001422101764035967573;
            } else {
              sum += (double)-0.01219097312099993655;
            }
          } else {
            sum += (double)-0.0004417624835379841785;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09005000000000001892) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4037960000000000438) ) ) {
              sum += (double)0.006187604316927716036;
            } else {
              sum += (double)-0.001518573733509767307;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9322500000000001341) ) ) {
              sum += (double)-0.0006259190315840458801;
            } else {
              sum += (double)-0.006584051899415267577;
            }
          }
        }
      }
    } else {
      sum += (double)-0.007115041547495622523;
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.325855839657968327) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
        sum += (double)-0.0004797733036925135898;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.208554536679536717) ) ) {
          sum += (double)-0.002314307179663330476;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07855000000000002258) ) ) {
            sum += (double)0.01413606182461133419;
          } else {
            sum += (double)0.005185707155649542204;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4370275000000000687) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3457400000000001028) ) ) {
          sum += (double)-5.248622190886723652e-05;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4775924739126843899) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.390747395741637249) ) ) {
              sum += (double)-0.0006761289551572280659;
            } else {
              sum += (double)-0.012604520021359953;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3057500000000000218) ) ) {
              sum += (double)0.0004429955335838483394;
            } else {
              sum += (double)-0.003389203193238933456;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4480450000000000821) ) ) {
          sum += (double)0.01038997786323548819;
        } else {
          sum += (double)0.0003861570610313773627;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8708480000000001775) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-85.02663671482834218) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08685041358284023572) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.29500000000000004) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08044950000000002099) ) ) {
            sum += (double)-0.0001310913783146837883;
          } else {
            sum += (double)0.006304616102645360827;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08117050986655603706) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7973500000000001142) ) ) {
              sum += (double)-0.00493275234007222764;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8504500000000000393) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5193790000000001461) ) ) {
                  sum += (double)0.006908660100275673677;
                } else {
                  sum += (double)-0.0005402936411835236596;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.0043859649122826) ) ) {
                  sum += (double)0.004456727835312195019;
                } else {
                  sum += (double)-0.002024084667693997093;
                }
              }
            }
          } else {
            sum += (double)-0.005816723657800820096;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6750000000000001554) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-178.4044396117413669) ) ) {
            sum += (double)-0.0005892136785184612499;
          } else {
            sum += (double)0.004056236507776693478;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.58149205561072748) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8253500000000001391) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4370275000000000687) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.50925925925926308) ) ) {
                  sum += (double)-0.0003123925635277813371;
                } else {
                  sum += (double)-0.006919049326894846294;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.72187500000000249) ) ) {
                  sum += (double)0.0001939727376370027406;
                } else {
                  sum += (double)0.004497118096972941431;
                }
              }
            } else {
              sum += (double)-0.006640922874606009635;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.47445536919221709) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03010000000000000522) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1708203380254501302) ) ) {
                  sum += (double)0.002718425649569213964;
                } else {
                  sum += (double)0.01441413451611514573;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5191.180377841475092) ) ) {
                  sum += (double)0.002326350745772762588;
                } else {
                  sum += (double)-0.00656238297246446254;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8050000000000001599) ) ) {
                sum += (double)0.004943071664776809392;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-126087.6736848860892) ) ) {
                  sum += (double)0.003898094481870402039;
                } else {
                  sum += (double)-0.001573947913380604026;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03870000000000000523) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5950000000000000844) ) ) {
          sum += (double)-0.001785969660180645275;
        } else {
          sum += (double)0.003107012261757850346;
        }
      } else {
        sum += (double)-0.007544039977869103179;
      }
    }
  } else {
    sum += (double)0.002184948352292871449;
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02595000000000000431) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5274700000000001054) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4865430000000000588) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6496873316821761835) ) ) {
          sum += (double)-0.00626285977454509122;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1972000000000000142) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1019000000000000183) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04185000000000000525) ) ) {
                sum += (double)-0.001834430836521063314;
              } else {
                sum += (double)0.006047658179919155122;
              }
            } else {
              sum += (double)-0.006571769890641955027;
            }
          } else {
            sum += (double)0.003729671738900561338;
          }
        }
      } else {
        sum += (double)-0.007086381224077725229;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7854755000000001042) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.002750000000000000708) ) ) {
          sum += (double)-0.0005253311463432159493;
        } else {
          sum += (double)0.004151164323663958204;
        }
      } else {
        sum += (double)-0.003904457328099835128;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1600000000000000588) ) ) {
        sum += (double)0.007037177643008049079;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.325855839657968327) ) ) {
          sum += (double)0.002314723446321035986;
        } else {
          sum += (double)-0.003946138278638590575;
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009750000000000001721) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5150000000000001243) ) ) {
            sum += (double)-0.001454974622966709622;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.00649350649350922) ) ) {
              sum += (double)-0.0006648511895818296673;
            } else {
              sum += (double)0.007266481356024796431;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6329665000000000985) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3825085000000000846) ) ) {
              sum += (double)-0.009791626323085955014;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2525.933689631679499) ) ) {
                sum += (double)-0.0002586843048789142885;
              } else {
                sum += (double)-0.008277002294119845116;
              }
            }
          } else {
            sum += (double)0.002660209219304051666;
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-282.5149217182645884) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-552.8487653176190406) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1455340000000000245) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.309018567639258279) ) ) {
                sum += (double)-0.006805626324679357568;
              } else {
                sum += (double)-0.0004570936621534982605;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-106082.2518424642476) ) ) {
                sum += (double)0.006078204904252073638;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-72060.08021480003663) ) ) {
                  sum += (double)-0.006657156699794756008;
                } else {
                  sum += (double)0.0003381004165493949444;
                }
              }
            }
          } else {
            sum += (double)0.006289902336778677855;
          }
        } else {
          sum += (double)-0.004518080920458343065;
        }
      }
    }
  }
  return sum;
}
