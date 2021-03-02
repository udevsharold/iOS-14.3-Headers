/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface HDClinicalIngestionTaskPerAccountInfo : NSObject {

	NSUUID* _accountIdentifier;
	unsigned long long _outcomeInfo;

}

@property (nonatomic,copy,readonly) NSUUID * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long outcomeInfo;                 //@synthesize outcomeInfo=_outcomeInfo - In the implementation block
-(NSUUID *)accountIdentifier;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(unsigned long long)outcomeInfo;
-(void)addOutcomeInfo:(unsigned long long)arg1 ;
-(void)setOutcomeInfo:(unsigned long long)arg1 ;
@end
