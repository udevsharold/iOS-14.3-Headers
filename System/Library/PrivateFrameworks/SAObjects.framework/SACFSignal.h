/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSArray, SACFAbstractClientCommand;

@interface SACFSignal : SADomainCommand

@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * flowScriptHint; 
@property (nonatomic,copy) NSArray * scriptIdentifiers; 
@property (nonatomic,retain) SACFAbstractClientCommand * signalPayload; 
+(id)signal;
+(id)signalWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)domain;
-(NSArray *)scriptIdentifiers;
-(void)setScriptIdentifiers:(NSArray *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)mutatingCommand;
-(id)encodedClassName;
-(NSString *)flowScriptHint;
-(void)setFlowScriptHint:(NSString *)arg1 ;
-(SACFAbstractClientCommand *)signalPayload;
-(void)setSignalPayload:(SACFAbstractClientCommand *)arg1 ;
-(BOOL)requiresResponse;
@end

