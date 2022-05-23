#include "prediction.h"
double predict_margin_unit1(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.099671125411987305) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1767930015921592712) ) ) {
          sum += (double)0.07394322222222221574;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-767.328643798828125) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2130664139986038208) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000095367431641) ) ) {
                sum += (double)0.2476900500000000227;
              } else {
                sum += (double)0.3827070750000000077;
              }
            } else {
              sum += (double)0.2114955700000000216;
            }
          } else {
            sum += (double)0.1141888166666666649;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2685000002384185791) ) ) {
          sum += (double)0.3365834374999999712;
        } else {
          sum += (double)0.5280665500000000234;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2284030020236968994) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8949999809265136719) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0722170025110244751) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1370999962091445923) ) ) {
              sum += (double)0.02428575000000000178;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1649999991059303284) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8874999880790710449) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.04945182800292969) ) ) {
                      sum += (double)0.004330593750000000242;
                    } else {
                      sum += (double)0.002500000000000001787;
                    }
                  } else {
                    sum += (double)0.006408375000000000009;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5417499840259552002) ) ) {
                    sum += (double)0.002897727272727272738;
                  } else {
                    sum += (double)0.00735278571428571448;
                  }
                }
              } else {
                sum += (double)0.01379558620689655228;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.59999990463256836) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.63888931274414062) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5385999977588653564) ) ) {
                  sum += (double)0.07072235714285714236;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4531.24609375) ) ) {
                    sum += (double)0.05416051923076924124;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.64935016632080078) ) ) {
                      sum += (double)0.02281281250000000149;
                    } else {
                      sum += (double)0.01125626785714285878;
                    }
                  }
                }
              } else {
                sum += (double)0.1462791973684210434;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08158849924802780151) ) ) {
                sum += (double)0.07115305882352940259;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7384906113147735596) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6231046319007873535) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1954500004649162292) ) ) {
                      sum += (double)0.01943893644067794593;
                    } else {
                      sum += (double)0.03897143292682925947;
                    }
                  } else {
                    sum += (double)0.06826048333333332996;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3599999994039535522) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)45.16798782348632812) ) ) {
                      sum += (double)0.00691453846153846155;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  } else {
                    sum += (double)0.01265044444444444333;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02455000020563602448) ) ) {
            sum += (double)0.2685713874999999806;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.519097059965133667) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3397323042154312134) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1632634997367858887) ) ) {
                  sum += (double)0.02217799999999999633;
                } else {
                  sum += (double)0.07733457894736842086;
                }
              } else {
                sum += (double)0.1236753970588235219;
              }
            } else {
              sum += (double)0.01927459090909091136;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5704225003719329834) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5750868022441864014) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009349999949336051941) ) ) {
              sum += (double)0.3126087678571428663;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.53819465637207031) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.85480976104736328) ) ) {
                  sum += (double)0.1026539537037037264;
                } else {
                  sum += (double)0.04137871153846153782;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9298.3466796875) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6195000112056732178) ) ) {
                    sum += (double)0.06718056249999999896;
                  } else {
                    sum += (double)0.1402520588235293963;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1976684331893920898) ) ) {
                    sum += (double)0.1159335600000000049;
                  } else {
                    sum += (double)0.286023982142857125;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4285600036382675171) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.23529434204101562) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2699165046215057373) ) ) {
                  sum += (double)0.06366663333333331953;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.19999980926513672) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1581.92425537109375) ) ) {
                      sum += (double)0.02543449999999999878;
                    } else {
                      sum += (double)0.003311711538461538547;
                    }
                  } else {
                    sum += (double)0.04328605000000000647;
                  }
                }
              } else {
                sum += (double)0.09968530952380950938;
              }
            } else {
              sum += (double)0.1353216428571428487;
            }
          }
        } else {
          sum += (double)0.3244425833333333675;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.47614249587059021) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3170884996652603149) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01730000041425228119) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4116500020027160645) ) ) {
              sum += (double)0.5219714583333332492;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6375000178813934326) ) ) {
                sum += (double)0.3395619318181818391;
              } else {
                sum += (double)0.4217925156250000862;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.008303403854370117) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6017999947071075439) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4813999980688095093) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.558318376541137695) ) ) {
                    sum += (double)0.3800477941176469976;
                  } else {
                    sum += (double)0.3138476413043478352;
                  }
                } else {
                  sum += (double)0.4256273854166667259;
                }
              } else {
                sum += (double)0.2855848560606060182;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19397.1982421875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.69377422332763672) ) ) {
                  sum += (double)0.3293166944444443911;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3853500038385391235) ) ) {
                    sum += (double)0.1428946562500000295;
                  } else {
                    sum += (double)0.2511810416666666601;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.46942424774169922) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11768.07080078125) ) ) {
                    sum += (double)0.3728648392857142335;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2661901116371154785) ) ) {
                      sum += (double)0.1139525441176470477;
                    } else {
                      sum += (double)0.2132418157894736821;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2514294907450675964) ) ) {
                    sum += (double)0.1098737314814814819;
                  } else {
                    sum += (double)0.1796284782608695563;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1274499967694282532) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3380685001611709595) ) ) {
              sum += (double)0.4203455652173912482;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03655000030994415283) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.74916553497314453) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1841811239719390869) ) ) {
                    sum += (double)0.5218527499999999764;
                  } else {
                    sum += (double)0.4751465263157894081;
                  }
                } else {
                  sum += (double)0.5864322200000000596;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2487.288818359375) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.32775115966796875) ) ) {
                    sum += (double)0.4783961931818181967;
                  } else {
                    sum += (double)0.395025000000000015;
                  }
                } else {
                  sum += (double)0.5610597777777778239;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7603584527969360352) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3398620039224624634) ) ) {
                sum += (double)0.3187214615384615923;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4137589931488037109) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7084999978542327881) ) ) {
                    sum += (double)0.4655240795454545499;
                  } else {
                    sum += (double)0.4000559285714285762;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4451989978551864624) ) ) {
                    sum += (double)0.3059504464285714986;
                  } else {
                    sum += (double)0.433345461538461485;
                  }
                }
              }
            } else {
              sum += (double)0.231161499999999992;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.935240745544433594) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5132.362060546875) ) ) {
            sum += (double)0.3530721842105263297;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.328200995922088623) ) ) {
              sum += (double)0.03148020588235295181;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.936561226844787598) ) ) {
                sum += (double)0.252230014705882355;
              } else {
                sum += (double)0.1493918357142856868;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29237.2587890625) ) ) {
            sum += (double)0.1328674999999999995;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3537499904632568359) ) ) {
              sum += (double)0.06558223333333333682;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.1869044303894043) ) ) {
                sum += (double)0.02721521153846153881;
              } else {
                sum += (double)0.01106599999999999945;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3012500107288360596) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6759060025215148926) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.138076305389404297) ) ) {
            sum += (double)0.4509378148148148746;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2450.8575439453125) ) ) {
              sum += (double)0.3849632672413793033;
            } else {
              sum += (double)0.1853449583333333095;
            }
          }
        } else {
          sum += (double)0.5756255156250000837;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6519050002098083496) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005999999819323420525) ) ) {
            sum += (double)0.6880173000000000538;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.539483487606048584) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10416.89599609375) ) ) {
                sum += (double)0.4571858888888888917;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.4509429931640625) ) ) {
                  sum += (double)0.4888697159090909516;
                } else {
                  sum += (double)0.5672562403846154178;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7678.364013671875) ) ) {
                sum += (double)0.5190166315789473961;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.015925168991088867) ) ) {
                  sum += (double)0.5572947647058823506;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.648395776748657227) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.94097232818603516) ) ) {
                      sum += (double)0.6338617678571428771;
                    } else {
                      sum += (double)0.6837228088235294265;
                    }
                  } else {
                    sum += (double)0.6020569090909089205;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7701259851455688477) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2039.78265380859375) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1173499971628189087) ) ) {
                sum += (double)0.7027701124999998772;
              } else {
                sum += (double)0.6451597282608695361;
              }
            } else {
              sum += (double)0.7721068214285715658;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1056000031530857086) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8551464974880218506) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02989999949932098389) ) ) {
                  sum += (double)0.8462484117647059989;
                } else {
                  sum += (double)0.7821900192307692512;
                }
              } else {
                sum += (double)0.8841309531250000076;
              }
            } else {
              sum += (double)0.761207761363636326;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.253819003701210022) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.464285612106323242) ) ) {
          sum += (double)0.0930773863636363552;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.16666650772094727) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1219644993543624878) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                sum += (double)0.005572863636363637081;
              } else {
                sum += (double)0.03489591666666665842;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.189999997615814209) ) ) {
                sum += (double)0.07645519999999998706;
              } else {
                sum += (double)0.0289200865384615334;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07228600233793258667) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1733499988913536072) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03499999921768903732) ) ) {
                    sum += (double)0.002500000000000001787;
                  } else {
                    sum += (double)0.003539309523809523999;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2238999977707862854) ) ) {
                    sum += (double)0.007222250000000001238;
                  } else {
                    sum += (double)0.002500000000000000486;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4651783406734466553) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02955000009387731552) ) ) {
                    sum += (double)0.02057875000000000329;
                  } else {
                    sum += (double)0.005021312499999999734;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.67856979370117188) ) ) {
                    sum += (double)0.007157285714285714986;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8385.6435546875) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6620510518550872803) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4632500112056732178) ) ) {
                    sum += (double)0.03195014285714285751;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)94.16336441040039062) ) ) {
                      sum += (double)0.01708319444444444252;
                    } else {
                      sum += (double)0.006333194444444444245;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2750000059604644775) ) ) {
                    sum += (double)0.003200000000000000587;
                  } else {
                    sum += (double)0.00734976666666666608;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5527.55078125) ) ) {
                  sum += (double)0.06227607142857142369;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.81818199157714844) ) ) {
                    sum += (double)0.0389456874999999994;
                  } else {
                    sum += (double)0.004848466666666667244;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.979166507720947266) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.58867311477661133) ) ) {
            sum += (double)0.09015492187500000199;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.98512649536132812) ) ) {
              sum += (double)0.2606327142857142731;
            } else {
              sum += (double)0.1459052916666666588;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.25311374664306641) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02309999987483024597) ) ) {
              sum += (double)0.2085999791666666436;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1592695042490959167) ) ) {
                sum += (double)0.02148180000000000228;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.18739128112792969) ) ) {
                    sum += (double)0.08365022058823529116;
                  } else {
                    sum += (double)0.1328533593750000075;
                  }
                } else {
                  sum += (double)0.05640273750000000808;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2125400006771087646) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4488500058650970459) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.52360057830810547) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.334099993109703064) ) ) {
                    sum += (double)0.004663531250000000142;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.16771602630615234) ) ) {
                      sum += (double)0.03776041666666665741;
                    } else {
                      sum += (double)0.08230093749999999042;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1525499969720840454) ) ) {
                    sum += (double)0.008302999999999999617;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7750000059604644775) ) ) {
                      sum += (double)0.01377713888888888911;
                    } else {
                      sum += (double)0.02810572499999999807;
                    }
                  }
                }
              } else {
                sum += (double)0.08019688333333334362;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.04549026489257812) ) ) {
                sum += (double)0.02159879687500000298;
              } else {
                sum += (double)0.1235781911764705782;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.258169889450073242) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6556589901447296143) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01114999968558549881) ) ) {
            sum += (double)0.3800254264705882901;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.76262664794921875) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.972623109817504883) ) ) {
                sum += (double)0.276835062499999951;
              } else {
                sum += (double)0.1542760499999999979;
              }
            } else {
              sum += (double)0.3341802343750000515;
            }
          }
        } else {
          sum += (double)0.526575161764705979;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6012789905071258545) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.36666679382324219) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.670041203498840332) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06535000167787075043) ) ) {
                sum += (double)0.06118904545454546123;
              } else {
                sum += (double)0.1597232031249999906;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4778615087270736694) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1658.96588134765625) ) ) {
                  sum += (double)0.02871651388888889211;
                } else {
                  sum += (double)0.007549480000000001641;
                }
              } else {
                sum += (double)0.06840382812499999632;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3200000077486038208) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
                sum += (double)0.009879578947368421529;
              } else {
                sum += (double)0.08949260937500000401;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7335.450927734375) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4215000122785568237) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2704290598630905151) ) ) {
                    sum += (double)0.1424197999999999853;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)133.2827377319335938) ) ) {
                      sum += (double)0.03211014583333333255;
                    } else {
                      sum += (double)0.0860383846153846138;
                    }
                  }
                } else {
                  sum += (double)0.2040587884615385206;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.680000007152557373) ) ) {
                  sum += (double)0.2048602361111111492;
                } else {
                  sum += (double)0.349454961538461617;
                }
              }
            }
          }
        } else {
          sum += (double)0.3138556111111111546;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4562695026397705078) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.010357707738876343) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.292966499924659729) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
              sum += (double)0.5274253125000000209;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2363299950957298279) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.55174398422241211) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4208000004291534424) ) ) {
                    sum += (double)0.270920983333333365;
                  } else {
                    sum += (double)0.3335801041666666689;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9650.86572265625) ) ) {
                    sum += (double)0.2614229342105263143;
                  } else {
                    sum += (double)0.167593730769230731;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4853.616455078125) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.989130496978759766) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2759589999914169312) ) ) {
                      sum += (double)0.4418095208333334134;
                    } else {
                      sum += (double)0.3545413749999999919;
                    }
                  } else {
                    sum += (double)0.3351762647058822986;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3040.9080810546875) ) ) {
                    sum += (double)0.2038801785714285941;
                  } else {
                    sum += (double)0.3727906666666666591;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08630000054836273193) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3636019974946975708) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.593799591064453125) ) ) {
                  sum += (double)0.3953238815789473781;
                } else {
                  sum += (double)0.4767937173913043281;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.735190153121948242) ) ) {
                  sum += (double)0.4750455681818181453;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6965000033378601074) ) ) {
                    sum += (double)0.5551280555555554441;
                  } else {
                    sum += (double)0.5187325689655172267;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2480.1729736328125) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.00507354736328125) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2935499995946884155) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3946314901113510132) ) ) {
                      sum += (double)0.4608801691176471205;
                    } else {
                      sum += (double)0.4119918833333333086;
                    }
                  } else {
                    sum += (double)0.3789469624999999842;
                  }
                } else {
                  sum += (double)0.3537882399999999206;
                }
              } else {
                sum += (double)0.5283247500000000096;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2553090006113052368) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-31638.9775390625) ) ) {
              sum += (double)0.2503832386363636364;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3523451536893844604) ) ) {
                sum += (double)0.1515706770833333272;
              } else {
                sum += (double)0.07586533333333332629;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7499605417251586914) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3344369977712631226) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3040269911289215088) ) ) {
                  sum += (double)0.3063495258620689277;
                } else {
                  sum += (double)0.1517717500000000108;
                }
              } else {
                sum += (double)0.3614260285714285814;
              }
            } else {
              sum += (double)0.1316613249999999957;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.234565258026123047) ) ) {
          sum += (double)0.2752337999999999729;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.917300224304199219) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3129.850341796875) ) ) {
              sum += (double)0.229758283333333313;
            } else {
              sum += (double)0.06955502631578945605;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.274611353874206543) ) ) {
              sum += (double)0.1075384310344827399;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.98633003234863281) ) ) {
                sum += (double)0.05011285714285714649;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1409000009298324585) ) ) {
                  sum += (double)0.03220648611111111281;
                } else {
                  sum += (double)0.007779394736842104065;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031407535076141357) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.73684215545654297) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5464695096015930176) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.15344905853271484) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6326000094413757324) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.280472755432128906) ) ) {
                    sum += (double)0.5085166250000000554;
                  } else {
                    sum += (double)0.4318909305555556077;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1096890866756439209) ) ) {
                    sum += (double)0.5014743970588235733;
                  } else {
                    sum += (double)0.5726408828124999184;
                  }
                }
              } else {
                sum += (double)0.6153185227272728319;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1049031242728233337) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07074393704533576965) ) ) {
                  sum += (double)0.6995227812500000031;
                } else {
                  sum += (double)0.6473371000000001096;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3694.7540283203125) ) ) {
                  sum += (double)0.561024416666666581;
                } else {
                  sum += (double)0.6154709609374999779;
                }
              }
            }
          } else {
            sum += (double)0.3603434285714285368;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6741120219230651855) ) ) {
              sum += (double)0.7268468157894737436;
            } else {
              sum += (double)0.6505762890624999795;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.126100003719329834) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8550899922847747803) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.552367925643920898) ) ) {
                  sum += (double)0.8195014196428572761;
                } else {
                  sum += (double)0.7483235526315790143;
                }
              } else {
                sum += (double)0.8676788928571429471;
              }
            } else {
              sum += (double)0.6890279791666666931;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.042213857173919678) ) ) {
          sum += (double)0.4443011363636364952;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2566.5250244140625) ) ) {
            sum += (double)0.366474163461538438;
          } else {
            sum += (double)0.1879859270833333096;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4211225062608718872) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.084967374801635742) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7849999964237213135) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8091499805450439453) ) ) {
            sum += (double)0.09003488888888887265;
          } else {
            sum += (double)0.1625120681818181534;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.93142843246459961) ) ) {
            sum += (double)0.1932654423076923533;
          } else {
            sum += (double)0.4636728888888888567;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2849999964237213135) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37857151031494141) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1146005019545555115) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.09259223937988281) ) ) {
                sum += (double)0.05852674999999998851;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07176900282502174377) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.87334251403808594) ) ) {
                    sum += (double)0.01026907499999999904;
                  } else {
                    sum += (double)0.002867647058823529459;
                  }
                } else {
                  sum += (double)0.02837911250000000468;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1501.1708984375) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2548.2781982421875) ) ) {
                  sum += (double)0.03829254999999999465;
                } else {
                  sum += (double)0.1353266071428571304;
                }
              } else {
                sum += (double)0.02251825000000000007;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)62.72380828857421875) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5364.494140625) ) ) {
                sum += (double)0.04709156249999998933;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1099875010550022125) ) ) {
                  sum += (double)0.0110996666666666674;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.54285717010498047) ) ) {
                    sum += (double)0.005271970588235293763;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1432655006647109985) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8356499969959259033) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.00282361363636363669;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.544293135404586792) ) ) {
                      sum += (double)0.01192614705882352917;
                    } else {
                      sum += (double)0.003172590909090909194;
                    }
                  }
                } else {
                  sum += (double)0.008744333333333333125;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4120500087738037109) ) ) {
                  sum += (double)0.01766343749999999685;
                } else {
                  sum += (double)0.006078166666666669216;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6630390286445617676) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9005.986328125) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2422170042991638184) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08462249860167503357) ) ) {
                  sum += (double)0.09405896590909092192;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12970.849609375) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5500000119209289551) ) ) {
                      sum += (double)0.01248322916666667025;
                    } else {
                      sum += (double)0.03606447619047618153;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1712749972939491272) ) ) {
                      sum += (double)0.02883615625000000501;
                    } else {
                      sum += (double)0.08765474999999998962;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.45055007934570312) ) ) {
                  sum += (double)0.1208610499999999977;
                } else {
                  sum += (double)0.07021933333333332805;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.0151214599609375) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1471500024199485779) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01399999996647238731) ) ) {
                    sum += (double)0.1680660937499999785;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9050000011920928955) ) ) {
                      sum += (double)0.03921838020833332689;
                    } else {
                      sum += (double)0.0838067596153846267;
                    }
                  }
                } else {
                  sum += (double)0.1933970416666666303;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2228009998798370361) ) ) {
                  sum += (double)0.1435472000000000414;
                } else {
                  sum += (double)0.2929076136363636396;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3549880087375640869) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.07259999960660934448) ) ) {
                sum += (double)0.05497538333333332888;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7676913738250732422) ) ) {
                  sum += (double)0.03876321666666666943;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5388.15380859375) ) ) {
                      sum += (double)0.01741419512195122379;
                    } else {
                      sum += (double)0.005166053571428572307;
                    }
                  } else {
                    sum += (double)0.02873200000000000059;
                  }
                }
              }
            } else {
              sum += (double)0.06316537499999998195;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9722101092338562012) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2427854984998703003) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01440000021830201149) ) ) {
              sum += (double)0.4711634342105263662;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13618.9873046875) ) ) {
                sum += (double)0.3159581718750000268;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2162764966487884521) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2833475619554519653) ) ) {
                    sum += (double)0.1613369166666666632;
                  } else {
                    sum += (double)0.3294051190476189883;
                  }
                } else {
                  sum += (double)0.1517642727272727199;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009300000034272670746) ) ) {
                sum += (double)0.4737818333333333465;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.047448158264160156) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2339.043212890625) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1563500016927719116) ) ) {
                      sum += (double)0.3658534634146341502;
                    } else {
                      sum += (double)0.4164902171052631275;
                    }
                  } else {
                    sum += (double)0.3107701730769231174;
                  }
                } else {
                  sum += (double)0.2985616944444444143;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1611000001430511475) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00855000014416873455) ) ) {
                  sum += (double)0.5770152000000000614;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3637.3016357421875) ) ) {
                    sum += (double)0.458151604166666615;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2501.843994140625) ) ) {
                      sum += (double)0.4972929523809523356;
                    } else {
                      sum += (double)0.5286748666666666319;
                    }
                  }
                }
              } else {
                sum += (double)0.4129313750000000449;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05159999988973140717) ) ) {
            sum += (double)0.373230305555555586;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2401490062475204468) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3087499886751174927) ) ) {
                sum += (double)0.148779285714285725;
              } else {
                sum += (double)0.05915387500000000159;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4560999870300292969) ) ) {
                sum += (double)0.1289426944444444223;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16494.0283203125) ) ) {
                  sum += (double)0.3090429464285713856;
                } else {
                  sum += (double)0.1922286583333333576;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.712614059448242188) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1866.04327392578125) ) ) {
            sum += (double)0.2997489624999999935;
          } else {
            sum += (double)0.07302713235294115701;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29245.787109375) ) ) {
            sum += (double)0.1401566500000000215;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.34412956237792969) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3150.623046875) ) ) {
                sum += (double)0.1034388676470588131;
              } else {
                sum += (double)0.03955973863636363247;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1525000035762786865) ) ) {
                sum += (double)0.01976308823529411909;
              } else {
                sum += (double)0.008272333333333334662;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.422753453254699707) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6519050002098083496) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
          sum += (double)0.2353868214285713967;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1152499988675117493) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7701500058174133301) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2965.335693359375) ) ) {
                  sum += (double)0.629060489583333271;
                } else {
                  sum += (double)0.5320465999999999251;
                }
              } else {
                sum += (double)0.5195847142857142886;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.430997848510742188) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.563833475112915039) ) ) {
                  sum += (double)0.4895020729166665863;
                } else {
                  sum += (double)0.5484841458333333808;
                }
              } else {
                sum += (double)0.4141011517857142721;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1210500001907348633) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.386113643646240234) ) ) {
                sum += (double)0.5926894843750000197;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.521043777465820312) ) ) {
                  sum += (double)0.6978730875000000999;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3647.0638427734375) ) ) {
                    sum += (double)0.6732921562500000512;
                  } else {
                    sum += (double)0.6260418666666666132;
                  }
                }
              }
            } else {
              sum += (double)0.5838293999999999428;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.749575495719909668) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1050499975681304932) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.250849008560180664) ) ) {
              sum += (double)0.7624681931818181324;
            } else {
              sum += (double)0.6999515357142858107;
            }
          } else {
            sum += (double)0.6757379166666666048;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.146208643913269043) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02924999967217445374) ) ) {
              sum += (double)0.8633718076923078133;
            } else {
              sum += (double)0.8303212499999998997;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06571529805660247803) ) ) {
              sum += (double)0.7253339583333332508;
            } else {
              sum += (double)0.7971344166666666231;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.215148568153381348) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5486334860324859619) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.25759792327880859) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1266499981284141541) ) ) {
              sum += (double)0.3645595147058823815;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5959.772705078125) ) ) {
                sum += (double)0.4341870972222222069;
              } else {
                sum += (double)0.535255450000000077;
              }
            }
          } else {
            sum += (double)0.2192669999999999897;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09939999878406524658) ) ) {
            sum += (double)0.4708181363636363415;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6644209921360015869) ) ) {
              sum += (double)0.5770824423076923448;
            } else {
              sum += (double)0.6606126750000000936;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
          sum += (double)0.3898628392857143021;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6156424880027770996) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.127980709075927734) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1681.68902587890625) ) ) {
                sum += (double)0.2882669318181818041;
              } else {
                sum += (double)0.1407095535714285583;
              }
            } else {
              sum += (double)0.1163564880952380892;
            }
          } else {
            sum += (double)0.3506148958333334398;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000143051147461) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3019105046987533569) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.608771800994873047) ) ) {
          sum += (double)0.115585840909090895;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07372036203742027283) ) ) {
                sum += (double)0.009149382352941177327;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.427032470703125) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3805793076753616333) ) ) {
                    sum += (double)0.006262499999999999838;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3456.150634765625) ) ) {
                      sum += (double)0.002500000000000000052;
                    } else {
                      sum += (double)0.003794928571428571925;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8187500238418579102) ) ) {
                    sum += (double)0.002500000000000001787;
                  } else {
                    sum += (double)0.003122290322580645577;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1139269992709159851) ) ) {
                sum += (double)0.0230137083333333374;
              } else {
                sum += (double)0.007714513888888889677;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1099705696105957) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.20445442199707031) ) ) {
                sum += (double)0.04367869736842104611;
              } else {
                sum += (double)0.0994298571428571254;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7680511474609375) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06210000067949295044) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
                    sum += (double)0.02826931999999999015;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1268019974231719971) ) ) {
                      sum += (double)0.005199226190476191611;
                    } else {
                      sum += (double)0.01238612068965517371;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07297449931502342224) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06316249817609786987) ) ) {
                      sum += (double)0.01215179411764705925;
                    } else {
                      sum += (double)0.003535999999999999647;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4923824816942214966) ) ) {
                      sum += (double)0.04314552777777776876;
                    } else {
                      sum += (double)0.08948068421052633725;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2950000017881393433) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8687331974506378174) ) ) {
                    sum += (double)0.005877406249999999818;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                } else {
                  sum += (double)0.02289559615384615526;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.801829338073730469) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03594999946653842926) ) ) {
            sum += (double)0.2469558333333333189;
          } else {
            sum += (double)0.1545535125000000176;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02389999944716691971) ) ) {
            sum += (double)0.1555562321428571593;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1883404999971389771) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4635499864816665649) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2619999945163726807) ) ) {
                  sum += (double)0.01122712500000000099;
                } else {
                  sum += (double)0.03371470312500000205;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.473099932074546814) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6762500107288360596) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.819999992847442627) ) ) {
                      sum += (double)0.01363427272727272752;
                    } else {
                      sum += (double)0.0316465568181818202;
                    }
                  } else {
                    sum += (double)0.05817276388888887456;
                  }
                } else {
                  sum += (double)0.07536994827586207535;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6237286031246185303) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.44570732116699219) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2277100011706352234) ) ) {
                    sum += (double)0.03352292647058823655;
                  } else {
                    sum += (double)0.1016112750000000009;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8988.73779296875) ) ) {
                    sum += (double)0.1038348620689655;
                  } else {
                    sum += (double)0.2157418695652174034;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7150000035762786865) ) ) {
                  sum += (double)0.1013810416666666575;
                } else {
                  sum += (double)0.01344632000000000119;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5766305327415466309) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8449999988079071045) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.5615386962890625) ) ) {
            sum += (double)0.1253949999999999787;
          } else {
            sum += (double)0.2260061944444444193;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05619999952614307404) ) ) {
            sum += (double)0.4401935865384615787;
          } else {
            sum += (double)0.2735779411764705515;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5381860136985778809) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07355000078678131104) ) ) {
            sum += (double)0.03728347916666666095;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1727000027894973755) ) ) {
              sum += (double)0.1911404000000000158;
            } else {
              sum += (double)0.07268207999999998226;
            }
          }
        } else {
          sum += (double)0.2984282884615384601;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5470429956912994385) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5618939399719238281) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2572209984064102173) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002999999924213625491) ) ) {
            sum += (double)0.43616314473684209;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.491492271423339844) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2154900059103965759) ) ) {
                sum += (double)0.2514373879310344839;
              } else {
                sum += (double)0.3432945000000000579;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1642175018787384033) ) ) {
                sum += (double)0.0739371956521739232;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2171114981174468994) ) ) {
                  sum += (double)0.2223107678571427936;
                } else {
                  sum += (double)0.1377959444444444292;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.02010488510131836) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3741570115089416504) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007699999958276748657) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.528333425521850586) ) ) {
                  sum += (double)0.4947538624999999191;
                } else {
                  sum += (double)0.5423255781250000407;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4612497687339782715) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.14032764732837677) ) ) {
                    sum += (double)0.3398729204545454241;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.298264980316162109) ) ) {
                      sum += (double)0.3660101315789474064;
                    } else {
                      sum += (double)0.4164240093750000149;
                    }
                  }
                } else {
                  sum += (double)0.2840775952380952263;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07860000059008598328) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.143556348979473114) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.314516067504882812) ) ) {
                    sum += (double)0.6150285694444443951;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8289000093936920166) ) ) {
                      sum += (double)0.5767550312499999388;
                    } else {
                      sum += (double)0.5335357249999999052;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.83135128021240234) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.518148660659790039) ) ) {
                      sum += (double)0.4984103194444444163;
                    } else {
                      sum += (double)0.4436215138888888188;
                    }
                  } else {
                    sum += (double)0.5617243749999999425;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.009523868560791016) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.645833492279052734) ) ) {
                    sum += (double)0.4617461710526315488;
                  } else {
                    sum += (double)0.5806217941176469166;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7366000115871429443) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4223.3826904296875) ) ) {
                      sum += (double)0.5158396447368421844;
                    } else {
                      sum += (double)0.4182204852941176498;
                    }
                  } else {
                    sum += (double)0.3692889218750000646;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2826000005006790161) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.05729198455810547) ) ) {
                sum += (double)0.2828216944444445491;
              } else {
                sum += (double)0.1647162499999999807;
              }
            } else {
              sum += (double)0.3725754137931034937;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.039836645126342773) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1616.94232177734375) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4261894971132278442) ) ) {
              sum += (double)0.327989697916666656;
            } else {
              sum += (double)0.4145511250000000203;
            }
          } else {
            sum += (double)0.2306341666666666124;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.35188579559326172) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8770.93310546875) ) ) {
                sum += (double)0.4022603250000000297;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.325316503643989563) ) ) {
                  sum += (double)0.20341495833333334;
                } else {
                  sum += (double)0.2949736477272727475;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.71961879730224609) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.34411430358886719) ) ) {
                  sum += (double)0.1208591111111111255;
                } else {
                  sum += (double)0.2674581666666666635;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7879127860069274902) ) ) {
                  sum += (double)0.05909486538461539151;
                } else {
                  sum += (double)0.1121653833333333544;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4517965018749237061) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3333.7301025390625) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.307078361511230469) ) ) {
                  sum += (double)0.1810998478260869571;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1990000009536743164) ) ) {
                    sum += (double)0.1430216111111111132;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.0352935791015625) ) ) {
                      sum += (double)0.06873151041666665517;
                    } else {
                      sum += (double)0.01047732352941176462;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3775905072689056396) ) ) {
                  sum += (double)0.01374440476190476497;
                } else {
                  sum += (double)0.05727675000000000127;
                }
              }
            } else {
              sum += (double)0.2647749375000000294;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.419721648097038269) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5857160091400146484) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03000000026077032089) ) ) {
              sum += (double)0.6464360499999999288;
            } else {
              sum += (double)0.577864366666666629;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5855000019073486328) ) ) {
              sum += (double)0.6217065119047618937;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.695976495742797852) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6546829938888549805) ) ) {
                  sum += (double)0.7080426250000000366;
                } else {
                  sum += (double)0.7579691499999999804;
                }
              } else {
                sum += (double)0.6721560803571426934;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06500000134110450745) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7685725688934326172) ) ) {
              sum += (double)0.8810622763157894832;
            } else {
              sum += (double)0.816719388888888842;
            }
          } else {
            sum += (double)0.7485011048387095745;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6901989877223968506) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1119999997317790985) ) ) {
            sum += (double)0.259042870689655147;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.005617052316665649) ) ) {
              sum += (double)0.5460082083333333003;
            } else {
              sum += (double)0.3571881590909091186;
            }
          }
        } else {
          sum += (double)0.5925750499999999921;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.2469635009765625) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1966859996318817139) ) ) {
            sum += (double)0.02944866379310344395;
          } else {
            sum += (double)0.1440036370967742174;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.05549716949462891) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1854.740478515625) ) ) {
              sum += (double)0.1673833666666666997;
            } else {
              sum += (double)0.05264071052631578984;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07135000079870223999) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.178947210311889648) ) ) {
                sum += (double)0.4181368088235293823;
              } else {
                sum += (double)0.2988737272727272631;
              }
            } else {
              sum += (double)0.1995181964285714649;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4050000011920928955) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.49675369262695312) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08994349837303161621) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.06884002685546875) ) ) {
                sum += (double)0.01078034375000000086;
              } else {
                sum += (double)0.002683823529411764972;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03655000030994415283) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6087999939918518066) ) ) {
                  sum += (double)0.01085067857142857362;
                } else {
                  sum += (double)0.05654377499999999751;
                }
              } else {
                sum += (double)0.0840858706896551733;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8817999958992004395) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2849999964237213135) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8162826001644134521) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.20833206176757812) ) ) {
                      sum += (double)0.003219576923076923093;
                    } else {
                      sum += (double)0.002500000000000001787;
                    }
                  } else {
                    sum += (double)0.01020370000000000131;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6388343870639801025) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4632500112056732178) ) ) {
                      sum += (double)0.03939976249999999763;
                    } else {
                      sum += (double)0.008314852941176467671;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1950000002980232239) ) ) {
                      sum += (double)0.00366951000000000126;
                    } else {
                      sum += (double)0.009597815789473685202;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3449999988079071045) ) ) {
                  sum += (double)0.03792121666666666696;
                } else {
                  sum += (double)0.01927673076923076823;
                }
              }
            } else {
              sum += (double)0.04274852941176469912;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14613.36474609375) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2111930027604103088) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5593499839305877686) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3527999967336654663) ) ) {
                  sum += (double)0.01869963888888889064;
                } else {
                  sum += (double)0.08147757692307691646;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.63815784454345703) ) ) {
                  sum += (double)0.03005421153846153312;
                } else {
                  sum += (double)0.01381080645161290171;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1787000000476837158) ) ) {
                sum += (double)0.05351735526315788694;
              } else {
                sum += (double)0.08812771590909090902;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.171875) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6630390286445617676) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7150000035762786865) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1477094963192939758) ) ) {
                      sum += (double)0.01396947058823529327;
                    } else {
                      sum += (double)0.03781544736842105264;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4649999886751174927) ) ) {
                      sum += (double)0.03598956250000000245;
                    } else {
                      sum += (double)0.1106387931034482769;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.309430241584777832) ) ) {
                    sum += (double)0.1309990937499999897;
                  } else {
                    sum += (double)0.2586251470588235568;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1994999945163726807) ) ) {
                  sum += (double)0.03455285227272726634;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6520.176025390625) ) ) {
                    sum += (double)0.02890650000000000164;
                  } else {
                    sum += (double)0.008904595238095239229;
                  }
                }
              }
            } else {
              sum += (double)0.2500090416666666537;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9549999833106994629) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1902.40814208984375) ) ) {
          sum += (double)0.2380143839285713825;
        } else {
          sum += (double)0.1382442410714285752;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.596500009298324585) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5896211564540863037) ) ) {
            sum += (double)0.4235316470588235127;
          } else {
            sum += (double)0.2220928289473684258;
          }
        } else {
          sum += (double)0.4798138700000000312;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4760459959506988525) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.013628095388412476) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.25617265701293945) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3392730057239532471) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0171500006690621376) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002800000016577541828) ) ) {
                sum += (double)0.5068889196428572053;
              } else {
                sum += (double)0.4244574242424242749;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2450014948844909668) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.34807825088500977) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.463449478149414062) ) ) {
                    sum += (double)0.2769758333333333655;
                  } else {
                    sum += (double)0.3390205625000000667;
                  }
                } else {
                  sum += (double)0.1793549310344827452;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7052.579345703125) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2999199926853179932) ) ) {
                    sum += (double)0.4235220249999999687;
                  } else {
                    sum += (double)0.3570704558823529773;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5268999934196472168) ) ) {
                      sum += (double)0.3532538088235294138;
                    } else {
                      sum += (double)0.4095452159090909316;
                    }
                  } else {
                    sum += (double)0.2717851481481481368;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1695500016212463379) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.253616824746131897) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008250000188127160072) ) ) {
                  sum += (double)0.5829132499999999384;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2054339349269866943) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3043.1787109375) ) ) {
                      sum += (double)0.4707099999999999618;
                    } else {
                      sum += (double)0.5080300431034483477;
                    }
                  } else {
                    sum += (double)0.5759748166666667224;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.811293363571166992) ) ) {
                  sum += (double)0.4475288152173912404;
                } else {
                  sum += (double)0.5016916718750000781;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2357614338397979736) ) ) {
                sum += (double)0.458213962500000016;
              } else {
                sum += (double)0.3733414124999999695;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.82905960083007812) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3639300018548965454) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.82696437835693359) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2025960013270378113) ) ) {
                  sum += (double)0.1034557763157894911;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4930499941110610962) ) ) {
                    sum += (double)0.1770566333333332965;
                  } else {
                    sum += (double)0.2961398977272727273;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7098999917507171631) ) ) {
                  sum += (double)0.3608840299999999113;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2559999972581863403) ) ) {
                    sum += (double)0.1614337395833333189;
                  } else {
                    sum += (double)0.3029625147058823686;
                  }
                }
              }
            } else {
              sum += (double)0.3754747187499999916;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2687500119209289551) ) ) {
              sum += (double)0.09385804032258066032;
            } else {
              sum += (double)0.2475465250000000172;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.149999856948852539) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.96103978157043457) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.62044525146484375) ) ) {
              sum += (double)0.2045641166666666566;
            } else {
              sum += (double)0.07379525925925925489;
            }
          } else {
            sum += (double)0.3039607767857143705;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05865000002086162567) ) ) {
            sum += (double)0.1748774134615384834;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.72168827056884766) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.677958846092224121) ) ) {
                sum += (double)0.03365511956521739095;
              } else {
                sum += (double)0.07579361538461538983;
              }
            } else {
              sum += (double)0.01148852499999999943;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6645184755325317383) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033862948417663574) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03165000118315219879) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5616550147533416748) ) ) {
              sum += (double)0.5955070955882352246;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.671875) ) ) {
                sum += (double)0.7374157352941177468;
              } else {
                sum += (double)0.6691625972222221552;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.09328365325927734) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5455760061740875244) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1116880960762500763) ) ) {
                  sum += (double)0.4388625937500000296;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3869010955095291138) ) ) {
                    sum += (double)0.558081545454545469;
                  } else {
                    sum += (double)0.5015740312499999964;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3385.02197265625) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5850780010223388672) ) ) {
                    sum += (double)0.5352261184210526102;
                  } else {
                    sum += (double)0.5751378888888889485;
                  }
                } else {
                  sum += (double)0.6355714750000001079;
                }
              }
            } else {
              sum += (double)0.3770507000000000164;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.697325468063354492) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.435591280460357666) ) ) {
              sum += (double)0.4370603026315789674;
            } else {
              sum += (double)0.3991814285714286314;
            }
          } else {
            sum += (double)0.2423673088235294149;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5613919496536254883) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1050499975681304932) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7147440016269683838) ) ) {
              sum += (double)0.739356964285714291;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9077499806880950928) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07574216276407241821) ) ) {
                  sum += (double)0.7973978472222221781;
                } else {
                  sum += (double)0.8374981000000000231;
                }
              } else {
                sum += (double)0.8655037352941176154;
              }
            }
          } else {
            sum += (double)0.7082627000000001338;
          }
        } else {
          sum += (double)0.5831090000000000995;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.143333196640014648) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.435000002384185791) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1233.64141845703125) ) ) {
            sum += (double)0.09192739285714286723;
          } else {
            sum += (double)0.05429355769230766876;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.45384597778320312) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.959787845611572266) ) ) {
              sum += (double)0.09351116250000002239;
            } else {
              sum += (double)0.2090579861111110938;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2245.58984375) ) ) {
              sum += (double)0.2665843281249999364;
            } else {
              sum += (double)0.424048026315789528;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4249999970197677612) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1068915016949176788) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1666999980807304382) ) ) {
                sum += (double)0.01478071428571428592;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8010999858379364014) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.39273643493652344) ) ) {
                    sum += (double)0.007191023809523810345;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1053499989211559296) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.004225173913043478967;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8847000002861022949) ) ) {
                      sum += (double)0.002500000000000000052;
                    } else {
                      sum += (double)0.005655638888888888868;
                    }
                  } else {
                    sum += (double)0.01145836111111111361;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1732994988560676575) ) ) {
                sum += (double)0.03184180999999999817;
              } else {
                sum += (double)0.00857285000000000165;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.74000024795532227) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)63.17857170104980469) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.75) ) ) {
                  sum += (double)0.09119018750000000562;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3015.8592529296875) ) ) {
                    sum += (double)0.02644127272727272646;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                }
              } else {
                sum += (double)0.1551130568181817992;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7294000089168548584) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8338.1943359375) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.53703689575195312) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1986499950289726257) ) ) {
                      sum += (double)0.008955685714285715332;
                    } else {
                      sum += (double)0.02210160526315789464;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.296450003981590271) ) ) {
                      sum += (double)0.002500000000000000052;
                    } else {
                      sum += (double)0.008795194444444444024;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4404.662353515625) ) ) {
                    sum += (double)0.07561024999999998997;
                  } else {
                    sum += (double)0.01531477777777777959;
                  }
                }
              } else {
                sum += (double)0.05397440624999999548;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6474024057388305664) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9298.3466796875) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08454049751162528992) ) ) {
                sum += (double)0.1179755714285714158;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2134735062718391418) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4838169962167739868) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.63998603820800781) ) ) {
                      sum += (double)0.04177125641025641184;
                    } else {
                      sum += (double)0.01583329268292682848;
                    }
                  } else {
                    sum += (double)0.0668830312499999885;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17473.4150390625) ) ) {
                    sum += (double)0.1055566911764705962;
                  } else {
                    sum += (double)0.05666038043478261593;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.72222232818603516) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01889999955892562866) ) ) {
                  sum += (double)0.2409555000000000169;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.9918980598449707) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1231499984860420227) ) ) {
                      sum += (double)0.09865720454545456874;
                    } else {
                      sum += (double)0.1772497261904762145;
                    }
                  } else {
                    sum += (double)0.04450364999999999183;
                  }
                }
              } else {
                sum += (double)0.3207732749999999688;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2421125024557113647) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7649999856948852539) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.127371668815612793) ) ) {
                  sum += (double)0.01270782954545454473;
                } else {
                  sum += (double)0.02442957142857143243;
                }
              } else {
                sum += (double)0.004299844827586207612;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.8480377197265625) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.36904716491699219) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.392172515392303467) ) ) {
                    sum += (double)0.08423599999999999144;
                  } else {
                    sum += (double)0.01905434375000000097;
                  }
                } else {
                  sum += (double)0.01629185714285714265;
                }
              } else {
                sum += (double)0.1138374843750000059;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.596500009298324585) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2622999995946884155) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.137450002133846283) ) ) {
            sum += (double)0.3330451704545454583;
          } else {
            sum += (double)0.2130300096153846245;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03330000117421150208) ) ) {
            sum += (double)0.04202585526315788522;
          } else {
            sum += (double)0.2587264821428571504;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1461.708740234375) ) ) {
          sum += (double)0.4472035375000000812;
        } else {
          sum += (double)0.3287880576923076226;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4620750099420547485) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7597746551036834717) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3304360061883926392) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.33372879028320312) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002499999936844687909) ) ) {
              sum += (double)0.489493669642857121;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2271385043859481812) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7020999789237976074) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6046000123023986816) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7309.91455078125) ) ) {
                      sum += (double)0.196109670454545415;
                    } else {
                      sum += (double)0.3030422647058823027;
                    }
                  } else {
                    sum += (double)0.06976935294117646291;
                  }
                } else {
                  sum += (double)0.2801431111111111205;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.49497377872467041) ) ) {
                    sum += (double)0.3328406785714285721;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07974999770522117615) ) ) {
                      sum += (double)0.4239116590909091098;
                    } else {
                      sum += (double)0.372320485294117598;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12766.01708984375) ) ) {
                    sum += (double)0.3840710517241378574;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.23106098175048828) ) ) {
                      sum += (double)0.3057410661764706217;
                    } else {
                      sum += (double)0.19578480555555558;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25223.1259765625) ) ) {
              sum += (double)0.1886652592592592825;
            } else {
              sum += (double)0.07196869736842105569;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08624999970197677612) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3708939999341964722) ) ) {
              sum += (double)0.4453414137931035466;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.483333587646484375) ) ) {
                sum += (double)0.4815545526315789249;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.693049997091293335) ) ) {
                  sum += (double)0.5896155499999998773;
                } else {
                  sum += (double)0.5342264886363635723;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.117832675576210022) ) ) {
              sum += (double)0.2897330454545454237;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                sum += (double)0.4962373421052632128;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4160854965448379517) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3703125119209289551) ) ) {
                    sum += (double)0.4051907741935483753;
                  } else {
                    sum += (double)0.4594217812499999942;
                  }
                } else {
                  sum += (double)0.3471886315789473598;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.722097396850585938) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062687098979949951) ) ) {
            sum += (double)0.4114563214285714143;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.436428546905517578) ) ) {
              sum += (double)0.3016510499999999761;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3350.552978515625) ) ) {
                sum += (double)0.2533904423076923096;
              } else {
                sum += (double)0.0579999326923076805;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21575.447265625) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.55824851989746094) ) ) {
              sum += (double)0.2635995749999999749;
            } else {
              sum += (double)0.09813573000000000435;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.277976691722869873) ) ) {
              sum += (double)0.09980074999999997976;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.829230725765228271) ) ) {
                sum += (double)0.01328590476190476266;
              } else {
                sum += (double)0.03500893749999999666;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.561954498291015625) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6571570038795471191) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04690000042319297791) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5209234952926635742) ) ) {
              sum += (double)0.5813211481481481702;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1640687361359596252) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09242921322584152222) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8644999861717224121) ) ) {
                    sum += (double)0.6163058269230768937;
                  } else {
                    sum += (double)0.6693185892857143049;
                  }
                } else {
                  sum += (double)0.7060799999999999299;
                }
              } else {
                sum += (double)0.5817601607142857123;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.35482215881347656) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.539483487606048584) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2462500035762786865) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3031.41162109375) ) ) {
                    sum += (double)0.4733191666666667352;
                  } else {
                    sum += (double)0.5343402647058823618;
                  }
                } else {
                  sum += (double)0.5630300781249998332;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1367512419819831848) ) ) {
                  sum += (double)0.5607442499999999441;
                } else {
                  sum += (double)0.6291920441176470646;
                }
              }
            } else {
              sum += (double)0.4020781071428571884;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.741619497537612915) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.34535121917724609) ) ) {
              sum += (double)0.6880267083333334588;
            } else {
              sum += (double)0.7438474166666666498;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08980000019073486328) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8372030258178710938) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.952875614166259766) ) ) {
                  sum += (double)0.8115085833333331999;
                } else {
                  sum += (double)0.8471125441176470261;
                }
              } else {
                sum += (double)0.8917281499999999417;
              }
            } else {
              sum += (double)0.7408472619047620222;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3698.1630859375) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6368684768676757812) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.731990814208984375) ) ) {
              sum += (double)0.4821737812500000442;
            } else {
              sum += (double)0.3594493333333332874;
            }
          } else {
            sum += (double)0.5923685312499999966;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.081206917762756348) ) ) {
            sum += (double)0.4349992132352941687;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06200000084936618805) ) ) {
              sum += (double)0.1405676111111110738;
            } else {
              sum += (double)0.2567746249999999786;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5685060024261474609) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.160416603088378906) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7350000143051147461) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1466415002942085266) ) ) {
            sum += (double)0.02400286538461538638;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.405882358551025391) ) ) {
              sum += (double)0.2039993653846153832;
            } else {
              sum += (double)0.09054820192307690141;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4372060000896453857) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.76897621154785156) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3588.31982421875) ) ) {
                sum += (double)0.2295474218749999906;
              } else {
                sum += (double)0.05889599038461538344;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2947739958763122559) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.746650010347366333) ) ) {
                  sum += (double)0.3078628281249999876;
                } else {
                  sum += (double)0.1844652499999999973;
                }
              } else {
                sum += (double)0.3415759523809523412;
              }
            }
          } else {
            sum += (double)0.3555974736842105188;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4035654962062835693) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1229014992713928223) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1850999966263771057) ) ) {
                sum += (double)0.04000896739130434254;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000089406967163) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7086.3857421875) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.39273643493652344) ) ) {
                      sum += (double)0.009504342105263158258;
                    } else {
                      sum += (double)0.003114367724867722967;
                    }
                  } else {
                    sum += (double)0.01125196666666666845;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.559749990701675415) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07197099924087524414) ) ) {
                      sum += (double)0.01178437500000000145;
                    } else {
                      sum += (double)0.03599821052631578533;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7265999913215637207) ) ) {
                      sum += (double)0.006847342105263159485;
                    } else {
                      sum += (double)0.01639975000000000113;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94999980926513672) ) ) {
                sum += (double)0.09698257142857141799;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5707696676254272461) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4562217891216278076) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1256499998271465302) ) ) {
                      sum += (double)0.009815983870967740985;
                    } else {
                      sum += (double)0.03658589285714285155;
                    }
                  } else {
                    sum += (double)0.06731800000000000284;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5302.632080078125) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)88.96428298950195312) ) ) {
                      sum += (double)0.02977108823529411516;
                    } else {
                      sum += (double)0.006379833333333332843;
                    }
                  } else {
                    sum += (double)0.002500000000000000486;
                  }
                }
              }
            }
          } else {
            sum += (double)0.1237868076923076821;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075429320335388184) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9070.30126953125) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8154000043869018555) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000143051147461) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5320388972759246826) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.209712497889995575) ) ) {
                      sum += (double)0.02183283333333332563;
                    } else {
                      sum += (double)0.0554350564516128963;
                    }
                  } else {
                    sum += (double)0.09376842857142857202;
                  }
                } else {
                  sum += (double)0.1164077619047619028;
                }
              } else {
                sum += (double)0.1569342500000000251;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.5625) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.075439453125) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9150000214576721191) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06025000102818012238) ) ) {
                      sum += (double)0.03682899000000000589;
                    } else {
                      sum += (double)0.08061957692307691881;
                    }
                  } else {
                    sum += (double)0.1229432395833333497;
                  }
                } else {
                  sum += (double)0.166681712962962969;
                }
              } else {
                sum += (double)0.2855454374999999989;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05704999901354312897) ) ) {
              sum += (double)0.1083599318181817789;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5169000029563903809) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1986970007419586182) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1732044965028762817) ) ) {
                    sum += (double)0.02120665000000000397;
                  } else {
                    sum += (double)0.0452958035714285806;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8626604378223419189) ) ) {
                    sum += (double)0.02821392500000000081;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                      sum += (double)0.005546125000000001574;
                    } else {
                      sum += (double)0.01436069047619047655;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23080.6005859375) ) ) {
                  sum += (double)0.03827951388888888723;
                } else {
                  sum += (double)0.1065994999999999859;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4852039515972137451) ) ) {
        sum += (double)0.5508754750000000033;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.03814999945461750031) ) ) {
          sum += (double)0.3989640441176470764;
        } else {
          sum += (double)0.2545173809523810227;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603064954280853271) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8318758606910705566) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3304360061883926392) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.022387981414794922) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2713164985179901123) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5259.546875) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2183775007724761963) ) ) {
                  sum += (double)0.3035777857142857306;
                } else {
                  sum += (double)0.4220868068181818367;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3801275789737701416) ) ) {
                  sum += (double)0.3028382894736842412;
                } else {
                  sum += (double)0.2355547500000000349;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3406.490234375) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.433725833892822266) ) ) {
                  sum += (double)0.3816667857142855835;
                } else {
                  sum += (double)0.3362534791666667022;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.81003570556640625) ) ) {
                  sum += (double)0.4154777763157894155;
                } else {
                  sum += (double)0.4917595714285714625;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02084999997168779373) ) ) {
              sum += (double)0.3861971199999999493;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2281484976410865784) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3129999935626983643) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2112635001540184021) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1306000053882598877) ) ) {
                      sum += (double)0.2800031607142857704;
                    } else {
                      sum += (double)0.1899385750000000261;
                    }
                  } else {
                    sum += (double)0.1349876666666666725;
                  }
                } else {
                  sum += (double)0.0837616562499999967;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.82940864562988281) ) ) {
                  sum += (double)0.3410172083333333215;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5370500087738037109) ) ) {
                    sum += (double)0.1425431607142856882;
                  } else {
                    sum += (double)0.2490319749999999333;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08624999970197677612) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999862571712583) ) ) {
              sum += (double)0.5884911346153846035;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.143208026885986328) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3772229999303817749) ) ) {
                  sum += (double)0.443130562499999936;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.432692289352416992) ) ) {
                    sum += (double)0.4728756833333334075;
                  } else {
                    sum += (double)0.5289379351851851707;
                  }
                }
              } else {
                sum += (double)0.5632375576923076554;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.67706918716430664) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                sum += (double)0.4858882656249999821;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4029840081930160522) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.37053203582763672) ) ) {
                    sum += (double)0.4083646413043477419;
                  } else {
                    sum += (double)0.4714509305555555918;
                  }
                } else {
                  sum += (double)0.3393600086206896016;
                }
              }
            } else {
              sum += (double)0.257308224999999946;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.45491504669189453) ) ) {
            sum += (double)0.3024391666666666478;
          } else {
            sum += (double)0.1530551470588235319;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.06599330902099609) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5968500077724456787) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3298394978046417236) ) ) {
                sum += (double)0.05858134166666666143;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1717.01214599609375) ) ) {
                  sum += (double)0.2591450416666666867;
                } else {
                  sum += (double)0.08513205882352942178;
                }
              }
            } else {
              sum += (double)0.2677997656250000191;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2348500043153762817) ) ) {
              sum += (double)0.1063226944444444488;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3321150094270706177) ) ) {
                sum += (double)0.006403529411764705484;
              } else {
                sum += (double)0.02347125000000000253;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034132540225982666) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6194075047969818115) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3947499990463256836) ) ) {
              sum += (double)0.3556059210526316128;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3240499943494796753) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.2268524169921875) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1812.58123779296875) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1526999995112419128) ) ) {
                      sum += (double)0.4824278378378378807;
                    } else {
                      sum += (double)0.5364038369565217179;
                    }
                  } else {
                    sum += (double)0.5614159999999999151;
                  }
                } else {
                  sum += (double)0.6194801093749999765;
                }
              } else {
                sum += (double)0.4387122500000000258;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02639999985694885254) ) ) {
              sum += (double)0.6780338359375001067;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5967.938720703125) ) ) {
                sum += (double)0.5067592934782608749;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.263157844543457031) ) ) {
                  sum += (double)0.5665998166666665892;
                } else {
                  sum += (double)0.6073217413793103869;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7414509952068328857) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.703571438789367676) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1838.56011962890625) ) ) {
                sum += (double)0.6987525555555555989;
              } else {
                sum += (double)0.7359295921052630973;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6812500059604644775) ) ) {
                sum += (double)0.6552040092592592568;
              } else {
                sum += (double)0.5898453076923076965;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1008500009775161743) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8328820168972015381) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8429999947547912598) ) ) {
                  sum += (double)0.7866852857142856426;
                } else {
                  sum += (double)0.8301975138888886274;
                }
              } else {
                sum += (double)0.8717828088235293205;
              }
            } else {
              sum += (double)0.7448435340909091984;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.081206917762756348) ) ) {
          sum += (double)0.4154591057692307299;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3658.5477294921875) ) ) {
            sum += (double)0.4446475178571428488;
          } else {
            sum += (double)0.1648843200000000009;
          }
        }
      }
    }
  }
  return sum;
}
