/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SEService/SEProxyInterface.h>

@class NFSecureElementManagerSession, NSString;

@interface SEProxy : NSObject <SEProxyInterface> {

	NFSecureElementManagerSession* _session;
	NSString* _seid;

}

@property (nonatomic,retain) NFSecureElementManagerSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSString * seid;                                      //@synthesize seid=_seid - In the implementation block
-(NSString *)seid;
-(void)setSession:(NFSecureElementManagerSession *)arg1 ;
-(NFSecureElementManagerSession *)session;
-(void)setSeid:(NSString *)arg1 ;
-(oneway void)transceive:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 seid:(id)arg2 ;
@end

