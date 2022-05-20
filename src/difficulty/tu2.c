#include "header.h"
double predict_margin_unit2(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840035051107406616) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.290740966796875) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2304295003414154053) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6836499869823455811) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3102.8297119140625) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.383317470550537109) ) ) {
              sum += (double)0.3676257894736842391;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1494984999299049377) ) ) {
                sum += (double)0.1630593863636363439;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1542499959468841553) ) ) {
                  sum += (double)0.300722760416666679;
                } else {
                  sum += (double)0.2287258611111110951;
                }
              }
            }
          } else {
            sum += (double)0.1313026730769230876;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2515.79736328125) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.371453523635864258) ) ) {
              sum += (double)0.1789480156249999843;
            } else {
              sum += (double)0.07610352083333334072;
            }
          } else {
            sum += (double)0.0398087586206896521;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.969126582145690918) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.351008892059326172) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004100000020116567612) ) ) {
              sum += (double)0.5128919117647058323;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2056.26678466796875) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.142307758331298828) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.314434349536895752) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2760.055419921875) ) ) {
                      sum += (double)0.4274979714285713772;
                    } else {
                      sum += (double)0.5146687941176470993;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4109.2623291015625) ) ) {
                      sum += (double)0.3953036527777778475;
                    } else {
                      sum += (double)0.351339699999999977;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7142499983310699463) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3725329041481018066) ) ) {
                      sum += (double)0.4290110462962962168;
                    } else {
                      sum += (double)0.3335021785714285536;
                    }
                  } else {
                    sum += (double)0.2623797840909091184;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.90476131439208984) ) ) {
                  sum += (double)0.2558526500000000703;
                } else {
                  sum += (double)0.3566464558823529418;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3340.8245849609375) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.064971923828125) ) ) {
                sum += (double)0.2458862916666666454;
              } else {
                sum += (double)0.458881423076923034;
              }
            } else {
              sum += (double)0.1006798749999999881;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.293749809265136719) ) ) {
            sum += (double)0.1737310138888888966;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2613.43408203125) ) ) {
              sum += (double)0.07844303124999998933;
            } else {
              sum += (double)0.02321792857142856992;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1951034963130950928) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1050034984946250916) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.83275127410888672) ) ) {
            sum += (double)0.07883026923076921766;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07204350084066390991) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1850999966263771057) ) ) {
                sum += (double)0.01603835999999999803;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8024092018604278564) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.67195892333984375) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11461.55224609375) ) ) {
                      sum += (double)0.009360403846153846422;
                    } else {
                      sum += (double)0.004914017241379310327;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1727500036358833313) ) ) {
                      sum += (double)0.002933274305555557022;
                    } else {
                      sum += (double)0.005310288461538461777;
                    }
                  }
                } else {
                  sum += (double)0.01086260869565217405;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.83087635040283203) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11957.29248046875) ) ) {
                  sum += (double)0.063519531249999997;
                } else {
                  sum += (double)0.02187430769230768943;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4354364722967147827) ) ) {
                  sum += (double)0.01851186666666666467;
                } else {
                  sum += (double)0.005898785714285714916;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0213000001385807991) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5273.888671875) ) ) {
              sum += (double)0.3076257500000000311;
            } else {
              sum += (double)0.07326885294117645164;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6851499974727630615) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4672999978065490723) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.88536834716796875) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.33053207397460938) ) ) {
                    sum += (double)0.02416865476190475578;
                  } else {
                    sum += (double)0.07423971874999998888;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9866.6044921875) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1456084996461868286) ) ) {
                      sum += (double)0.01756016666666666143;
                    } else {
                      sum += (double)0.04485444680851063265;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3164000064134597778) ) ) {
                      sum += (double)0.004743545454545455148;
                    } else {
                      sum += (double)0.01857843749999999253;
                    }
                  }
                }
              } else {
                sum += (double)0.08315323076923077095;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)106.7028961181640625) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1690884977579116821) ) ) {
                  sum += (double)0.08860803125000001057;
                } else {
                  sum += (double)0.1948518833333333367;
                }
              } else {
                sum += (double)0.02004065217391304624;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5409667491912841797) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.48809528350830078) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7446.921630859375) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6711499989032745361) ) ) {
                sum += (double)0.3930527499999999508;
              } else {
                sum += (double)0.2387133017241379052;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04875000007450580597) ) ) {
                sum += (double)0.04474377272727272925;
              } else {
                sum += (double)0.2717096847826087069;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2848999947309494019) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2688910067081451416) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07595000043511390686) ) ) {
                  sum += (double)0.1219447499999999907;
                } else {
                  sum += (double)0.05481020192307693717;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2478124424815177917) ) ) {
                  sum += (double)0.2241525156250000483;
                } else {
                  sum += (double)0.0909946354166666499;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.08610820770263672) ) ) {
                sum += (double)0.2468244531250000096;
              } else {
                sum += (double)0.1713586911764705678;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5836499929428100586) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8977.38916015625) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.16679668426513672) ) ) {
                sum += (double)0.1703464749999999694;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2456170022487640381) ) ) {
                  sum += (double)0.01257670454545454716;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2822500020265579224) ) ) {
                    sum += (double)0.03894758653846153856;
                  } else {
                    sum += (double)0.1167248522727272753;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033021330833435059) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08615000173449516296) ) ) {
                  sum += (double)0.01801890000000000089;
                } else {
                  sum += (double)0.06646089130434780501;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5285.218505859375) ) ) {
                  sum += (double)0.02515109210526315919;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04729999974370002747) ) ) {
                    sum += (double)0.002500000000000000486;
                  } else {
                    sum += (double)0.00892733333333333573;
                  }
                }
              }
            }
          } else {
            sum += (double)0.1646323448275862078;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6061426103115081787) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6215465068817138672) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.12297296524047852) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4435250014066696167) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08009999990463256836) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2310.2686767578125) ) ) {
                  sum += (double)0.5451271916666666772;
                } else {
                  sum += (double)0.4483620468749999199;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7285499870777130127) ) ) {
                  sum += (double)0.4545022708333332773;
                } else {
                  sum += (double)0.3700495156249999362;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4687159955501556396) ) ) {
                sum += (double)0.5870594732142856431;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.15555572509765625) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.714488983154296875) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1841579824686050415) ) ) {
                      sum += (double)0.5359191086956521799;
                    } else {
                      sum += (double)0.4719155454545453932;
                    }
                  } else {
                    sum += (double)0.4402110972222222363;
                  }
                } else {
                  sum += (double)0.5572116153846153885;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.172390460968017578) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.617925882339477539) ) ) {
                sum += (double)0.570304476190476195;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02355000004172325134) ) ) {
                  sum += (double)0.702494486842105248;
                } else {
                  sum += (double)0.6381243636363636007;
                }
              }
            } else {
              sum += (double)0.4929512666666667209;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.45280647277832031) ) ) {
            sum += (double)0.4032268599999999648;
          } else {
            sum += (double)0.2380050227272727525;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.41611862182617188) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1050499975681304932) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7139860093593597412) ) ) {
              sum += (double)0.7238250625000000049;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.832332998514175415) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01849999930709600449) ) ) {
                  sum += (double)0.8410175921052631676;
                } else {
                  sum += (double)0.7823013857142857574;
                }
              } else {
                sum += (double)0.8584815714285713995;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6843680143356323242) ) ) {
              sum += (double)0.6496708999999999401;
            } else {
              sum += (double)0.7034700500000000689;
            }
          }
        } else {
          sum += (double)0.5723907941176470393;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5512315034866333008) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1777.24884033203125) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.62062931060791016) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2600.464111328125) ) ) {
              sum += (double)0.3881780887096774602;
            } else {
              sum += (double)0.2666348095238095239;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.53820610046386719) ) ) {
              sum += (double)0.07683299999999999852;
            } else {
              sum += (double)0.2170731704545454666;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.000336766242980957) ) ) {
            sum += (double)0.1792711176470588308;
          } else {
            sum += (double)0.05110090999999997857;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.029400944709777832) ) ) {
          sum += (double)0.5108057083333331638;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.958144009113311768) ) ) {
            sum += (double)0.4402263269230770049;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.03309999965131282806) ) ) {
              sum += (double)0.3770151739130433444;
            } else {
              sum += (double)0.2154519204545454203;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3802810013294219971) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.997630119323730469) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9590523242950439453) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2419169992208480835) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7539499998092651367) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1140649989247322083) ) ) {
              sum += (double)0.1010816190476190313;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2161720022559165955) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09840000048279762268) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4373.03076171875) ) ) {
                    sum += (double)0.4170493303571428667;
                  } else {
                    sum += (double)0.2406481093749999745;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1959000006318092346) ) ) {
                    sum += (double)0.2260005750000000369;
                  } else {
                    sum += (double)0.3035672692307692655;
                  }
                }
              } else {
                sum += (double)0.2086730347222222337;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4425.541015625) ) ) {
              sum += (double)0.1632810921052631481;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1246390007436275482) ) ) {
                sum += (double)0.006194531250000000384;
              } else {
                sum += (double)0.06685082608695651352;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3409660011529922485) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.16286778450012207) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2078.94024658203125) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3103.794677734375) ) ) {
                    sum += (double)0.3501796400000000697;
                  } else {
                    sum += (double)0.4430777499999999369;
                  }
                } else {
                  sum += (double)0.2900038281249999739;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.86016273498535156) ) ) {
                  sum += (double)0.4080350500000000102;
                } else {
                  sum += (double)0.4793340104166667337;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7270.279052734375) ) ) {
                sum += (double)0.3981250113636363719;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0585000012069940567) ) ) {
                  sum += (double)0.1259123333333333483;
                } else {
                  sum += (double)0.2462625833333333403;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3167220503091812134) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6516999900341033936) ) ) {
                sum += (double)0.5438063499999999939;
              } else {
                sum += (double)0.4681757592592592498;
              }
            } else {
              sum += (double)0.3959782361111111593;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5381.6572265625) ) ) {
          sum += (double)0.2152023552631578962;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.708260536193847656) ) ) {
            sum += (double)0.1379405882352941481;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.213200002908706665) ) ) {
              sum += (double)0.01186440000000000064;
            } else {
              sum += (double)0.05044348529411764315;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2139030024409294128) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.57091236114501953) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02625000011175870895) ) ) {
            sum += (double)0.3559884531250000483;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1357389986515045166) ) ) {
              sum += (double)0.01269107499999999958;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4447999894618988037) ) ) {
                sum += (double)0.04874253409090909678;
              } else {
                sum += (double)0.1301269666666666491;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07202149927616119385) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.92703628540039062) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5253443717956542969) ) ) {
                sum += (double)0.01787405263157894678;
              } else {
                sum += (double)0.004891027777777778862;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7981733083724975586) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20511.2275390625) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)54.67207908630371094) ) ) {
                    sum += (double)0.01360459523809523681;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)549.34881591796875) ) ) {
                      sum += (double)0.004881156250000000078;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.32499980926513672) ) ) {
                    sum += (double)0.002695312499999999792;
                  } else {
                    sum += (double)0.002500000000000001353;
                  }
                }
              } else {
                sum += (double)0.01238919999999999952;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07574350014328956604) ) ) {
              sum += (double)0.123609142857142848;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12025.7998046875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.51904773712158203) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.65139198303222656) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14944.49365234375) ) ) {
                      sum += (double)0.02784962068965517179;
                    } else {
                      sum += (double)0.06245175000000000032;
                    }
                  } else {
                    sum += (double)0.1838415000000000188;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)108.8245086669921875) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-65839.404296875) ) ) {
                      sum += (double)0.09756106249999998981;
                    } else {
                      sum += (double)0.02110920833333332705;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)242.5576934814453125) ) ) {
                      sum += (double)0.01699338461538461506;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1037920005619525909) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08862549811601638794) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    sum += (double)0.00622035714285714466;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.190451502799987793) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1652375012636184692) ) ) {
                      sum += (double)0.01794987755102040242;
                    } else {
                      sum += (double)0.04150915909090908962;
                    }
                  } else {
                    sum += (double)0.01036861111111111143;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3338336944580078125) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.259431004524230957) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2417230010032653809) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6461500227451324463) ) ) {
                sum += (double)0.227859350000000016;
              } else {
                sum += (double)0.1171663636363636241;
              }
            } else {
              sum += (double)0.04166649999999999521;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.24678802490234375) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13700.22119140625) ) ) {
                sum += (double)0.3565772037037037712;
              } else {
                sum += (double)0.2485427613636363442;
              }
            } else {
              sum += (double)0.1679337833333333363;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4051500111818313599) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05910000018775463104) ) ) {
              sum += (double)0.1403598529411764495;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7504533827304840088) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.952880859375) ) ) {
                  sum += (double)0.1542805937500000002;
                } else {
                  sum += (double)0.04872071874999998886;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-22279.302734375) ) ) {
                  sum += (double)0.1045211666666666789;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1791500002145767212) ) ) {
                    sum += (double)0.04881447656249999351;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.376015007495880127) ) ) {
                      sum += (double)0.002895000000000000438;
                    } else {
                      sum += (double)0.01805426923076923484;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3174429982900619507) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3408499956130981445) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4443653523921966553) ) ) {
                  sum += (double)0.1173712361111111241;
                } else {
                  sum += (double)0.04078931250000000092;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.1909332275390625) ) ) {
                  sum += (double)0.2457402727272726684;
                } else {
                  sum += (double)0.1072639249999999961;
                }
              }
            } else {
              sum += (double)0.283528138888888892;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6143585145473480225) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.94261360168457031) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005499999824678525329) ) ) {
            sum += (double)0.6142264375000000554;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5717580020427703857) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1943445131182670593) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06955000013113021851) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4764709919691085815) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02630000002682209015) ) ) {
                      sum += (double)0.5484001547619047345;
                    } else {
                      sum += (double)0.456099359375000013;
                    }
                  } else {
                    sum += (double)0.5784601532258063505;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1086517758667469025) ) ) {
                    sum += (double)0.4074179404761904544;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4777355045080184937) ) ) {
                      sum += (double)0.4643624423076923025;
                    } else {
                      sum += (double)0.5367365899999999579;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4688404947519302368) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4204954952001571655) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.251767374575138092) ) ) {
                      sum += (double)0.4897825394736841642;
                    } else {
                      sum += (double)0.4115981000000000223;
                    }
                  } else {
                    sum += (double)0.5506417884615385505;
                  }
                } else {
                  sum += (double)0.3851554210526315636;
                }
              }
            } else {
              sum += (double)0.5956698571428571398;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.19545364379882812) ) ) {
            sum += (double)0.2467423000000000255;
          } else {
            sum += (double)0.3643898749999999742;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7434380054473876953) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6666019856929779053) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6700499951839447021) ) ) {
              sum += (double)0.6863193529411766303;
            } else {
              sum += (double)0.6506579411764705778;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8303000032901763916) ) ) {
              sum += (double)0.6961347758620689552;
            } else {
              sum += (double)0.7648634500000000003;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0385500006377696991) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9451737403869628906) ) ) {
              sum += (double)0.8605011911764703925;
            } else {
              sum += (double)0.8224578281249999012;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2480.4439697265625) ) ) {
              sum += (double)0.7482763611111110658;
            } else {
              sum += (double)0.806252803571428589;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4756494909524917603) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6058602333068847656) ) ) {
          sum += (double)0.4333649326923076917;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.958333492279052734) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2833.0113525390625) ) ) {
              sum += (double)0.347199763888888957;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.437032699584960938) ) ) {
                sum += (double)0.2248800576923077055;
              } else {
                sum += (double)0.08236221153846152998;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2289500012993812561) ) ) {
              sum += (double)0.02555236956521738864;
            } else {
              sum += (double)0.1169807717391304486;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1359.36273193359375) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.15932178497314453) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.36884695291519165) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5394719839096069336) ) ) {
                sum += (double)0.4685376176470588683;
              } else {
                sum += (double)0.626671333333333247;
              }
            } else {
              sum += (double)0.3921079705882353217;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6368684768676757812) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5498940050601959229) ) ) {
                sum += (double)0.1848480147058823575;
              } else {
                sum += (double)0.3276285833333333342;
              }
            } else {
              sum += (double)0.4630216847826087445;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.647727370262145996) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9110133051872253418) ) ) {
              sum += (double)0.4918183749999999743;
            } else {
              sum += (double)0.4003958854166666526;
            }
          } else {
            sum += (double)0.1468163148148148023;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3735890090465545654) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.34891319274902344) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2315154969692230225) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4210.100830078125) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001599999959580600262) ) ) {
            sum += (double)0.3984349677419355973;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1214154995977878571) ) ) {
              sum += (double)0.04931467187500000737;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5216.435791015625) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8607.3935546875) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1456499993801116943) ) ) {
                    sum += (double)0.1878025909090909051;
                  } else {
                    sum += (double)0.2580201458333333808;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6201.883544921875) ) ) {
                    sum += (double)0.07718174999999999342;
                  } else {
                    sum += (double)0.2191586166666666669;
                  }
                }
              } else {
                sum += (double)0.2900427083333333433;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.488390207290649414) ) ) {
            sum += (double)0.2367718942307692476;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.20361995697021484) ) ) {
              sum += (double)0.1197925760869565093;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.910714387893676758) ) ) {
                sum += (double)0.08621308333333334295;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1653215065598487854) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1142599992454051971) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06691900081932544708) ) ) {
                      sum += (double)0.006725187500000000262;
                    } else {
                      sum += (double)0.003648593750000000361;
                    }
                  } else {
                    sum += (double)0.02130296250000000141;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.30980396270751953) ) ) {
                    sum += (double)0.02294485000000000274;
                  } else {
                    sum += (double)0.05318086111111110931;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9590523242950439453) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.244408607482910156) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3151829987764358521) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4650.11328125) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.280787229537963867) ) ) {
                  sum += (double)0.3633343749999999872;
                } else {
                  sum += (double)0.4339838750000000189;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1770173013210296631) ) ) {
                  sum += (double)0.2328889673913043523;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2893639951944351196) ) ) {
                    sum += (double)0.2981727125000001033;
                  } else {
                    sum += (double)0.4254247666666666761;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3773616403341293335) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3312150090932846069) ) ) {
                  sum += (double)0.4888520374999999474;
                } else {
                  sum += (double)0.4300033620689655556;
                }
              } else {
                sum += (double)0.3245440625000000079;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5646.093994140625) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3343700021505355835) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.36844921112060547) ) ) {
                  sum += (double)0.3519519553571427983;
                } else {
                  sum += (double)0.2001146447368420955;
                }
              } else {
                sum += (double)0.4232053362068964875;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.192184925079345703) ) ) {
                sum += (double)0.2398868035714285252;
              } else {
                sum += (double)0.07592677083333332355;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4417.037353515625) ) ) {
            sum += (double)0.1577608906249999832;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.418300867080688477) ) ) {
              sum += (double)0.04970068421052632746;
            } else {
              sum += (double)0.006372470588235294546;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1351270005106925964) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.02561378479003906) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3173500001430511475) ) ) {
            sum += (double)0.1607074642857142799;
          } else {
            sum += (double)0.0212798599999999942;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08501249924302101135) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04316999949514865875) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8422999978065490723) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02834050077944993973) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1459999978542327881) ) ) {
                    sum += (double)0.002500000000000001787;
                  } else {
                    sum += (double)0.003147227272727273328;
                  }
                } else {
                  sum += (double)0.004177291666666666826;
                }
              } else {
                sum += (double)0.004948866666666665998;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-33573.212890625) ) ) {
                sum += (double)0.017034775000000002;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)66.90853500366210938) ) ) {
                  sum += (double)0.008612047619047619867;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06787249818444252014) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    sum += (double)0.004102545454545455071;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.50828456878662109) ) ) {
              sum += (double)0.05093652941176469301;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1506999954581260681) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06444999948143959045) ) ) {
                  sum += (double)0.003291340000000000238;
                } else {
                  sum += (double)0.0115060000000000006;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.559749990701675415) ) ) {
                  sum += (double)0.05379650892857141403;
                } else {
                  sum += (double)0.01319436666666666882;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2662331163883209229) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3109924942255020142) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.86160707473754883) ) ) {
              sum += (double)0.2266235769230769137;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8177.527587890625) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23387.9775390625) ) ) {
                  sum += (double)0.091672416666666659;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2355340048670768738) ) ) {
                    sum += (double)0.2039877638888888678;
                  } else {
                    sum += (double)0.1259823437499999754;
                  }
                }
              } else {
                sum += (double)0.02366548214285714088;
              }
            }
          } else {
            sum += (double)0.31111282142857144;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3718000054359436035) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-26414.658203125) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)158.6378936767578125) ) ) {
                sum += (double)0.1550760535714285626;
              } else {
                sum += (double)0.04729965277777778421;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.02380943298339844) ) ) {
                sum += (double)0.05996762500000000357;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7696198225021362305) ) ) {
                  sum += (double)0.031167679487179481;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.580278158187866211) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3571.0557861328125) ) ) {
                      sum += (double)0.007451953125000002412;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  } else {
                    sum += (double)0.01546973214285714444;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4693499952554702759) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4426999986171722412) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8055.177734375) ) ) {
                  sum += (double)0.0578922767857142917;
                } else {
                  sum += (double)0.1712656250000000047;
                }
              } else {
                sum += (double)0.2369528500000000482;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2727075070142745972) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.69074249267578125) ) ) {
                  sum += (double)0.1264575138888889005;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7747.384765625) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.51572322845458984) ) ) {
                      sum += (double)0.07844232812499998819;
                    } else {
                      sum += (double)0.03113706122448979194;
                    }
                  } else {
                    sum += (double)0.007211541666666668182;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3568999916315078735) ) ) {
                  sum += (double)0.0675393099999999913;
                } else {
                  sum += (double)0.1896760249999999981;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6058602333068847656) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.19670569896697998) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5843819975852966309) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4796135127544403076) ) ) {
            sum += (double)0.4766180535714285571;
          } else {
            sum += (double)0.6220529736842105306;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7494904994964599609) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.497727155685424805) ) ) {
              sum += (double)0.676528200000000024;
            } else {
              sum += (double)0.7463337788461539279;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1575.6549072265625) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.449062108993530273) ) ) {
                sum += (double)0.7412969375000000305;
              } else {
                sum += (double)0.8117591176470586589;
              }
            } else {
              sum += (double)0.869823326923077067;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.49744224548339844) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.81038665771484375) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.217258453369140625) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1393951773643493652) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03265000041574239731) ) ) {
                    sum += (double)0.6000336093750000543;
                  } else {
                    sum += (double)0.5261320357142856841;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4720575064420700073) ) ) {
                    sum += (double)0.5260200000000000431;
                  } else {
                    sum += (double)0.4630361527777778763;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2367.6630859375) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07259999960660934448) ) ) {
                    sum += (double)0.577910062499999988;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1705500036478042603) ) ) {
                      sum += (double)0.4110136739130434425;
                    } else {
                      sum += (double)0.5172908571428571634;
                    }
                  }
                } else {
                  sum += (double)0.3798654285714285761;
                }
              }
            } else {
              sum += (double)0.3459713333333332974;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1456.65643310546875) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8386.837890625) ) ) {
                sum += (double)0.5329711785714285055;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.251838207244873047) ) ) {
                  sum += (double)0.5670423522727271459;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8334999978542327881) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6659419834613800049) ) ) {
                      sum += (double)0.6659400833333333214;
                    } else {
                      sum += (double)0.7335232272727271186;
                    }
                  } else {
                    sum += (double)0.6172236111111110146;
                  }
                }
              }
            } else {
              sum += (double)0.4796522272727272718;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.10483932495117188) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10427.32373046875) ) ) {
              sum += (double)0.3578667321428571357;
            } else {
              sum += (double)0.2040056447368420733;
            }
          } else {
            sum += (double)0.4771309130434783219;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4887569993734359741) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9647493362426757812) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7248091697692871094) ) ) {
            sum += (double)0.1459476964285713885;
          } else {
            sum += (double)0.4387746363636362279;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.591643571853637695) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
              sum += (double)0.3592440795454545643;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.368086457252502441) ) ) {
                sum += (double)0.1966765689655172178;
              } else {
                sum += (double)0.09136156578947368656;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.60042762756347656) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.407402098178863525) ) ) {
                sum += (double)0.07103957692307691363;
              } else {
                sum += (double)0.02839031250000000409;
              }
            } else {
              sum += (double)0.1658831249999999646;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.230520904064178467) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6825234889984130859) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1535999998450279236) ) ) {
              sum += (double)0.3120565681818182058;
            } else {
              sum += (double)0.5028782596153845708;
            }
          } else {
            sum += (double)0.6618955294117645494;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.074011802673339844) ) ) {
            sum += (double)0.4550656551724138743;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1655.56048583984375) ) ) {
              sum += (double)0.2860871979166667023;
            } else {
              sum += (double)0.1223057894736842011;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.385424003005027771) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.029684543609619141) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2269699946045875549) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3039.9068603515625) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7457500100135803223) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07629999890923500061) ) ) {
              sum += (double)0.3713651900000000117;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4651000052690505981) ) ) {
                sum += (double)0.2759448839285714716;
              } else {
                sum += (double)0.1715981718750000107;
              }
            }
          } else {
            sum += (double)0.1110699305555555433;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.478991508483886719) ) ) {
            sum += (double)0.1872722321428571812;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.36341667175292969) ) ) {
              sum += (double)0.08164141071428572538;
            } else {
              sum += (double)0.0283982419354838686;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9590523242950439453) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.294934496283531189) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.259314537048339844) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3281.589599609375) ) ) {
                sum += (double)0.3767817205882352249;
              } else {
                sum += (double)0.4450288750000000459;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5760.059326171875) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7953.58349609375) ) ) {
                  sum += (double)0.3359146999999998995;
                } else {
                  sum += (double)0.4463730694444444369;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2853.19775390625) ) ) {
                  sum += (double)0.2026440694444444635;
                } else {
                  sum += (double)0.278599902173913061;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0043000001460313797) ) ) {
              sum += (double)0.5116269705882352525;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.736235618591308594) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2042642533779144287) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.94498062133789062) ) ) {
                    sum += (double)0.3701635576923075766;
                  } else {
                    sum += (double)0.4367408666666666162;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3371.9754638671875) ) ) {
                    sum += (double)0.4172910263157894595;
                  } else {
                    sum += (double)0.4901115476190475162;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.740740776062011719) ) ) {
                  sum += (double)0.304041607142857162;
                } else {
                  sum += (double)0.4293604583333333058;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2610.0113525390625) ) ) {
            sum += (double)0.1759091041666666355;
          } else {
            sum += (double)0.04951992857142856891;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2557695060968399048) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37087917327880859) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7743.21044921875) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004800000227987766266) ) ) {
              sum += (double)0.3655174285714285487;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.05481481552124023) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1338499970734119415) ) ) {
                  sum += (double)0.1468170937499999884;
                } else {
                  sum += (double)0.2368562968750000108;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.162255503237247467) ) ) {
                  sum += (double)0.02773339130434781738;
                } else {
                  sum += (double)0.1240316160714285687;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.147167496383190155) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4444958865642547607) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08973300084471702576) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4006.188720703125) ) ) {
                    sum += (double)0.01045523333333333443;
                  } else {
                    sum += (double)0.004891304347826088209;
                  }
                } else {
                  sum += (double)0.01931928409090909529;
                }
              } else {
                sum += (double)0.06722746428571427235;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4731.772705078125) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6296.058837890625) ) ) {
                  sum += (double)0.07699258333333333648;
                } else {
                  sum += (double)0.1995234999999999925;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.04285717010498047) ) ) {
                  sum += (double)0.100908460526315788;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1957589983940124512) ) ) {
                    sum += (double)0.04820207352941177636;
                  } else {
                    sum += (double)0.02504440476190475731;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4698499888181686401) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8832.24951171875) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.80967807769775391) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18555.630859375) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2467928603291511536) ) ) {
                    sum += (double)0.1777520543478260939;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5847465097904205322) ) ) {
                      sum += (double)0.08183784375000001388;
                    } else {
                      sum += (double)0.03324389473684210422;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.44978618621826172) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4614077210426330566) ) ) {
                      sum += (double)0.01162762195121951232;
                    } else {
                      sum += (double)0.0488831607142857158;
                    }
                  } else {
                    sum += (double)0.09415762499999998092;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.42720413208007812) ) ) {
                  sum += (double)0.06866141964285714383;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07724700123071670532) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-51419.353515625) ) ) {
                      sum += (double)0.009357750000000001483;
                    } else {
                      sum += (double)0.002748647058823530578;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7047561109066009521) ) ) {
                      sum += (double)0.02233093965517241042;
                    } else {
                      sum += (double)0.007650860465116278604;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06680249795317649841) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02577899955213069916) ) ) {
                  sum += (double)0.002500000000000000486;
                } else {
                  sum += (double)0.003231208333333333762;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5313.2392578125) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.018293142318725586) ) ) {
                    sum += (double)0.02594460526315789384;
                  } else {
                    sum += (double)0.007600343750000000329;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5348712503910064697) ) ) {
                    sum += (double)0.01100212500000000149;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3926.831298828125) ) ) {
                      sum += (double)0.008165142857142856925;
                    } else {
                      sum += (double)0.003068300000000000801;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24048.9169921875) ) ) {
              sum += (double)0.139136762499999983;
            } else {
              sum += (double)0.04897396428571428734;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8536425232887268066) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.90323448181152344) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9417.5849609375) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.32954597473144531) ) ) {
                sum += (double)0.396601674242424318;
              } else {
                sum += (double)0.2938368499999999828;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07770000025629997253) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.36272335052490234) ) ) {
                  sum += (double)0.1510239659090909237;
                } else {
                  sum += (double)0.04293226923076923912;
                }
              } else {
                sum += (double)0.2631243900000000413;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3335070013999938965) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3389414995908737183) ) ) {
                sum += (double)0.1618673947368420851;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4422999918460845947) ) ) {
                  sum += (double)0.03227106818181818548;
                } else {
                  sum += (double)0.08647582999999997577;
                }
              }
            } else {
              sum += (double)0.2353820312499999845;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3668999969959259033) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02429999969899654388) ) ) {
              sum += (double)0.07977128333333333154;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3329644948244094849) ) ) {
                sum += (double)0.01006525925925926337;
              } else {
                sum += (double)0.03040884999999999769;
              }
            }
          } else {
            sum += (double)0.1169959423076923077;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4932367950677871704) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.621632993221282959) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.092261791229248047) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5266900062561035156) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8984499871730804443) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.562405109405517578) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3394091129302978516) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.955624580383300781) ) ) {
                    sum += (double)0.50253982499999994;
                  } else {
                    sum += (double)0.3711107386363636795;
                  }
                } else {
                  sum += (double)0.5550765333333332885;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4414194971323013306) ) ) {
                  sum += (double)0.5058277045454544485;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3191.501708984375) ) ) {
                    sum += (double)0.560238009999999953;
                  } else {
                    sum += (double)0.6204031833333333301;
                  }
                }
              }
            } else {
              sum += (double)0.3846178666666666968;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6906999945640563965) ) ) {
              sum += (double)0.542708199999999974;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.845950007438659668) ) ) {
                sum += (double)0.6872854326923076851;
              } else {
                sum += (double)0.6435881500000000255;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.00933647155761719) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7037499845027923584) ) ) {
              sum += (double)0.5400387656249999724;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5215.5498046875) ) ) {
                sum += (double)0.4345217499999999844;
              } else {
                sum += (double)0.3311871710526315682;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5163155198097229004) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.72993135452270508) ) ) {
                sum += (double)0.3033897692307692129;
              } else {
                sum += (double)0.4001101406249999992;
              }
            } else {
              sum += (double)0.2436810714285714552;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.767405033111572266) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7379765212535858154) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1926.8460693359375) ) ) {
              sum += (double)0.7166665769230768923;
            } else {
              sum += (double)0.7531393999999997924;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3193.9530029296875) ) ) {
              sum += (double)0.7510946093750000552;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01849999930709600449) ) ) {
                sum += (double)0.8743775833333332637;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.887532472610473633) ) ) {
                  sum += (double)0.7894272916666668083;
                } else {
                  sum += (double)0.8221667023809524633;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.99244785308837891) ) ) {
            sum += (double)0.7225188888888888217;
          } else {
            sum += (double)0.5408169565217392227;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5304344892501831055) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.557662487030029297) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1161000020802021027) ) ) {
            sum += (double)0.2868423295454545774;
          } else {
            sum += (double)0.4250477395833334171;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03460000082850456238) ) ) {
            sum += (double)0.09768274074074072277;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.013628095388412476) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.06516551971435547) ) ) {
                sum += (double)0.419780489583333416;
              } else {
                sum += (double)0.1744843194444444523;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.235925912857055664) ) ) {
                sum += (double)0.280341449999999992;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.79761886596679688) ) ) {
                  sum += (double)0.05391685294117645744;
                } else {
                  sum += (double)0.2155560781249999946;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.292340755462646484) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07180000096559524536) ) ) {
            sum += (double)0.3382992708333333876;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6008509397506713867) ) ) {
              sum += (double)0.6183086029411763995;
            } else {
              sum += (double)0.5452265800000000162;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.087804913520812988) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-711.257080078125) ) ) {
              sum += (double)0.4145925833333334309;
            } else {
              sum += (double)0.4618555333333333457;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1799.01611328125) ) ) {
              sum += (double)0.3091198653846153888;
            } else {
              sum += (double)0.1346862236842105154;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3709775060415267944) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.456695079803466797) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2269699946045875549) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4202.166259765625) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01725000049918889999) ) ) {
            sum += (double)0.3773802999999999463;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8499.74169921875) ) ) {
              sum += (double)0.2846553;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6220.10498046875) ) ) {
                sum += (double)0.1224387236842105625;
              } else {
                sum += (double)0.2344433499999999948;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.502034902572631836) ) ) {
            sum += (double)0.214382434210526357;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.85953807830810547) ) ) {
              sum += (double)0.133479187499999985;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1194975003600120544) ) ) {
                sum += (double)0.006419349999999999883;
              } else {
                sum += (double)0.03846392187499999421;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9590523242950439453) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1074.5780029296875) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00439999997615814209) ) ) {
              sum += (double)0.4677604191176470416;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.283674955368041992) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.17906665802001953) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7235499918460845947) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.314798504114151001) ) ) {
                      sum += (double)0.3871870637254902214;
                    } else {
                      sum += (double)0.457791011904761902;
                    }
                  } else {
                    sum += (double)0.2756192333333332689;
                  }
                } else {
                  sum += (double)0.4929500384615383979;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3318775147199630737) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7117.5205078125) ) ) {
                    sum += (double)0.3989136617647058847;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1760499998927116394) ) ) {
                      sum += (double)0.2167488780487805411;
                    } else {
                      sum += (double)0.3232554342105262712;
                    }
                  }
                } else {
                  sum += (double)0.4964240535714285474;
                }
              }
            }
          } else {
            sum += (double)0.1871479605263157986;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2522.13189697265625) ) ) {
            sum += (double)0.1898782777777777708;
          } else {
            sum += (double)0.03132338888888888673;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2344710007309913635) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.64553022384643555) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4784.32470703125) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0034999999770661816) ) ) {
              sum += (double)0.3318199531250000112;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1382984966039657593) ) ) {
                sum += (double)0.0303777261904761911;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2158499956130981445) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6740500032901763916) ) ) {
                    sum += (double)0.1400957999999999648;
                  } else {
                    sum += (double)0.21801681730769229;
                  }
                } else {
                  sum += (double)0.04387007352941175997;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1247824989259243011) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07885000109672546387) ) ) {
                sum += (double)0.006490083333333334682;
              } else {
                sum += (double)0.02119754687500000068;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08570000156760215759) ) ) {
                sum += (double)0.02268609375000000053;
              } else {
                sum += (double)0.08240866666666665785;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07202149927616119385) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.80760765075683594) ) ) {
              sum += (double)0.04332603947368419972;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04302049987018108368) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02659949939697980881) ) ) {
                  sum += (double)0.002500000000000001353;
                } else {
                  sum += (double)0.003219456521739130946;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23100.9072265625) ) ) {
                  sum += (double)0.01175542045454545242;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12206.75634765625) ) ) {
                    sum += (double)0.006090000000000000795;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9424.37060546875) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.31418418884277344) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24936.94140625) ) ) {
                  sum += (double)0.1976147857142857289;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1392145007848739624) ) ) {
                    sum += (double)0.02875300999999998858;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1893500015139579773) ) ) {
                      sum += (double)0.05223273214285713978;
                    } else {
                      sum += (double)0.1154074204545454396;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4316000044345855713) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08864099904894828796) ) ) {
                    sum += (double)0.04966677083333331799;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.66796684265136719) ) ) {
                      sum += (double)0.03025103378378378796;
                    } else {
                      sum += (double)0.01073176153846152996;
                    }
                  }
                } else {
                  sum += (double)0.08048188461538460792;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.216250002384185791) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.95833301544189453) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.64920616149902344) ) ) {
                    sum += (double)0.004667150000000000118;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4363887906074523926) ) ) {
                      sum += (double)0.0100646034482758627;
                    } else {
                      sum += (double)0.0310792352941176471;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07660000026226043701) ) ) {
                    sum += (double)0.002499999999999999618;
                  } else {
                    sum += (double)0.003243642857142856831;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.171573817729949951) ) ) {
                  sum += (double)0.05266588888888888709;
                } else {
                  sum += (double)0.01573761764705882554;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3403254449367523193) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13389.42138671875) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-26943.576171875) ) ) {
              sum += (double)0.2267017857142856752;
            } else {
              sum += (double)0.4214722604166665776;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.38725471496582031) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.36272335052490234) ) ) {
                sum += (double)0.1820860249999999847;
              } else {
                sum += (double)0.3181570760869564807;
              }
            } else {
              sum += (double)0.06729626562499999021;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8186364471912384033) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.90746784210205078) ) ) {
              sum += (double)0.3310908035714286157;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4342.843017578125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11886.8525390625) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5328499972820281982) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.46990776062011719) ) ) {
                      sum += (double)0.1158383214285714363;
                    } else {
                      sum += (double)0.05214710000000000872;
                    }
                  } else {
                    sum += (double)0.1797753529411764695;
                  }
                } else {
                  sum += (double)0.2304189999999999849;
                }
              } else {
                sum += (double)0.01837500000000000244;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3354000002145767212) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2863714993000030518) ) ) {
                sum += (double)0.1830436718749999525;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3368999958038330078) ) ) {
                  sum += (double)0.04679116666666666841;
                } else {
                  sum += (double)0.1013976911764705724;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.64214038848876953) ) ) {
                sum += (double)0.05339859999999999746;
              } else {
                sum += (double)0.00605314705882353029;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.419721648097038269) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6194075047969818115) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4568915069103240967) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.3125) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.108149997889995575) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009049999993294477463) ) ) {
                sum += (double)0.575972566666666741;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2093297094106674194) ) ) {
                  sum += (double)0.4802992380952381124;
                } else {
                  sum += (double)0.5495613333333333461;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.54882621765136719) ) ) {
                sum += (double)0.4679403300000000709;
              } else {
                sum += (double)0.3691402941176470387;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1193878576159477234) ) ) {
              sum += (double)0.4541661249999999761;
            } else {
              sum += (double)0.2645082250000000412;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.769090890884399414) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5266900062561035156) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2663.0958251953125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3568.2001953125) ) ) {
                  sum += (double)0.5176282065217391315;
                } else {
                  sum += (double)0.6237542750000000247;
                }
              } else {
                sum += (double)0.4951816339285713409;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6906999945640563965) ) ) {
                sum += (double)0.5401715909090908374;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7933999896049499512) ) ) {
                  sum += (double)0.6413629305555555993;
                } else {
                  sum += (double)0.683846294117647191;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5270044803619384766) ) ) {
              sum += (double)0.528363787500000015;
            } else {
              sum += (double)0.3978480263157893604;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.8119049072265625) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7556720077991485596) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2030316218733787537) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8446999788284301758) ) ) {
                sum += (double)0.7634303913043478662;
              } else {
                sum += (double)0.7007644305555555952;
              }
            } else {
              sum += (double)0.6854816249999999833;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03770000115036964417) ) ) {
              sum += (double)0.8589791916666668081;
            } else {
              sum += (double)0.7691679895833334335;
            }
          }
        } else {
          sum += (double)0.6125280916666665521;
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603064954280853271) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1614.14288330078125) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.548097372055053711) ) ) {
            sum += (double)0.3860586354166667955;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.32458257675170898) ) ) {
              sum += (double)0.2669380288461538075;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2449999973177909851) ) ) {
                sum += (double)0.2304870000000000252;
              } else {
                sum += (double)0.0895083333333333564;
              }
            }
          }
        } else {
          sum += (double)0.07789048214285713978;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06945000216364860535) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.04504999890923500061) ) ) {
            sum += (double)0.334491413793103487;
          } else {
            sum += (double)0.1558109051724137772;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7659761905670166016) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5406839847564697266) ) ) {
              sum += (double)0.4791472500000000245;
            } else {
              sum += (double)0.6215210657894737478;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3256500065326690674) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1352000012993812561) ) ) {
                sum += (double)0.4278714285714285692;
              } else {
                sum += (double)0.1845686120689655485;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5504325032234191895) ) ) {
                sum += (double)0.2845976562499999973;
              } else {
                sum += (double)0.5283249134615384257;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.942741870880126953) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4768949896097183228) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9590523242950439453) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2316309958696365356) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4106.695556640625) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0128000001423060894) ) ) {
              sum += (double)0.3836244249999999911;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4879499971866607666) ) ) {
                sum += (double)0.3031108636363635811;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6917999982833862305) ) ) {
                  sum += (double)0.1748495694444444359;
                } else {
                  sum += (double)0.09920753846153845812;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.536184310913085938) ) ) {
              sum += (double)0.2337976111111111366;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1530530005693435669) ) ) {
                sum += (double)0.01796439999999999843;
              } else {
                sum += (double)0.09482056249999999686;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3151829987764358521) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2092.9814453125) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.390132665634155273) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01319999992847442627) ) ) {
                  sum += (double)0.4602125384615384784;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.402941226959228516) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4830499887466430664) ) ) {
                      sum += (double)0.362559115384615438;
                    } else {
                      sum += (double)0.421496020833333318;
                    }
                  } else {
                    sum += (double)0.325364357142857219;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2698989957571029663) ) ) {
                  sum += (double)0.3829443522727272176;
                } else {
                  sum += (double)0.1755336406250000147;
                }
              }
            } else {
              sum += (double)0.1877347115384615794;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8930999934673309326) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4595319628715515137) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1206.0045166015625) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.378470495343208313) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02225000038743019104) ) ) {
                      sum += (double)0.495401982142857078;
                    } else {
                      sum += (double)0.4120203596491227582;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.136313512921333313) ) ) {
                      sum += (double)0.4789443452380951483;
                    } else {
                      sum += (double)0.527774794776119327;
                    }
                  }
                } else {
                  sum += (double)0.344216513157894699;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.77538299560546875) ) ) {
                  sum += (double)0.4461592368421052335;
                } else {
                  sum += (double)0.3106568534482758714;
                }
              }
            } else {
              sum += (double)0.2831704444444443913;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2845.7130126953125) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2704560011625289917) ) ) {
            sum += (double)0.1120548452380952381;
          } else {
            sum += (double)0.3084398500000000154;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.682441353797912598) ) ) {
            sum += (double)0.2408666093750000126;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.978606700897216797) ) ) {
              sum += (double)0.1161953593749999875;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.511374294757843018) ) ) {
                sum += (double)0.06469574999999999632;
              } else {
                sum += (double)0.02358740740740740763;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.126009643077850342) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5997920036315917969) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3160523772239685059) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4981.4130859375) ) ) {
                sum += (double)0.4893912115384614903;
              } else {
                sum += (double)0.5642781904761905443;
              }
            } else {
              sum += (double)0.4575447738095238526;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5513834953308105469) ) ) {
              sum += (double)0.6662110217391304934;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.47414863109588623) ) ) {
                sum += (double)0.5952288103448275525;
              } else {
                sum += (double)0.4884970333333332748;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7521069943904876709) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1206500008702278137) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006399999838322401047) ) ) {
                sum += (double)0.767847347222222254;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0860268808901309967) ) ) {
                  sum += (double)0.6640529722222221487;
                } else {
                  sum += (double)0.7171893970588234524;
                }
              }
            } else {
              sum += (double)0.6146577571428571973;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1056000031530857086) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8322224915027618408) ) ) {
                sum += (double)0.7867957232142855917;
              } else {
                sum += (double)0.8340901374999999396;
              }
            } else {
              sum += (double)0.7312682352941176633;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.081206917762756348) ) ) {
          sum += (double)0.416781500000000027;
        } else {
          sum += (double)0.2708404600000000051;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3597635030746459961) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.84589385986328125) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9214.80908203125) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20737.1533203125) ) ) {
            sum += (double)0.3540099117647059757;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12223.82666015625) ) ) {
              sum += (double)0.1216086160714285741;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.99901151657104492) ) ) {
                sum += (double)0.2217221911764705733;
              } else {
                sum += (double)0.363251125000000008;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1248619966208934784) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6604999899864196777) ) ) {
              sum += (double)0.01623145000000000143;
            } else {
              sum += (double)0.004758894736842106919;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4424.71484375) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5171999931335449219) ) ) {
                sum += (double)0.2279843499999999745;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.663499981164932251) ) ) {
                  sum += (double)0.0350722374999999989;
                } else {
                  sum += (double)0.1548636470588235226;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.124449998140335083) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.07142877578735352) ) ) {
                  sum += (double)0.03230219999999999619;
                } else {
                  sum += (double)0.009648147058823530395;
                }
              } else {
                sum += (double)0.101022249999999994;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2465620040893554688) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.76286888122558594) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21762.283203125) ) ) {
              sum += (double)0.1589403699999999975;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07210749760270118713) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2809069901704788208) ) ) {
                  sum += (double)0.002717218750000000016;
                } else {
                  sum += (double)0.004604250000000000703;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009949999861419200897) ) ) {
                  sum += (double)0.1211961730769230694;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.688899993896484375) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2139855027198791504) ) ) {
                      sum += (double)0.02894168990384615378;
                    } else {
                      sum += (double)0.06988286538461538355;
                    }
                  } else {
                    sum += (double)0.09475176086956520194;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06727499887347221375) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04316999949514865875) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1727500036358833313) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003950000042095780373) ) ) {
                    sum += (double)0.003633400000000000171;
                  } else {
                    sum += (double)0.002500000000000000919;
                  }
                } else {
                  sum += (double)0.007382249999999999923;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05547950044274330139) ) ) {
                  sum += (double)0.01284092045454545729;
                } else {
                  sum += (double)0.004548447368421052947;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7490999996662139893) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4746000021696090698) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1771000027656555176) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1964999958872795105) ) ) {
                      sum += (double)0.0201717031249999991;
                    } else {
                      sum += (double)0.008654276041666662117;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3031999915838241577) ) ) {
                      sum += (double)0.03509143292682927184;
                    } else {
                      sum += (double)0.01219131818181818337;
                    }
                  }
                } else {
                  sum += (double)0.05356714285714285484;
                }
              } else {
                sum += (double)0.06652846428571429493;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8811388611793518066) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.34814834594726562) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.686699986457824707) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.05329704284667969) ) ) {
                  sum += (double)0.1605631718749999937;
                } else {
                  sum += (double)0.2993499722222222603;
                }
              } else {
                sum += (double)0.1279679843750000101;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6782357394695281982) ) ) {
                sum += (double)0.06985259868421052343;
              } else {
                sum += (double)0.1364742499999999914;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2743875086307525635) ) ) {
              sum += (double)0.1300448999999999911;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2179999947547912598) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.465892612934112549) ) ) {
                  sum += (double)0.06098954166666665372;
                } else {
                  sum += (double)0.0224774821428571428;
                }
              } else {
                sum += (double)0.01830977777777777898;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3010.1170654296875) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.2909092903137207) ) ) {
          sum += (double)0.5012690227272726951;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5448625087738037109) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3924012333154678345) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.74305000901222229) ) ) {
                sum += (double)0.4157863749999999858;
              } else {
                sum += (double)0.2328168157894736912;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4378604888916015625) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3904369920492172241) ) ) {
                  sum += (double)0.04094941304347825273;
                } else {
                  sum += (double)0.1150935921052631677;
                }
              } else {
                sum += (double)0.2128022788461538528;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.050387144088745117) ) ) {
              sum += (double)0.5348628653846153602;
            } else {
              sum += (double)0.333802816666666724;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1659.45526123046875) ) ) {
          sum += (double)0.1228850666666666674;
        } else {
          sum += (double)0.0227952410714285722;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3151944875717163086) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.12549018859863281) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1373855024576187134) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.97569465637207031) ) ) {
          sum += (double)0.1599745416666666642;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08890450000762939453) ) ) {
            sum += (double)0.01535219827586207196;
          } else {
            sum += (double)0.0611976666666666641;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.24036097526550293) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2316309958696365356) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4535.116943359375) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04449999891221523285) ) ) {
                sum += (double)0.3530568250000000186;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.20689678192138672) ) ) {
                  sum += (double)0.323065045454545452;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9516.4931640625) ) ) {
                    sum += (double)0.2590743970588235134;
                  } else {
                    sum += (double)0.1928006750000000324;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.670289754867553711) ) ) {
                sum += (double)0.2822523235294117083;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5824500024318695068) ) ) {
                  sum += (double)0.1992042900000000338;
                } else {
                  sum += (double)0.07266592708333334538;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.469298362731933594) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2092.9814453125) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01695000007748603821) ) ) {
                  sum += (double)0.4590726458333332372;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7229500114917755127) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2935855090618133545) ) ) {
                      sum += (double)0.3641496923076922854;
                    } else {
                      sum += (double)0.431248295454545405;
                    }
                  } else {
                    sum += (double)0.2583439423076923647;
                  }
                }
              } else {
                sum += (double)0.2330113783783783754;
              }
            } else {
              sum += (double)0.1920116923076922999;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5180.1787109375) ) ) {
            sum += (double)0.1178657343750000031;
          } else {
            sum += (double)0.02454542105263157747;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1351089999079704285) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.96186447143554688) ) ) {
          sum += (double)0.1216772717391304409;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08987350016832351685) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07210149988532066345) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05423900112509727478) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.49175834655761719) ) ) {
                  sum += (double)0.006759382352941177563;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02221600059419870377) ) ) {
                    sum += (double)0.002500000000000001353;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)106.9740753173828125) ) ) {
                      sum += (double)0.006013533333333332884;
                    } else {
                      sum += (double)0.002697763888888889735;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06200749985873699188) ) ) {
                  sum += (double)0.01283005952380952483;
                } else {
                  sum += (double)0.00422607142857142886;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08126100152730941772) ) ) {
                sum += (double)0.05526583333333333348;
              } else {
                sum += (double)0.003835413793103448557;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2258687540888786316) ) ) {
              sum += (double)0.07491355833333331049;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1327500045299530029) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03380000032484531403) ) ) {
                  sum += (double)0.006637455882352942017;
                } else {
                  sum += (double)0.01929927586206896251;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.44444465637207031) ) ) {
                  sum += (double)0.08287141666666666961;
                } else {
                  sum += (double)0.02768375862068965174;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2713187187910079956) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04189999960362911224) ) ) {
            sum += (double)0.2283133181818182145;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2090524956583976746) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.94492721557617188) ) ) {
                sum += (double)0.1006889666666666572;
              } else {
                sum += (double)0.03388152499999999567;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7830500006675720215) ) ) {
                sum += (double)0.2254535800000000145;
              } else {
                sum += (double)0.1197131666666666899;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.45048999786376953) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8657.43701171875) ) ) {
              sum += (double)0.2307490000000000097;
            } else {
              sum += (double)0.08287320833333332304;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5560.398193359375) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2436510026454925537) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4036500006914138794) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.74834823608398438) ) ) {
                    sum += (double)0.05677459523809524206;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9032788276672363281) ) ) {
                      sum += (double)0.03254088636363636211;
                    } else {
                      sum += (double)0.009633672619047618096;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4802999943494796753) ) ) {
                    sum += (double)0.1418375937499999906;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29128.3310546875) ) ) {
                      sum += (double)0.09572652419354839293;
                    } else {
                      sum += (double)0.03313359259259259643;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2594704926013946533) ) ) {
                  sum += (double)0.248573833333333355;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.83690452575683594) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17420.98193359375) ) ) {
                      sum += (double)0.1791231176470588216;
                    } else {
                      sum += (double)0.08068487500000000312;
                    }
                  } else {
                    sum += (double)0.03123350000000000085;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6192073822021484375) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.47368431091308594) ) ) {
                  sum += (double)0.06890035416666667745;
                } else {
                  sum += (double)0.01339926190476190687;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2121500000357627869) ) ) {
                  sum += (double)0.00903441666666666976;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.46086978912353516) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    sum += (double)0.003713266666666666972;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3243703395128250122) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5277554988861083984) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.01262664794921875) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4764709919691085815) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7626000046730041504) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005000000237487256527) ) ) {
                sum += (double)0.5528191764705883138;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6068499982357025146) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.088110446929931641) ) ) {
                    sum += (double)0.4693754130434782956;
                  } else {
                    sum += (double)0.3967179130434783096;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4449.98828125) ) ) {
                    sum += (double)0.4297488928571427946;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.46422529220581055) ) ) {
                      sum += (double)0.5009593478260870869;
                    } else {
                      sum += (double)0.5631019583333332079;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3990164995193481445) ) ) {
                sum += (double)0.4349011153846153444;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.23611068725585938) ) ) {
                  sum += (double)0.3544669305555555039;
                } else {
                  sum += (double)0.2497845357142856881;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3568.2001953125) ) ) {
              sum += (double)0.4906326904761905139;
            } else {
              sum += (double)0.5858280092592592636;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17428.0888671875) ) ) {
            sum += (double)0.3506916413043478786;
          } else {
            sum += (double)0.2425948333333333429;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.752637147903442383) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.733775019645690918) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6401499807834625244) ) ) {
              sum += (double)0.584499818181818287;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6324700117111206055) ) ) {
                sum += (double)0.6807421099999999559;
              } else {
                sum += (double)0.7493982800000000832;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03739999979734420776) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8049505054950714111) ) ) {
                sum += (double)0.8144245156249998452;
              } else {
                sum += (double)0.8824752941176471355;
              }
            } else {
              sum += (double)0.7794981346153847523;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.470833301544189453) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.601947307586669922) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2926.93505859375) ) ) {
                sum += (double)0.6593160673076923217;
              } else {
                sum += (double)0.5448092129629630298;
              }
            } else {
              sum += (double)0.7204015937500000133;
            }
          } else {
            sum += (double)0.5276503472222221491;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4595739990472793579) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9564632177352905273) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.74553585052490234) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.786324501037597656) ) ) {
              sum += (double)0.4418142788461538184;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3407.5992431640625) ) ) {
                sum += (double)0.4051503437499999749;
              } else {
                sum += (double)0.1535763541666666787;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.22938728332519531) ) ) {
              sum += (double)0.06217337500000000294;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.71590805053710938) ) ) {
                sum += (double)0.3551566406249999641;
              } else {
                sum += (double)0.07243927272727274103;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.582383632659912109) ) ) {
            sum += (double)0.2977279821428570616;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2859.90234375) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.26770000159740448) ) ) {
                sum += (double)0.252388803571428566;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.25360727310180664) ) ) {
                  sum += (double)0.1716885714285713849;
                } else {
                  sum += (double)0.09211289062499999902;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.19777989387512207) ) ) {
                sum += (double)0.1322209374999999965;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3822994977235794067) ) ) {
                  sum += (double)0.01361640476190476359;
                } else {
                  sum += (double)0.0569026666666666639;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.872549057006835938) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9579804539680480957) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5449129939079284668) ) ) {
              sum += (double)0.4806595454545454782;
            } else {
              sum += (double)0.6049521630434780972;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.433199882507324219) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.962744355201721191) ) ) {
                sum += (double)0.4490510131578946962;
              } else {
                sum += (double)0.3675386785714285232;
              }
            } else {
              sum += (double)0.2172508157894736669;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1119.5023193359375) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6084134876728057861) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.63118124008178711) ) ) {
                sum += (double)0.3548874062499999815;
              } else {
                sum += (double)0.2041058189655172161;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.029400944709777832) ) ) {
                sum += (double)0.6106709615384615653;
              } else {
                sum += (double)0.3572958269230768757;
              }
            }
          } else {
            sum += (double)0.09197596428571427896;
          }
        }
      }
    }
  }
  return sum;
}
