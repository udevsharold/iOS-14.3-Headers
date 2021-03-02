/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SATTSEstimateTTSRequestDuration : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * locale; 
@property (nonatomic,copy) NSArray * texts; 
+(id)estimateTTSRequestDuration;
+(id)estimateTTSRequestDurationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)gender;
-(NSString *)locale;
-(NSArray *)texts;
-(void)setLocale:(NSString *)arg1 ;
-(void)setGender:(NSString *)arg1 ;
-(BOOL)mutatingCommand;
-(id)encodedClassName;
-(void)setTexts:(NSArray *)arg1 ;
-(BOOL)requiresResponse;
@end
