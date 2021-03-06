/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRemoteRequestOperation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICClientInfo, AMSMediaTokenService;

@interface ICDeveloperTokenFetchRequest : ICRemoteRequestOperation <NSSecureCoding> {

	ICClientInfo* _clientInfo;
	unsigned long long _options;
	AMSMediaTokenService* _mediaTokenService;

}
+(BOOL)supportsSecureCoding;
+(id)_createMediaTokenServiceForClientInfo:(id)arg1 requester:(id)arg2 ;
+(void)invalidateCachedDeveloperTokenForClientInfo:(id)arg1 requester:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_invalidateCachedDeveloperTokenForClientInfo:(id)arg1 requester:(id)arg2 usingMediaTokenService:(id)arg3 ;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(void)_didFetchMediaToken:(id)arg1 withError:(id)arg2 ;
-(void)execute;
-(id)initWithClientInfo:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithClientInfo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

