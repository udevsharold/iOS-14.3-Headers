/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <libobjc.A.dylib/NSLayoutRule.h>

@class NSString, NSLayoutAnchor;

@interface NSLayoutAnchorRule : NSObject <NSLayoutRule> {

	NSLayoutAnchor* _firstAnchor;
	NSLayoutAnchor* _secondAnchor;
	long long _relation;
	NSString* _identifier;
	double _constant;
	double _multiplier;
	float _priority;

}

@property (copy,readonly) NSLayoutAnchor * firstAnchor;               //@synthesize firstAnchor=_firstAnchor - In the implementation block
@property (copy,readonly) NSLayoutAnchor * secondAnchor;              //@synthesize secondAnchor=_secondAnchor - In the implementation block
@property (readonly) long long relation;                              //@synthesize relation=_relation - In the implementation block
@property (readonly) double constant;                                 //@synthesize constant=_constant - In the implementation block
@property (readonly) double multiplier;                               //@synthesize multiplier=_multiplier - In the implementation block
@property (readonly) float priority;                                  //@synthesize priority=_priority - In the implementation block
@property (copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * ruleDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)relation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(NSString *)identifier;
-(double)multiplier;
-(NSString *)description;
-(double)constant;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)ruleDescription;
-(id)makeChildRules;
-(id)makeLayoutConstraint;
-(NSLayoutAnchor *)firstAnchor;
-(float)priority;
-(NSLayoutAnchor *)secondAnchor;
@end

