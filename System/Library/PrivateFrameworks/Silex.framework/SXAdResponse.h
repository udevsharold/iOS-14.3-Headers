/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SXAdRequest, SXADBannerView;

@interface SXAdResponse : NSObject {

	SXAdRequest* _request;
	SXADBannerView* _bannerView;

}

@property (nonatomic,retain) SXAdRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) SXADBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
-(SXAdRequest *)request;
-(void)setBannerView:(SXADBannerView *)arg1 ;
-(void)setRequest:(SXAdRequest *)arg1 ;
-(SXADBannerView *)bannerView;
@end

