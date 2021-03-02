/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSURLRequestInternal, NSString, NSDictionary, NSData, NSInputStream, NSURL;

@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	NSURLRequestInternal* _internal;

}

@property (copy,readonly) NSString * HTTPMethod; 
@property (copy,readonly) NSDictionary * allHTTPHeaderFields; 
@property (copy,readonly) NSData * HTTPBody; 
@property (retain,readonly) NSInputStream * HTTPBodyStream; 
@property (readonly) BOOL HTTPShouldHandleCookies; 
@property (readonly) BOOL HTTPShouldUsePipelining; 
@property (readonly) URLRequest* _inner; 
@property (getter=isKnownHTTP3Capable,readonly) BOOL knownHTTP3Capable; 
@property (copy,readonly) NSURL * URL; 
@property (readonly) unsigned long long cachePolicy; 
@property (readonly) double timeoutInterval; 
@property (copy,readonly) NSURL * mainDocumentURL; 
@property (readonly) unsigned long long networkServiceType; 
@property (readonly) BOOL allowsCellularAccess; 
@property (readonly) BOOL allowsExpensiveNetworkAccess; 
@property (readonly) BOOL allowsConstrainedNetworkAccess; 
+(void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2 ;
+(id)requestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3 ;
+(BOOL)supportsSecureCoding;
+(void)setAllowsAnyHTTPSCertificate:(BOOL)arg1 forHost:(id)arg2 ;
+(id)allowsSpecificHTTPSCertificateForHost:(id)arg1 ;
+(BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1 ;
+(id)requestWithURL:(id)arg1 ;
+(void)setDefaultTimeoutInterval:(double)arg1 ;
+(double)defaultTimeoutInterval;
-(const CFURLRef)cfURL;
-(double)timeoutInterval;
-(unsigned long long)cachePolicy;
-(BOOL)_ignoreHSTS;
-(id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3 ;
-(NSInputStream *)HTTPBodyStream;
-(id)HTTPReferrer;
-(double)_timeWindowDuration;
-(BOOL)_schemeWasUpgradedDueToDynamicHSTS;
-(BOOL)_isIdempotent;
-(id)init;
-(BOOL)_isSafeRequestForBackgroundDownload;
-(BOOL)_URLHasScheme:(id)arg1 ;
-(NSURL *)mainDocumentURL;
-(double)_payloadTransmissionTimeout;
-(id)contentDispositionEncodingFallbackArray;
-(id)_allHTTPHeaderFieldsAsArrays;
-(id)_initWithCFURLRequest:(CFURLRequestRef)arg1 ;
-(id)_startTimeoutDate;
-(void)_removePropertyForKey:(id)arg1 ;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(CFURLRequestRef)_CFURLRequest;
-(id)HTTPUserAgent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithInternal:(id)arg1 ;
-(id)HTTPContentType;
-(NSDictionary *)allHTTPHeaderFields;
-(id)_propertyForKey:(id)arg1 ;
-(BOOL)_requiresShortConnectionTimeout;
-(BOOL)HTTPShouldHandleCookies;
-(double)_timeWindowDelay;
-(id)_copyReplacingURLWithURL:(id)arg1 ;
-(unsigned long long)networkServiceType;
-(BOOL)allowsConstrainedNetworkAccess;
-(void)dealloc;
-(BOOL)allowsExpensiveNetworkAccess;
-(id)HTTPExtraCookies;
-(unsigned long long)expectedWorkload;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isKnownHTTP3Capable;
-(BOOL)_preventHSTSStorage;
-(NSData *)HTTPBody;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)HTTPShouldUsePipelining;
-(NSString *)HTTPMethod;
-(URLRequest*)_inner;
-(NSURL *)URL;
-(void)_setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)boundInterfaceIdentifier;
-(BOOL)allowsCellularAccess;
-(void)encodeWithCoder:(id)arg1 ;
@end
