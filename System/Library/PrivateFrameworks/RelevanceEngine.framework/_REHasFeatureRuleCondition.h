/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RECondition.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class REFeature;

@interface _REHasFeatureRuleCondition : RECondition <REAutomaticExportedInterface> {

	BOOL _contains;
	REFeature* _feature;

}

@property (nonatomic,readonly) REFeature * feature;              //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) BOOL contains;                    //@synthesize contains=_contains - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(REFeature *)feature;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)contains;
-(id)_notCondition;
-(BOOL)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3 ;
-(id)_inflectionFeatureValuePairs;
-(id)_dependentFeatures;
-(id)initWithFeature:(id)arg1 contains:(BOOL)arg2 ;
@end
