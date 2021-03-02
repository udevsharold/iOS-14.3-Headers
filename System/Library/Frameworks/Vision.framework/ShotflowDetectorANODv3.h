/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/ShotflowDetectorANODBase.h>

@interface ShotflowDetectorANODv3 : ShotflowDetectorANODBase
+(id)filterThresholds;
+(Class)shotflowNetworkClass;
+(id)supportedLabelKeys;
-(id)initWithNetwork:(id)arg1 ;
-(id)getIndexBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2 ;
-(id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3 ;
-(id)nmsBoxes:(id)arg1 ;
-(id)initWithNetwork:(id)arg1 filterThreshold:(id)arg2 ;
@end
