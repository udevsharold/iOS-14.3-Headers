/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, CTDataConnectionAvailabilityStatus, CTDataConnectionStatus, CTXPCServiceSubscriptionContext;

@interface CTTetheringStatus : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _carrierEnabled;
	NSNumber* _userAuthenticated;
	NSNumber* _asserted;
	NSNumber* _activationFailure;
	NSNumber* _misPdpMaxHosts;
	CTDataConnectionAvailabilityStatus* _connectionAvailabilityStatus;
	CTDataConnectionStatus* _connectionStatus;
	CTXPCServiceSubscriptionContext* _context;

}

@property (nonatomic,retain) NSNumber * carrierEnabled;                                                      //@synthesize carrierEnabled=_carrierEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * userAuthenticated;                                                   //@synthesize userAuthenticated=_userAuthenticated - In the implementation block
@property (nonatomic,retain) NSNumber * asserted;                                                            //@synthesize asserted=_asserted - In the implementation block
@property (nonatomic,retain) NSNumber * activationFailure;                                                   //@synthesize activationFailure=_activationFailure - In the implementation block
@property (nonatomic,retain) NSNumber * misPdpMaxHosts;                                                      //@synthesize misPdpMaxHosts=_misPdpMaxHosts - In the implementation block
@property (nonatomic,retain) CTDataConnectionAvailabilityStatus * connectionAvailabilityStatus;              //@synthesize connectionAvailabilityStatus=_connectionAvailabilityStatus - In the implementation block
@property (nonatomic,retain) CTDataConnectionStatus * connectionStatus;                                      //@synthesize connectionStatus=_connectionStatus - In the implementation block
@property (nonatomic,retain) CTXPCServiceSubscriptionContext * context;                                      //@synthesize context=_context - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setConnectionAvailabilityStatus:(CTDataConnectionAvailabilityStatus *)arg1 ;
-(void)setConnectionStatus:(CTDataConnectionStatus *)arg1 ;
-(NSNumber *)misPdpMaxHosts;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)asserted;
-(void)setActivationFailure:(NSNumber *)arg1 ;
-(void)setCarrierEnabled:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(CTDataConnectionAvailabilityStatus *)connectionAvailabilityStatus;
-(NSNumber *)userAuthenticated;
-(NSNumber *)carrierEnabled;
-(NSNumber *)activationFailure;
-(void)setUserAuthenticated:(NSNumber *)arg1 ;
-(CTXPCServiceSubscriptionContext *)context;
-(void)setAsserted:(NSNumber *)arg1 ;
-(CTDataConnectionStatus *)connectionStatus;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMisPdpMaxHosts:(NSNumber *)arg1 ;
@end
