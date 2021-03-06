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

@class NSNumber, NSString;

@interface CTDataConnectionStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _suspended;
	BOOL _publicNetAllowed;
	unsigned _wirelessTechnologyMask;
	int _state;
	int _ipFamily;
	int _contextType;
	NSNumber* _pdp;
	NSString* _interfaceName;
	NSString* _apnName;

}

@property (nonatomic,retain) NSNumber * pdp;                               //@synthesize pdp=_pdp - In the implementation block
@property (nonatomic,retain) NSString * interfaceName;                     //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,retain) NSString * apnName;                           //@synthesize apnName=_apnName - In the implementation block
@property (assign,nonatomic) unsigned wirelessTechnologyMask;              //@synthesize wirelessTechnologyMask=_wirelessTechnologyMask - In the implementation block
@property (assign,nonatomic) int state;                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) int ipFamily;                                 //@synthesize ipFamily=_ipFamily - In the implementation block
@property (assign,nonatomic) BOOL suspended;                               //@synthesize suspended=_suspended - In the implementation block
@property (assign,nonatomic) BOOL publicNetAllowed;                        //@synthesize publicNetAllowed=_publicNetAllowed - In the implementation block
@property (assign,nonatomic) int contextType;                              //@synthesize contextType=_contextType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(void)setApnName:(NSString *)arg1 ;
-(unsigned)wirelessTechnologyMask;
-(void)setPublicNetAllowed:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)interfaceName;
-(int)ipFamily;
-(void)setInterfaceName:(NSString *)arg1 ;
-(int)state;
-(void)setPdp:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(int)contextType;
-(void)setContextType:(int)arg1 ;
-(NSNumber *)pdp;
-(void)setWirelessTechnologyMask:(unsigned)arg1 ;
-(NSString *)apnName;
-(void)setIpFamily:(int)arg1 ;
-(BOOL)publicNetAllowed;
-(void)setState:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

