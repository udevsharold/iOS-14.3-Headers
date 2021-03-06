/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface PPLabelStrengthSets : NSObject {

	NSSet* _weak;
	NSSet* _strong;

}

@property (nonatomic,readonly) NSSet * weak;                //@synthesize weak=_weak - In the implementation block
@property (nonatomic,readonly) NSSet * strong;              //@synthesize strong=_strong - In the implementation block
+(id)labelStrengthSetsWithWeakSet:(id)arg1 strongSet:(id)arg2 ;
-(id)initWithWeakSet:(id)arg1 strongSet:(id)arg2 ;
-(NSSet *)weak;
-(NSSet *)strong;
@end

