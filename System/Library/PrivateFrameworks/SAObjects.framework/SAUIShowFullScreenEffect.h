/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIShowFullScreenEffect : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * fullScreenEffectType; 
+(id)showFullScreenEffect;
+(id)showFullScreenEffectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)fullScreenEffectType;
-(void)setFullScreenEffectType:(NSString *)arg1 ;
-(BOOL)requiresResponse;
@end
