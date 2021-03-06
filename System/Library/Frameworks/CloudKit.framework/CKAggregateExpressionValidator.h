/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSArray;

@interface CKAggregateExpressionValidator : CKPredicateValidatorInstance {

	NSArray* _subExpressionValidators;

}

@property (nonatomic,retain) NSArray * subExpressionValidators;              //@synthesize subExpressionValidators=_subExpressionValidators - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)CKPropertiesDescription;
-(id)initWithValidators:(id)arg1 ;
-(void)setSubExpressionValidators:(NSArray *)arg1 ;
-(NSArray *)subExpressionValidators;
@end

