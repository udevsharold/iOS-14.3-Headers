/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <libobjc.A.dylib/STStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/STStatusDomainData.h>

@class STTelephonyStatusDomainSIMInfo, NSString;

@interface STTelephonyStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData> {

	STTelephonyStatusDomainSIMInfo* _SIMOneInfo;
	STTelephonyStatusDomainSIMInfo* _SIMTwoInfo;
	BOOL _cellularRadioCapabilityEnabled;
	BOOL _dualSIMEnabled;
	BOOL _radioModuleDead;

}

@property (setter=IMOneInfo,nonatomic,copy,readonly) STTelephonyStatusDomainSIMInfo * SIMOneInfo;                        //@synthesize SIMOneInfo=_SIMOneInfo - In the implementation block
@property (setter=IMTwoInfo,nonatomic,copy,readonly) STTelephonyStatusDomainSIMInfo * SIMTwoInfo;                        //@synthesize SIMTwoInfo=_SIMTwoInfo - In the implementation block
@property (getter=isCellularRadioCapabilityEnabled,nonatomic,readonly) BOOL cellularRadioCapabilityEnabled;              //@synthesize cellularRadioCapabilityEnabled=_cellularRadioCapabilityEnabled - In the implementation block
@property (getter=isDualSIMEnabled,nonatomic,readonly) BOOL dualSIMEnabled;                                              //@synthesize dualSIMEnabled=_dualSIMEnabled - In the implementation block
@property (getter=isRadioModuleDead,nonatomic,readonly) BOOL radioModuleDead;                                            //@synthesize radioModuleDead=_radioModuleDead - In the implementation block
@property (nonatomic,copy,readonly) STTelephonyStatusDomainSIMInfo * primarySIMInfo; 
@property (nonatomic,copy,readonly) STTelephonyStatusDomainSIMInfo * secondarySIMInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isDualSIMEnabled;
-(id)dataByApplyingDiff:(id)arg1 ;
-(STTelephonyStatusDomainSIMInfo *)SIMTwoInfo;
-(BOOL)isCellularRadioCapabilityEnabled;
-(id)initWithSIMOneInfo:(id)arg1 SIMTwoInfo:(id)arg2 cellularRadioCapabilityEnabled:(BOOL)arg3 dualSIMEnabled:(BOOL)arg4 radioModuleDead:(BOOL)arg5 ;
-(id)_anySIMInfoWithSIMPresent;
-(id)init;
-(id)diffFromData:(id)arg1 ;
-(id)_dataPreferredSIMInfoIfSIMPresent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_otherSIMInfoIfSIMPresent:(id)arg1 ;
-(BOOL)isRadioModuleDead;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(STTelephonyStatusDomainSIMInfo *)secondarySIMInfo;
-(STTelephonyStatusDomainSIMInfo *)primarySIMInfo;
-(STTelephonyStatusDomainSIMInfo *)SIMOneInfo;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)succinctDescriptionBuilder;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
