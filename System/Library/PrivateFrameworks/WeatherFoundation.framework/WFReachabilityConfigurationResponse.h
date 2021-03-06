/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NWPathEvaluator;

@interface WFReachabilityConfigurationResponse : WFResponse <NSSecureCoding> {

	NSURL* _reachabilityHostURL;

}

@property (nonatomic,copy) NSURL * reachabilityHostURL;                      //@synthesize reachabilityHostURL=_reachabilityHostURL - In the implementation block
@property (nonatomic,readonly) NWPathEvaluator * pathEvaluator; 
+(BOOL)supportsSecureCoding;
-(NWPathEvaluator *)pathEvaluator;
-(void)setReachabilityHostURL:(NSURL *)arg1 ;
-(NSURL *)reachabilityHostURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

