/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSSet;

@interface _IKDOMMutationRuleSet : NSObject {

	NSArray* _mutationRules;
	NSSet* _dependentPathStrings;

}

@property (nonatomic,copy,readonly) NSArray * mutationRules;                   //@synthesize mutationRules=_mutationRules - In the implementation block
@property (nonatomic,copy,readonly) NSSet * dependentPathStrings;              //@synthesize dependentPathStrings=_dependentPathStrings - In the implementation block
-(NSSet *)dependentPathStrings;
-(NSArray *)mutationRules;
-(id)initWithMutationRules:(id)arg1 ;
@end

