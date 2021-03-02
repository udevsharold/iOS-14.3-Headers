/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAConnectionPolicyRoute : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * cname; 
@property (nonatomic,copy) NSString * connectionId; 
@property (nonatomic,copy) NSString * host; 
@property (nonatomic,copy) NSNumber * mptcp; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,copy) NSString * resolver; 
@property (nonatomic,copy) NSString * resolverProtocol; 
@property (nonatomic,copy) NSString * routeId; 
@property (nonatomic,copy) NSNumber * timeout; 
@property (nonatomic,copy) NSString * type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionPolicyRoute;
+(id)connectionPolicyRouteWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)host;
-(NSString *)resolver;
-(void)setPriority:(long long)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(void)setTimeout:(NSNumber *)arg1 ;
-(NSString *)cname;
-(NSNumber *)mptcp;
-(NSNumber *)timeout;
-(void)setType:(NSString *)arg1 ;
-(void)setResolver:(NSString *)arg1 ;
-(NSString *)routeId;
-(NSString *)connectionId;
-(void)setCname:(NSString *)arg1 ;
-(void)setMptcp:(NSNumber *)arg1 ;
-(void)setConnectionId:(NSString *)arg1 ;
-(NSString *)resolverProtocol;
-(void)setResolverProtocol:(NSString *)arg1 ;
-(NSString *)type;
-(id)encodedClassName;
-(void)setRouteId:(NSString *)arg1 ;
-(long long)priority;
@end
