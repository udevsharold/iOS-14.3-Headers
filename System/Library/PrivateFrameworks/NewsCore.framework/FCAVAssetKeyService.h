/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCAVAssetKeyServiceType.h>

@class NFLazy, NFPromise;

@interface FCAVAssetKeyService : NSObject <FCAVAssetKeyServiceType> {

	NFLazy* _session;
	NFLazy* _requestEncoder;
	NFPromise* _fairPlayBaseURLPromise;

}

@property (nonatomic,readonly) NFLazy * session;                                //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NFLazy * requestEncoder;                         //@synthesize requestEncoder=_requestEncoder - In the implementation block
@property (nonatomic,readonly) NFPromise * fairPlayBaseURLPromise;              //@synthesize fairPlayBaseURLPromise=_fairPlayBaseURLPromise - In the implementation block
-(id)_errorForBadRequestWithResponseData:(id)arg1 URL:(id)arg2 ;
-(NFLazy *)session;
-(id)initWithConfigurationManager:(id)arg1 ;
-(id)init;
-(NFLazy *)requestEncoder;
-(void)_performHTTPRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAppCertificateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchContentKeyWithURI:(id)arg1 spcData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NFPromise *)fairPlayBaseURLPromise;
@end
