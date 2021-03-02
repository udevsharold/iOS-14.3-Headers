/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
#import <WebContentAnalysis/WFLSMMap.h>

@interface WFLSMScoreNormalizedMap : WFLSMMap {

	float* maxScore;
	float* minScore;

}
-(id)initWithMap:(LSMMapRef)arg1 ;
-(void)dealloc;
-(id)evaluate:(id)arg1 ;
@end
