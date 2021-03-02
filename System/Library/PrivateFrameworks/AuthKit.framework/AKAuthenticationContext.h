/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary, AKDevice;


@protocol AKAuthenticationContext <NSObject>
@property (nonatomic,copy) NSString * altDSID; 
@property (assign,nonatomic) long long serviceType; 
@property (setter=_setProxiedAppName:,nonatomic,copy) NSString * _proxiedAppName; 
@property (nonatomic,copy) NSDictionary * appProvidedData; 
@property (nonatomic,copy) NSString * appProvidedContext; 
@property (nonatomic,copy) AKDevice * proxiedDevice; 
@property (nonatomic,copy) AKDevice * companionDevice; 
@property (assign,nonatomic) long long authenticationMode; 
@required
-(void)setAltDSID:(id)arg1;
-(void)setProxiedDevice:(id)arg1;
-(NSString *)appProvidedContext;
-(NSString *)altDSID;
-(void)setAppProvidedData:(id)arg1;
-(void)setAuthenticationMode:(long long)arg1;
-(void)setCompanionDevice:(id)arg1;
-(void)_setProxiedAppName:(id)arg1;
-(void)setAppProvidedContext:(id)arg1;
-(NSDictionary *)appProvidedData;
-(AKDevice *)companionDevice;
-(void)setServiceType:(long long)arg1;
-(long long)serviceType;
-(AKDevice *)proxiedDevice;
-(long long)authenticationMode;
-(NSString *)_proxiedAppName;

@end
