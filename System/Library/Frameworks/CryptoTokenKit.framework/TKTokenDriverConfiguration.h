/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TKTokenConfigurationConnection, NSString, NSDictionary;

@interface TKTokenDriverConfiguration : NSObject {

	TKTokenConfigurationConnection* _configurationConnection;
	NSString* _classID;

}

@property (nonatomic,readonly) NSString * classID;                                   //@synthesize classID=_classID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * tokenConfigurations; 
+(id)driverConfigurationsWithClient:(id)arg1 ;
+(id)driverConfigurations;
-(id)beginTransaction;
-(NSString *)classID;
-(id)createTokenConfigurationWithInstanceID:(id)arg1 persistent:(BOOL)arg2 ;
-(NSDictionary *)tokenConfigurations;
-(id)addTokenConfigurationForTokenInstanceID:(id)arg1 ;
-(void)removeTokenConfigurationForTokenInstanceID:(id)arg1 ;
-(id)initWithClassID:(id)arg1 configurationConnection:(id)arg2 ;
@end
