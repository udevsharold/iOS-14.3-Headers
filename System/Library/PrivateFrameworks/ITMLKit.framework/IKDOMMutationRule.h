/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKDOMConditional.h>

@interface IKDOMMutationRule : IKDOMConditional {

	BOOL _mutable;

}

@property (getter=isMutable,nonatomic,readonly) BOOL mutable;              //@synthesize mutable=_mutable - In the implementation block
+(id)_applySpecializationOnDOMElement:(id)arg1 withDOMElement:(id)arg2 ;
+(id)_applyGeneralizationOnDOMElement:(id)arg1 withDOMElement:(id)arg2 ;
+(id)mutationRuleWithDOMElement:(id)arg1 mutable:(BOOL)arg2 ;
-(BOOL)isMutable;
-(long long)compare:(id)arg1 ;
-(id)initWithDOMElement:(id)arg1 mutable:(BOOL)arg2 ;
-(void)applyOnDOMElement:(id)arg1 ;
@end
