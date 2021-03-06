/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOPlaceDataProvider : NSObject {

	BOOL _isLoading;
	/*^block*/id _finishedHandler;
	/*^block*/id _errorHandler;

}

@property (assign,nonatomic) BOOL isLoading;                //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,copy) id finishedHandler;              //@synthesize finishedHandler=_finishedHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                 //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)setIsLoading:(BOOL)arg1 ;
-(void)cancelRequest;
-(void)dealloc;
-(BOOL)isLoading;
-(void)startProviderWithRequest:(id)arg1 appIdentifier:(id)arg2 ;
-(void)cancelProviderRequest;
-(void)requestCompleted;
-(void)providerReceivedErrorCode:(long long)arg1 userInfo:(id)arg2 ;
-(void)providerDidCancel;
-(void)startRequest:(id)arg1 appIdentifier:(id)arg2 finished:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)providerReceivedResponse:(id)arg1 userInfo:(id)arg2 ;
-(void)setFinishedHandler:(id)arg1 ;
-(id)finishedHandler;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
@end

