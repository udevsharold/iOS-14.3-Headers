/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GainValueArray, DeepFusionTuningImageParameters;

@interface DeepFusionNoiseTuningParameters : NSObject {

	GainValueArray* LSCAmpFactor;
	GainValueArray* ev0FusionTarget;
	GainValueArray* longFusionTarget;
	GainValueArray* lumaPowerDenom;
	DeepFusionTuningImageParameters* ref;
	DeepFusionTuningImageParameters* sl;

}
-(int)readPlist:(id)arg1 ;
@end

