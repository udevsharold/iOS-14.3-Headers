/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAPhoneCallSnippet.h>

@class SAUIColor;

@interface SAPhoneCallEmergencySnippet : SAPhoneCallSnippet

@property (nonatomic,retain) SAUIColor * bodyBackgroundColor; 
@property (nonatomic,retain) SAUIColor * bodyTextColor; 
@property (assign,nonatomic) long long countDownSeconds; 
@property (nonatomic,retain) SAUIColor * headerBackgroundColor; 
@property (nonatomic,retain) SAUIColor * headerTextColor; 
+(id)callEmergencySnippet;
+(id)callEmergencySnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAUIColor *)bodyTextColor;
-(void)setBodyTextColor:(SAUIColor *)arg1 ;
-(long long)countDownSeconds;
-(void)setCountDownSeconds:(long long)arg1 ;
-(void)setHeaderBackgroundColor:(SAUIColor *)arg1 ;
-(SAUIColor *)headerBackgroundColor;
-(void)setHeaderTextColor:(SAUIColor *)arg1 ;
-(SAUIColor *)headerTextColor;
-(id)encodedClassName;
-(SAUIColor *)bodyBackgroundColor;
-(void)setBodyBackgroundColor:(SAUIColor *)arg1 ;
@end

