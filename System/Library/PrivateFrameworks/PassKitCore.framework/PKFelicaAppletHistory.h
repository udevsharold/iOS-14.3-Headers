/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKTransitAppletHistory.h>

@class NSSet, NSString, NSNumber, PKFelicaShinkansenTicket, PKFelicaGreenCarTicket;

@interface PKFelicaAppletHistory : PKTransitAppletHistory {

	NSSet* _existingKeys;
	BOOL _shinkansenTicketActive;
	BOOL _greenCarTicketUsed;
	BOOL _balanceAllowedForCommute;
	BOOL _lowBalanceNotificationEnabled;
	long long _type;
	NSString* _transactionID;
	NSNumber* _SPID;
	long long _transactionType;
	PKFelicaShinkansenTicket* _shinkansenTicket;
	PKFelicaGreenCarTicket* _greenCarTicket;

}

@property (nonatomic,readonly) long long type;                                                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * transactionID;                                                          //@synthesize transactionID=_transactionID - In the implementation block
@property (setter=PID,nonatomic,copy,readonly) NSNumber * SPID;                                                        //@synthesize SPID=_SPID - In the implementation block
@property (nonatomic,readonly) long long transactionType;                                                              //@synthesize transactionType=_transactionType - In the implementation block
@property (getter=isInShinkansenStation,nonatomic,readonly) BOOL inShinkansenStation; 
@property (getter=isShinkansenTicketActive,nonatomic,readonly) BOOL shinkansenTicketActive;                            //@synthesize shinkansenTicketActive=_shinkansenTicketActive - In the implementation block
@property (getter=isGreenCarTicketUsed,nonatomic,readonly) BOOL greenCarTicketUsed;                                    //@synthesize greenCarTicketUsed=_greenCarTicketUsed - In the implementation block
@property (getter=isBalanceAllowedForCommute,nonatomic,readonly) BOOL balanceAllowedForCommute;                        //@synthesize balanceAllowedForCommute=_balanceAllowedForCommute - In the implementation block
@property (getter=isLowBalanceNotificationEnabled,nonatomic,readonly) BOOL lowBalanceNotificationEnabled;              //@synthesize lowBalanceNotificationEnabled=_lowBalanceNotificationEnabled - In the implementation block
@property (nonatomic,copy,readonly) PKFelicaShinkansenTicket * shinkansenTicket;                                       //@synthesize shinkansenTicket=_shinkansenTicket - In the implementation block
@property (nonatomic,readonly) PKFelicaGreenCarTicket * greenCarTicket;                                                //@synthesize greenCarTicket=_greenCarTicket - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)appletTypeForDictionary:(id)arg1 ;
-(NSNumber *)SPID;
-(long long)transactionType;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(id)initWithDictionary:(id)arg1 source:(long long)arg2 ;
-(void)_addEnrouteTransitType:(id)arg1 ;
-(BOOL)isInShinkansenStation;
-(BOOL)isInStation;
-(PKFelicaShinkansenTicket *)shinkansenTicket;
-(void)sanitizeValuesWithState:(id)arg1 ;
-(BOOL)isShinkansenTicketActive;
-(BOOL)isGreenCarTicketUsed;
-(BOOL)isBalanceAllowedForCommute;
-(BOOL)isLowBalanceNotificationEnabled;
-(PKFelicaGreenCarTicket *)greenCarTicket;
-(NSString *)transactionID;
-(void)encodeWithCoder:(id)arg1 ;
@end

