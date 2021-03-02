/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <libobjc.A.dylib/NSLayoutRule.h>

@class NSLayoutPoint, NSString;

@interface NSLayoutPointRule : NSObject <NSLayoutRule> {

	NSLayoutPoint* _firstLayoutPoint;
	NSLayoutPoint* _secondLayoutPoint;

}

@property (copy,readonly) NSLayoutPoint * firstLayoutPoint;               //@synthesize firstLayoutPoint=_firstLayoutPoint - In the implementation block
@property (copy,readonly) NSLayoutPoint * secondLayoutPoint;              //@synthesize secondLayoutPoint=_secondLayoutPoint - In the implementation block
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * ruleDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)ruleDescription;
-(id)makeChildRules;
-(NSLayoutPoint *)firstLayoutPoint;
-(NSLayoutPoint *)secondLayoutPoint;
@end
