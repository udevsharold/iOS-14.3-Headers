/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/STStatusDomainDataDiff.h>

@class STTelephonyStatusDomainSIMInfoDiff, BSSettings, NSString;

@interface STTelephonyStatusDomainDataDiff : NSObject <STStatusDomainDataDiff> {

	STTelephonyStatusDomainSIMInfoDiff* _SIMOneInfoDiff;
	STTelephonyStatusDomainSIMInfoDiff* _SIMTwoInfoDiff;
	BSSettings* _changes;

}

@property (setter=IMOneInfoDiff,nonatomic,copy,readonly) STTelephonyStatusDomainSIMInfoDiff * SIMOneInfoDiff;              //@synthesize SIMOneInfoDiff=_SIMOneInfoDiff - In the implementation block
@property (setter=IMTwoInfoDiff,nonatomic,copy,readonly) STTelephonyStatusDomainSIMInfoDiff * SIMTwoInfoDiff;              //@synthesize SIMTwoInfoDiff=_SIMTwoInfoDiff - In the implementation block
@property (nonatomic,copy,readonly) BSSettings * changes;                                                                  //@synthesize changes=_changes - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)diffFromData:(id)arg1 toData:(id)arg2 ;
-(BSSettings *)changes;
-(BOOL)isEmpty;
-(id)init;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dataByApplyingToData:(id)arg1 ;
-(void)applyToMutableData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSIMOneInfoDiff:(id)arg1 SIMTwoInfoDiff:(id)arg2 changes:(id)arg3 ;
-(STTelephonyStatusDomainSIMInfoDiff *)SIMOneInfoDiff;
-(STTelephonyStatusDomainSIMInfoDiff *)SIMTwoInfoDiff;
@end

