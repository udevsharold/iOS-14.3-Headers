/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCSEOSRestrictedModeEvent, NSString;

@interface NFAWDSEOSRestrictedMode : NSObject <NFAWDEventProtocol> {

	AWDNFCSEOSRestrictedModeEvent* _metric;

}

@property (nonatomic,retain) AWDNFCSEOSRestrictedModeEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setMetric:(AWDNFCSEOSRestrictedModeEvent *)arg1 ;
-(id)getMetric;
-(AWDNFCSEOSRestrictedModeEvent *)metric;
-(unsigned)getMetricId;
-(void)updateExceptionUUID:(id)arg1 ;
@end

