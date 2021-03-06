/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RECondition.h>

@interface REComparisonCondition : RECondition
+(id)trueCondition;
+(id)falseCondition;
+(id)conditionForLeftFeature:(id)arg1 relation:(long long)arg2 rightFeature:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_inflectionFeatureValuePairs;
-(BOOL)_validForRanking;
@end

