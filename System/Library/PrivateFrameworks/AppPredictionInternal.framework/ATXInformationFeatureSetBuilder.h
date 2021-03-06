/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXFeatureSetBuilderProtocol.h>

@class NSMutableDictionary;

@interface ATXInformationFeatureSetBuilder : NSObject <ATXFeatureSetBuilderProtocol> {

	NSMutableDictionary* _features;

}
+(id)stringForInfoSuggestionFeature:(unsigned long long)arg1 ;
-(id)build;
-(void)setFeatureWithName:(id)arg1 toValue:(id)arg2 ;
-(void)appendFeature:(unsigned long long)arg1 value:(double)arg2 ;
@end

