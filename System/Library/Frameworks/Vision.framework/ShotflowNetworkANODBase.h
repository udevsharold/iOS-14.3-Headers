/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/ShotflowNetwork.h>

@interface ShotflowNetworkANODBase : ShotflowNetwork
+(BOOL)poseSquare;
+(unsigned long long)mumberBinsNegativeMaxout;
+(const vector<float, std::__1::allocator<float> >*)cellStartsX;
+(const vector<float, std::__1::allocator<float> >*)cellStartsY;
+(CGSize)inputImageSize;
+(const vector<float, std::__1::allocator<float> >*)ratios;
+(unsigned long long)numberMaxoutLayers;
+(float)nonSquareYawDefault;
+(float)nonSquareRollDefault;
-(void)initializeBuffers;
-(id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5 ;
@end
