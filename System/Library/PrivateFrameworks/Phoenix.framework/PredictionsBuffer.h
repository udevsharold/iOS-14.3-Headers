/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Phoenix/Phoenix-Structs.h>
@class NSMutableArray, AXPhoenixClassifierConfiguration;

@interface PredictionsBuffer : NSObject {

	NSMutableArray* _predictions;
	NSMutableArray* _counts;
	AXPhoenixClassifierConfiguration* _configuration;

}
-(void)reset;
-(id)initWithConfiguration:(id)arg1 ;
-(id)description;
-(id)logBuffer;
-(id)predictionCounts;
-(void)addPrediction:(id)arg1 ;
-(SCD_Struct_Pr6)bestPredictionUsingPolicyOption:(int)arg1 ;
@end
