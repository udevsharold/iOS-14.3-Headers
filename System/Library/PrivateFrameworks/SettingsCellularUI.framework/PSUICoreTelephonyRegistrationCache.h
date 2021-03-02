/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CoreTelephonyClient, NSMutableDictionary, NSString;

@interface PSUICoreTelephonyRegistrationCache : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CoreTelephonyClient* _client;
	NSMutableDictionary* _imsStatusVoiceDict;
	NSMutableDictionary* _imsStatusSMSDict;
	NSMutableDictionary* _rejectCauseCodeDict;
	NSMutableDictionary* _supportedDataRatesDict;
	NSMutableDictionary* _maxDataRateDict;
	NSMutableDictionary* _operatorNameDict;

}

@property (nonatomic,retain) CoreTelephonyClient * client;                    //@synthesize client=_client - In the implementation block
@property (retain) NSMutableDictionary * imsStatusVoiceDict;                  //@synthesize imsStatusVoiceDict=_imsStatusVoiceDict - In the implementation block
@property (retain) NSMutableDictionary * imsStatusSMSDict;                    //@synthesize imsStatusSMSDict=_imsStatusSMSDict - In the implementation block
@property (retain) NSMutableDictionary * rejectCauseCodeDict;                 //@synthesize rejectCauseCodeDict=_rejectCauseCodeDict - In the implementation block
@property (retain) NSMutableDictionary * supportedDataRatesDict;              //@synthesize supportedDataRatesDict=_supportedDataRatesDict - In the implementation block
@property (retain) NSMutableDictionary * maxDataRateDict;                     //@synthesize maxDataRateDict=_maxDataRateDict - In the implementation block
@property (retain) NSMutableDictionary * operatorNameDict;                    //@synthesize operatorNameDict=_operatorNameDict - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)operatorNameChanged:(id)arg1 name:(id)arg2 ;
-(id)initPrivate;
-(id)init;
-(void)imsRegistrationChanged:(id)arg1 info:(id)arg2 ;
-(void)preferredDataSimChanged:(id)arg1 ;
-(void)setClient:(CoreTelephonyClient *)arg1 ;
-(CoreTelephonyClient *)client;
-(void)clearCache;
-(id)localizedOperatorName:(id)arg1 ;
-(id)supportedDataRates:(id)arg1 ;
-(long long)maxDataRate:(id)arg1 ;
-(void)setMaxDataRate:(id)arg1 dataRate:(long long)arg2 ;
-(void)handleDataUsageChanged;
-(void)setImsStatusVoiceDict:(NSMutableDictionary *)arg1 ;
-(void)setImsStatusSMSDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)imsStatusVoiceDict;
-(void)fetchIMSStatus;
-(NSMutableDictionary *)imsStatusSMSDict;
-(void)setRejectCauseCodeDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)rejectCauseCodeDict;
-(void)fetchRejectCauseCode;
-(void)setSupportedDataRatesDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)supportedDataRatesDict;
-(void)fetchSupportedDataRates;
-(void)setMaxDataRateDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)maxDataRateDict;
-(void)fetchMaxDataRate;
-(void)setOperatorNameDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)operatorNameDict;
-(void)fetchLocalizedOperatorName;
-(BOOL)IMSStatusVoice:(id)arg1 ;
-(BOOL)IMSStatusSMS:(id)arg1 ;
-(id)rejectCauseCode:(id)arg1 ;
@end
