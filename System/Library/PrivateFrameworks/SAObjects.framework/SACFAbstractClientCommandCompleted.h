/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SACFAbstractClientCommandCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * outputLogs; 
@property (nonatomic,copy) NSString * results; 
@property (assign,nonatomic) long long status; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)abstractClientCommandCompleted;
+(id)abstractClientCommandCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)results;
-(void)setResults:(NSString *)arg1 ;
-(NSArray *)outputLogs;
-(long long)status;
-(void)setOutputLogs:(NSArray *)arg1 ;
-(id)encodedClassName;
-(void)setStatus:(long long)arg1 ;
-(BOOL)requiresResponse;
@end
