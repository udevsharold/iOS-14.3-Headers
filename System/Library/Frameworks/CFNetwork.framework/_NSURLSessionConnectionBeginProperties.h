/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class __CFN_ConnectionMetrics;

@interface _NSURLSessionConnectionBeginProperties : NSObject <NSSecureCoding> {

	__CFN_ConnectionMetrics* __metrics;

}

@property (nonatomic,readonly) NSObject*<OS_nw_endpoint> endpoint; 
@property (getter=isTLSConfigured,nonatomic,readonly) BOOL TLSConfigured; 
@property (getter=isProxyConfigured,nonatomic,readonly) BOOL proxyConfigured; 
+(BOOL)supportsSecureCoding;
-(NSObject*<OS_nw_endpoint>)endpoint;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isTLSConfigured;
-(BOOL)isProxyConfigured;
-(void)encodeWithCoder:(id)arg1 ;
@end

