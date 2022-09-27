#include "prediction.h"
double predict_margin_unit12(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4305779933929443359) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.265384674072265625) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2327458411455154419) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)63.77272796630859375) ) ) {
              sum += (double)0.02701263529411765396;
            } else {
              sum += (double)0.08657133951598658395;
            }
          } else {
            sum += (double)0.1519027236536767689;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09103149920701980591) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1370999962091445923) ) ) {
                sum += (double)0.01751565501165501179;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.45217132568359375) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3671393692493438721) ) ) {
                    sum += (double)0.01037945333333333518;
                  } else {
                    sum += (double)0.004450980000000001081;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                    sum += (double)0.004000000000000002685;
                  } else {
                    sum += (double)0.005243287500000000725;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17773.810546875) ) ) {
                sum += (double)0.01378754000000000091;
              } else {
                sum += (double)0.03114723818063678054;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.375) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5461499989032745361) ) ) {
                sum += (double)0.02814507843137254925;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2211383208632469177) ) ) {
                  sum += (double)0.0531555553460159938;
                } else {
                  sum += (double)0.08761965841738958427;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7801902294158935547) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6074526607990264893) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1255569979548454285) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1036064997315406799) ) ) {
                      sum += (double)0.02507649183673469825;
                    } else {
                      sum += (double)0.009440800000000000927;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7017500102519989014) ) ) {
                      sum += (double)0.02192377333333333025;
                    } else {
                      sum += (double)0.05160169447415330346;
                    }
                  }
                } else {
                  sum += (double)0.05877212445820433756;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3500000089406967163) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5832.749267578125) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2221499979496002197) ) ) {
                      sum += (double)0.01536216720430107555;
                    } else {
                      sum += (double)0.004313663157894737782;
                    }
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                } else {
                  sum += (double)0.02488514725274725004;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.44881343841552734) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7162883579730987549) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01860000006854534149) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2635.854248046875) ) ) {
                sum += (double)0.3311852843605355701;
              } else {
                sum += (double)0.2600064213401174773;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3739569187164306641) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1340468674898147583) ) ) {
                  sum += (double)0.2413902188329314635;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.00961494445800781) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.21200180053710938) ) ) {
                      sum += (double)0.1283837009077568592;
                    } else {
                      sum += (double)0.06565879922590822648;
                    }
                  } else {
                    sum += (double)0.1863988424821062251;
                  }
                }
              } else {
                sum += (double)0.2669225125189557679;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1854.740478515625) ) ) {
              sum += (double)0.08512234838282284333;
            } else {
              sum += (double)0.01453877142857143076;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01470000017434358597) ) ) {
            sum += (double)0.1973928786710418271;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2461469992995262146) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4189000129699707031) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6793999969959259033) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3535000085830688477) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.87318897247314453) ) ) {
                      sum += (double)0.006122088888888889066;
                    } else {
                      sum += (double)0.01928695000000000409;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.53917503356933594) ) ) {
                      sum += (double)0.05979459760196893098;
                    } else {
                      sum += (double)0.02563556693281177426;
                    }
                  }
                } else {
                  sum += (double)0.07124260194710259342;
                }
              } else {
                sum += (double)0.09073562291739493968;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.436163976788520813) ) ) {
                sum += (double)0.2233418613216895388;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.96237945556640625) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.169858276844024658) ) ) {
                    sum += (double)0.06816146787366238191;
                  } else {
                    sum += (double)0.0176011333333333346;
                  }
                } else {
                  sum += (double)0.1425879511684277345;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5985960066318511963) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2137499973177909851) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.476446002721786499) ) ) {
            sum += (double)0.2816254472615197235;
          } else {
            sum += (double)0.3730360709148049514;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4542.814208984375) ) ) {
            sum += (double)0.2371481299072130122;
          } else {
            sum += (double)0.1071473359387754842;
          }
        }
      } else {
        sum += (double)0.5241363847311130142;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4572215080261230469) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7563312947750091553) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23148155212402344) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04635000042617321014) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004999999888241291046) ) ) {
                sum += (double)0.5967944926030683828;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01965000014752149582) ) ) {
                  sum += (double)0.4448011983645765444;
                } else {
                  sum += (double)0.5247105517626180493;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.15000009536743164) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2278499975800514221) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3903499990701675415) ) ) {
                    sum += (double)0.3702071458984924068;
                  } else {
                    sum += (double)0.4741209608710674761;
                  }
                } else {
                  sum += (double)0.5136960031650025238;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6035999953746795654) ) ) {
                    sum += (double)0.3210686842374531058;
                  } else {
                    sum += (double)0.1647528582263467767;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.68022346496582031) ) ) {
                    sum += (double)0.3036338340007814218;
                  } else {
                    sum += (double)0.4593188886148706351;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04765000008046627045) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3382.5367431640625) ) ) {
                sum += (double)0.6702576296232876096;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.17777252197265625) ) ) {
                  sum += (double)0.586534460797073276;
                } else {
                  sum += (double)0.6221413704016913737;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2495.089111328125) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6966500282287597656) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2855009734630584717) ) ) {
                    sum += (double)0.5939806569175627438;
                  } else {
                    sum += (double)0.5551698488887052418;
                  }
                } else {
                  sum += (double)0.5032841524664768418;
                }
              } else {
                sum += (double)0.6318038941264373376;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3349944949150085449) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.34866619110107422) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02084999997168779373) ) ) {
                sum += (double)0.4685839266319104524;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2559999972581863403) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3450499922037124634) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.8064422607421875) ) ) {
                      sum += (double)0.313419095834459871;
                    } else {
                      sum += (double)0.1671279168397163672;
                    }
                  } else {
                    sum += (double)0.1150532845888355277;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12688.36376953125) ) ) {
                    sum += (double)0.3925917516467244961;
                  } else {
                    sum += (double)0.2767734126612406698;
                  }
                }
              }
            } else {
              sum += (double)0.1301327926354142461;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5110000073909759521) ) ) {
              sum += (double)0.2673926958542188759;
            } else {
              sum += (double)0.4857138709679598154;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.722097396850585938) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1840.76361083984375) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3672800064086914062) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5385.579833984375) ) ) {
                sum += (double)0.2907318808469727123;
              } else {
                sum += (double)0.1380406907299392139;
              }
            } else {
              sum += (double)0.4355551792682960666;
            }
          } else {
            sum += (double)0.0854324102591361989;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21521.0654296875) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.10289382934570312) ) ) {
              sum += (double)0.3059460461848694246;
            } else {
              sum += (double)0.1005958444520770739;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.277976691722869873) ) ) {
              sum += (double)0.129868704363172105;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.783580303192138672) ) ) {
                sum += (double)0.008856061538461539387;
              } else {
                sum += (double)0.03009370940170940506;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033862948417663574) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6060760021209716797) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.09328365325927734) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4239679574966430664) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.34320163726806641) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6378500163555145264) ) ) {
                    sum += (double)0.5707267708074760248;
                  } else {
                    sum += (double)0.6251524255929398199;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3107.9483642578125) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1115093007683753967) ) ) {
                      sum += (double)0.5809318843115330866;
                    } else {
                      sum += (double)0.6547992762329175598;
                    }
                  } else {
                    sum += (double)0.7024772722689074378;
                  }
                }
              } else {
                sum += (double)0.5485463277074542621;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02460000012069940567) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.338375449180603027) ) ) {
                  sum += (double)0.7112691175540123423;
                } else {
                  sum += (double)0.7350878566666666503;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1721500009298324585) ) ) {
                  sum += (double)0.6773050966990140642;
                } else {
                  sum += (double)0.6341346378657399807;
                }
              }
            }
          } else {
            sum += (double)0.3895372776836825146;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.741619497537612915) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1539000049233436584) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5807000100612640381) ) ) {
                sum += (double)0.7455779689608637018;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.924035906791687012) ) ) {
                  sum += (double)0.8069845785575049391;
                } else {
                  sum += (double)0.7595064447496001625;
                }
              }
            } else {
              sum += (double)0.7078068094251259712;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.61852264404296875) ) ) {
              sum += (double)0.9044653125000000626;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08565000072121620178) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.614215672016143799) ) ) {
                  sum += (double)0.8388862829657113274;
                } else {
                  sum += (double)0.8857655846153845713;
                }
              } else {
                sum += (double)0.8195687932367152762;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6714514791965484619) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.999556601047515869) ) ) {
            sum += (double)0.5065042997643306455;
          } else {
            sum += (double)0.2255745362316791403;
          }
        } else {
          sum += (double)0.5972979157954591001;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4594839960336685181) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.143333196640014648) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5099999904632568359) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.537433147430419922) ) ) {
            sum += (double)0.1276158464647770274;
          } else {
            sum += (double)0.03580155229161082614;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.03371810913085938) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2538.3482666015625) ) ) {
              sum += (double)0.30828405275372045;
            } else {
              sum += (double)0.08363212236817763046;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1499.40313720703125) ) ) {
                sum += (double)0.1916544539897760135;
              } else {
                sum += (double)0.344483302425261928;
              }
            } else {
              sum += (double)0.3812279201781352267;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8550000190734863281) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1942860037088394165) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.74512958526611328) ) ) {
              sum += (double)0.09305245675830468854;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2349999994039535522) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8764500021934509277) ) ) {
                      sum += (double)0.004671352727272730029;
                    } else {
                      sum += (double)0.01148907500000000137;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.39136695861816406) ) ) {
                      sum += (double)0.02154008062618083599;
                    } else {
                      sum += (double)0.005578371428571428717;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.46666717529296875) ) ) {
                    sum += (double)0.04008618023088023063;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7801902294158935547) ) ) {
                      sum += (double)0.01744264680851063953;
                    } else {
                      sum += (double)0.004901709090909090773;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.40783405303955078) ) ) {
                  sum += (double)0.1070739243193872536;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4053499996662139893) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7046000063419342041) ) ) {
                      sum += (double)0.02045722522125914891;
                    } else {
                      sum += (double)0.04023905859241342503;
                    }
                  } else {
                    sum += (double)0.05378935338753388501;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3304542601108551025) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1991684883832931519) ) ) {
                sum += (double)0.05331431796502384551;
              } else {
                sum += (double)0.1414971247529610565;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1525999978184700012) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2554499953985214233) ) ) {
                  sum += (double)0.009987313306451615219;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2958669960498809814) ) ) {
                    sum += (double)0.02294728672438672498;
                  } else {
                    sum += (double)0.05886505151515151329;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2351830005645751953) ) ) {
                  sum += (double)0.02953069090909090852;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.54999923706054688) ) ) {
                    sum += (double)0.06088409977171860277;
                  } else {
                    sum += (double)0.1288445122435328272;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.736466825008392334) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15164.28125) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
                sum += (double)0.09020844656299148445;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1787000000476837158) ) ) {
                  sum += (double)0.03241237802197801526;
                } else {
                  sum += (double)0.07567944551720934276;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4278547316789627075) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.25) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000143051147461) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.24788951873779297) ) ) {
                      sum += (double)0.07114370096681028877;
                    } else {
                      sum += (double)0.1429384204024971572;
                    }
                  } else {
                    sum += (double)0.1924454025491740827;
                  }
                } else {
                  sum += (double)0.2399427527420041617;
                }
              } else {
                sum += (double)0.2766873298365188361;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4060000032186508179) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2973410040140151978) ) ) {
                sum += (double)0.008099247058823531506;
              } else {
                sum += (double)0.02042891975099038124;
              }
            } else {
              sum += (double)0.04797162518741481668;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5713820159435272217) ) ) {
          sum += (double)0.1653173425333106517;
        } else {
          sum += (double)0.3338068439094357687;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1707.40594482421875) ) ) {
          sum += (double)0.379601240433051379;
        } else {
          sum += (double)0.5127484835382202233;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4500759989023208618) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062687098979949951) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2452994957566261292) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0342500004917383194) ) ) {
              sum += (double)0.4945679543497927821;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12994.455078125) ) ) {
                sum += (double)0.4273731033184024475;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2162764966487884521) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4936500042676925659) ) ) {
                    sum += (double)0.3811537106140248654;
                  } else {
                    sum += (double)0.2223877604560881016;
                  }
                } else {
                  sum += (double)0.2226806400515738693;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01319999992847442627) ) ) {
                sum += (double)0.5518854589594553994;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1498499959707260132) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05095000006258487701) ) ) {
                    sum += (double)0.4999934932756627814;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2629835158586502075) ) ) {
                      sum += (double)0.3021838762255323885;
                    } else {
                      sum += (double)0.4630536530968094033;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5252138972282409668) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5675.855224609375) ) ) {
                      sum += (double)0.5026084082630263294;
                    } else {
                      sum += (double)0.5575695023093674152;
                    }
                  } else {
                    sum += (double)0.4623680203435087122;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007599999895319342613) ) ) {
                sum += (double)0.6650527249395647988;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.009523868560791016) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3302.6990966796875) ) ) {
                    sum += (double)0.5497604207902579976;
                  } else {
                    sum += (double)0.6074751562019446993;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.76573371887207031) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.54882621765136719) ) ) {
                      sum += (double)0.5248776894131557125;
                    } else {
                      sum += (double)0.43901648883474792;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3994505107402801514) ) ) {
                      sum += (double)0.6074595125982376054;
                    } else {
                      sum += (double)0.5516528380090498507;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3351285010576248169) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.33372879028320312) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19886.4365234375) ) ) {
                sum += (double)0.4367087600932665903;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2830500006675720215) ) ) {
                  sum += (double)0.2778210066364103503;
                } else {
                  sum += (double)0.1103231373543680505;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2297499999403953552) ) ) {
                sum += (double)0.1134565406647274344;
              } else {
                sum += (double)0.2219593999019698616;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21846.76953125) ) ) {
              sum += (double)0.3267743818971515224;
            } else {
              sum += (double)0.4585210864228352889;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.813309073448181152) ) ) {
          sum += (double)0.3611004903714115088;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-30044.84375) ) ) {
            sum += (double)0.202293156260090784;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.758207559585571289) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2687.6463623046875) ) ) {
                sum += (double)0.2661787771775990796;
              } else {
                sum += (double)0.0348313392583320322;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1552500054240226746) ) ) {
                sum += (double)0.05080831640126453469;
              } else {
                sum += (double)0.01866050502901353894;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6524230241775512695) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.214453697204589844) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5121190249919891357) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4051500707864761353) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.50185537338256836) ) ) {
                  sum += (double)0.5984158396948343617;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4761.35205078125) ) ) {
                    sum += (double)0.6122475488678217337;
                  } else {
                    sum += (double)0.6556526187830686858;
                  }
                }
              } else {
                sum += (double)0.5284173627139245877;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.399865150451660156) ) ) {
                sum += (double)0.6162935343712072633;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09144999831914901733) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09210025519132614136) ) ) {
                    sum += (double)0.7201406354838710833;
                  } else {
                    sum += (double)0.7765109636363635159;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.631372690200805664) ) ) {
                    sum += (double)0.7195968579670329879;
                  } else {
                    sum += (double)0.6614800969951618592;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.542434006929397583) ) ) {
              sum += (double)0.4652529868323753148;
            } else {
              sum += (double)0.6113673868700321146;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1001594103872776031) ) ) {
              sum += (double)0.7308645933624910995;
            } else {
              sum += (double)0.767703370291777154;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5222.390625) ) ) {
              sum += (double)0.7807391888888888243;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7910891175270080566) ) ) {
                sum += (double)0.8835439326348057953;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.721825361251831055) ) ) {
                  sum += (double)0.8308511954545454437;
                } else {
                  sum += (double)0.8737832714285714841;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6745850145816802979) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.900967180728912354) ) ) {
            sum += (double)0.5507300233481540186;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2562.16064453125) ) ) {
              sum += (double)0.4563869565577304277;
            } else {
              sum += (double)0.1843861211839108727;
            }
          }
        } else {
          sum += (double)0.6389591107238655754;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.405882358551025391) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2549335062503814697) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.035119056701660156) ) ) {
          sum += (double)0.08519957963864367712;
        } else {
          sum += (double)0.2094000530712184782;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-765.98193359375) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.518558502197265625) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.373913049697875977) ) ) {
              sum += (double)0.4096133420996058705;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3447640091180801392) ) ) {
                sum += (double)0.3848038986247582782;
              } else {
                sum += (double)0.2451783992228691589;
              }
            }
          } else {
            sum += (double)0.5305371559397857872;
          }
        } else {
          sum += (double)0.1499775149303626265;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6650000214576721191) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1846349984407424927) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1165290027856826782) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000089406967163) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08530573546886444092) ) ) {
                    sum += (double)0.009943813333333334156;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                      sum += (double)0.004486331914893619717;
                    } else {
                      sum += (double)0.00641192500000000061;
                    }
                  }
                } else {
                  sum += (double)0.01072506035087719516;
                }
              } else {
                sum += (double)0.0186008385093167708;
              }
            } else {
              sum += (double)0.04299245945147289749;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004500000068219378591) ) ) {
              sum += (double)0.1107011588880289082;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1349999979138374329) ) ) {
                sum += (double)0.05650197133251556175;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.33458614349365234) ) ) {
                  sum += (double)0.02732289354092152719;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2773684710264205933) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14251.2216796875) ) ) {
                      sum += (double)0.03756105603864734466;
                    } else {
                      sum += (double)0.01398375652173913276;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)102.9606475830078125) ) ) {
                      sum += (double)0.008426535593220339793;
                    } else {
                      sum += (double)0.01799251200000000217;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3449999988079071045) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.97499990463256836) ) ) {
              sum += (double)0.09381333027981560158;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5900814235210418701) ) ) {
                  sum += (double)0.01773053333333333634;
                } else {
                  sum += (double)0.005717164068100359826;
                }
              } else {
                sum += (double)0.05685930476049771976;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.77093124389648438) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5399999916553497314) ) ) {
                sum += (double)0.06538886968140004974;
              } else {
                sum += (double)0.1173424930163490254;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16586.89990234375) ) ) {
                sum += (double)0.06192212857142857102;
              } else {
                sum += (double)0.2225814443930811126;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00664999987930059433) ) ) {
          sum += (double)0.3182225806742901564;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4376685023307800293) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6879646778106689453) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8327.1845703125) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7481499910354614258) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2373999953269958496) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1689469963312149048) ) ) {
                      sum += (double)0.02779224845271710542;
                    } else {
                      sum += (double)0.06935639887244632318;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.8702239990234375) ) ) {
                      sum += (double)0.1090602779355055035;
                    } else {
                      sum += (double)0.0477669568333600747;
                    }
                  }
                } else {
                  sum += (double)0.1198973509934465609;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07904999703168869019) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.870000004768371582) ) ) {
                    sum += (double)0.1659260455891304609;
                  } else {
                    sum += (double)0.08001773956832221313;
                  }
                } else {
                  sum += (double)0.2435544408707113195;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4014499932527542114) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.15571022033691406) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.21613311767578125) ) ) {
                    sum += (double)0.01741780000000000064;
                  } else {
                    sum += (double)0.006923666666666667378;
                  }
                } else {
                  sum += (double)0.02887051835094416041;
                }
              } else {
                sum += (double)0.03951130833560090316;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2638999968767166138) ) ) {
              sum += (double)0.210527388110903324;
            } else {
              sum += (double)0.329702840085821014;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.90746784210205078) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2427854984998703003) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01440000021830201149) ) ) {
              sum += (double)0.5419286854541970344;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11929.9404296875) ) ) {
                sum += (double)0.4262949223305224078;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8976.74267578125) ) ) {
                  sum += (double)0.2087011964037487899;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2141254991292953491) ) ) {
                    sum += (double)0.4000426364545848767;
                  } else {
                    sum += (double)0.2411823338907146119;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003550000139512121677) ) ) {
              sum += (double)0.6456746349684433506;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3409480005502700806) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.283674955368041992) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4607000052928924561) ) ) {
                    sum += (double)0.472552163155692595;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6119999885559082031) ) ) {
                      sum += (double)0.5524034747618373764;
                    } else {
                      sum += (double)0.4951304679426982158;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1422999948263168335) ) ) {
                    sum += (double)0.3569789200148645869;
                  } else {
                    sum += (double)0.4952586819341733837;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.14204502105712891) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4130055010318756104) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3646669983863830566) ) ) {
                      sum += (double)0.5436750070804615698;
                    } else {
                      sum += (double)0.5967470408826093253;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3134517967700958252) ) ) {
                      sum += (double)0.4616609346761588739;
                    } else {
                      sum += (double)0.5683610466490300883;
                    }
                  }
                } else {
                  sum += (double)0.4342982567990182341;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.63336181640625) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3333054929971694946) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002999999924213625491) ) ) {
                sum += (double)0.4516605926861204101;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1504370346665382385) ) ) {
                  sum += (double)0.3833821245267005073;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.17553749680519104) ) ) {
                    sum += (double)0.1439733267428538466;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19886.4365234375) ) ) {
                      sum += (double)0.339756162965069386;
                    } else {
                      sum += (double)0.2125141062103921008;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15424.068359375) ) ) {
                sum += (double)0.5315732467769704872;
              } else {
                sum += (double)0.3663120330309644346;
              }
            }
          } else {
            sum += (double)0.1018254989406009725;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.149416446685791016) ) ) {
          sum += (double)0.3672210999040412815;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21581.0751953125) ) ) {
            sum += (double)0.2778887403603759187;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.681742429733276367) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
                sum += (double)0.2689591155124295141;
              } else {
                sum += (double)0.04855375271735652698;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.233950003981590271) ) ) {
                sum += (double)0.07045647384496796228;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.72168827056884766) ) ) {
                  sum += (double)0.03873323337398551502;
                } else {
                  sum += (double)0.01629063333333333197;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.071587741374969482) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.621632993221282959) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.60194826126098633) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5441325008869171143) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4671999961137771606) ) ) {
                sum += (double)0.5178242770132598372;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.31512928009033203) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1072998940944671631) ) ) {
                    sum += (double)0.5494358465678050862;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1500800773501396179) ) ) {
                      sum += (double)0.6573538734751287471;
                    } else {
                      sum += (double)0.5943765735668588013;
                    }
                  }
                } else {
                  sum += (double)0.668978077587301545;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3580.77685546875) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.144349999725818634) ) ) {
                  sum += (double)0.6541231380645351479;
                } else {
                  sum += (double)0.613335281210735217;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5804649889469146729) ) ) {
                  sum += (double)0.7090167704653370651;
                } else {
                  sum += (double)0.7549295666666667737;
                }
              }
            }
          } else {
            sum += (double)0.4216180380290788787;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.799153327941894531) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7418999969959259033) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7342815101146697998) ) ) {
                sum += (double)0.7409681065053936866;
              } else {
                sum += (double)0.8076508422607565629;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8281752169132232666) ) ) {
                sum += (double)0.8809698325102880423;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.704976499080657959) ) ) {
                  sum += (double)0.8017424291472867726;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8005385100841522217) ) ) {
                    sum += (double)0.8585071799999998143;
                  } else {
                    sum += (double)0.8147099986371653113;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7279000282287597656) ) ) {
              sum += (double)0.7310731467052481447;
            } else {
              sum += (double)0.6590671874097007166;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
          sum += (double)0.5503532322866511173;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3473.6513671875) ) ) {
            sum += (double)0.5295462645392797763;
          } else {
            sum += (double)0.190072976551956152;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.78423762321472168) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5850000083446502686) ) ) {
        sum += (double)0.08623536123377661955;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.481987491250038147) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6619499921798706055) ) ) {
            sum += (double)0.2097593510072980894;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1357.059814453125) ) ) {
              sum += (double)0.3180739123202218632;
            } else {
              sum += (double)0.4893331095908725614;
            }
          }
        } else {
          sum += (double)0.5178288053644113376;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09375200048089027405) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8906499743461608887) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                  sum += (double)0.004000000000000002685;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2941766232252120972) ) ) {
                    sum += (double)0.006032971428571429033;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4433.33837890625) ) ) {
                      sum += (double)0.004000000000000000083;
                    } else {
                      sum += (double)0.004601306666666666635;
                    }
                  }
                }
              } else {
                sum += (double)0.007544333333333335181;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.76446914672851562) ) ) {
                sum += (double)0.0106528000000000022;
              } else {
                sum += (double)0.004655714285714286464;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3035499900579452515) ) ) {
              sum += (double)0.03291511176470588579;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2708461582660675049) ) ) {
                sum += (double)0.01900536108843537547;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1135159991681575775) ) ) {
                  sum += (double)0.01158535238095238264;
                } else {
                  sum += (double)0.004997264516129033135;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.81547641754150391) ) ) {
            sum += (double)0.113320810748721662;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7507500052452087402) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.914350658655166626) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12556.41748046875) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-38246.78515625) ) ) {
                    sum += (double)0.04018127801087801459;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3230541497468948364) ) ) {
                      sum += (double)0.01044378947368421184;
                    } else {
                      sum += (double)0.02085759999999999698;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.47155189514160156) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.51648330688476562) ) ) {
                      sum += (double)0.05437218325123153312;
                    } else {
                      sum += (double)0.01380236666666666799;
                    }
                  } else {
                    sum += (double)0.0797523811521134024;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12785.7978515625) ) ) {
                  sum += (double)0.01258611764705882576;
                } else {
                  sum += (double)0.004748866666666667208;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1367499977350234985) ) ) {
                sum += (double)0.09389368596293999614;
              } else {
                sum += (double)0.03202540000000000248;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009349999949336051941) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4219863712787628174) ) ) {
            sum += (double)0.3961022505647911474;
          } else {
            sum += (double)0.2231651495098039284;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4622579962015151978) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6895476579666137695) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9298.3466796875) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2082829996943473816) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2755499929189682007) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9000000059604644775) ) ) {
                      sum += (double)0.02358391641791044227;
                    } else {
                      sum += (double)0.05939959293406586044;
                    }
                  } else {
                    sum += (double)0.1046699591939260765;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2445960044860839844) ) ) {
                    sum += (double)0.1318422278678114401;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17046.81640625) ) ) {
                      sum += (double)0.09286657499060685383;
                    } else {
                      sum += (double)0.03173379321637427586;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.91666793823242188) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1516500040888786316) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9150000214576721191) ) ) {
                      sum += (double)0.04455339141799303376;
                    } else {
                      sum += (double)0.1112917759261927847;
                    }
                  } else {
                    sum += (double)0.1923094919345088305;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1807818859815597534) ) ) {
                    sum += (double)0.142180462134607305;
                  } else {
                    sum += (double)0.279761413214596022;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6550000011920928955) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
                  sum += (double)0.01137747428571428757;
                } else {
                  sum += (double)0.1669348729184152447;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5039000213146209717) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3948.9285888671875) ) ) {
                      sum += (double)0.01871745454545454754;
                    } else {
                      sum += (double)0.005885431578947369208;
                    }
                  } else {
                    sum += (double)0.03309822116237277206;
                  }
                } else {
                  sum += (double)0.06062888604263772657;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)102.7730751037597656) ) ) {
              sum += (double)0.1990929842352092138;
            } else {
              sum += (double)0.3801164884661486498;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4572215080261230469) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.100659728050231934) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.72046709060668945) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.291973501443862915) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04704999923706054688) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002800000016577541828) ) ) {
                sum += (double)0.572687747435897454;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6557500064373016357) ) ) {
                  sum += (double)0.4572925594965646656;
                } else {
                  sum += (double)0.5253499478781588072;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13618.9873046875) ) ) {
                sum += (double)0.5029949214068089036;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441440001130104065) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4577737748622894287) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7761.19140625) ) ) {
                      sum += (double)0.2612663745750257172;
                    } else {
                      sum += (double)0.3948387019407104126;
                    }
                  } else {
                    sum += (double)0.1942784555248074363;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4215.1318359375) ) ) {
                    sum += (double)0.4786497946954552107;
                  } else {
                    sum += (double)0.2709597388995537148;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007500000065192580223) ) ) {
              sum += (double)0.6691027090981619407;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3596890121698379517) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3252.1646728515625) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1494499966502189636) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.346853494644165039) ) ) {
                      sum += (double)0.5086146000100939535;
                    } else {
                      sum += (double)0.3867634294553196628;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3226360082626342773) ) ) {
                      sum += (double)0.5173258509940008576;
                    } else {
                      sum += (double)0.5542141099420127004;
                    }
                  }
                } else {
                  sum += (double)0.3772857832310312354;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.009523868560791016) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.601344585418701172) ) ) {
                    sum += (double)0.5589200149313895416;
                  } else {
                    sum += (double)0.621132006451612817;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.13860893249511719) ) ) {
                    sum += (double)0.4433232089479657301;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08624999970197677612) ) ) {
                      sum += (double)0.613045805705915714;
                    } else {
                      sum += (double)0.5201614214680707615;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.34866619110107422) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2084544971585273743) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2304032072424888611) ) ) {
                sum += (double)0.2894307225793154026;
              } else {
                sum += (double)0.1275736754264687467;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17966.021484375) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.49729442596435547) ) ) {
                  sum += (double)0.4647309922188467834;
                } else {
                  sum += (double)0.4081685222744224073;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.18651199340820312) ) ) {
                  sum += (double)0.4304238356242739427;
                } else {
                  sum += (double)0.2506688178863814565;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3525566458702087402) ) ) {
              sum += (double)0.3092405122601018519;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1952999979257583618) ) ) {
                sum += (double)0.07911095535528822609;
              } else {
                sum += (double)0.2105285038626130423;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.378157496452331543) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.373043537139892578) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3787.3985595703125) ) ) {
              sum += (double)0.1427993637998076493;
            } else {
              sum += (double)0.02626340000000000272;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3403999954462051392) ) ) {
              sum += (double)0.0551783414195109248;
            } else {
              sum += (double)0.01896300000000000069;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.482179403305053711) ) ) {
            sum += (double)0.2360473643406950095;
          } else {
            sum += (double)0.09001423932646504533;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.622563481330871582) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.00396823883056641) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.508300483226776123) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.485868990421295166) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.02027034759521484) ) ) {
                  sum += (double)0.5893853908876784953;
                } else {
                  sum += (double)0.6777512117913832013;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3782.74609375) ) ) {
                  sum += (double)0.6195492783928513436;
                } else {
                  sum += (double)0.5033956824467845648;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.684098720550537109) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4361499994993209839) ) ) {
                  sum += (double)0.6393422692154916431;
                } else {
                  sum += (double)0.6123558385788802072;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1693000048398971558) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8206999897956848145) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.78281068801879883) ) ) {
                      sum += (double)0.7299846658119658604;
                    } else {
                      sum += (double)0.7582506666666666284;
                    }
                  } else {
                    sum += (double)0.7007677586232697875;
                  }
                } else {
                  sum += (double)0.650995528122248257;
                }
              }
            }
          } else {
            sum += (double)0.3591140641342143724;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.010979771614074707) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5817500054836273193) ) ) {
              sum += (double)0.734340556655685095;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7401599884033203125) ) ) {
                sum += (double)0.7911084663139329454;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1636.37713623046875) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07294999808073043823) ) ) {
                    sum += (double)0.8672849428571428598;
                  } else {
                    sum += (double)0.8105531025974025416;
                  }
                } else {
                  sum += (double)0.8942229307106149827;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.55806446075439453) ) ) {
              sum += (double)0.7463635621489619343;
            } else {
              sum += (double)0.6918141399815327386;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.081206917762756348) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6068294942378997803) ) ) {
            sum += (double)0.496532261160950561;
          } else {
            sum += (double)0.5712099802852188546;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3658.5477294921875) ) ) {
            sum += (double)0.4543153819323749731;
          } else {
            sum += (double)0.1978529513612655444;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.084967374801635742) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2601370066404342651) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1746900007128715515) ) ) {
          sum += (double)0.06650309500673673435;
        } else {
          sum += (double)0.1572509812567466081;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5296977460384368896) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595435023307800293) ) ) {
              sum += (double)0.4033530539120088743;
            } else {
              sum += (double)0.1963380676098831212;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5083524882793426514) ) ) {
              sum += (double)0.4548955992685014271;
            } else {
              sum += (double)0.6627919588711344012;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.951639533042907715) ) ) {
            sum += (double)0.357916141221087114;
          } else {
            sum += (double)0.1283067763652429027;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.17395000159740448) ) ) {
              sum += (double)0.01582067179487179481;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.22916650772094727) ) ) {
                sum += (double)0.009403542857142859271;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05701099894940853119) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03499999921768903732) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.037707500159740448) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.004506615384615384953;
                    }
                  } else {
                    sum += (double)0.005545647058823530151;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06579599902033805847) ) ) {
                    sum += (double)0.009856870588235295758;
                  } else {
                    sum += (double)0.004499487500000001403;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.77100849151611328) ) ) {
              sum += (double)0.03848053210065981167;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03070000000298023224) ) ) {
                sum += (double)0.02454439999999999747;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2672.490234375) ) ) {
                  sum += (double)0.01081710769230769496;
                } else {
                  sum += (double)0.004000000000000000083;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1250540986657142639) ) ) {
            sum += (double)0.1152123581533409102;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.73214340209960938) ) ) {
              sum += (double)0.08500212163983365821;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1249999962747097015) ) ) {
                sum += (double)0.06615259447811447369;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2130.19915771484375) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3250000029802322388) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.073708236217498779) ) ) {
                      sum += (double)0.01409444609936375686;
                    } else {
                      sum += (double)0.004709452631578947383;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.62249946594238281) ) ) {
                      sum += (double)0.01661898158017765387;
                    } else {
                      sum += (double)0.0452905979487179533;
                    }
                  }
                } else {
                  sum += (double)0.05902641513704686566;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5698890089988708496) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7399341762065887451) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9288.591796875) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6981000006198883057) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4694499969482421875) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04154999926686286926) ) ) {
                    sum += (double)0.1017020580935404511;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1734215021133422852) ) ) {
                      sum += (double)0.02184347757792233155;
                    } else {
                      sum += (double)0.0587028465272588923;
                    }
                  }
                } else {
                  sum += (double)0.1081295934594580371;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.879999995231628418) ) ) {
                  sum += (double)0.08546057875392709668;
                } else {
                  sum += (double)0.1940530721086950738;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.83103847503662109) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9150000214576721191) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05224999971687793732) ) ) {
                      sum += (double)0.03422148152692593842;
                    } else {
                      sum += (double)0.07308639275726191986;
                    }
                  } else {
                    sum += (double)0.1120382578439146487;
                  }
                } else {
                  sum += (double)0.2451774989193470644;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6331000030040740967) ) ) {
                  sum += (double)0.3166417553277409147;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5006.775146484375) ) ) {
                    sum += (double)0.1163599085770634922;
                  } else {
                    sum += (double)0.2402980438079464764;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3908079862594604492) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5949999988079071045) ) ) {
                sum += (double)0.05153098903585103668;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033021330833435059) ) ) {
                  sum += (double)0.02951543296851446771;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3199.353515625) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2459665015339851379) ) ) {
                      sum += (double)0.01141258461538461819;
                    } else {
                      sum += (double)0.02043557894736842268;
                    }
                  } else {
                    sum += (double)0.006132765217391305569;
                  }
                }
              }
            } else {
              sum += (double)0.1001718116440515338;
            }
          }
        } else {
          sum += (double)0.3155369457510663889;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.24973917007446289) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595600128173828125) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01354999979957938194) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
                sum += (double)0.6114793657219973477;
              } else {
                sum += (double)0.5193645028577936751;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2338944971561431885) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2833475619554519653) ) ) {
                  sum += (double)0.1625020412673994774;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.533998638391494751) ) ) {
                    sum += (double)0.413219776502810221;
                  } else {
                    sum += (double)0.2773973292123377288;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5255.547607421875) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.64965057373046875) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.242307662963867188) ) ) {
                      sum += (double)0.5126466136203799984;
                    } else {
                      sum += (double)0.4158199918806171902;
                    }
                  } else {
                    sum += (double)0.5655766601039206032;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2824995070695877075) ) ) {
                    sum += (double)0.3086876169536771908;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.00393199920654297) ) ) {
                      sum += (double)0.5153210636238243492;
                    } else {
                      sum += (double)0.3711867255972199353;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08009999990463256836) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.205954313278198242) ) ) {
                sum += (double)0.5690369173672895631;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1979306340217590332) ) ) {
                  sum += (double)0.6302337442378067589;
                } else {
                  sum += (double)0.6703240611111110914;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2439.1243896484375) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4160854965448379517) ) ) {
                  sum += (double)0.5557708416801842022;
                } else {
                  sum += (double)0.4549783600101013348;
                }
              } else {
                sum += (double)0.6435355147896878458;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.65734291076660156) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8092.22021484375) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2674500048160552979) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12223.82666015625) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5823000073432922363) ) ) {
                    sum += (double)0.2799984917403242068;
                  } else {
                    sum += (double)0.1733082445202797917;
                  }
                } else {
                  sum += (double)0.4038189921613960509;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7161499857902526855) ) ) {
                  sum += (double)0.4952938856201469786;
                } else {
                  sum += (double)0.360262945841757054;
                }
              }
            } else {
              sum += (double)0.1517941531292374135;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3565506190061569214) ) ) {
              sum += (double)0.2663440021648009748;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3227570056915283203) ) ) {
                sum += (double)0.07421321656544146994;
              } else {
                sum += (double)0.1647665924399956683;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3836105018854141235) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05865000002086162567) ) ) {
            sum += (double)0.1466134917145485717;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1706000044941902161) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2988149970769882202) ) ) {
                sum += (double)0.02391866887874031025;
              } else {
                sum += (double)0.07788554303818125135;
              }
            } else {
              sum += (double)0.1015621236223883672;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.668108701705932617) ) ) {
            sum += (double)0.2676503841889550928;
          } else {
            sum += (double)0.1011756693621496117;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7020279765129089355) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7429124116897583008) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.209627151489257812) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5121190249919891357) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2582.5341796875) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09219999983906745911) ) ) {
                    sum += (double)0.6424335327444088417;
                  } else {
                    sum += (double)0.5958671946325303503;
                  }
                } else {
                  sum += (double)0.560549248129710409;
                }
              } else {
                sum += (double)0.6810171710165341397;
              }
            } else {
              sum += (double)0.5288478733562308465;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.558600008487701416) ) ) {
              sum += (double)0.6048921242381121166;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1508.35369873046875) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6386435031890869141) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08517190068960189819) ) ) {
                    sum += (double)0.6916379355698287767;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1679637953639030457) ) ) {
                      sum += (double)0.6292374937321938422;
                    } else {
                      sum += (double)0.6627456952380952337;
                    }
                  }
                } else {
                  sum += (double)0.746452958730158711;
                }
              } else {
                sum += (double)0.7743391379781421335;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.881829261779785156) ) ) {
            sum += (double)0.5502925888897004514;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3698.1630859375) ) ) {
              sum += (double)0.4670047356263829497;
            } else {
              sum += (double)0.3096516441786701379;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.725079536437988281) ) ) {
          sum += (double)0.7198177909773233463;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            sum += (double)0.7547326651974765044;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3625.1453857421875) ) ) {
              sum += (double)0.8196767393023257631;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8970000147819519043) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07954045012593269348) ) ) {
                  sum += (double)0.8305391110432051027;
                } else {
                  sum += (double)0.8838581714285714819;
                }
              } else {
                sum += (double)0.8982829749999999835;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.580495357513427734) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4811269938945770264) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.75) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2199999988079071045) ) ) {
            sum += (double)0.07299132947934937332;
          } else {
            sum += (double)0.1740172918270672942;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2107.3248291015625) ) ) {
            sum += (double)0.395007414293565895;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.49186086654663086) ) ) {
              sum += (double)0.1041491034510381303;
            } else {
              sum += (double)0.3482278163409505134;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.559079647064208984) ) ) {
          sum += (double)0.5841596255555426831;
        } else {
          sum += (double)0.3442830675672662322;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8349999785423278809) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.70559215545654297) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1254660002887248993) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.78429794311523438) ) ) {
                sum += (double)0.0240601894736842091;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7736000120639801025) ) ) {
                  sum += (double)0.004485999999999999537;
                } else {
                  sum += (double)0.009622506666666667471;
                }
              }
            } else {
              sum += (double)0.0663021791748673317;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1488.8948974609375) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.25) ) ) {
                    sum += (double)0.006225483870967743645;
                  } else {
                    sum += (double)0.004000000000000002685;
                  }
                } else {
                  sum += (double)0.01012240000000000188;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.53365325927734375) ) ) {
                  sum += (double)0.0237527860805860809;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09655100107192993164) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2353999987244606018) ) ) {
                      sum += (double)0.006095024999999999575;
                    } else {
                      sum += (double)0.004000000000000000951;
                    }
                  } else {
                    sum += (double)0.01171302500000000017;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)259.0690078735351562) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8054935336112976074) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.25769424438476562) ) ) {
                    sum += (double)0.01027452727272727337;
                  } else {
                    sum += (double)0.02896760000000000307;
                  }
                } else {
                  sum += (double)0.004522042105263157988;
                }
              } else {
                sum += (double)0.03528758419354838943;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3798435032367706299) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1339722797274589539) ) ) {
              sum += (double)0.1202364685334135208;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4743999987840652466) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1948219984769821167) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.94373846054077148) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.14531850814819336) ) ) {
                      sum += (double)0.01605220000000000258;
                    } else {
                      sum += (double)0.04905595103122047801;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)47.08901596069335938) ) ) {
                      sum += (double)0.01340142012266736307;
                    } else {
                      sum += (double)0.02272977264069263661;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3274.693359375) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.9375) ) ) {
                      sum += (double)0.1313648715928119881;
                    } else {
                      sum += (double)0.03760663250605604524;
                    }
                  } else {
                    sum += (double)0.01980321462365591464;
                  }
                }
              } else {
                sum += (double)0.1048497737432188825;
              }
            }
          } else {
            sum += (double)0.1392111902737348528;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000071246176958) ) ) {
          sum += (double)0.3582703233459524905;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6792999804019927979) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5198086798191070557) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5051.124267578125) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.359081655740737915) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9250000119209289551) ) ) {
                    sum += (double)0.08955292300047684728;
                  } else {
                    sum += (double)0.04434146215689072079;
                  }
                } else {
                  sum += (double)0.1243903997373514148;
                }
              } else {
                sum += (double)0.2231361063497373509;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3853085041046142578) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4219999909400939941) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24696.494140625) ) ) {
                    sum += (double)0.01125919610215053886;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.89246177673339844) ) ) {
                      sum += (double)0.01372962352941176772;
                    } else {
                      sum += (double)0.03593391538461539192;
                    }
                  }
                } else {
                  sum += (double)0.03989108648255406536;
                }
              } else {
                sum += (double)0.1145538821672674457;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2634999901056289673) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.846249997615814209) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
                  sum += (double)0.3053719195061001535;
                } else {
                  sum += (double)0.1983883365923055364;
                }
              } else {
                sum += (double)0.1566808424774146502;
              }
            } else {
              sum += (double)0.09488458750408264308;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5279635190963745117) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9531540870666503906) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.63482379913330078) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.291973501443862915) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
              sum += (double)0.6030564520773342707;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.806060552597045898) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.784518003463745117) ) ) {
                  sum += (double)0.5283762387501385049;
                } else {
                  sum += (double)0.4273364272719912815;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5278.861572265625) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.43001461029052734) ) ) {
                      sum += (double)0.2788123217354507299;
                    } else {
                      sum += (double)0.3988479380465844715;
                    }
                  } else {
                    sum += (double)0.4708860089347781663;
                  }
                } else {
                  sum += (double)0.2279991917608985563;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.742563396692276001) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4555640071630477905) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003550000139512121677) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.30740070343017578) ) ) {
                    sum += (double)0.5913527614254100451;
                  } else {
                    sum += (double)0.6755499890756302417;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.42348003387451172) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4900.33984375) ) ) {
                      sum += (double)0.511192576084991801;
                    } else {
                      sum += (double)0.5734880135336727358;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07550000026822090149) ) ) {
                      sum += (double)0.5469110014923098673;
                    } else {
                      sum += (double)0.4486600686830611306;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.53805637359619141) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2950.7305908203125) ) ) {
                    sum += (double)0.6151217915318941687;
                  } else {
                    sum += (double)0.5462798342364043602;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5806.47509765625) ) ) {
                    sum += (double)0.6130232927997675274;
                  } else {
                    sum += (double)0.6760045271604938621;
                  }
                }
              }
            } else {
              sum += (double)0.4361763678846236059;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3351285010576248169) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3525566458702087402) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7301000058650970459) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6457999944686889648) ) ) {
                  sum += (double)0.2736860533314750543;
                } else {
                  sum += (double)0.3790883437569302905;
                }
              } else {
                sum += (double)0.1645297900203241404;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5148389041423797607) ) ) {
                sum += (double)0.06934065465589525634;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2221499979496002197) ) ) {
                  sum += (double)0.1529172425719257378;
                } else {
                  sum += (double)0.2470706396668462257;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4785500019788742065) ) ) {
              sum += (double)0.2261272679502136784;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2666313499212265015) ) ) {
                sum += (double)0.3660910124464320514;
              } else {
                sum += (double)0.5434751803208864862;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.866363763809204102) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3642215132713317871) ) ) {
            sum += (double)0.1046681374960977545;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1655.2418212890625) ) ) {
              sum += (double)0.4255339608443589605;
            } else {
              sum += (double)0.1592631845968905946;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.277976691722869873) ) ) {
            sum += (double)0.1475793654805872268;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07689999788999557495) ) ) {
              sum += (double)0.09764903617964669491;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.96669244766235352) ) ) {
                sum += (double)0.04253356418572720038;
              } else {
                sum += (double)0.009366399999999998685;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062593340873718262) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7417580187320709229) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.367253541946411133) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.629723548889160156) ) ) {
              sum += (double)0.6647835005131077502;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.166855335235595703) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6218225061893463135) ) ) {
                  sum += (double)0.7513044666666667259;
                } else {
                  sum += (double)0.8127791952978055123;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5886189937591552734) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5603069961071014404) ) ) {
                    sum += (double)0.7243278100000000164;
                  } else {
                    sum += (double)0.6772581311965811812;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.819999992847442627) ) ) {
                    sum += (double)0.7378517523809523526;
                  } else {
                    sum += (double)0.7542944426303854755;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6074154973030090332) ) ) {
              sum += (double)0.596760245832796854;
            } else {
              sum += (double)0.6636116615912017735;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1121499985456466675) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9077499806880950928) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06707561388611793518) ) ) {
                sum += (double)0.8382626765004543845;
              } else {
                sum += (double)0.8602310588235293487;
              }
            } else {
              sum += (double)0.8877581333333334213;
            }
          } else {
            sum += (double)0.7722766270787475573;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6745850145816802979) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.324640274047851562) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.578380882740020752) ) ) {
              sum += (double)0.5475073246424236872;
            } else {
              sum += (double)0.4551423684295757277;
            }
          } else {
            sum += (double)0.2529084483180334408;
          }
        } else {
          sum += (double)0.5894111675664520655;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.930952310562133789) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5200000107288360596) ) ) {
          sum += (double)0.1620362516751846227;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.10267829895019531) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.308849811553955078) ) ) {
              sum += (double)0.1458970530138864186;
            } else {
              sum += (double)0.3041997634425007146;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1693.33221435546875) ) ) {
              sum += (double)0.328662570995159109;
            } else {
              sum += (double)0.4893608509202568846;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.041044771671295166) ) ) {
          sum += (double)0.6354389949917030878;
        } else {
          sum += (double)0.4546272854194445823;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.01704549789428711) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1254660002887248993) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4006.188720703125) ) ) {
                sum += (double)0.02962216777777778448;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09063849970698356628) ) ) {
                  sum += (double)0.006020255999999999004;
                } else {
                  sum += (double)0.01480020000000000467;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.710317611694335938) ) ) {
                sum += (double)0.03271643696237981624;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.12549018859863281) ) ) {
                  sum += (double)0.140897062341894419;
                } else {
                  sum += (double)0.05878352618693134801;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.51062774658203125) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3553000092506408691) ) ) {
                    sum += (double)0.004501088888888889888;
                  } else {
                    sum += (double)0.01358305000000000276;
                  }
                } else {
                  sum += (double)0.02982771709401709978;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                      sum += (double)0.004053441666666669427;
                    } else {
                      sum += (double)0.004824082352941178389;
                    }
                  } else {
                    sum += (double)0.007331799999999999429;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04499999992549419403) ) ) {
                    sum += (double)0.01834843469387755291;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)40.41071510314941406) ) ) {
                      sum += (double)0.008152666666666667436;
                    } else {
                      sum += (double)0.005545760000000000273;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.16307353973388672) ) ) {
                sum += (double)0.05058474560827355693;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8009499907493591309) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2607544958591461182) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3084499984979629517) ) ) {
                      sum += (double)0.00519920000000000191;
                    } else {
                      sum += (double)0.01905601186440677997;
                    }
                  } else {
                    sum += (double)0.03808629645376503808;
                  }
                } else {
                  sum += (double)0.04783989523809523831;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.41989421844482422) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6701500117778778076) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6825048625469207764) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0271500004455447197) ) ) {
                    sum += (double)0.125632431276798795;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07215000316500663757) ) ) {
                      sum += (double)0.03809118273087128137;
                    } else {
                      sum += (double)0.08411808802243156413;
                    }
                  }
                } else {
                  sum += (double)0.02074851884742560243;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7649500072002410889) ) ) {
                  sum += (double)0.2678096474251582815;
                } else {
                  sum += (double)0.1494455393744205385;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07544999942183494568) ) ) {
                sum += (double)0.4023881853932896879;
              } else {
                sum += (double)0.1972238790879345671;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5949999988079071045) ) ) {
              sum += (double)0.1556198030613122063;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.89444446563720703) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.056189596652984619) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.197749994695186615) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16484.28515625) ) ) {
                      sum += (double)0.08910075473077447294;
                    } else {
                      sum += (double)0.04029567109230004773;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.03636360168457031) ) ) {
                      sum += (double)0.1507181912600185081;
                    } else {
                      sum += (double)0.06597669596634514466;
                    }
                  }
                } else {
                  sum += (double)0.0226694053655264946;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9094765186309814453) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2623000070452690125) ) ) {
                    sum += (double)0.02467023932946485823;
                  } else {
                    sum += (double)0.04533347461345158674;
                  }
                } else {
                  sum += (double)0.01023719538032656466;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5200000107288360596) ) ) {
          sum += (double)0.08091496957779063803;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.50174808502197266) ) ) {
            sum += (double)0.1613645230659536689;
          } else {
            sum += (double)0.3780165532623363522;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4760459959506988525) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9564632177352905273) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.09288978576660156) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3549064993858337402) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2322600036859512329) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07519999891519546509) ) ) {
                sum += (double)0.4902599721841074953;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4906999915838241577) ) ) {
                  sum += (double)0.3391114909793574994;
                } else {
                  sum += (double)0.1946270855041159487;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
                sum += (double)0.6357186458858214984;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1543499976396560669) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.30856609344482422) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2736265063285827637) ) ) {
                      sum += (double)0.3869047572006207303;
                    } else {
                      sum += (double)0.5099200574806667108;
                    }
                  } else {
                    sum += (double)0.3702733255180257754;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.80555534362792969) ) ) {
                    sum += (double)0.5096238480717626418;
                  } else {
                    sum += (double)0.5665753090584909613;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999886320438236) ) ) {
              sum += (double)0.6993879499999998695;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.253616824746131897) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3560.574462890625) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6804.6591796875) ) ) {
                    sum += (double)0.5963273554818253608;
                  } else {
                    sum += (double)0.5569543317523056869;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4103675037622451782) ) ) {
                    sum += (double)0.5993564093023255879;
                  } else {
                    sum += (double)0.6500999476543209976;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2789.1171875) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1596499979496002197) ) ) {
                    sum += (double)0.5876135156966491024;
                  } else {
                    sum += (double)0.5589350297317083882;
                  }
                } else {
                  sum += (double)0.4994978432770009191;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3711020052433013916) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.36721611022949219) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7466000020503997803) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19895.677734375) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.42591762542724609) ) ) {
                    sum += (double)0.4980170904700322865;
                  } else {
                    sum += (double)0.3892621857315667344;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.88666629791259766) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3115000128746032715) ) ) {
                      sum += (double)0.2901100778548200143;
                    } else {
                      sum += (double)0.1488947586825945524;
                    }
                  } else {
                    sum += (double)0.3886556972576666324;
                  }
                }
              } else {
                sum += (double)0.1534357638480372266;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2740000039339065552) ) ) {
                sum += (double)0.0628053914231273408;
              } else {
                sum += (double)0.2314810037177440771;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.67706918716430664) ) ) {
              sum += (double)0.5737823061043566542;
            } else {
              sum += (double)0.3743944793538511728;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.115217328071594238) ) ) {
          sum += (double)0.3274687684790336673;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4480980038642883301) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.271773815155029297) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2167500033974647522) ) ) {
                sum += (double)0.3044989389015591019;
              } else {
                sum += (double)0.1328283832619961413;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3847860097885131836) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4313.30517578125) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.196928501129150391) ) ) {
                    sum += (double)0.1053100673032799778;
                  } else {
                    sum += (double)0.05665317831011210115;
                  }
                } else {
                  sum += (double)0.02477929090909090915;
                }
              } else {
                sum += (double)0.1580455862709737314;
              }
            }
          } else {
            sum += (double)0.2685188536007504512;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.043774247169494629) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6567690074443817139) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06890000030398368835) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.347228527069091797) ) ) {
              sum += (double)0.6675408127635862332;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.59545445442199707) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8599999845027923584) ) ) {
                  sum += (double)0.7395126000000000754;
                } else {
                  sum += (double)0.768617362499999901;
                }
              } else {
                sum += (double)0.7006953529411764636;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.98964595794677734) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.547071993350982666) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7691500186920166016) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6625.02880859375) ) ) {
                    sum += (double)0.5918053344599457644;
                  } else {
                    sum += (double)0.642577958048764164;
                  }
                } else {
                  sum += (double)0.5428097477828899287;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5938400030136108398) ) ) {
                  sum += (double)0.6369355374719416485;
                } else {
                  sum += (double)0.6894201826077097639;
                }
              }
            } else {
              sum += (double)0.4795198536611570139;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7701259851455688477) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03490000031888484955) ) ) {
              sum += (double)0.8168412606822610389;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.11821985244750977) ) ) {
                sum += (double)0.7170864856510629215;
              } else {
                sum += (double)0.7788648088099934252;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0385500006377696991) ) ) {
              sum += (double)0.8926417981818181024;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7566.576904296875) ) ) {
                sum += (double)0.7816689532394366369;
              } else {
                sum += (double)0.8362494692938814422;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2998.645751953125) ) ) {
          sum += (double)0.5799765506368629309;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.259615302085876465) ) ) {
            sum += (double)0.4662480120968728881;
          } else {
            sum += (double)0.1948678383008138615;
          }
        }
      }
    }
  }
  return sum;
}
