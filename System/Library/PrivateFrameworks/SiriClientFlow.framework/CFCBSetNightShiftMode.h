/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>
#import <libobjc.A.dylib/SAAceSerializable.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>

@class NSString, NSNumber, CFCBNightShiftSchedule;

@interface CFCBSetNightShiftMode : SADomainCommand <CFLocalAceHandling, SAAceSerializable, CFLocalAceHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSNumber * active; 
@property (nonatomic,copy) NSNumber * enable; 
@property (nonatomic,copy) NSString * mode; 
@property (nonatomic,copy) NSString * option; 
@property (nonatomic,retain) CFCBNightShiftSchedule * schedule; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)setNightShiftMode;
+(id)setNightShiftModeWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)enable;
-(id)groupIdentifier;
-(NSNumber *)active;
-(void)setSchedule:(CFCBNightShiftSchedule *)arg1 ;
-(CFCBNightShiftSchedule *)schedule;
-(void)setMode:(NSString *)arg1 ;
-(NSString *)mode;
-(void)setActive:(NSNumber *)arg1 ;
-(NSString *)option;
-(void)setEnable:(NSNumber *)arg1 ;
-(void)setOption:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
@end
