/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class __CFN_ConnectionMetrics, NSString, NSNumber;

@interface _NSURLSessionConnectionEstablishProperties : NSObject <NSSecureCoding> {

	__CFN_ConnectionMetrics* __metrics;

}

@property (nonatomic,readonly) NSObject*<OS_nw_endpoint> localEndpoint; 
@property (nonatomic,readonly) NSObject*<OS_nw_endpoint> remoteEndpoint; 
@property (nonatomic,copy,readonly) NSString * interfaceName; 
@property (getter=isCellular,nonatomic,readonly) BOOL cellular; 
@property (getter=isExpensive,nonatomic,readonly) BOOL expensive; 
@property (getter=isConstrained,nonatomic,readonly) BOOL constrained; 
@property (getter=isMultipath,nonatomic,readonly) BOOL multipath; 
@property (nonatomic,readonly) BOOL usedTFO; 
@property (nonatomic,copy,readonly) NSString * networkProtocolName; 
@property (nonatomic,copy,readonly) NSNumber * negotiatedTLSProtocolVersion; 
@property (nonatomic,copy,readonly) NSNumber * negotiatedTLSCipherSuite; 
@property (nonatomic,retain,readonly) NSObject*<OS_nw_establishment_report> establishmentReport; 
+(BOOL)supportsSecureCoding;
-(NSString *)networkProtocolName;
-(BOOL)isConstrained;
-(BOOL)isExpensive;
-(BOOL)isCellular;
-(NSObject*<OS_nw_endpoint>)remoteEndpoint;
-(NSString *)interfaceName;
-(NSNumber *)negotiatedTLSCipherSuite;
-(NSNumber *)negotiatedTLSProtocolVersion;
-(NSObject*<OS_nw_endpoint>)localEndpoint;
-(BOOL)usedTFO;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isMultipath;
-(NSObject*<OS_nw_establishment_report>)establishmentReport;
-(void)encodeWithCoder:(id)arg1 ;
@end

