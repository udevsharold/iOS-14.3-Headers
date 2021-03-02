/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SADialogInflectWordResponse : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * print; 
@property (nonatomic,copy) NSString * speak; 
+(id)inflectWordResponse;
+(id)inflectWordResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)speak;
-(void)setPrint:(NSString *)arg1 ;
-(void)setSpeak:(NSString *)arg1 ;
-(NSString *)print;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end
