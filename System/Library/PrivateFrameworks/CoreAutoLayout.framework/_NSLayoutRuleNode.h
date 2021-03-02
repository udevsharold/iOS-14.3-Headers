/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSLayoutRule, _NSLayoutRuleNodeParent;
@interface _NSLayoutRuleNode : NSObject {

	id<NSLayoutRule> _representedRule;
	id<_NSLayoutRuleNodeParent> _parentNode;

}

@property (copy) id<NSLayoutRule> representedRule;                      //@synthesize representedRule=_representedRule - In the implementation block
@property (assign) id<_NSLayoutRuleNodeParent> parentNode;              //@synthesize parentNode=_parentNode - In the implementation block
-(id)initWithRule:(id)arg1 ;
-(void)dealloc;
-(id<_NSLayoutRuleNodeParent>)parentNode;
-(id)description;
-(void)setParentNode:(id<_NSLayoutRuleNodeParent>)arg1 ;
-(id<NSLayoutRule>)representedRule;
-(void)setRepresentedRule:(id<NSLayoutRule>)arg1 ;
@end
