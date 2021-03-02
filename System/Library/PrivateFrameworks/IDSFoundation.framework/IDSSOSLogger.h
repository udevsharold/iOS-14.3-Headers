/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTMetricLogger.h>

@class NSString, IDSRateLimiter;

@interface IDSSOSLogger : NSObject <CUTMetricLogger> {

	NSString* _sosURLString;
	IDSRateLimiter* _rateLimiter;

}

@property (nonatomic,retain) NSString * sosURLString;                   //@synthesize sosURLString=_sosURLString - In the implementation block
@property (nonatomic,retain) IDSRateLimiter * rateLimiter;              //@synthesize rateLimiter=_rateLimiter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loggerWithURLString:(id)arg1 ;
+(id)logger;
-(id)initWithSOSURLString:(id)arg1 ;
-(NSString *)sosURLString;
-(void)setSosURLString:(NSString *)arg1 ;
-(IDSRateLimiter *)rateLimiter;
-(void)logMetric:(id)arg1 ;
-(void)setRateLimiter:(IDSRateLimiter *)arg1 ;
@end
