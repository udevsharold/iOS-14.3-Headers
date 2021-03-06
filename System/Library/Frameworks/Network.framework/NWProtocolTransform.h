/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_nw_protocol_transform;
@class NSObject, NWEndpoint;

@interface NWProtocolTransform : NSObject <NWPrettyDescription> {

	NSObject*<OS_nw_protocol_transform> _internalTransform;

}

@property (retain) NSObject*<OS_nw_protocol_transform> internalTransform;              //@synthesize internalTransform=_internalTransform - In the implementation block
@property (assign,nonatomic) BOOL noProxy; 
@property (assign,nonatomic) int multipathService; 
@property (nonatomic,copy) NWEndpoint * replacementEndpoint; 
@property (assign,nonatomic) BOOL tfo; 
@property (assign,nonatomic) BOOL tfoNoCookie; 
@property (assign,nonatomic) int dataMode; 
@property (assign,nonatomic) unsigned long long fallbackMode; 
@property (assign,nonatomic) BOOL prohibitDirect; 
@property (assign,nonatomic) BOOL disablePathFallback; 
-(BOOL)tfo;
-(BOOL)noProxy;
-(id)init;
-(void)setMultipathService:(int)arg1 ;
-(id)privateDescription;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(BOOL)fastOpenForceEnable;
-(int)dataMode;
-(int)multipathService;
-(void)setDataMode:(int)arg1 ;
-(unsigned long long)hash;
-(void)setTfo:(BOOL)arg1 ;
-(id)description;
-(void)setFastOpenForceEnable:(BOOL)arg1 ;
-(void)setNoProxy:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCTransform:(id)arg1 ;
-(void)disableProtocol:(nw_protocol_identifier*)arg1 ;
-(void)clearProtocolsAtLevel:(int)arg1 ;
-(void)appendProtocol:(id)arg1 atLevel:(int)arg2 ;
-(NWEndpoint *)replacementEndpoint;
-(void)setReplacementEndpoint:(NWEndpoint *)arg1 ;
-(unsigned long long)fallbackMode;
-(void)setFallbackMode:(unsigned long long)arg1 ;
-(BOOL)prohibitDirect;
-(void)setProhibitDirect:(BOOL)arg1 ;
-(BOOL)tfoNoCookie;
-(void)setTfoNoCookie:(BOOL)arg1 ;
-(BOOL)disablePathFallback;
-(void)setDisablePathFallback:(BOOL)arg1 ;
-(NSObject*<OS_nw_protocol_transform>)internalTransform;
-(void)setInternalTransform:(NSObject*<OS_nw_protocol_transform>)arg1 ;
@end

