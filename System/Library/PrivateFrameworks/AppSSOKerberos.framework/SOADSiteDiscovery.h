/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSOperationQueue;

@interface SOADSiteDiscovery : NSObject {

	BOOL _requireTLSForLDAP;
	NSString* _realm;
	NSOperationQueue* _queue;

}

@property (nonatomic,retain) NSString * realm;                      //@synthesize realm=_realm - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL requireTLSForLDAP;                //@synthesize requireTLSForLDAP=_requireTLSForLDAP - In the implementation block
-(NSString *)realm;
-(void)setRealm:(NSString *)arg1 ;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)queue;
-(void)setRequireTLSForLDAP:(BOOL)arg1 ;
-(BOOL)requireTLSForLDAP;
-(id)initWithRealm:(id)arg1 requireTLSForLDAP:(BOOL)arg2 ;
-(void)discoverADInfoUsingSourceAppBundleIdentifier:(id)arg1 auditTokenData:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

