/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class SXTextTangierFlowRep, NSURL, NSString;

@interface SXTextLinkAccessibilityElement : UIAccessibilityElement {

	SXTextTangierFlowRep* _parentRep;
	NSURL* _url;
	NSString* _displayText;
	NSRange _rangeInParentRep;

}

@property (assign,nonatomic,__weak) SXTextTangierFlowRep * parentRep;              //@synthesize parentRep=_parentRep - In the implementation block
@property (nonatomic,readonly) NSRange rangeInParentRep;                           //@synthesize rangeInParentRep=_rangeInParentRep - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                        //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * displayText;                             //@synthesize displayText=_displayText - In the implementation block
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(id)description;
-(NSString *)displayText;
-(id)accessibilityValue;
-(BOOL)isAccessibilityElement;
-(NSURL *)url;
-(SXTextTangierFlowRep *)parentRep;
-(NSRange)rangeInParentRep;
-(id)initWithHyperlinkField:(id)arg1 parentRep:(id)arg2 ;
-(void)setParentRep:(SXTextTangierFlowRep *)arg1 ;
@end

