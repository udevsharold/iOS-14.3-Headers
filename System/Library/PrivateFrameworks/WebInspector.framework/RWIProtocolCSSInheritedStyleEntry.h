/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, RWIProtocolCSSStyle;

@interface RWIProtocolCSSInheritedStyleEntry : RWIProtocolJSONObject

@property (nonatomic,copy) NSArray * matchedCSSRules; 
@property (nonatomic,retain) RWIProtocolCSSStyle * inlineStyle; 
+(id)safe_initWithMatchedCSSRules:(id)arg1 ;
-(void)setMatchedCSSRules:(NSArray *)arg1 ;
-(id)initWithMatchedCSSRules:(id)arg1 ;
-(void)setInlineStyle:(RWIProtocolCSSStyle *)arg1 ;
-(RWIProtocolCSSStyle *)inlineStyle;
-(NSArray *)matchedCSSRules;
@end
